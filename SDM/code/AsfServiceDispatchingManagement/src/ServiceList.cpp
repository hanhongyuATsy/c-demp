#include "ServiceList.h"
#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <string.h>
#include <arpa/inet.h>
#include <sys/time.h>
#include <thread>

namespace sdm {

ServiceList::ServiceList()
{
	m_stop = false;
	std::thread t(ServiceList::run, this);
	t.detach();
}

ServiceList::~ServiceList()
{
	m_stop = true;
}

ServiceList& ServiceList::GetInstance()
{
	static ServiceList sl;
	return sl;
}

void ServiceList::AddService(const service_info_t& _si)
{
	message_t m;
	m.id = MESSAGE_TYPE_ADD_SERVICE;
	m.param = (void*)(new service_info_t(_si));
	pushMessage(m);
}

void ServiceList::RemoveService(const service_info_t& _si)
{
	message_t m;
	m.id = MESSAGE_TYPE_REMOVE_SERVICE;
	m.param = (void*)(new service_info_t(_si));
	pushMessage(m);
}

void ServiceList::RemoveService(unsigned short _service_id, unsigned short _instance_id)
{
	service_info_t si;
	si.service_id = _service_id;
	si.instance_id = _instance_id;
	RemoveService(si);
}

void ServiceList::reduceTTL()
{
	message_t m;
	m.id = MESSAGE_TYPE_REDUCE_TTL;
	m.param = 0;
	pushMessage(m);
}

void ServiceList::ShowServiceList()
{
	message_t m;
	m.id = MESSAGE_TYPE_PRINT;
	m.param = 0;
	pushMessage(m);
}

void ServiceList::GetServiceList()
{

}

bool ServiceList::GetServiceInfo(service_info_t& _si)
{
	std::unique_lock<std::mutex> lock(m_mutex);

	bool ret = false;
	unsigned int message_id = _si.service_id;
	message_id = message_id << 16 | _si.instance_id;
	PrintLog("message_id : %4X\n", message_id);
	if (m_services.find(message_id) != m_services.end())
	{
		_si = m_services[message_id];
		ret = true;
	}
	PrintLog("message_id : %4X not fonud !!!\n", message_id);
	return ret;
}

service_info_t ServiceList::GetServiceInfo(unsigned short _service_id, unsigned short _instance_id)
{
	service_info_t si;
	si.service_id = _service_id;
	si.instance_id = _instance_id;
	if (!GetServiceInfo(si))
	{
		si.service_id = (unsigned short)0;
	}
	return si;
}

unsigned int ServiceList::RegisterServiceAlterationNotify(alteration_handler_t _handler)
{
	std::unique_lock<std::mutex> lock(m_alteration_mutex);
	static unsigned int token = (unsigned int)0;
	m_alteration[++token] = _handler;
	return token;
}

void ServiceList::UnregisterServiceAlterationNotify(unsigned int _token)
{
	std::unique_lock<std::mutex> lock(m_alteration_mutex);
	if (m_alteration.find(_token) != m_alteration.end())
	{
		m_alteration.erase(_token);
	}
}

void ServiceList::notifyAlteration(int _type, const service_info_t& _info)
{
	std::unique_lock<std::mutex> lock(m_alteration_mutex);
	for (auto& i : m_alteration)
	{
		i.second(_type, _info);
	}
}

void ServiceList::notifyAlteration(const service_info_t& _old, const service_info_t& _new)
{
	if (_old.ip != _new.ip || _old.port != _new.port)
	{
		notifyAlteration(SERVICE_ALTERATION_FROM, _new);
	}
	else if (_old.status != _new.status)
	{
		notifyAlteration(SERVICE_ALTERATION_STATUS, _new);
	}
}

void ServiceList::pushMessage(const message_t& m)
{
	std::unique_lock<std::mutex> lock(m_mutex);
	m_messages.push(m);
}

void ServiceList::popMessage()
{
	std::unique_lock<std::mutex> lock(m_mutex);
	if (m_messages.size() > (size_t)0)
	{
		message_t& m = m_messages.front();

		switch (m.id)
		{
		case MESSAGE_TYPE_ADD_SERVICE: {
			if (m.param != 0)
			{
				service_info_t* si = (service_info_t*)m.param;
				unsigned int message_id = si->service_id;
				message_id = message_id << 16 | si->instance_id;
				if (m_services.find(message_id) == m_services.end())
				{
					notifyAlteration(SERVICE_ALTERATION_ADD, *si);
				}
				else
				{
					notifyAlteration(m_services[message_id], *si);
				}
				m_services[message_id] = *si;
				m_services[message_id].ttl = (unsigned int)10;
				delete si;
			}
		} break;

		case MESSAGE_TYPE_REMOVE_SERVICE: {
			if (m.param != 0)
			{
				service_info_t* si = (service_info_t*)m.param;
				unsigned int message_id = si->service_id;
				message_id = message_id << 16 | si->instance_id;
				if (m_services.find(message_id) != m_services.end())
				{
					m_services.erase(message_id);
					notifyAlteration(SERVICE_ALTERATION_REMOVE, *si);
				}
				delete si;
			}
		} break;
		
		case MESSAGE_TYPE_REDUCE_TTL: {
			for (std::map<unsigned int, service_info_t>::iterator i = m_services.begin(); i != m_services.end(); )
			{
				service_info_t& si = i->second;
				if (si.status == (unsigned char)SERVICE_STATUS_RUNNING && si.ttl > (unsigned int)0)
				{
					si.ttl -= (unsigned int)1;
				}
				if (si.ttl == (unsigned int)0 && si.status != (unsigned char)SERVICE_STATUS_TERMINATED)
				{
					si.status = (unsigned char)SERVICE_STATUS_TERMINATED;
					notifyAlteration(SERVICE_ALTERATION_STATUS, si);
				}
				i++;
			}
		} break;

		case MESSAGE_TYPE_PRINT: {
			if (m_services.size() > (size_t)0)
			{
				// PrintLog("%c[%d;%dH",27,0,0);
				// PrintLog("\e[1;1H\e[2J");
				TraceLog("    %-8s%-8s%-6s%-18s%-8s%-6s%-8s%-12s%-12s%s\n", 
					"__si__","__id__","_mv_","_______ip_______","__pt__","_pl_","__fm__","____ss____","____st____","_ttl_");
				PrintLog("ServiceCounts:[%ld]\n", m_services.size());
			}
			for (auto& i : m_services)
			{
				service_info_t& si = i.second;

                char c_protocol[16] = {(char)0};
                switch ((int)si.protocol)
                {
                    case SERVICE_PROTOCOL_UDP: {
                       strcpy(c_protocol, "udp"); 
                    } break;

                    case SERVICE_PROTOCOL_TCP: {
                        strcpy(c_protocol, "tcp");
                    } break;
                    
                    default:
                        break;
                }

                char c_from[16] = {0};
                switch ((int)si.from)
                {
                    case SERVICE_FROM_CLOUD: {
                        strcpy(c_from, "cloud");
                    } break;

                    case SERVICE_FROM_TBOX: {
                        strcpy(c_from, "tbox");
                    } break;

                    case SERVICE_FROM_CCU: {
                        strcpy(c_from, "ccu");
                    } break;

                    case SERVICE_FROM_IDC: {
                        strcpy(c_from, "idc"); 
                    } break;

                    case SERVICE_FROM_ADC: {
                        strcpy(c_from, "adc"); 
                    } break;

                    case SERVICE_FROM_MPROXY: {
                        strcpy(c_from, "mproxy"); 
                    } break;
                    
                    default:
                        break;
                }

                char c_status[16] = {(char)0};
                switch ((int)si.status)
                {
                    case SERVICE_STATUS_RUNNING: {
                        strcpy(c_status, "running"); 
                    } break;

                    case SERVICE_STATUS_TERMINATED: {
                        strcpy(c_status, "terminated"); 
                    } break;

                    case SERVICE_STATUS_UNKNOWN: {
                        strcpy(c_status, "unknown"); 
                    } break;
                    
                    default:
                        break;
                }

                char c_type[16] = {(char)0};
                switch ((int)si.type)
                {
                    case SERVICE_TYPE_PRIVATE: {
                        strcpy(c_type, "private"); 
                    } break;

                    case SERVICE_TYPE_PROTECTED: {
                        strcpy(c_type, "protected"); 
                    } break;

                    case SERVICE_TYPE_PUBLIC: {
                        strcpy(c_type, "public");
                    } break;
                    
                    default:
                        break;
                }

				TraceLog(" %4X   0x%-6x0x%-6x0x%-4x%4d.%3d.%3d.%3d  %-8d%-6s%-8s%-12s%-12s%d\n"
						, i.first
                        , si.service_id, si.instance_id
                        , si.major_version
                        , (si.ip >> 24) & 0xff, (si.ip >> 16) & 0xff, (si.ip >> 8) & 0xff, si.ip & 0xff
                        , si.port
                        , c_protocol
						, c_from
                        , c_status
                        , c_type
						, si.ttl
						);
			}
		} break;

		default:
			break;
		}
		m_messages.pop();
	}
}

void ServiceList::run(ServiceList* _handle)
{
	int iqac = pthread_setname_np(pthread_self(), "sdm.sl.thread");
	if(iqac !=0) {
		ErrorLog("pthread error");
	}

	time_t t1;
	time_t t2 = time(0);
	while (!_handle->m_stop)
	{
		t1 = time(0);
		if (t1 - t2 >= (time_t)1)
		{
			t2 = t1;
			_handle->reduceTTL();
#if 1
			_handle->ShowServiceList();
#endif
		}

		iqac = usleep(30000);
		
		_handle->popMessage();
	}
}

} //namespace sdm
	