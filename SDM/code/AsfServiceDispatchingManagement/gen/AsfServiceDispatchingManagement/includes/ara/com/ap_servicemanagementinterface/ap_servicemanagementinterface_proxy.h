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
#ifndef AsfServiceDispatchingManagement_gen_AsfServiceDispatchingManagement_includes_ara_com_ap_servicemanagementinterface_ap_servicemanagementinterface_proxy_h
#define AsfServiceDispatchingManagement_gen_AsfServiceDispatchingManagement_includes_ara_com_ap_servicemanagementinterface_ap_servicemanagementinterface_proxy_h


#include "ara/com/internal/proxy/ara_proxy_base.h"
#include "ap_servicemanagementinterface_common.h"
#include "ap_servicemanagementinterface_proxy_base.h"

namespace ara {
namespace com {
namespace ap_servicemanagementinterface {
namespace proxy {

/// @uptrace{SWS_CM_00004}
class AP_ServiceManagementInterfaceProxy : public ::ara::com::internal::proxy::ProxyBase<AP_ServiceManagementInterfaceProxyBase>, public ara::com::ap_servicemanagementinterface::AP_ServiceManagementInterface {
private:

public:
  /// @brief Proxy constructor.
  ///
  /// @uptrace{SWS_CM_00131}
  explicit AP_ServiceManagementInterfaceProxy(const HandleType& proxy_base_factory)
      : ::ara::com::internal::proxy::ProxyBase<AP_ServiceManagementInterfaceProxyBase>(proxy_base_factory)
      , GetAllService(proxy_base_->GetGetAllService())
      , GetSingleService(proxy_base_->GetGetSingleService())
  {}

  /// @brief Proxy shall be move constructable.
  ///
  /// @uptrace{SWS_CM_00137}
  explicit AP_ServiceManagementInterfaceProxy(AP_ServiceManagementInterfaceProxy&&) = default;

  /// @brief Proxy shall be move assignable.
  ///
  /// @uptrace{SWS_CM_00137}
  AP_ServiceManagementInterfaceProxy& operator=(AP_ServiceManagementInterfaceProxy&&) = default;

  /// @brief Proxy shall not be copy constructable.
  ///
  /// @uptrace{SWS_CM_00136}
  explicit AP_ServiceManagementInterfaceProxy(const AP_ServiceManagementInterfaceProxy&) = delete;

  /// @brief Proxy shall not be copy assignable.
  ///
  /// @uptrace{SWS_CM_00136}
  AP_ServiceManagementInterfaceProxy& operator=(const AP_ServiceManagementInterfaceProxy&) = delete;

#ifdef WITH_ARA_CLIENTID
  uint16_t GetClientId() {
    return proxy_base_->GetClientId();
  }
#endif

  /// @uptrace{SWS_CM_00196}
  methods::GetAllService& GetAllService;
  methods::GetSingleService& GetSingleService;
};

} // namespace proxy
} // namespace ap_servicemanagementinterface
} // namespace com
} // namespace ara



#endif // AsfServiceDispatchingManagement_gen_AsfServiceDispatchingManagement_includes_ara_com_ap_servicemanagementinterface_ap_servicemanagementinterface_proxy_h

