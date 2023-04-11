
#include "adapter_sdmservice.h"
#include "ara/com/sdmservice/sdmservice_skeleton.h"

namespace ara {
namespace com {
namespace sdmservice {
namespace sdmservice_binding {
namespace vsomeip {

  SDMServiceServiceAdapter::SDMServiceServiceAdapter(::ara::com::internal::skeleton::ServiceBase& service, ::ara::com::internal::InstanceId instance) :
    ::ara::com::internal::vsomeip::skeleton::ServiceImplBase(service, instance)
 {
    RegisterMethodDispatcher(ServiceDescriptor::service_id,
                             [this](const std::shared_ptr<::vsomeip::message>& msg) { DispatchMethodCall(msg); });

#ifdef WITH_ARA_IAM 
    ara::iam::ifc::grantqueryclient::InterfaceResourceInfo resource_info(//0429
    ara::iam::ifc::grantqueryclient::ResourceType::kComOfferServiceGrant,
    ara::iam::ifc::grantqueryclient::ProtoType::kComSomeip,
    ara::iam::ifc::grantqueryclient::DirType::kPdir, 
    ServiceDescriptor::service_id, instance, "");

    ara::iam::ifc::grantqueryclient::IAMGrantQueryClientImpl grant_query_client;
    ara::core::Result<ara::iam::ifc::grantqueryclient::HasGrantQueryResult> res = grant_query_client.HasGrant(resource_info);
   // std::cout << "OfferService service_id:" << ServiceDescriptor::service_id << " instance:" << instance << "OfferService result:" << uint32_t(res.Value()) << std::endl;
    if(ara::iam::ifc::grantqueryclient::HasGrantQueryResult::kDoesNotRegisterProcess != res.Value()
    && ara::iam::ifc::grantqueryclient::HasGrantQueryResult::kHasGrant != res.Value()){
        throw ara::com::ComErrc(ara::com::ComErrc::kIamCheckFailure);
    }
#endif // WITH_ARA_IAM

    OfferService(ServiceDescriptor::service_id, GetInstanceId(), ServiceDescriptor::service_version, ServiceDescriptor::minor_service_version);
    Connect(service);
  }


  SDMServiceServiceAdapter::~SDMServiceServiceAdapter() {
    StopOfferService(ServiceDescriptor::service_id, GetInstanceId(), ServiceDescriptor::service_version, ServiceDescriptor::minor_service_version);
    UnregisterMethodDispatcher(ServiceDescriptor::service_id);
    Disconnect(service_);
  }
  void SDMServiceServiceAdapter::DispatchMethodCall(const std::shared_ptr<::vsomeip::message>& msg) {
    ServiceInterface& service = dynamic_cast<ServiceInterface&>(service_);
    switch(msg->get_method()) {
      case descriptors::GetServiceInfo::method_id:
        HandleCall<descriptors::GetServiceInfo>(service, &ServiceInterface::GetServiceInfo, msg);
        break;
      case descriptors::GetServiceStatus::method_id:
        HandleCall<descriptors::GetServiceStatus>(service, &ServiceInterface::GetServiceStatus, msg);
        break;
      case descriptors::OfferService::method_id:
        HandleCall<descriptors::OfferService>(service, &ServiceInterface::OfferService, msg);
        break;
      case descriptors::ShowServices::method_id:
        HandleCall<descriptors::ShowServices>(service, &ServiceInterface::ShowServices, msg);
        break;
      case descriptors::StopOfferService::method_id:
        HandleCall<descriptors::StopOfferService>(service, &ServiceInterface::StopOfferService, msg);
        break;
      default:
        SendErrorMessage(msg, ::vsomeip::return_code_e::E_UNKNOWN_METHOD);
        break;
    }
  }

  void SDMServiceServiceAdapter::Connect(::ara::com::internal::skeleton::ServiceBase& service_base) {
    ServiceInterface& service = dynamic_cast<ServiceInterface&>(service_base);
    service.AddDelegate(*this);
  }

  void SDMServiceServiceAdapter::Disconnect(::ara::com::internal::skeleton::ServiceBase& service_base) {
    ServiceInterface& service = dynamic_cast<ServiceInterface&>(service_base);
    service.RemoveDelegate(*this);
  }

} // namespace vsomeip
} // namespace sdmservice_binding
} // namespace sdmservice
} // namespace com
} // namespace ara

