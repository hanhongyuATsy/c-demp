#include "LocalServiceCollector.h"
#include "ServiceMonitorAdapterImpl.h"
#include "NeusarWrapperAdapterImpl.h"
#include "ServiceList.h"
#include <iostream>
#include <thread>
#include <chrono>

using namespace std;
using namespace std::chrono;

#define NEUSAR_ADAPTER (1)

namespace sdm {

LocalServiceCollector::LocalServiceCollector():
 	m_stop(false)
	,m_service_adapter(nullptr)
	,tm(LocalServiceCollector::run, this)
{
#ifdef NEUSAR_ADAPTER
	m_service_adapter = new NeusarWrapperAdapterImpl;
#else
	m_service_adapter = new ServiceMonitorAdapterImpl;
	// T.B.D
	// ((ServiceMonitorAdapterImpl*)m_service_adapter)->AddRoute("172.16.2.79");
	// ((ServiceMonitorAdapterImpl*)m_service_adapter)->AddRoute("172.16.66.79");
	// ((ServiceMonitorAdapterImpl*)m_service_adapter)->AddRoute("172.16.98.79");
	// ((ServiceMonitorAdapterImpl*)m_service_adapter)->AddRoute("172.16.114.79");
	// ((ServiceMonitorAdapterImpl*)m_service_adapter)->AddRoute("172.16.130.79");
	// ((ServiceMonitorAdapterImpl*)m_service_adapter)->AddRoute("172.16.162.79");
	// ((ServiceMonitorAdapterImpl*)m_service_adapter)->AddRoute("172.16.178.79");
	((ServiceMonitorAdapterImpl*)m_service_adapter)->SetMulticast("224.224.224.245");
	((ServiceMonitorAdapterImpl*)m_service_adapter)->SetPort(30490);
	((ServiceMonitorAdapterImpl*)m_service_adapter)->Start();
#endif

	//m_stop = false;
	// std::thread t(LocalServiceCollector::run, this);
	// t.detach();
}

LocalServiceCollector::~LocalServiceCollector()
{
	m_stop = true;
	tm.join();
#ifdef NEUSAR_ADAPTER
#else
	((ServiceMonitorAdapterImpl*)m_service_adapter)->ClearRoutes();
#endif
	if (m_service_adapter)
	{
		delete m_service_adapter;
	}

}

void LocalServiceCollector::GetServiceList()
{
	// nothing to do
}

void LocalServiceCollector::run(LocalServiceCollector* _handle)
{
	int iqac = pthread_setname_np(pthread_self(), "sdm.lsc.thread");
	if (iqac != 0){
		ErrorLog("pthread error");
	}

	service_info_t si;
	while (!_handle->m_stop)
	{
		unsigned int uiqac = usleep(30000); 
		if (uiqac!=0){
			PrintLog("sleep return not 0 ");
		}
		

		bool has = true;
		while (has)
		{
			if ( _handle->m_service_adapter == nullptr) {
				this_thread::sleep_for(chrono::milliseconds(300));
				continue;	
			}
			has = _handle->m_service_adapter->TakeService(si);
			ServiceList& sl = ServiceList::GetInstance();
			// si.from = SERVICE_FROM_CLOUD;
			si.status = (unsigned char)SERVICE_STATUS_RUNNING;
			si.type = (unsigned char)SERVICE_TYPE_PUBLIC;
#ifdef NEUSAR_ADAPTER
			sl.AddService(si);
#else
			if (si.ttl == 0)
			{
				sl.RemoveService(si);
			}
			else
			{
				sl.AddService(si);
			}
#endif
		}
	}
}

} //namespace sdm
	
