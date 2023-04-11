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
#ifndef ServiceDispatchingManagementDemo_gen_ServiceDispatchingManagementDemo_includes_sdmservice_rport_port_proxy_h
#define ServiceDispatchingManagementDemo_gen_ServiceDispatchingManagementDemo_includes_sdmservice_rport_port_proxy_h


#include "ara/com/sdmservice/sdmservice_proxy.h"
namespace ara{
namespace com {
namespace proxy {

class SDMService_RPortPortProxy
{
	using Proxy = ara::com::sdmservice::proxy::SDMServiceProxy;

public:
	SDMService_RPortPortProxy() = delete;
	SDMService_RPortPortProxy operator=(SDMService_RPortPortProxy &other) = delete;
	SDMService_RPortPortProxy& operator=(SDMService_RPortPortProxy &&other) = default;
	SDMService_RPortPortProxy(SDMService_RPortPortProxy&) = delete;
	SDMService_RPortPortProxy(SDMService_RPortPortProxy&&) = default;

	static FindServiceHandle StartFindService(FindServiceHandler<Proxy::HandleType> handler);

	static ServiceHandleContainer<Proxy::HandleType> FindService();

	static void StopFindService(FindServiceHandle handle);

};

} // namespace proxy
} // namespace com
} // namespace ara


#endif // ServiceDispatchingManagementDemo_gen_ServiceDispatchingManagementDemo_includes_sdmservice_rport_port_proxy_h

