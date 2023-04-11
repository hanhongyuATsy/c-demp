#ifndef _SDM_SERVICE_H__
#define _SDM_SERVICE_H__

#include <string>
#include <cstdint>
#include <cstdlib>
#include <random>
#include <atomic>
#include <iostream>
using namespace std;


#include "ara/core/future.h"
#include "ara/core/promise.h"

// includes for used services
#include "ara/com/sdmservice/sdmservice_skeleton.h"


  

namespace sdm
{
/*!
 *  \brief Class implementing skeleton methods.
 */
class SDMServiceImp : public ara::com::sdmservice::skeleton::SDMServiceSkeleton
{
    using sdmSkeleton = ara::com::sdmservice::skeleton::SDMServiceSkeleton;

public:
    // SDMServiceImp(ara::com::InstanceIdentifier instance, ara::com::MethodCallProcessingMode mode)
    //     : sdmSkeleton(instance, mode)
    //     , my_worker(&SDMServiceImp::ProcessRequests, this)
    //     , my_method_count(0)
    // {
    //}
        SDMServiceImp(ara::com::InstanceIdentifier instance, ara::com::MethodCallProcessingMode mode)
        : sdmSkeleton(instance, mode)
    {
    }

    virtual ~SDMServiceImp() noexcept
    {
        //my_finished = true;
        //my_worker.join();
    }

    // virtual auto GetServiceInfo(const ::ara::com::vsomeip::SDM_DataType_ServiceID& ServiceID,const ::ara::com::vsomeip::SDM_DataType_InstanceID& InstanceID)
    //     ->decltype(sdmSkeleton::GetServiceInfo(ServiceID,InstanceID)) override;

    // virtual auto GetServiceStatus(const ::ara::com::vsomeip::SDM_DataType_ServiceID& ServiceID,const ::ara::com::vsomeip::SDM_DataType_InstanceID& InstanceID)
    //     ->decltype(sdmSkeleton::GetServiceStatus(ServiceID,InstanceID)) override;

    // virtual auto OfferService(const ::ara::com::vsomeip::SDM_DataType_ServiceID& ServiceID,const ::ara::com::vsomeip::SDM_DataType_InstanceID& InstanceID, const ::ara::com::vsomeip::SDM_DataType_ServiceID& ServiceInfo)
    //     ->decltype(sdmSkeleton::OfferService(ServiceID,InstanceID)) override;

    // virtual auto StopOfferService(const ::ara::com::vsomeip::SDM_DataType_ServiceID& ServiceID,const ::ara::com::vsomeip::SDM_DataType_InstanceID& InstanceID)
    //     ->decltype(sdmSkeleton::StopOfferService(ServiceID,InstanceID)) override;

    // virtual auto ShowServices(const::ara::com::vsomeip::SDM_DataType_ServiceID& PrintStyle)
    //     ->decltype(sdmSkeleton::ShowServices(PrintStyle)) override;
virtual ::ara::core::Future<SDMService::GetServiceInfoOutput> GetServiceInfo(const ::ara::com::vsomeip::SDM_DataType_ServiceID& ServiceID,const ::ara::com::vsomeip::SDM_DataType_InstanceID& InstanceID) override;
virtual ::ara::core::Future<SDMService::GetServiceStatusOutput> GetServiceStatus(const ::ara::com::vsomeip::SDM_DataType_ServiceID& ServiceID,const ::ara::com::vsomeip::SDM_DataType_InstanceID& InstanceID) override;
virtual ::ara::core::Future<SDMService::OfferServiceOutput> OfferService(const ::ara::com::vsomeip::SDM_DataType_ServiceID& ServiceID,
        const ::ara::com::vsomeip::SDM_DataType_ServiceID& InstanceID,const ::SDM_DataType_ServiceInfo& ServiceInfo)  override;
virtual ::ara::core::Future<void> ShowServices(const ::ara::com::vsomeip::SDM_DataType_PrintStyle& PrintStyle) override;
virtual ::ara::core::Future<SDMService::StopOfferServiceOutput> StopOfferService(const ::ara::com::vsomeip::SDM_DataType_ServiceID& ServiceID,const ::ara::com::vsomeip::SDM_DataType_ServiceID& InstanceID) override;

private:
    /*!
     * \brief Defines how the incoming service method invocations are processed.
     */
    //void ProcessRequests();

    //std::atomic<bool> my_finished{false};
    //std::thread my_worker; // method invocation processing thread
    //std::uint32_t my_method_count;
};

/*!
 *  \brief Class implementing for server activity.
 *
 *  Server activity implementing function for <VCPAppInterface>.
 */
class SDMAppInterface
{
public:
    SDMAppInterface();
    ~SDMAppInterface();

    /*!
     *  \brief Initializes server activity.
     */
    void Init();

    /*!
     *  \brief Runs server activity.
     */
    void Run();

protected:
     ara::com::sdmservice::skeleton::SDMServiceSkeleton * sdm_skeleton=nullptr; //a pointer to the skeleton object

};
}  // namespace server

#endif  // MY_SERVER_ACTIVITY_HPP_
