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
#ifndef AsfServiceDispatchingManagement_gen_AsfServiceDispatchingManagement_includes_vcpcloudreportinterface_rport_port_proxy_h
#define AsfServiceDispatchingManagement_gen_AsfServiceDispatchingManagement_includes_vcpcloudreportinterface_rport_port_proxy_h


#include "ara/vcpcloudreport/vcpcloudreportinterface_proxy.h"
namespace ara{
namespace com {
namespace proxy {

class VCPCloudReportInterface_RPortPortProxy
{
	using Proxy = ara::vcpcloudreport::proxy::VCPCloudReportInterfaceProxy;

public:
	VCPCloudReportInterface_RPortPortProxy() = delete;
	VCPCloudReportInterface_RPortPortProxy operator=(VCPCloudReportInterface_RPortPortProxy &other) = delete;
	VCPCloudReportInterface_RPortPortProxy& operator=(VCPCloudReportInterface_RPortPortProxy &&other) = default;
	VCPCloudReportInterface_RPortPortProxy(VCPCloudReportInterface_RPortPortProxy&) = delete;
	VCPCloudReportInterface_RPortPortProxy(VCPCloudReportInterface_RPortPortProxy&&) = default;

	static FindServiceHandle StartFindService(FindServiceHandler<Proxy::HandleType> handler);

	static ServiceHandleContainer<Proxy::HandleType> FindService();

	static void StopFindService(FindServiceHandle handle);

};

} // namespace proxy
} // namespace com
} // namespace ara


#endif // AsfServiceDispatchingManagement_gen_AsfServiceDispatchingManagement_includes_vcpcloudreportinterface_rport_port_proxy_h

