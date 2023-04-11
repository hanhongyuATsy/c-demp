// --------------------------------------------------------------------------
// |                _     _              _____         _____                |
// |               |  \  | |            / ____|  /\   |  __ \               |
// |               | | \ | |  __       | (___   /  \  | |__) |              |
// |               | |\ \| | /__\|   |  \___ \ / /\ \ |  _  /               |
// |               | | \ \ ||    |   |   ___) / /__\ \| | \ \               |
// |               |_|  \_\| \__/ \_/|/|_____/________\_|  \_\              |
// |                                                                        |
// --------------------------------------------------------------------------
// COPYRIGHT
// --------------------------------------------------------------------------
//
// This software is copyright protected and proprietary to Neusoft Reach.
// Neusoft Reach grants to you only those rights as set out in the license 
// conditions.
// All other rights remain with Neusoft Reach.
// --------------------------------------------------------------------------
#ifndef AsfServiceDispatchingManagement_gen_AsfServiceDispatchingManagement_includes_ap_servicemanagementinterface_rport_port_proxy_h
#define AsfServiceDispatchingManagement_gen_AsfServiceDispatchingManagement_includes_ap_servicemanagementinterface_rport_port_proxy_h


#include "ara/com/ap_servicemanagementinterface/ap_servicemanagementinterface_proxy.h"
namespace ara{
namespace com {
namespace proxy {

class AP_ServiceManagementInterface_RPortPortProxy
{
	using Proxy = ara::com::ap_servicemanagementinterface::proxy::AP_ServiceManagementInterfaceProxy;

public:
	AP_ServiceManagementInterface_RPortPortProxy() = delete;
	AP_ServiceManagementInterface_RPortPortProxy operator=(AP_ServiceManagementInterface_RPortPortProxy &other) = delete;
	AP_ServiceManagementInterface_RPortPortProxy& operator=(AP_ServiceManagementInterface_RPortPortProxy &&other) = default;
	AP_ServiceManagementInterface_RPortPortProxy(AP_ServiceManagementInterface_RPortPortProxy&) = delete;
	AP_ServiceManagementInterface_RPortPortProxy(AP_ServiceManagementInterface_RPortPortProxy&&) = default;

	static FindServiceHandle StartFindService(FindServiceHandler<Proxy::HandleType> handler);

	static ServiceHandleContainer<Proxy::HandleType> FindService();

	static void StopFindService(FindServiceHandle handle);

};

} // namespace proxy
} // namespace com
} // namespace ara


#endif // AsfServiceDispatchingManagement_gen_AsfServiceDispatchingManagement_includes_ap_servicemanagementinterface_rport_port_proxy_h

