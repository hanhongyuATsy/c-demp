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
#ifndef AsfServiceDispatchingManagement_gen_AsfServiceDispatchingManagement_includes_ara_vcpcloudreport_vcpcloudreportinterface_proxy_h
#define AsfServiceDispatchingManagement_gen_AsfServiceDispatchingManagement_includes_ara_vcpcloudreport_vcpcloudreportinterface_proxy_h


#include "ara/com/internal/proxy/ara_proxy_base.h"
#include "vcpcloudreportinterface_common.h"
#include "vcpcloudreportinterface_proxy_base.h"

namespace ara {
namespace vcpcloudreport {
namespace proxy {

/// @uptrace{SWS_CM_00004}
class VCPCloudReportInterfaceProxy : public ::ara::com::internal::proxy::ProxyBase<VCPCloudReportInterfaceProxyBase>, public ara::vcpcloudreport::VCPCloudReportInterface {
private:

public:
  /// @brief Proxy constructor.
  ///
  /// @uptrace{SWS_CM_00131}
  explicit VCPCloudReportInterfaceProxy(const HandleType& proxy_base_factory)
      : ::ara::com::internal::proxy::ProxyBase<VCPCloudReportInterfaceProxyBase>(proxy_base_factory)
      , ReportHighData(proxy_base_->GetReportHighData())
      , ReportHighDataWithString(proxy_base_->GetReportHighDataWithString())
      , ReportLowData(proxy_base_->GetReportLowData())
      , ReportLowDataWithString(proxy_base_->GetReportLowDataWithString())
      , ReportMidData(proxy_base_->GetReportMidData())
      , ReportMidDataWithString(proxy_base_->GetReportMidDataWithString())
  {}

  /// @brief Proxy shall be move constructable.
  ///
  /// @uptrace{SWS_CM_00137}
  explicit VCPCloudReportInterfaceProxy(VCPCloudReportInterfaceProxy&&) = default;

  /// @brief Proxy shall be move assignable.
  ///
  /// @uptrace{SWS_CM_00137}
  VCPCloudReportInterfaceProxy& operator=(VCPCloudReportInterfaceProxy&&) = default;

  /// @brief Proxy shall not be copy constructable.
  ///
  /// @uptrace{SWS_CM_00136}
  explicit VCPCloudReportInterfaceProxy(const VCPCloudReportInterfaceProxy&) = delete;

  /// @brief Proxy shall not be copy assignable.
  ///
  /// @uptrace{SWS_CM_00136}
  VCPCloudReportInterfaceProxy& operator=(const VCPCloudReportInterfaceProxy&) = delete;

#ifdef WITH_ARA_CLIENTID
  uint16_t GetClientId() {
    return proxy_base_->GetClientId();
  }
#endif

  /// @uptrace{SWS_CM_00196}
  methods::ReportHighData& ReportHighData;
  methods::ReportHighDataWithString& ReportHighDataWithString;
  methods::ReportLowData& ReportLowData;
  methods::ReportLowDataWithString& ReportLowDataWithString;
  methods::ReportMidData& ReportMidData;
  methods::ReportMidDataWithString& ReportMidDataWithString;
};

} // namespace proxy
} // namespace vcpcloudreport
} // namespace ara



#endif // AsfServiceDispatchingManagement_gen_AsfServiceDispatchingManagement_includes_ara_vcpcloudreport_vcpcloudreportinterface_proxy_h

