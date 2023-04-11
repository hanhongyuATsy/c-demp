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
#ifndef AsfServiceDispatchingManagement_gen_AsfServiceDispatchingManagement_vsomeip_ara_com_ap_servicemanagementinterface_proxy_ap_servicemanagementinterface_h
#define AsfServiceDispatchingManagement_gen_AsfServiceDispatchingManagement_vsomeip_ara_com_ap_servicemanagementinterface_proxy_ap_servicemanagementinterface_h


#include <memory>
#include "ara/com/internal/s2s/proxy/s2s_event_impl.h"
#include "service_desc_ap_servicemanagementinterface.h"
#include "ara/com/ap_servicemanagementinterface/ap_servicemanagementinterface_proxy_base.h"
#ifdef WITH_ARA_IAM 
#include "ara/iam/grantqueryclient/grant_query_client_impl.h"
#endif // WITH_ARA_IAM

#include "instantiate_template/ap_servicemanagementinterface_instantiate_method_template.h"


namespace ara {
namespace com {
namespace ap_servicemanagementinterface {
namespace ap_servicemanagementinterface_binding {
namespace vsomeip {

class AP_ServiceManagementInterfaceImpl : public proxy::AP_ServiceManagementInterfaceProxyBase, public ::ara::com::internal::vsomeip::proxy::ProxyImplBase {
 public:
  //using ProxyInterface = proxy::AP_ServiceManagementInterfaceProxy;
  using ServiceDescriptor = descriptors::internal::Service;

#ifdef WITH_ARA_IAM 
  void Judge_IAM(uint8_t type, uint32_t service_id, uint32_t instance_id, uint16_t method_id){ 
      std::string _method_id;
      std::stringstream stream;
      stream <<  method_id;
      _method_id = stream.str();  

      ara::iam::ifc::grantqueryclient::InterfaceResourceInfo resource_info(
      type, ara::iam::ifc::grantqueryclient::ProtoType::kComSomeip,
      ara::iam::ifc::grantqueryclient::DirType::kRdir, 
      service_id, instance_id, _method_id);

      ara::iam::ifc::grantqueryclient::IAMGrantQueryClientImpl grant_query_client;
      ara::core::Result<ara::iam::ifc::grantqueryclient::HasGrantQueryResult> res 
      = grant_query_client.HasGrant(resource_info);

   //   ara::com::internal::vsomeip::common::logger().LogVerbose() << "Judge_IAM method_id:" << _method_id << " instance_id:" << instance_id << " ResourceType:" << static_cast<ara::iam::ifc::grantqueryclient::ResourceType>(type) << "Judge_IAM result:" << uint32_t(res.Value());

      if(ara::iam::ifc::grantqueryclient::HasGrantQueryResult::kDoesNotRegisterProcess != res.Value()
      && ara::iam::ifc::grantqueryclient::HasGrantQueryResult::kHasGrant != res.Value()){
          throw ara::com::ComErrc(ara::com::ComErrc::kIamCheckFailure);
      }
    }
#endif // WITH_ARA_IAM

  AP_ServiceManagementInterfaceImpl(::ara::com::internal::InstanceId instance) :
      ::ara::com::internal::vsomeip::proxy::ProxyImplBase(ServiceDescriptor::service_id, instance, ServiceDescriptor::service_version, ServiceDescriptor::minor_service_version)
      ,
      GetAllService(std::make_shared<::ara::com::internal::vsomeip::proxy::MethodImpl<descriptors::GetAllService, ara::com::ap_servicemanagementinterface::proxy::methods::GetAllService::signature_type>>(instance))
      ,
      GetSingleService(std::make_shared<::ara::com::internal::vsomeip::proxy::MethodImpl<descriptors::GetSingleService, ara::com::ap_servicemanagementinterface::proxy::methods::GetSingleService::signature_type>>(instance))
 {
#ifdef WITH_ARA_IAM 


      GetAllService->SetIAMHandler([this, instance](){
        Judge_IAM(ara::iam::ifc::grantqueryclient::ResourceType::kComMethodGrant, 
        descriptors::GetAllService::service_id, instance, descriptors::GetAllService::method_id);
      });
      GetSingleService->SetIAMHandler([this, instance](){
        Judge_IAM(ara::iam::ifc::grantqueryclient::ResourceType::kComMethodGrant, 
        descriptors::GetSingleService::service_id, instance, descriptors::GetSingleService::method_id);
      });
#endif // WITH_ARA_IAM
}

  virtual ~AP_ServiceManagementInterfaceImpl() {}

  virtual ara::com::ap_servicemanagementinterface::proxy::methods::GetAllService& GetGetAllService() override {
      return *GetAllService;
  }
  virtual ara::com::ap_servicemanagementinterface::proxy::methods::GetSingleService& GetGetSingleService() override {
      return *GetSingleService;
  }

#ifdef WITH_ARA_CLIENTID
  virtual uint16_t GetClientId() override {
    return ::ara::com::internal::vsomeip::proxy::ProxyImplBase::GetClientId();
  }
#endif

 private:
  std::shared_ptr<::ara::com::internal::vsomeip::proxy::MethodImpl<descriptors::GetAllService, ara::com::ap_servicemanagementinterface::proxy::methods::GetAllService::signature_type>> GetAllService;
  std::shared_ptr<::ara::com::internal::vsomeip::proxy::MethodImpl<descriptors::GetSingleService, ara::com::ap_servicemanagementinterface::proxy::methods::GetSingleService::signature_type>> GetSingleService;
};

} // namespace vsomeip
} // namespace ap_servicemanagementinterface_binding
} // namespace ap_servicemanagementinterface
} // namespace com
} // namespace ara




#endif // AsfServiceDispatchingManagement_gen_AsfServiceDispatchingManagement_vsomeip_ara_com_ap_servicemanagementinterface_proxy_ap_servicemanagementinterface_h

