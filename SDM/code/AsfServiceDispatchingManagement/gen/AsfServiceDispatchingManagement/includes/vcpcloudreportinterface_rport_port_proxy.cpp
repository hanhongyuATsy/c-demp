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
#ifndef AsfServiceDispatchingManagement_gen_AsfServiceDispatchingManagement_includes_vcpcloudreportinterface_rport_port_proxy_cpp
#define AsfServiceDispatchingManagement_gen_AsfServiceDispatchingManagement_includes_vcpcloudreportinterface_rport_port_proxy_cpp


#include "vcpcloudreportinterface_rport_port_proxy.h"
namespace ara{
namespace com {
namespace proxy {

FindServiceHandle VCPCloudReportInterface_RPortPortProxy::StartFindService(FindServiceHandler<Proxy::HandleType> handler)
{	
	return Proxy::StartFindService(handler, 1);
}

ServiceHandleContainer<VCPCloudReportInterface_RPortPortProxy::Proxy::HandleType> VCPCloudReportInterface_RPortPortProxy::FindService()
{
	return Proxy::FindService( 1 );
}

void VCPCloudReportInterface_RPortPortProxy::StopFindService(FindServiceHandle handle)
{
	return Proxy::StopFindService(handle);
}

} // namespace proxy
} // namespace com
} // namespace ara


#endif // AsfServiceDispatchingManagement_gen_AsfServiceDispatchingManagement_includes_vcpcloudreportinterface_rport_port_proxy_cpp

