/**
 * @file  FGBase.h
 * @brief 功能模块基类
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
#ifndef FG_BASE_H
#define FG_BASE_H
#include "LogPrint.h"
namespace sdm
{
    //namespace extensionlib
    //{
        /**
         * @brief ServiceDynamicDiscoverySupporter
         */
        class FGBase
        {
        public:
            FGBase() {};
            virtual ~FGBase() {};

        public:
            /**
             * @brief 初始化，获取ConfigOperation
             * @param  
             * @return  
             */
            virtual void  FunctionInit() = 0;   // 
            /**
             * @brief 注册服务列表变化通知
             * @param  
             * @return  
             */
            virtual void  FunctionRun() = 0;  // 
        };
    //}
}



#endif