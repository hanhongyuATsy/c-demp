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
#ifndef ServiceDispatchingManagementDemo_gen_ServiceDispatchingManagementDemo_includes_ara_com_sdmservice_sdmservice_proxy_base_h
#define ServiceDispatchingManagementDemo_gen_ServiceDispatchingManagementDemo_includes_ara_com_sdmservice_sdmservice_proxy_base_h


#include "ara/com/internal/proxy/ara_proxy_base.h"
#include "sdmservice_common.h"

namespace ara {
namespace com {
namespace sdmservice {
namespace proxy {

namespace methods {
  /// @uptrace{SWS_CM_00006}
  using GetServiceInfo = ::ara::com::internal::proxy::Method<ara::com::sdmservice::SDMService::GetServiceInfoOutput(
const ::ara::com::vsomeip::SDM_DataType_ServiceID&
,
const ::ara::com::vsomeip::SDM_DataType_InstanceID&
)
>;
  using GetServiceStatus = ::ara::com::internal::proxy::Method<ara::com::sdmservice::SDMService::GetServiceStatusOutput(
const ::ara::com::vsomeip::SDM_DataType_ServiceID&
,
const ::ara::com::vsomeip::SDM_DataType_InstanceID&
)
>;
  using OfferService = ::ara::com::internal::proxy::Method<ara::com::sdmservice::SDMService::OfferServiceOutput(
const ::ara::com::vsomeip::SDM_DataType_ServiceID&
,
const ::ara::com::vsomeip::SDM_DataType_InstanceID&
,
const ::SDM_DataType_ServiceInfo&
)
>;
  using ShowServices = ::ara::com::internal::proxy::Method<void(
 const ::ara::com::vsomeip::SDM_DataType_PrintStyle&
)>;
  using StopOfferService = ::ara::com::internal::proxy::Method<ara::com::sdmservice::SDMService::StopOfferServiceOutput(
const ::ara::com::vsomeip::SDM_DataType_ServiceID&
,
const ::ara::com::vsomeip::SDM_DataType_InstanceID&
)
>;
} // namespace methods



class SDMServiceProxyBase : public ::ara::com::internal::proxy::ProxyBindingBase, public ara::com::sdmservice::SDMService {
public:
  virtual methods::GetServiceInfo& GetGetServiceInfo() = 0;
  virtual methods::GetServiceStatus& GetGetServiceStatus() = 0;
  virtual methods::OfferService& GetOfferService() = 0;
  virtual methods::ShowServices& GetShowServices() = 0;
  virtual methods::StopOfferService& GetStopOfferService() = 0;
#ifdef WITH_ARA_CLIENTID
  virtual uint16_t GetClientId() = 0;
#endif
};

} // namespace proxy
} // namespace sdmservice
} // namespace com
} // namespace ara



#endif // ServiceDispatchingManagementDemo_gen_ServiceDispatchingManagementDemo_includes_ara_com_sdmservice_sdmservice_proxy_base_h

