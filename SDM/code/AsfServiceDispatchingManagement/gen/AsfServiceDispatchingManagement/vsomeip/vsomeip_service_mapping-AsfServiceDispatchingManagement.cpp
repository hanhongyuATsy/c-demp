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
#ifndef AsfServiceDispatchingManagement_gen_AsfServiceDispatchingManagement_vsomeip_vsomeip_service_mapping_AsfServiceDispatchingManagement_cpp
#define AsfServiceDispatchingManagement_gen_AsfServiceDispatchingManagement_vsomeip_vsomeip_service_mapping_AsfServiceDispatchingManagement_cpp


#include "ara/com/internal/vsomeip/vsomeip_service_mapping.h"
#include "ara/com/internal/vsomeip/vsomeip_service_mapping_impl.h"
#include "ara/com/ap_servicemanagementinterface/proxy_ap_servicemanagementinterface.h"
#include "ara/vcpcloudreport/proxy_vcpcloudreportinterface.h"
#include "ara/com/sdmservice/adapter_sdmservice.h"

namespace ara {
namespace com {
namespace internal {
namespace vsomeip {
namespace runtime {


extern ServiceMappingImpl<
  ara::com::ap_servicemanagementinterface::AP_ServiceManagementInterface::service_id,
  ara::com::ap_servicemanagementinterface::ap_servicemanagementinterface_binding::vsomeip::descriptors::internal::Service::service_id,
  ara::com::ap_servicemanagementinterface::ap_servicemanagementinterface_binding::vsomeip::descriptors::internal::Service::service_version,
  ara::com::ap_servicemanagementinterface::ap_servicemanagementinterface_binding::vsomeip::descriptors::internal::Service::minor_service_version,
  ara::com::ap_servicemanagementinterface::ap_servicemanagementinterface_binding::vsomeip::AP_ServiceManagementInterfaceImpl,
  NoAdapter
> ara__com__ap_servicemanagementinterface__ap_servicemanagementinterface__mapping;
extern ServiceMappingImpl<
  ara::com::sdmservice::SDMService::service_id,
  ara::com::sdmservice::sdmservice_binding::vsomeip::descriptors::internal::Service::service_id,
  ara::com::sdmservice::sdmservice_binding::vsomeip::descriptors::internal::Service::service_version,
  ara::com::sdmservice::sdmservice_binding::vsomeip::descriptors::internal::Service::minor_service_version,
  NoProxy,
  ara::com::sdmservice::sdmservice_binding::vsomeip::SDMServiceServiceAdapter
> ara__com__sdmservice__sdmservice__mapping;
extern ServiceMappingImpl<
  ara::vcpcloudreport::VCPCloudReportInterface::service_id,
  ara::vcpcloudreport::vcpcloudreportinterface_binding::vsomeip::descriptors::internal::Service::service_id,
  ara::vcpcloudreport::vcpcloudreportinterface_binding::vsomeip::descriptors::internal::Service::service_version,
  ara::vcpcloudreport::vcpcloudreportinterface_binding::vsomeip::descriptors::internal::Service::minor_service_version,
  ara::vcpcloudreport::vcpcloudreportinterface_binding::vsomeip::VCPCloudReportInterfaceImpl,
  NoAdapter
> ara__vcpcloudreport__vcpcloudreportinterface__mapping;


const VSomeIPServiceMapping::Mapping* VSomeIPServiceMapping::GetMappingForServiceId(ServiceId service_id) {
  switch (service_id) {
    case ara::com::ap_servicemanagementinterface::AP_ServiceManagementInterface::service_id:
      return &ara__com__ap_servicemanagementinterface__ap_servicemanagementinterface__mapping;
    case ara::com::sdmservice::SDMService::service_id:
      return &ara__com__sdmservice__sdmservice__mapping;
    case ara::vcpcloudreport::VCPCloudReportInterface::service_id:
      return &ara__vcpcloudreport__vcpcloudreportinterface__mapping;
    default:
      return nullptr;
  }
}

VSomeIPServiceMapping::MultiMapping VSomeIPServiceMapping::GetMappingForVSomeIPServiceId(::vsomeip::service_t service_id) {
  switch(service_id) {
    case ara::com::ap_servicemanagementinterface::ap_servicemanagementinterface_binding::vsomeip::descriptors::internal::Service::service_id:
      return {
        &ara__com__ap_servicemanagementinterface__ap_servicemanagementinterface__mapping,
      };
    case ara::com::sdmservice::sdmservice_binding::vsomeip::descriptors::internal::Service::service_id:
      return {
        &ara__com__sdmservice__sdmservice__mapping,
      };
    case ara::vcpcloudreport::vcpcloudreportinterface_binding::vsomeip::descriptors::internal::Service::service_id:
      return {
        &ara__vcpcloudreport__vcpcloudreportinterface__mapping,
      };
    default:
      return {};
  }
}

} // namespace runtime
} // namespace vsomeip
} // namespace internal
} // namespace com
} // namespace ara



#endif // AsfServiceDispatchingManagement_gen_AsfServiceDispatchingManagement_vsomeip_vsomeip_service_mapping_AsfServiceDispatchingManagement_cpp

