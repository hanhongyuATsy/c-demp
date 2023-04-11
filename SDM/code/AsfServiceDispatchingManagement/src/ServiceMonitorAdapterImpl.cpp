#include "ServiceMonitorAdapterImpl.h"
// #include <stdio.h>
// #include <unistd.h>
// #include <stdlib.h>
#include <string.h>
#include <arpa/inet.h>
#include <sys/time.h>

#define ENTRY_SIZE (16)

namespace sdm {

ServiceMonitorAdapterImpl::ServiceMonitorAdapterImpl()
{
    memset(m_multicast, 0, sizeof(m_multicast));
	m_port = -1;
    m_stop = true;
}

ServiceMonitorAdapterImpl::~ServiceMonitorAdapterImpl()
{
	ClearRoutes();
    m_stop = true;
}

void ServiceMonitorAdapterImpl::Start()
{
    m_stop = false;
	std::thread t(ServiceMonitorAdapterImpl::run, this);
	t.detach();
}

void ServiceMonitorAdapterImpl::Stop()
{
	m_stop = true;
}

void ServiceMonitorAdapterImpl::SetMulticast(const char* _ip)
{
	int size1 = strlen(_ip);
	int size2 = sizeof(m_multicast) - 1;
	int size = size1 > size2 ? size2 : size1;
	memcpy(m_multicast, _ip, size);
}

void ServiceMonitorAdapterImpl::SetPort(int _port)
{
	m_port = _port;
}

void ServiceMonitorAdapterImpl::AddRoute(const char* _ip)
{
	size_t len = strlen(_ip);
	if (_ip == 0 || len <= 0)
	{
		return;
	}

	char* p = new char[len+1];
	memset(p, 0, len+1);
	memcpy(p, _ip, len);
	m_routes.push_back(p);
}

void ServiceMonitorAdapterImpl::DelRoute(const char* _ip)
{
	int len = strlen(_ip);
	if (_ip == 0 || len <= 0)
	{
		return;
	}

	for (std::vector<char*>::iterator i = m_routes.begin(); i != m_routes.end(); ++i)
    {
        if (strcmp(*i, _ip) == 0)
		{
			delete[] *i;
            m_routes.erase(i);
			break;
		}
    }
}

void ServiceMonitorAdapterImpl::ClearRoutes()
{
	for (std::vector<char*>::iterator i = m_routes.begin(); i != m_routes.end(); ++i)
    {
		delete[] *i;
    }
	std::vector<char*> empty;
	m_routes.swap(empty);
}

void ServiceMonitorAdapterImpl::run(ServiceMonitorAdapterImpl* _handle)
{
	pthread_setname_np(pthread_self(), "sdm.smai.thread");

	char* multicast = _handle->m_multicast;
	int port = _handle->m_port;
	std::vector<char*>& routes = _handle->m_routes;
	
    // create socket
    int fd = socket(AF_INET, SOCK_DGRAM, 0);
    if(fd == -1)
    {
        perror("Fail to create socket");
        return ;
    }

	// reuse addr
	int reuse = 1;
    if (setsockopt(fd, SOL_SOCKET, SO_REUSEADDR, (char*)&reuse, sizeof(reuse)) < 0)
	{
        perror("Fail to setsockopt");
        close(fd);
        return;
    }

    // bind
    struct sockaddr_in addr;
    addr.sin_family = AF_INET;
    addr.sin_port = htons(port);
    addr.sin_addr.s_addr = INADDR_ANY;
    int ret = bind(fd, (struct sockaddr*)&addr, sizeof(addr));
    if(ret == -1)
    {
        perror("Fail to bind");
        close(fd);
        return;
    }

	// join multicast
	if (routes.size() == 0)
	{
		struct ip_mreq mreq;
		mreq.imr_multiaddr.s_addr = inet_addr(multicast);
		mreq.imr_interface.s_addr = htonl(INADDR_ANY);	
		ret = setsockopt(fd, IPPROTO_IP, IP_ADD_MEMBERSHIP, &mreq, sizeof(mreq));
	}
	else
	{
		for (unsigned int i = 0; i < routes.size(); ++i)
		{
			struct ip_mreq mreq;
			mreq.imr_multiaddr.s_addr = inet_addr(multicast);
			mreq.imr_interface.s_addr = inet_addr(routes.at(i));	
			ret = setsockopt(fd, IPPROTO_IP, IP_ADD_MEMBERSHIP, &mreq, sizeof(mreq));
		}
	}

    // recvfrom
    unsigned char buf[4096];
    while (!_handle->m_stop)
    {
        memset(buf, 0, sizeof(buf));
        int size = recvfrom(fd, buf, sizeof(buf), 0, nullptr, nullptr);
		_handle->parseSomeipSd(buf, size);
    }
    close(fd);


}

void ServiceMonitorAdapterImpl::parseSomeipSd(unsigned char _buf[], int _size)
{
	//struct timeval tv;
	//int i = 0, j = 0, k = 0;
	unsigned int index = 0, current_index = 0;
	unsigned int option_begin_index = 0, option_index = 0, option_number = 0;
	//int count = 0, entrycount = 0;

	/* 
	 * someip header
	 */
	if (_size - index < 16)
	{
        perror("[parseSomeipSd] bad size of someip header!");
		return;
	}
	// index 0~1, service id
	unsigned short service_id = ((unsigned short)_buf[index] << 8) | _buf[index+1];
	if (service_id != 0xffff)
	{
        perror("[parseSomeipSd] not someip sd!");
		return;
	}
	// index 2~3, instance id
	unsigned short instance_id = ((unsigned short)_buf[index+2] << 8) | _buf[index+3];
	if (instance_id != 0x8100)
	{
        perror("[parseSomeipSd] not someip sd!");
		return;
	}
	// index 4~7, someip header length
	// index 8~9, client id
	// index 10~11, session id
	// index 12, protocol version
	// index 13, interface version
	// index 14, message type
	unsigned char message_type = _buf[index+14];
	if (message_type != 0x02)
	{
        perror("[parseSomeipSd] not someip sd!");
		return;
	}
	// index 15, return code
	index += 16;

	/* 
	 * someip sd header
	 */
	if (_size - index < 4)
	{
        perror("[parseSomeipSd] bad size of someip sd header!");
		return;
	}
	// index 0, flags
	// index 1~3, reserved
	index += 4;

	/* 
	 * someip sd entries
	 */
	if (_size - index < 4)
	{
        perror("[parseSomeipSd] no entries!");
		return;
	}
	// index 0~3, length of entries array
	unsigned int entries_len = 0;
	for (unsigned int i = 0; i < 4; ++i)
	{
		entries_len = (entries_len << 8) + _buf[index+i];
	}
	unsigned int entries_count = entries_len / ENTRY_SIZE;
	if (entries_count == 0)
	{
        perror("[parseSomeipSd] no entries!");
		return;
	}
	index += 4;
	option_begin_index = index + entries_len;
	// entries body
	unsigned int option_len = 0;
	std::vector<service_info_t> service_vector;
	for (unsigned int i = 0; i < entries_count; ++i)
	{
		// index 0, type: 0x00(FindService) 0x01(OfferService, StopOfferService) 0x06(SubscribeEventgroup, StopSubscribeEventgroup) 0x07(SubscribeEventgroupAck)
		if (0x01 != _buf[index])
		{
			continue;
		}
		service_info_t s;
		// index 1~2, option index 1 and 2
		// index 3, number of options 1 and 2
		for (unsigned int j = 0; j < 2; ++j)
		{
			// index
			option_index = _buf[index+1+j];
			// number of options
			option_number = (_buf[index+3] >> (4 * (1 - j))) & 0x0F;
			// save index
			current_index = index;
			// find options
			index = option_begin_index + 4;
			for (unsigned int k = 0; k < (option_index + option_number); ++k)
			{
				if (_size - index < 2)
				{
					perror("[parseSomeipSd] no options!");
					return;
				}

				/* 
				* someip sd options
				*/
				// index 0~1, length
				option_len = _buf[index];
				option_len = (option_len << 8) + _buf[index+1];
				if (k < option_index)
				{
					index += (3 + option_len);
					continue;
				}
				if (_size - index < ((unsigned int) (3) + option_len))
				{
					perror("[parseSomeipSd] bad length of options!");
					return;
				}
				// index 2, type: 0x01(configuration) 0x02(load balancing) 0x04(ipv4 endpoint) 0x06(ipv6 endpoint) 0x14(ipv4 multicast) 0x16(ipv6 multicast) 0x24(ipv4 sd endpoint) 0x26(ipv6 sd endpoint)
				if (0x04 != _buf[index+2])
				{
					continue;
				}
				// index 3, bit 0, discardable flag: 0(valid) 1(invalid)
				if ((_buf[index+3] & 0x80) == 0x80)
				{
					continue;
				}
				// index 3, bit 1~7, reserved
				// index 4~7, ipv4 address
				s.ip = _buf[index+4];
				s.ip = s.ip << 8 | _buf[index+5];
				s.ip = s.ip << 8 | _buf[index+6];
				s.ip = s.ip << 8 | _buf[index+7];
				// index 8, reserved
				// index 9, protocol: 0x06(tcp) 0x11(udp) 
				s.protocol = (_buf[index+10] == 0x06) ? SERVICE_PROTOCOL_TCP : SERVICE_PROTOCOL_UDP;
				// index 10~11, port
				s.port = _buf[index+10];
				s.port = s.port << 8 | _buf[index+11];

				j = 2;
				break;
			}
			// load index
			index = current_index;
		}
		if (_size - index < ENTRY_SIZE)
		{
			perror("[parseSomeipSd] bad length of entries!");
			return;
		}
		// index 4~5, service id
		s.service_id = _buf[index+4];
		s.service_id = s.service_id << 8 | _buf[index+5];
		// index 6~7, instance id
		s.instance_id = _buf[index+6];
		s.instance_id = s.instance_id << 8 | _buf[index+7];
		// index 8, major version
		s.major_version = _buf[index+8];
		// index 9~11, ttl
		s.ttl = _buf[index+9];
		s.ttl = (s.ttl << 8) | _buf[index+10];
		s.ttl = (s.ttl << 8) | _buf[index+11];
		// index 12~15, minor version
		s.minor_version = _buf[index+12];
		s.minor_version = (s.minor_version << 8) | _buf[index+13];
		s.minor_version = (s.minor_version << 8) | _buf[index+14];
		s.minor_version = (s.minor_version << 8) | _buf[index+15];
		service_vector.push_back(s);

		index += ENTRY_SIZE;
	}

	// set services
	for (unsigned int i = 0; i < service_vector.size(); ++i)
	{
		SetService(service_vector.at(i));
	}
}

} //namespace sdm


	