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
#ifndef ServiceDispatchingManagementDemo_gen_ServiceDispatchingManagementDemo_vsomeip_ara__com__sdmservice__sdmservice__mapping_cpp
#define ServiceDispatchingManagementDemo_gen_ServiceDispatchingManagementDemo_vsomeip_ara__com__sdmservice__sdmservice__mapping_cpp



#include "ara/com/internal/vsomeip/vsomeip_service_mapping.h"
#include "ara/com/internal/vsomeip/vsomeip_service_mapping_impl.h"
#include "ara/com/sdmservice/proxy_sdmservice.h"

namespace ara {
namespace com {
namespace internal {
namespace vsomeip {
namespace runtime {

ServiceMappingImpl<
  ara::com::sdmservice::SDMService::service_id,
  ara::com::sdmservice::sdmservice_binding::vsomeip::descriptors::internal::Service::service_id,
  ara::com::sdmservice::sdmservice_binding::vsomeip::descriptors::internal::Service::service_version,
  ara::com::sdmservice::sdmservice_binding::vsomeip::descriptors::internal::Service::minor_service_version,
  ara::com::sdmservice::sdmservice_binding::vsomeip::SDMServiceImpl,
  NoAdapter
> ara__com__sdmservice__sdmservice__mapping;

}
}
}
}
}

#endif // ServiceDispatchingManagementDemo_gen_ServiceDispatchingManagementDemo_vsomeip_ara__com__sdmservice__sdmservice__mapping_cpp

