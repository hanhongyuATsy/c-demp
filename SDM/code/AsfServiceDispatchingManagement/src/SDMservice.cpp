
#include <string>
#include <cstdint>
#include <cstdlib>
#include <random>
#include <atomic>
#include <iostream>
using namespace std;

//#ifdef AARCH64
#include "ara/core/future.h"
#include "ara/core/promise.h"

// includes for used services
#include "SDMservice.h"
#include "ServiceList.h"
#include "LogPrint.h"

using namespace ara;
using namespace com;
using namespace sdmservice;


namespace sdm
{
/*!
 *  \brief Class implementing skeleton methods.
 */
  ::ara::core::Future<SDMService::GetServiceInfoOutput> SDMServiceImp::GetServiceInfo(const ::ara::com::vsomeip::SDM_DataType_ServiceID& ServiceID,const ::ara::com::vsomeip::SDM_DataType_InstanceID& InstanceID)
  {
    sdmservice::SDMService::GetServiceInfoOutput output;
    sdm::service_info_t s;
    PrintLog( "method : SDMServiceImp::GetServiceInfo sid %4X iid %4X\n", ServiceID, InstanceID);
    // void* pqac = memset(&s, 0x0, sizeof(sdm::service_info_t));
    // if (pqac == nullptr) {
    //   PrintLog("memset  nullptr");
    // }
    

    s.service_id = ServiceID;
    s.instance_id = InstanceID;

    bool flag = ServiceList::GetInstance().GetServiceInfo(s);

    if (flag){
      output.ServiceInfo.serviceid = s.service_id;
	    output.ServiceInfo.instanceid = s.instance_id;
      output.ServiceInfo.ip = s.ip;
	    output.ServiceInfo.port = (uint16_t)s.port;
	    output.ServiceInfo.protocol = s.protocol;
	    output.ServiceInfo.version = s.major_version;
	    output.ServiceInfo.status = s.status;
      output.ServiceInfo.type = s.type;
    } else {
      output.ServiceInfo.serviceid = 0;
	    output.ServiceInfo.instanceid = 0;
    }


    char sip[16] = {0};
    std::sprintf(sip, "%d.%d.%d.%d", (s.ip >> 24) & 0xff, (s.ip >> 16) & 0xff, (s.ip >> 8) & 0xff, s.ip & 0xff);
    PrintLog("method : [sid: %4X ip: %x sip: %s] \n",s.service_id, s.ip, sip);

    // Set the promise value.
    ::ara::core::Future<SDMService::GetServiceInfoOutput>::PromiseType promise;
    promise.set_value(std::move(output));
    return promise.get_future();
  }
  
/*!
 *  \brief Class implementing skeleton methods.0：running 1：terminate 2：unknown
 */

::ara::core::Future<SDMService::GetServiceStatusOutput> SDMServiceImp::GetServiceStatus(const ::ara::com::vsomeip::SDM_DataType_ServiceID& ServiceID,
      const ::ara::com::vsomeip::SDM_DataType_InstanceID& InstanceID)
  {
    sdmservice::SDMService::GetServiceStatusOutput output;
    sdm::service_info_t s;
    // void* pqac = memset(&s, 0x0, sizeof(sdm::service_info_t));
    // if (pqac == nullptr){
    //   PrintLog("memset return null");
    // };
    s.service_id = ServiceID;
    s.instance_id = InstanceID;
    if (ServiceList::GetInstance().GetServiceInfo(s) ){
	    output.ServiceStatus = s.status;
    } else {
      output.ServiceStatus = 2;
    }

    // Set the promise value.
    ::ara::core::Future<SDMService::GetServiceStatusOutput>::PromiseType promise;
    promise.set_value(std::move(output));
     return promise.get_future();
  }

 ::ara::core::Future<SDMService::OfferServiceOutput> SDMServiceImp::OfferService(const ::ara::com::vsomeip::SDM_DataType_ServiceID& ServiceID,
        const ::ara::com::vsomeip::SDM_DataType_ServiceID& InstanceID,const ::SDM_DataType_ServiceInfo& ServiceInfo)  
  {
    sdmservice::SDMService::OfferServiceOutput output;
    PrintLog("OfferService");
    output.response = 0;
     //return promise.get_future();
     ::ara::core::Future<SDMService::OfferServiceOutput>::PromiseType promise;
    promise.set_value(std::move(output));
    return promise.get_future();
  }

  ::ara::core::Future<void> SDMServiceImp::ShowServices(const ::ara::com::vsomeip::SDM_DataType_PrintStyle& PrintStyle)
  {
    ServiceList::GetInstance().ShowServiceList();
    ::ara::core::Future<void>::PromiseType promise;
    return promise.get_future();
  }

  ::ara::core::Future<SDMService::StopOfferServiceOutput> SDMServiceImp::StopOfferService(const ::ara::com::vsomeip::SDM_DataType_ServiceID& ServiceID,
              const ::ara::com::vsomeip::SDM_DataType_ServiceID& InstanceID)
  {
    sdmservice::SDMService::StopOfferServiceOutput output;
    output.response = 0;
    PrintLog("OfferService");
     //return promise.get_future();
    ::ara::core::Future<SDMService::StopOfferServiceOutput>::PromiseType promise;
    promise.set_value(std::move(output));
    return promise.get_future();
  }


  // void SDMServiceImp::ProcessRequests()
  // {
  //   // method invocation processing thread
  //     while (!my_finished.load()) {
  //         std::chrono::time_point<std::chrono::system_clock> deadline
  //             = std::chrono::system_clock::now() + std::chrono::milliseconds(500);
  //     // <Name>Skeleton::ProcessNextMethodCall()：参见《NeuSARaCore_CM_API》
  //         auto request_finished = ProcessNextMethodCall(); //request_finished: ara::core::Future<bool>
  //         if (request_finished.wait_until(deadline) != decltype(request_finished)::Status::kReady) {
  //             PrintLog( "Request took too long time" );
  //         } else {
  //             if (!my_finished.load()) {
  //                 std::this_thread::sleep_until(deadline);
  //             }
  //         }
  //     }
  // }



  SDMAppInterface::SDMAppInterface()
  {
    //sdm_skeleton = new SDMServiceImp(ara::com::InstanceIdentifier(1), ara::com::MethodCallProcessingMode::kPoll);
    sdm_skeleton = new SDMServiceImp(ara::com::InstanceIdentifier(1), ara::com::MethodCallProcessingMode::kEventSingleThread);
    PrintLog( "server object address\n");
  }
  SDMAppInterface::~SDMAppInterface(){}

  void SDMAppInterface::Init()
  {
    PrintLog( "[SDM OfferService]\n");
    sdm_skeleton->OfferService();
  }

  void SDMAppInterface::Run()
  {
  }

}  

