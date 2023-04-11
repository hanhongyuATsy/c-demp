/**
 * @file  FGServiceListManager.h
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
#ifndef FG_SERVICE_LIST_MANAGER_H
#define FG_SERVICE_LIST_MANAGER_H
#include "FGBase.h"
#include "LogPrint.h"
//#include "ServiceCollectorBase.h"

namespace sdm
{
    //namespace extensionlib
    //{
        /**
         * @brief ServiceDynamicDiscoverySupporter
         */
    class ServiceCollectorBase;
        class FGServiceListManager: public FGBase
	{
        public:
            FGServiceListManager();
            ~FGServiceListManager() noexcept;

        public:
            /**
             * @brief 创建对象
             * @param  
             * @return  
             */
            void FunctionInit() override; 
            /**
             * @brief 生成初始化列表，注册服务变化通知
             * @param  
             * @return  
             */
            void FunctionRun()   override;

        private:
            ServiceCollectorBase *sc_local = nullptr;
            ServiceCollectorBase *sc_cloud =  nullptr;
            ServiceCollectorBase *sc_config =  nullptr;
        };
    //}
}
#endif
