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
#ifndef AsfServiceDispatchingManagement_gen_AsfServiceDispatchingManagement_includes_ara_com_ap_servicemanagementinterface_ap_servicemanagementinterface_proxy_base_h
#define AsfServiceDispatchingManagement_gen_AsfServiceDispatchingManagement_includes_ara_com_ap_servicemanagementinterface_ap_servicemanagementinterface_proxy_base_h


#include "ara/com/internal/proxy/ara_proxy_base.h"
#include "ap_servicemanagementinterface_common.h"

namespace ara {
namespace com {
namespace ap_servicemanagementinterface {
namespace proxy {

namespace methods {
  /// @uptrace{SWS_CM_00006}
  using GetAllService = ::ara::com::internal::proxy::Method<ara::com::ap_servicemanagementinterface::AP_ServiceManagementInterface::GetAllServiceOutput(
)
>;
  using GetSingleService = ::ara::com::internal::proxy::Method<ara::com::ap_servicemanagementinterface::AP_ServiceManagementInterface::GetSingleServiceOutput(
const ::ApSingleServiceInfoType&
)
>;
} // namespace methods



class AP_ServiceManagementInterfaceProxyBase : public ::ara::com::internal::proxy::ProxyBindingBase, public ara::com::ap_servicemanagementinterface::AP_ServiceManagementInterface {
public:
  virtual methods::GetAllService& GetGetAllService() = 0;
  virtual methods::GetSingleService& GetGetSingleService() = 0;
#ifdef WITH_ARA_CLIENTID
  virtual uint16_t GetClientId() = 0;
#endif
};

} // namespace proxy
} // namespace ap_servicemanagementinterface
} // namespace com
} // namespace ara



#endif // AsfServiceDispatchingManagement_gen_AsfServiceDispatchingManagement_includes_ara_com_ap_servicemanagementinterface_ap_servicemanagementinterface_proxy_base_h

