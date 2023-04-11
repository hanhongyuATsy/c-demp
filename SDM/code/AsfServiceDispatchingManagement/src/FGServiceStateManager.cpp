
/**
 * @file  FGServiceStateManager.cpp
 * @brief 实现对服务列表的管理 
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

#include "FGServiceStateManager.h"
#include "ServiceList.h"

namespace sdm
{
    //namespace extensionlib
    //{
        /**
         * @brief ServiceDynamicDiscoverySupporter
         */


FGServiceStateManager::FGServiceStateManager()
{

}

FGServiceStateManager::~FGServiceStateManager()
{

}


            /**
             * @brief 初始化，建立与云端通讯通路
             * @param  
             * @return  
             */
void FGServiceStateManager::service_info_callback(int, const service_info_t&)
{
    // PrintLog("service_info_callback\n");
    //_sscp->UploadServiceState();
}
void FGServiceStateManager::FunctionInit() 
{
    // PrintLog("FunctionInit\n");
    //_sscp = std::make_shared<sdm::ServiceStateClientProxy>();
    ServiceList &sl = ServiceList::GetInstance();
    
    unsigned int token = sl.RegisterServiceAlterationNotify(std::bind(&FGServiceStateManager::service_info_callback, this, std::placeholders::_1,std::placeholders::_2));
    if (token == 0) {
        ErrorLog("Register fail");
    }

    return;
}  

            /**
             * @brief 注册服务列表变化通知
             * @param  
             * @return  
             */
void FGServiceStateManager::FunctionRun() 
{
    // PrintLog("FunctionRun\n");
}

        
    //}
}
