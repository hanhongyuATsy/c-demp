
/**
 * @file  ServiceStateClientProxy.h
 * @brief 对服务调度管理用到的配置文件进行管理 
 * @author 
 * @version 1.0
 * @date 2023-01-29
 *
 * @par 日志:
 * <table>
 * <tr><th>Date       <th>Version <th>Author  <th>Description
 * <tr><td>2023-01-29  <td>1.0     <td>hhy <td>新建
 * </table>
 */

#ifndef _SERVICE_STATE_CLIENT_PROXY__
#define _SERVICE_STATE_CLIENT_PROXY__

using namespace std;


#include "ara/core/future.h"
#include "ara/core/promise.h"

// includes for used services
#include "ara/vcpcloudreport/vcpcloudreportinterface_proxy.h"


namespace sdm
{
/*!
 *  \brief Class implementing skeleton methods.
 */

class ServiceStateClientProxy
{
    using SSProxy = ara::vcpcloudreport::proxy::VCPCloudReportInterfaceProxy;
    
public:
    ServiceStateClientProxy();
    ~ServiceStateClientProxy() noexcept {};
    void Init();
    void UploadServiceState();
 
private:
    /*!
     * \brief Defines how the incoming service method invocations are processed.
     */
    std::shared_ptr<SSProxy> _proxy;
    void ServiceAvailabilityCallback(ara::com::ServiceHandleContainer<SSProxy::HandleType> handles, 
    ara::com::FindServiceHandle findServiceHandle);

};

}
#endif  // MY_SERVER_ACTIVITY_HPP_
