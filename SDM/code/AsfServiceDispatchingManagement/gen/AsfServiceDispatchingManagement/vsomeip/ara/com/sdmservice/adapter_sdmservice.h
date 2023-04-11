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
#ifndef AsfServiceDispatchingManagement_gen_AsfServiceDispatchingManagement_vsomeip_ara_com_sdmservice_adapter_sdmservice_h
#define AsfServiceDispatchingManagement_gen_AsfServiceDispatchingManagement_vsomeip_ara_com_sdmservice_adapter_sdmservice_h

#include "ara/com/internal/vsomeip/skeleton/vsomeip_skeleton_base.h"
#include "ara/com/internal/s2s/skeleton/s2s_event_impl.h"
#include "service_desc_sdmservice.h"
//#include "ara/com/sdmservice/sdmservice_skeleton.h"
#ifdef WITH_ARA_IAM 
#include "ara/iam/grantqueryclient/grant_query_client_impl.h"
#endif // WITH_ARA_IAM



namespace ara {
namespace com {
namespace sdmservice {

namespace skeleton {
  class SDMServiceSkeleton; //forward declaration
}

namespace sdmservice_binding {
namespace vsomeip {

class SDMServiceServiceAdapter : public ::ara::com::internal::vsomeip::skeleton::ServiceImplBase {
 public:
  using ServiceInterface = skeleton::SDMServiceSkeleton;
  using ServiceDescriptor = descriptors::internal::Service;

  SDMServiceServiceAdapter(::ara::com::internal::skeleton::ServiceBase& service, ::ara::com::internal::InstanceId instance);


  virtual ~SDMServiceServiceAdapter();
 protected:
  void DispatchMethodCall(const std::shared_ptr<::vsomeip::message>& msg);

 private:
  void Connect(::ara::com::internal::skeleton::ServiceBase& service);

  void Disconnect(::ara::com::internal::skeleton::ServiceBase& service);

};

} // namespace vsomeip
} // namespace sdmservice_binding
} // namespace sdmservice
} // namespace com
} // namespace ara



#endif // AsfServiceDispatchingManagement_gen_AsfServiceDispatchingManagement_vsomeip_ara_com_sdmservice_adapter_sdmservice_h

