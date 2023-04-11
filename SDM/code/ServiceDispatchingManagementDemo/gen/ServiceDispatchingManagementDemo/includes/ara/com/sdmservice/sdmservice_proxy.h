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
#ifndef ServiceDispatchingManagementDemo_gen_ServiceDispatchingManagementDemo_includes_ara_com_sdmservice_sdmservice_proxy_h
#define ServiceDispatchingManagementDemo_gen_ServiceDispatchingManagementDemo_includes_ara_com_sdmservice_sdmservice_proxy_h


#include "ara/com/internal/proxy/ara_proxy_base.h"
#include "sdmservice_common.h"
#include "sdmservice_proxy_base.h"

namespace ara {
namespace com {
namespace sdmservice {
namespace proxy {

/// @uptrace{SWS_CM_00004}
class SDMServiceProxy : public ::ara::com::internal::proxy::ProxyBase<SDMServiceProxyBase>, public ara::com::sdmservice::SDMService {
private:

public:
  /// @brief Proxy constructor.
  ///
  /// @uptrace{SWS_CM_00131}
  explicit SDMServiceProxy(const HandleType& proxy_base_factory)
      : ::ara::com::internal::proxy::ProxyBase<SDMServiceProxyBase>(proxy_base_factory)
      , GetServiceInfo(proxy_base_->GetGetServiceInfo())
      , GetServiceStatus(proxy_base_->GetGetServiceStatus())
      , OfferService(proxy_base_->GetOfferService())
      , ShowServices(proxy_base_->GetShowServices())
      , StopOfferService(proxy_base_->GetStopOfferService())
  {}

  /// @brief Proxy shall be move constructable.
  ///
  /// @uptrace{SWS_CM_00137}
  explicit SDMServiceProxy(SDMServiceProxy&&) = default;

  /// @brief Proxy shall be move assignable.
  ///
  /// @uptrace{SWS_CM_00137}
  SDMServiceProxy& operator=(SDMServiceProxy&&) = default;

  /// @brief Proxy shall not be copy constructable.
  ///
  /// @uptrace{SWS_CM_00136}
  explicit SDMServiceProxy(const SDMServiceProxy&) = delete;

  /// @brief Proxy shall not be copy assignable.
  ///
  /// @uptrace{SWS_CM_00136}
  SDMServiceProxy& operator=(const SDMServiceProxy&) = delete;

#ifdef WITH_ARA_CLIENTID
  uint16_t GetClientId() {
    return proxy_base_->GetClientId();
  }
#endif

  /// @uptrace{SWS_CM_00196}
  methods::GetServiceInfo& GetServiceInfo;
  methods::GetServiceStatus& GetServiceStatus;
  methods::OfferService& OfferService;
  methods::ShowServices& ShowServices;
  methods::StopOfferService& StopOfferService;
};

} // namespace proxy
} // namespace sdmservice
} // namespace com
} // namespace ara



#endif // ServiceDispatchingManagementDemo_gen_ServiceDispatchingManagementDemo_includes_ara_com_sdmservice_sdmservice_proxy_h

