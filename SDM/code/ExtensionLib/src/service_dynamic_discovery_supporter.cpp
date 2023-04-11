/**
 * @file service_dynamic_discovery_supporter.cpp
 * @brief 动态更新vsomeip.json配置文件，用于实现动态服务发现/调用能力
 * @author
 * @version 2.0
 * @date 2023-01-4
 *
 * @par 日志:
 * <table>
 * <tr><th>Date       <th>Version <th>Author  <th>Description
 * <tr><td>2023-01-4  <td>1.0     <td>hhy <td>新建
 * <tr><td>2023-02-03  <td>1.0     <td>zhangsi <td>修改
 * </table>
 */

#include "service_dynamic_discovery_supporter.h"
#include "LogPrint.h"
#include <fstream>

#include <sys/stat.h>
#include <unistd.h>
#include <stdlib.h>
#include <vsomeip/vsomeip.hpp>
#include <condition_variable>
#include "libs/jsoncpp/json.h"
#include "libs/xpack/json.h"
#include <iomanip>
#include <iostream>
#include <sstream>
#include <condition_variable>
#include <thread>
#include <unistd.h>

#include "SomeIpConfigFileOperation.h"

namespace sdm
{
    namespace extensionlib
    {

        std::shared_ptr<SomeIpConfigFileOperation> scfo_ = std::make_shared<SomeIpConfigFileOperation>(); 
        /**
         * @brief ServiceDynamicDiscoverySupporter
         */
        ServiceDynamicDiscoverySupporter::ServiceDynamicDiscoverySupporter()
        {
            // std::cout<<"ServiceDynamicDiscoverySupporter"<<std::endl;
        }

        ServiceDynamicDiscoverySupporter::~ServiceDynamicDiscoverySupporter()
        {
            //  std::cout<<"~ServiceDynamicDiscoverySupporter"<<std::endl;
        }

        ServiceDynamicDiscoverySupporter &ServiceDynamicDiscoverySupporter::GetInstance()
        {
            static ServiceDynamicDiscoverySupporter instance;
            return instance;
        }

        /**
         * @brief 切换到最新的vsomeip.json配置文件，可执行程序启动后调用，先于vsomeip的CreateApplication调用
         * @param
         * @return
         */
        bool ServiceDynamicDiscoverySupporter::Init()
        {
            TraceLog("Init is called!!!\n");
            if (scfo_ != nullptr){
                return scfo_->Init();
            } else {
                return false;
            }
        }

        /**
         * @brief  判断当前服务是否可调用，并通知动态服务调用模块更新配置文件。服务发现前调用
         * @param serviceid     服务ID
         * @param instanceid    服务实例ID
         * @return int         (0：当前服务在配置文件中已存在，可调用1：当前服务在配置文件中不存在，不可调用，次回启动后可用2：未预期的错误)
         */
        int ServiceDynamicDiscoverySupporter::RequestService(uint16_t _serviceid, uint16_t _instanceid)
        {
            if (scfo_ != nullptr) {
                return scfo_->RequestService(_serviceid, _instanceid, std::bind(&ServiceDynamicDiscoverySupporter::RequestServiceNotify, this, std::placeholders::_1,std::placeholders::_2,std::placeholders::_3));
            } else {
                return 2;
            }
                
        }

        /**
         * @brief  判断当前服务是否可调用，并通知动态服务调用模块更新配置文件。服务发现前调用
         * @param serviceid     服务ID
         * @param instanceid    服务实例ID
         * @return int         (0：当前服务在配置文件中已存在，可调用1：当前服务在配置文件中不存在，不可调用，次回启动后可用2：未预期的错误)
         */
        int ServiceDynamicDiscoverySupporter::RequestService(uint16_t _serviceid, uint16_t _instanceid, finish_notify_handler_t _handler)
        {
            if (_handler != nullptr) {
                return scfo_->RequestService(_serviceid, _instanceid, _handler);
            } else {
                return 2;
            }  
        }

        void ServiceDynamicDiscoverySupporter::RequestServiceNotify(const uint16_t & _serviceid, const uint16_t & _instanceid, const bool & result)
        {
            if (result)
                PrintLog(" serviceID: %x  InstanceID: %x  success!!\n", _serviceid, _instanceid);
            else 
                PrintLog(" serviceID: %x  InstanceID: %x  false!!\n", _serviceid, _instanceid);
            return ;
        }


    } // namespace extensionlib
} // namespace sdm
