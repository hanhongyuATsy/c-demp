/**
 * @file  FGServiceListManager.cpp
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
#include "FGServiceListManager.h"

#include "LocalServiceCollector.h"
#include "CloudServiceCollector.h"
#include "ConfigServiceCollector.h"
namespace sdm
{
    //namespace extensionlib
    //{
        /**
         * @brief ServiceDynamicDiscoverySupporter
         */

FGServiceListManager::FGServiceListManager()
{
    sc_local =  new LocalServiceCollector;
    sc_cloud =  new CloudServiceCollector;
    sc_config = new ConfigServiceCollector;
}
FGServiceListManager::~FGServiceListManager()
{
    if (sc_local)
    {
        delete sc_local;
        sc_local = 0;
    }
    if (sc_cloud)
    {
        delete sc_cloud;
        sc_cloud = 0;
    }
    if (sc_config)
    {
        delete sc_config;
        sc_config = 0;
    }
}

            /**
             * @brief 创建对象
             * @param  
             * @return  
             */
void FGServiceListManager::FunctionInit()
{

    // PrintLog("FunctionInit\n");
}
            /**
             * @brief 生成初始化列表，注册服务变化通知
             * @param  
             * @return  
             */
void  FGServiceListManager::FunctionRun() 
{
    // PrintLog("FunctionRun\n");
}
        
    //}
}
