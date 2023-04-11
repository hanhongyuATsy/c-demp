
/**
 * @file  FGServiceStateManager.h
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
#ifndef FG_SERVICE_STATE_MANAGER_H
#define FG_SERVICE_STATE_MANAGER_H
#include "FGBase.h"
#include "def.h"
#include "LogPrint.h"
#include "ServiceStateClientProxy.h" 

namespace sdm
{
    //namespace extensionlib
    //{
        /**
         * @brief ServiceDynamicDiscoverySupporter
         */
        class FGServiceStateManager : public FGBase
        {
        public:
            FGServiceStateManager();
            ~FGServiceStateManager();

        public:
            /**
             * @brief 初始化，建立与云端通讯通路
             * @param  
             * @return  
             */
            void FunctionInit()  override;   
            /**
             * @brief 注册服务列表变化通知
             * @param  
             * @return  
             */
            void FunctionRun()  override; 
        private :
            //std::shared_ptr<sdm::ServiceStateClientProxy> _sscp; 
            void service_info_callback(int, const service_info_t&);
        };
    //};
}
#endif