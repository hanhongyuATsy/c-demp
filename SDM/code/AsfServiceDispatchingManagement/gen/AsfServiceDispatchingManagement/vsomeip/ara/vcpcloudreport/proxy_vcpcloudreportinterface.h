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
#ifndef AsfServiceDispatchingManagement_gen_AsfServiceDispatchingManagement_vsomeip_ara_vcpcloudreport_proxy_vcpcloudreportinterface_h
#define AsfServiceDispatchingManagement_gen_AsfServiceDispatchingManagement_vsomeip_ara_vcpcloudreport_proxy_vcpcloudreportinterface_h


#include <memory>
#include "ara/com/internal/s2s/proxy/s2s_event_impl.h"
#include "service_desc_vcpcloudreportinterface.h"
#include "ara/vcpcloudreport/vcpcloudreportinterface_proxy_base.h"
#ifdef WITH_ARA_IAM 
#include "ara/iam/grantqueryclient/grant_query_client_impl.h"
#endif // WITH_ARA_IAM

#include "instantiate_template/vcpcloudreportinterface_instantiate_method_template.h"


namespace ara {
namespace vcpcloudreport {
namespace vcpcloudreportinterface_binding {
namespace vsomeip {

class VCPCloudReportInterfaceImpl : public proxy::VCPCloudReportInterfaceProxyBase, public ::ara::com::internal::vsomeip::proxy::ProxyImplBase {
 public:
  //using ProxyInterface = proxy::VCPCloudReportInterfaceProxy;
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

  VCPCloudReportInterfaceImpl(::ara::com::internal::InstanceId instance) :
      ::ara::com::internal::vsomeip::proxy::ProxyImplBase(ServiceDescriptor::service_id, instance, ServiceDescriptor::service_version, ServiceDescriptor::minor_service_version)
      ,
      ReportHighData(std::make_shared<::ara::com::internal::vsomeip::proxy::MethodImpl<descriptors::ReportHighData, ara::vcpcloudreport::proxy::methods::ReportHighData::signature_type>>(instance))
      ,
      ReportHighDataWithString(std::make_shared<::ara::com::internal::vsomeip::proxy::MethodImpl<descriptors::ReportHighDataWithString, ara::vcpcloudreport::proxy::methods::ReportHighDataWithString::signature_type>>(instance))
      ,
      ReportLowData(std::make_shared<::ara::com::internal::vsomeip::proxy::MethodImpl<descriptors::ReportLowData, ara::vcpcloudreport::proxy::methods::ReportLowData::signature_type>>(instance))
      ,
      ReportLowDataWithString(std::make_shared<::ara::com::internal::vsomeip::proxy::MethodImpl<descriptors::ReportLowDataWithString, ara::vcpcloudreport::proxy::methods::ReportLowDataWithString::signature_type>>(instance))
      ,
      ReportMidData(std::make_shared<::ara::com::internal::vsomeip::proxy::MethodImpl<descriptors::ReportMidData, ara::vcpcloudreport::proxy::methods::ReportMidData::signature_type>>(instance))
      ,
      ReportMidDataWithString(std::make_shared<::ara::com::internal::vsomeip::proxy::MethodImpl<descriptors::ReportMidDataWithString, ara::vcpcloudreport::proxy::methods::ReportMidDataWithString::signature_type>>(instance))
 {
#ifdef WITH_ARA_IAM 


      ReportHighData->SetIAMHandler([this, instance](){
        Judge_IAM(ara::iam::ifc::grantqueryclient::ResourceType::kComMethodGrant, 
        descriptors::ReportHighData::service_id, instance, descriptors::ReportHighData::method_id);
      });
      ReportHighDataWithString->SetIAMHandler([this, instance](){
        Judge_IAM(ara::iam::ifc::grantqueryclient::ResourceType::kComMethodGrant, 
        descriptors::ReportHighDataWithString::service_id, instance, descriptors::ReportHighDataWithString::method_id);
      });
      ReportLowData->SetIAMHandler([this, instance](){
        Judge_IAM(ara::iam::ifc::grantqueryclient::ResourceType::kComMethodGrant, 
        descriptors::ReportLowData::service_id, instance, descriptors::ReportLowData::method_id);
      });
      ReportLowDataWithString->SetIAMHandler([this, instance](){
        Judge_IAM(ara::iam::ifc::grantqueryclient::ResourceType::kComMethodGrant, 
        descriptors::ReportLowDataWithString::service_id, instance, descriptors::ReportLowDataWithString::method_id);
      });
      ReportMidData->SetIAMHandler([this, instance](){
        Judge_IAM(ara::iam::ifc::grantqueryclient::ResourceType::kComMethodGrant, 
        descriptors::ReportMidData::service_id, instance, descriptors::ReportMidData::method_id);
      });
      ReportMidDataWithString->SetIAMHandler([this, instance](){
        Judge_IAM(ara::iam::ifc::grantqueryclient::ResourceType::kComMethodGrant, 
        descriptors::ReportMidDataWithString::service_id, instance, descriptors::ReportMidDataWithString::method_id);
      });
#endif // WITH_ARA_IAM
}

