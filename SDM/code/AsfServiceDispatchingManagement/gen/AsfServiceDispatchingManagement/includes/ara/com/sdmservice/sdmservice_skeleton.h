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
#ifndef AsfServiceDispatchingManagement_gen_AsfServiceDispatchingManagement_includes_ara_com_sdmservice_sdmservice_skeleton_h
#define AsfServiceDispatchingManagement_gen_AsfServiceDispatchingManagement_includes_ara_com_sdmservice_sdmservice_skeleton_h



#include "ara/com/internal/skeleton/ara_skeleton_base.h"

#include "ara/com/illegal_state_exception.h"
#include "sdmservice_common.h"

namespace ara {
namespace com {
namespace sdmservice {
namespace skeleton {



/// @uptrace{SWS_CM_00002}
class SDMServiceSkeleton : public ::ara::com::sdmservice::SDMService, public ::ara::com::internal::skeleton::TypedServiceImplBase {
public:
  /// @uptrace{SWS_CM_00130}
  SDMServiceSkeleton(::ara::com::InstanceIdentifier instance_id, ::ara::com::MethodCallProcessingMode mode = ::ara::com::MethodCallProcessingMode::kEvent) : ::ara::com::internal::skeleton::TypedServiceImplBase(instance_id, mode) {}
  virtual ~SDMServiceSkeleton() {
    ::ara::com::internal::skeleton::TypedServiceImplBase::StopOfferService<SDMServiceSkeleton>();
  }

  /// @brief Skeleton shall be move constructable.
  ///
  /// @uptrace{SWS_CM_00135}
  explicit SDMServiceSkeleton(SDMServiceSkeleton&&) = default;

  /// @brief Skeleton shall be move assignable.
  ///
  /// @uptrace{SWS_CM_00135}
  SDMServiceSkeleton& operator=(SDMServiceSkeleton&&) = default;

  /// @brief Skeleton shall not be copy constructable.
  ///
  /// @uptrace{SWS_CM_00134}
  explicit SDMServiceSkeleton(const SDMServiceSkeleton&) = delete;

  /// @brief Skeleton shall not be copy assignable.
  ///
  /// @uptrace{SWS_CM_00134}
  SDMServiceSkeleton& operator=(const SDMServiceSkeleton&) = delete;

  void OfferService() {

    ::ara::com::internal::skeleton::TypedServiceImplBase::OfferService<SDMServiceSkeleton>();
  }

  void StopOfferService() {
    ::ara::com::internal::skeleton::TypedServiceImplBase::StopOfferService<SDMServiceSkeleton>();
  }

  /// @uptrace{SWS_CM_00191}
  using ara::com::sdmservice::SDMService::GetServiceInfoOutput;
  virtual ::ara::core::Future<GetServiceInfoOutput> GetServiceInfo(
const ::ara::com::vsomeip::SDM_DataType_ServiceID& ServiceID
,
const ::ara::com::vsomeip::SDM_DataType_InstanceID& InstanceID
) = 0;
  using ara::com::sdmservice::SDMService::GetServiceStatusOutput;
  virtual ::ara::core::Future<GetServiceStatusOutput> GetServiceStatus(
const ::ara::com::vsomeip::SDM_DataType_ServiceID& ServiceID
,
const ::ara::com::vsomeip::SDM_DataType_InstanceID& InstanceID
) = 0;
  using ara::com::sdmservice::SDMService::OfferServiceOutput;
  virtual ::ara::core::Future<OfferServiceOutput> OfferService(
const ::ara::com::vsomeip::SDM_DataType_ServiceID& ServiceID
,
const ::ara::com::vsomeip::SDM_DataType_InstanceID& InstanceID
,
const ::SDM_DataType_ServiceInfo& ServiceInfo
) = 0;
  virtual ::ara::core::Future<void> ShowServices(
const ::ara::com::vsomeip::SDM_DataType_PrintStyle& PrintStyle
) = 0;
  using ara::com::sdmservice::SDMService::StopOfferServiceOutput;
  virtual ::ara::core::Future<StopOfferServiceOutput> StopOfferService(
const ::ara::com::vsomeip::SDM_DataType_ServiceID& ServiceID
,
const ::ara::com::vsomeip::SDM_DataType_InstanceID& InstanceID
) = 0;
};

} // namespace skeleton
} // namespace sdmservice
} // namespace com
} // namespace ara



#endif // AsfServiceDispatchingManagement_gen_AsfServiceDispatchingManagement_includes_ara_com_sdmservice_sdmservice_skeleton_h

