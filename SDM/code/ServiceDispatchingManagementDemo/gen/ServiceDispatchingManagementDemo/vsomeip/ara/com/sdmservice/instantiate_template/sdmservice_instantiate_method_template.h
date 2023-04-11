#ifndef sdmservice_proxy_instantiate_method_template_h
#define sdmservice_proxy_instantiate_method_template_h

#include "ara/com/sdmservice/sdmservice_proxy_base.h"

#include "../service_desc_sdmservice.h"
#include "ara/com/sdmservice/sdmservice_common.h"
#include "ara/com/internal/vsomeip/proxy/vsomeip_method_impl.h"


  extern template class ::ara::com::internal::vsomeip::proxy::MethodImpl<::ara::com::sdmservice::sdmservice_binding::vsomeip::descriptors::GetServiceInfo, ara::com::sdmservice::proxy::methods::GetServiceInfo::signature_type>;
  extern template class ::ara::com::internal::vsomeip::proxy::MethodImpl<::ara::com::sdmservice::sdmservice_binding::vsomeip::descriptors::GetServiceStatus, ara::com::sdmservice::proxy::methods::GetServiceStatus::signature_type>;
  extern template class ::ara::com::internal::vsomeip::proxy::MethodImpl<::ara::com::sdmservice::sdmservice_binding::vsomeip::descriptors::OfferService, ara::com::sdmservice::proxy::methods::OfferService::signature_type>;
  extern template class ::ara::com::internal::vsomeip::proxy::MethodImpl<::ara::com::sdmservice::sdmservice_binding::vsomeip::descriptors::ShowServices, ara::com::sdmservice::proxy::methods::ShowServices::signature_type>;
  extern template class ::ara::com::internal::vsomeip::proxy::MethodImpl<::ara::com::sdmservice::sdmservice_binding::vsomeip::descriptors::StopOfferService, ara::com::sdmservice::proxy::methods::StopOfferService::signature_type>;


#endif