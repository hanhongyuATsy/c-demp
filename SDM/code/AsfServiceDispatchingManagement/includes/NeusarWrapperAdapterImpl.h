#ifndef NEUSAR_WRAPPER_ADAPTER_IMPL_H
#define NEUSAR_WRAPPER_ADAPTER_IMPL_H

#include "LocalServiceBase.h"
#include "ara/com/ap_servicemanagementinterface/ap_servicemanagementinterface_proxy.h"

namespace sdm {

class NeusarWrapperAdapterImpl : public LocalServiceBase 
{
	using Proxy = ara::com::ap_servicemanagementinterface::proxy::AP_ServiceManagementInterfaceProxy;

public:
	NeusarWrapperAdapterImpl();
	virtual ~NeusarWrapperAdapterImpl();

	void serviceAvailabilityCallback(ara::com::ServiceHandleContainer<Proxy::HandleType> handles, ara::com::FindServiceHandle handler);
	int RequestServiceList();
	
private:
	static void run(NeusarWrapperAdapterImpl* _handle);
	

	bool m_stop;
	std::shared_ptr<Proxy> m_proxy;
	std::atomic<bool> m_proxy_valid;
	std::thread tm;
};
} //namespace sdm

#endif //NEUSAR_WRAPPER_ADAPTER_IMPL_H
