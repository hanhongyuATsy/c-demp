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
#ifndef ServiceDispatchingManagementDemo_gen_ServiceDispatchingManagementDemo_vsomeip_ara_com_sdmservice_proxy_sdmservice_h
#define ServiceDispatchingManagementDemo_gen_ServiceDispatchingManagementDemo_vsomeip_ara_com_sdmservice_proxy_sdmservice_h


#include <memory>
#include "ara/com/internal/s2s/proxy/s2s_event_impl.h"
#include "service_desc_sdmservice.h"
#include "ara/com/sdmservice/sdmservice_proxy_base.h"
#ifdef WITH_ARA_IAM 
#include "ara/iam/grantqueryclient/grant_query_client_impl.h"
#endif // WITH_ARA_IAM

#include "instantiate_template/sdmservice_instantiate_method_template.h"


namespace ara {
namespace com {
namespace sdmservice {
namespace sdmservice_binding {
namespace vsomeip {

class SDMServiceImpl : public proxy::SDMServiceProxyBase, public ::ara::com::internal::vsomeip::proxy::ProxyImplBase {
 public:
  //using ProxyInterface = proxy::SDMServiceProxy;
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

  SDMServiceImpl(::ara::com::internal::InstanceId instance) :
      ::ara::com::internal::vsomeip::proxy::ProxyImplBase(ServiceDescriptor::service_id, instance, ServiceDescriptor::service_version, ServiceDescriptor::minor_service_version)
      ,
      GetServiceInfo(std::make_shared<::ara::com::internal::vsomeip::proxy::MethodImpl<descriptors::GetServiceInfo, ara::com::sdmservice::proxy::methods::GetServiceInfo::signature_type>>(instance))
      ,
      GetServiceStatus(std::make_shared<::ara::com::internal::vsomeip::proxy::MethodImpl<descriptors::GetServiceStatus, ara::com::sdmservice::proxy::methods::GetServiceStatus::signature_type>>(instance))
      ,
      OfferService(std::make_shared<::ara::com::internal::vsomeip::proxy::MethodImpl<descriptors::OfferService, ara::com::sdmservice::proxy::methods::OfferService::signature_type>>(instance))
      ,
      ShowServices(std::make_shared<::ara::com::internal::vsomeip::proxy::MethodImpl<descriptors::ShowServices, ara::com::sdmservice::proxy::methods::ShowServices::signature_type>>(instance))
      ,
      StopOfferService(std::make_shared<::ara::com::internal::vsomeip::proxy::MethodImpl<descriptors::StopOfferService, ara::com::sdmservice::proxy::methods::StopOfferService::signature_type>>(instance))
 {
#ifdef WITH_ARA_IAM 


      GetServiceInfo->SetIAMHandler([this, instance](){
        Judge_IAM(ara::iam::ifc::grantqueryclient::ResourceType::kComMethodGrant, 
        descriptors::GetServiceInfo::service_id, instance, descriptors::GetServiceInfo::method_id);
      });
      GetServiceStatus->SetIAMHandler([this, instance](){
        Judge_IAM(ara::iam::ifc::grantqueryclient::ResourceType::kComMethodGrant, 
        descriptors::GetServiceStatus::service_id, instance, descriptors::GetServiceStatus::method_id);
      });
      OfferService->SetIAMHandler([this, instance](){
        Judge_IAM(ara::iam::ifc::grantqueryclient::ResourceType::kComMethodGrant, 
        descriptors::OfferService::service_id, instance, descriptors::OfferService::method_id);
      });
      ShowServices->SetIAMHandler([this, instance](){
        Judge_IAM(ara::iam::ifc::grantqueryclient::ResourceType::kComMethodGrant, 
        descriptors::ShowServices::service_id, instance, descriptors::ShowServices::method_id);
      });
      StopOfferService->SetIAMHandler([this, instance](){
        Judge_IAM(ara::iam::ifc::grantqueryclient::ResourceType::kComMethodGrant, 
        descriptors::StopOfferService::service_id, instance, descriptors::StopOfferService::method_id);
      });
#endif // WITH_ARA_IAM
}

  virtual ~SDMServiceImpl() {}

  virtual ara::com::sdmservice::proxy::methods::GetServiceInfo& GetGetServiceInfo() override {
      return *GetServiceInfo;
  }
  virtual ara::com::sdmservice::proxy::methods::GetServiceStatus& GetGetServiceStatus() override {
      return *GetServiceStatus;
  }
  virtual ara::com::sdmservice::proxy::methods::OfferService& GetOfferService() override {
      return *OfferService;
  }
  virtual ara::com::sdmservice::proxy::methods::ShowServices& GetShowServices() override {
      return *ShowServices;
  }
  virtual ara::com::sdmservice::proxy::methods::StopOfferService& GetStopOfferService() override {
      return *StopOfferService;
  }

#ifdef WITH_ARA_CLIENTID
  virtual uint16_t GetClientId() override {
    return ::ara::com::internal::vsomeip::proxy::ProxyImplBase::GetClientId();
  }
#endif

 private:
  std::shared_ptr<::ara::com::internal::vsomeip::proxy::MethodImpl<descriptors::GetServiceInfo, ara::com::sdmservice::proxy::methods::GetServiceInfo::signature_type>> GetServiceInfo;
  std::shared_ptr<::ara::com::internal::vsomeip::proxy::MethodImpl<descriptors::GetServiceStatus, ara::com::sdmservice::proxy::methods::GetServiceStatus::signature_type>> GetServiceStatus;
  std::shared_ptr<::ara::com::internal::vsomeip::proxy::MethodImpl<descriptors::OfferService, ara::com::sdmservice::proxy::methods::OfferService::signature_type>> OfferService;
  std::shared_ptr<::ara::com::internal::vsomeip::proxy::MethodImpl<descriptors::ShowServices, ara::com::sdmservice::proxy::methods::ShowServices::signature_type>> ShowServices;
  std::shared_ptr<::ara::com::internal::vsomeip::proxy::MethodImpl<descriptors::StopOfferService, ara::com::sdmservice::proxy::methods::StopOfferService::signature_type>> StopOfferService;
};

} // namespace vsomeip
} // namespace sdmservice_binding
} // namespace sdmservice
} // namespace com
} // namespace ara




#endif // ServiceDispatchingManagementDemo_gen_ServiceDispatchingManagementDemo_vsomeip_ara_com_sdmservice_proxy_sdmservice_h

