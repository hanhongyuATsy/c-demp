#ifndef vcpcloudreportinterface_proxy_instantiate_method_template_h
#define vcpcloudreportinterface_proxy_instantiate_method_template_h

#include "ara/vcpcloudreport/vcpcloudreportinterface_proxy_base.h"

#include "../service_desc_vcpcloudreportinterface.h"
#include "ara/vcpcloudreport/vcpcloudreportinterface_common.h"
#include "ara/com/internal/vsomeip/proxy/vsomeip_method_impl.h"


  extern template class ::ara::com::internal::vsomeip::proxy::MethodImpl<::ara::vcpcloudreport::vcpcloudreportinterface_binding::vsomeip::descriptors::ReportHighData, ara::vcpcloudreport::proxy::methods::ReportHighData::signature_type>;
  extern template class ::ara::com::internal::vsomeip::proxy::MethodImpl<::ara::vcpcloudreport::vcpcloudreportinterface_binding::vsomeip::descriptors::ReportHighDataWithString, ara::vcpcloudreport::proxy::methods::ReportHighDataWithString::signature_type>;
  extern template class ::ara::com::internal::vsomeip::proxy::MethodImpl<::ara::vcpcloudreport::vcpcloudreportinterface_binding::vsomeip::descriptors::ReportLowData, ara::vcpcloudreport::proxy::methods::ReportLowData::signature_type>;
  extern template class ::ara::com::internal::vsomeip::proxy::MethodImpl<::ara::vcpcloudreport::vcpcloudreportinterface_binding::vsomeip::descriptors::ReportLowDataWithString, ara::vcpcloudreport::proxy::methods::ReportLowDataWithString::signature_type>;
  extern template class ::ara::com::internal::vsomeip::proxy::MethodImpl<::ara::vcpcloudreport::vcpcloudreportinterface_binding::vsomeip::descriptors::ReportMidData, ara::vcpcloudreport::proxy::methods::ReportMidData::signature_type>;
  extern template class ::ara::com::internal::vsomeip::proxy::MethodImpl<::ara::vcpcloudreport::vcpcloudreportinterface_binding::vsomeip::descriptors::ReportMidDataWithString, ara::vcpcloudreport::proxy::methods::ReportMidDataWithString::signature_type>;


#endif