
#include "ServiceStateClientProxy.h"
#include "LogPrint.h"
using namespace std;


namespace sdm
{
/*!
 *  \brief Class implementing skeleton methods.
 */

ServiceStateClientProxy::ServiceStateClientProxy()
{

}
void ServiceStateClientProxy::Init()
{
    SSProxy::StartFindService([this](ara::com::ServiceHandleContainer<SSProxy::HandleType> handles, 
    ara::com::FindServiceHandle findServiceHandle) { ServiceStateClientProxy::ServiceAvailabilityCallback(std::move(handles), findServiceHandle);
    });
   
}
    
 
    
void ServiceStateClientProxy::ServiceAvailabilityCallback(const ara::com::ServiceHandleContainer<SSProxy::HandleType> handles, 
    const ara::com::FindServiceHandle findServiceHandle)
{

    for(auto it :handles)
    {
        //_logger.LogInfo() << "Instance "<< static_cast<uint16_t>(it.GetInstanceId()) << " is available";
        // PrintLog("Instance ");
    }
    if (handles.size() > (std::size_t)0)
    {
        if(_proxy == nullptr)
        {
            _proxy = std::make_shared<SSProxy>(handles[0]);
            // PrintLog("Create proxy from handle with instance: ");
            //_logger.LogInfo() << "UCM: Create proxy from handle with instance: "
            //     <<static_cast<uint16_t>(_proxy->GetHandle().GetInstanceId());
        }
    }
    else
    {
        _proxy = nullptr;
    }
}

void ServiceStateClientProxy:: UploadServiceState()
{
    // PrintLog("UploadServiceState ");
   // _proxy_.UploadServiceState();
}

};


