#ifndef ap_servicemanagementinterface_proxy_instantiate_method_template_h
#define ap_servicemanagementinterface_proxy_instantiate_method_template_h

#include "ara/com/ap_servicemanagementinterface/ap_servicemanagementinterface_proxy_base.h"

#include "../service_desc_ap_servicemanagementinterface.h"
#include "ara/com/ap_servicemanagementinterface/ap_servicemanagementinterface_common.h"
#include "ara/com/internal/vsomeip/proxy/vsomeip_method_impl.h"


  extern template class ::ara::com::internal::vsomeip::proxy::MethodImpl<::ara::com::ap_servicemanagementinterface::ap_servicemanagementinterface_binding::vsomeip::descriptors::GetAllService, ara::com::ap_servicemanagementinterface::proxy::methods::GetAllService::signature_type>;
  extern template class ::ara::com::internal::vsomeip::proxy::MethodImpl<::ara::com::ap_servicemanagementinterface::ap_servicemanagementinterface_binding::vsomeip::descriptors::GetSingleService, ara::com::ap_servicemanagementinterface::proxy::methods::GetSingleService::signature_type>;


#endif