  virtual ~VCPCloudReportInterfaceImpl() {}

  virtual ara::vcpcloudreport::proxy::methods::ReportHighData& GetReportHighData() override {
      return *ReportHighData;
  }
  virtual ara::vcpcloudreport::proxy::methods::ReportHighDataWithString& GetReportHighDataWithString() override {
      return *ReportHighDataWithString;
  }
  virtual ara::vcpcloudreport::proxy::methods::ReportLowData& GetReportLowData() override {
      return *ReportLowData;
  }
  virtual ara::vcpcloudreport::proxy::methods::ReportLowDataWithString& GetReportLowDataWithString() override {
      return *ReportLowDataWithString;
  }
  virtual ara::vcpcloudreport::proxy::methods::ReportMidData& GetReportMidData() override {
      return *ReportMidData;
  }
  virtual ara::vcpcloudreport::proxy::methods::ReportMidDataWithString& GetReportMidDataWithString() override {
      return *ReportMidDataWithString;
  }

#ifdef WITH_ARA_CLIENTID
  virtual uint16_t GetClientId() override {
    return ::ara::com::internal::vsomeip::proxy::ProxyImplBase::GetClientId();
  }
#endif

 private:
  std::shared_ptr<::ara::com::internal::vsomeip::proxy::MethodImpl<descriptors::ReportHighData, ara::vcpcloudreport::proxy::methods::ReportHighData::signature_type>> ReportHighData;
  std::shared_ptr<::ara::com::internal::vsomeip::proxy::MethodImpl<descriptors::ReportHighDataWithString, ara::vcpcloudreport::proxy::methods::ReportHighDataWithString::signature_type>> ReportHighDataWithString;
  std::shared_ptr<::ara::com::internal::vsomeip::proxy::MethodImpl<descriptors::ReportLowData, ara::vcpcloudreport::proxy::methods::ReportLowData::signature_type>> ReportLowData;
  std::shared_ptr<::ara::com::internal::vsomeip::proxy::MethodImpl<descriptors::ReportLowDataWithString, ara::vcpcloudreport::proxy::methods::ReportLowDataWithString::signature_type>> ReportLowDataWithString;
  std::shared_ptr<::ara::com::internal::vsomeip::proxy::MethodImpl<descriptors::ReportMidData, ara::vcpcloudreport::proxy::methods::ReportMidData::signature_type>> ReportMidData;
  std::shared_ptr<::ara::com::internal::vsomeip::proxy::MethodImpl<descriptors::ReportMidDataWithString, ara::vcpcloudreport::proxy::methods::ReportMidDataWithString::signature_type>> ReportMidDataWithString;
};

} // namespace vsomeip
} // namespace vcpcloudreportinterface_binding
} // namespace vcpcloudreport
} // namespace ara




#endif // AsfServiceDispatchingManagement_gen_AsfServiceDispatchingManagement_vsomeip_ara_vcpcloudreport_proxy_vcpcloudreportinterface_h

