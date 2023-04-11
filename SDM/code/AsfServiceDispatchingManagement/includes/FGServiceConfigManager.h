/**
 * @file  FGServiceConfigManager.h
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
#include "FGBase.h"
#include "ConfigOperation.h"


#ifndef FG_SERVICE_CONFIG_MANAGER_H
#define FG_SERVICE_CONFIG_MANAGER_H

#include <string>

#include "libs/jsoncpp/json.h"
#include "libs/xpack/json.h"

namespace sdm
{
    //namespace service
    //{

        /**
         * @brief ServiceDynamicDiscoverySupporter
         */
        using namespace std;
        struct ServiceListConfigType_xpack{
            string  service;
            string  instance;
            string  major_version;
            string  ip;
            string  protocol;
            string  port;
            string  type;
            XPACK(O(service, instance, major_version, ip, protocol,port,type));
        };
        class FGServiceConfigManager: public FGBase
        {
        public:
            FGServiceConfigManager();
            ~FGServiceConfigManager() noexcept {};

        public:
            /**
             * @brief 初始化，获取ConfigOperation
             * @param  
             * @return  
             */
            void FunctionInit() override;   // 
            /**
             * @brief 注册服务列表变化通知
             * @param  
             * @return  
             */
            void FunctionRun()  override;  // 

        private:
            std::string CfgServiceListValue;
            bool getFileContent(const std::string & strFileName);
            bool parseServiceConfigContent(); 
            std::vector<std::string> split(const std::string& in, const std::string& delim);
            unsigned int ipstr2int(std::string ipstr);
        };
    //}
}



#endif
