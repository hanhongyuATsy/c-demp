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
#ifndef ServiceDispatchingManagementDemo_gen_ServiceDispatchingManagementDemo_ara_com_main_ServiceDispatchingManagementDemo_cpp
#define ServiceDispatchingManagementDemo_gen_ServiceDispatchingManagementDemo_ara_com_main_ServiceDispatchingManagementDemo_cpp


#include "ara/com/types.h"
#include "ara/com/internal/ara_com_main.h"
#ifdef WITH_ARA_IAM  
#include "ara/com/com_error_domain.h"
#include "ara/iam/grantqueryclient/grant_query_client_impl.h"
#endif // WITH_ARA_IAM
#ifdef HAS_DDS_BINDING
#include "ara/com/internal/dds/dds_binding.h"
#endif // HAS_dds_BINDING

#ifdef HAS_VSOMEIP_BINDING
#include "ara/com/internal/vsomeip/vsomeip_binding.h"
#include "ara/com/internal/vsomeip/vsomeip_error_domains.h"
#include "vsomeip/ara/com/sdmservice/errors_sdmservice.h"
#endif // HAS_VSOMEIP_BINDING


#ifdef HAS_PROLOC_BINDING
#include "ara/com/internal/proloc/proloc_binding.h"
#endif // HAS_PROLOC_BINDING

#ifdef HAS_SHM_BINDING
#include "ara/com/internal/shm/shm_binding.h"
#endif // HAS_SHM_BINDING

#include "error_domain_specificerrors.h"

namespace ara {
namespace com {
namespace internal {
namespace runtime {

#ifdef WITH_ARA_IAM
void FindService_Judge_IAM(uint32_t service_id, uint32_t instance_id){ //0429 
    ara::iam::ifc::grantqueryclient::InterfaceResourceInfo resource_info(
    ara::iam::ifc::grantqueryclient::ResourceType::kComFindServiceGrant,
#ifdef HAS_DDS_BINDING
    ara::iam::ifc::grantqueryclient::ProtoType::kComDds,
#else
    ara::iam::ifc::grantqueryclient::ProtoType::kComSomeip,
#endif //HAS_DDS_BINDING
    ara::iam::ifc::grantqueryclient::DirType::kRdir, 
    service_id, instance_id, "");

    ara::iam::ifc::grantqueryclient::IAMGrantQueryClientImpl grant_query_client;
    ara::core::Result<ara::iam::ifc::grantqueryclient::HasGrantQueryResult> res 
    = grant_query_client.HasGrant(resource_info);

    if(ara::iam::ifc::grantqueryclient::HasGrantQueryResult::kDoesNotRegisterProcess != res.Value()
    && ara::iam::ifc::grantqueryclient::HasGrantQueryResult::kHasGrant != res.Value()){
        throw ara::com::ComErrc(ara::com::ComErrc::kIamCheckFailure);
    }
}
#endif // WITH_ARA_IAM


void Initialize() {
#ifdef WITH_ARA_IAM
    ara::com::FindService_IAMGetHander iam_handler_ = FindService_Judge_IAM;
#endif // WITH_ARA_IAM

#ifdef HAS_DDS_BINDING
#ifdef WITH_ARA_IAM
    dds::runtime::Register(iam_handler_);
#else
    dds::runtime::Register();
#endif // WITH_ARA_IAM 
    ::dds::ara::core::Registry::registerDomain(ara::com::aperrors::GetSpecificErrorsErrorDomain());
#endif // HAS_dds_BINDIN

#ifdef HAS_VSOMEIP_BINDING
#ifdef WITH_ARA_IAM
    vsomeip::runtime::Register(iam_handler_);
#else
    vsomeip::runtime::Register();
#endif // WITH_ARA_IAM   
    ara::com::sdmservice::sdmservice_binding::vsomeip::registerErrors();
    ::ara::com::internal::vsomeip::common::error_domains::Registry::registerDomain(ara::com::aperrors::GetSpecificErrorsErrorDomain());
#endif // HAS_VSOMEIP_BINDING

#ifdef HAS_PROLOC_BINDING
    proloc::runtime::Register();
#endif // HAS_PROLOC_BINDING

#ifdef HAS_SHM_BINDING
    shm::runtime::Register();
#endif // HAS_SHM_BINDING 
}

} // namespace runtime
} // namespace internal
} // namespace com
} // namespace ara




#endif // ServiceDispatchingManagementDemo_gen_ServiceDispatchingManagementDemo_ara_com_main_ServiceDispatchingManagementDemo_cpp

