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
#ifndef AsfServiceDispatchingManagement_gen_AsfServiceDispatchingManagement_includes_ara_vcpcloudreport_vcpcloudreportinterface_proxy_base_h
#define AsfServiceDispatchingManagement_gen_AsfServiceDispatchingManagement_includes_ara_vcpcloudreport_vcpcloudreportinterface_proxy_base_h


#include "ara/com/internal/proxy/ara_proxy_base.h"
#include "vcpcloudreportinterface_common.h"

namespace ara {
namespace vcpcloudreport {
namespace proxy {

namespace methods {
  /// @uptrace{SWS_CM_00006}
  using ReportHighData = ::ara::com::internal::proxy::Method<ara::vcpcloudreport::VCPCloudReportInterface::ReportHighDataOutput(
const ::ara::com::someip::ReportHIGHDATA&
)
>;
  using ReportHighDataWithString = ::ara::com::internal::proxy::Method<ara::vcpcloudreport::VCPCloudReportInterface::ReportHighDataWithStringOutput(
const ::VCPSTRINGDATA&
)
>;
  using ReportLowData = ::ara::com::internal::proxy::Method<ara::vcpcloudreport::VCPCloudReportInterface::ReportLowDataOutput(
const ::ReportLOWDATA&
)
>;
  using ReportLowDataWithString = ::ara::com::internal::proxy::Method<ara::vcpcloudreport::VCPCloudReportInterface::ReportLowDataWithStringOutput(
const ::VCPSTRINGDATA&
)
>;
  using ReportMidData = ::ara::com::internal::proxy::Method<ara::vcpcloudreport::VCPCloudReportInterface::ReportMidDataOutput(
const ::ReportMIDDATA&
)
>;
  using ReportMidDataWithString = ::ara::com::internal::proxy::Method<ara::vcpcloudreport::VCPCloudReportInterface::ReportMidDataWithStringOutput(
const ::VCPSTRINGDATA&
)
>;
} // namespace methods



class VCPCloudReportInterfaceProxyBase : public ::ara::com::internal::proxy::ProxyBindingBase, public ara::vcpcloudreport::VCPCloudReportInterface {
public:
  virtual methods::ReportHighData& GetReportHighData() = 0;
  virtual methods::ReportHighDataWithString& GetReportHighDataWithString() = 0;
  virtual methods::ReportLowData& GetReportLowData() = 0;
  virtual methods::ReportLowDataWithString& GetReportLowDataWithString() = 0;
  virtual methods::ReportMidData& GetReportMidData() = 0;
  virtual methods::ReportMidDataWithString& GetReportMidDataWithString() = 0;
#ifdef WITH_ARA_CLIENTID
  virtual uint16_t GetClientId() = 0;
#endif
};

} // namespace proxy
} // namespace vcpcloudreport
} // namespace ara



#endif // AsfServiceDispatchingManagement_gen_AsfServiceDispatchingManagement_includes_ara_vcpcloudreport_vcpcloudreportinterface_proxy_base_h

