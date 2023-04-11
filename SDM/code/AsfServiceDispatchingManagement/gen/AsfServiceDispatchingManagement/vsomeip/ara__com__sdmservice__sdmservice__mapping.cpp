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
#ifndef AsfServiceDispatchingManagement_gen_AsfServiceDispatchingManagement_vsomeip_ara__com__sdmservice__sdmservice__mapping_cpp
#define AsfServiceDispatchingManagement_gen_AsfServiceDispatchingManagement_vsomeip_ara__com__sdmservice__sdmservice__mapping_cpp



#include "ara/com/internal/vsomeip/vsomeip_service_mapping.h"
#include "ara/com/internal/vsomeip/vsomeip_service_mapping_impl.h"
#include "ara/com/sdmservice/adapter_sdmservice.h"

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
  NoProxy,
  ara::com::sdmservice::sdmservice_binding::vsomeip::SDMServiceServiceAdapter
> ara__com__sdmservice__sdmservice__mapping;

}
}
}
}
}

#endif // AsfServiceDispatchingManagement_gen_AsfServiceDispatchingManagement_vsomeip_ara__com__sdmservice__sdmservice__mapping_cpp

