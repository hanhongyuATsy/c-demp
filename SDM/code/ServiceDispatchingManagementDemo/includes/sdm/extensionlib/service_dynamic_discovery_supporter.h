/**
 * @file service_dynamic_discovery_supporter.h
 * @brief 动态更新vsomeip.json配置文件，用于实现动态服务发现/调用能力 
 * @author 
 * @version 1.0
 * @date 2023-01-04
 *
 * @par 日志:
 * <table>
 * <tr><th>Date       <th>Version <th>Author  <th>Description
 * <tr><td>2023-01-04  <td>1.0     <td>hhy <td>新建
 * <tr><td>2023-02-03  <td>1.0     <td>zhangsi <td>修改
 * </table>
 */
#ifndef SERVICE_DYNAMIC_DISCOVERY_SUPPORTER_H
#define SERVICE_DYNAMIC_DISCOVERY_SUPPORTER_H

#include <iostream>
#include <stdint.h>
#include <thread>
#include <queue>
#include <unistd.h>
#include <map>
#include <queue>
#include <vector>
#include <thread>
#include <functional>
#include <condition_variable>

namespace sdm
{
namespace extensionlib
{

typedef std::function <void  (const uint16_t & _serviceid, const uint16_t & _instanceid, const bool & result)> finish_notify_handler_t;

class ServiceDynamicDiscoverySupporter
{
public:
    static ServiceDynamicDiscoverySupporter& GetInstance();
    virtual ~ServiceDynamicDiscoverySupporter();

public:
    /**
     * @brief 切换到最新的vsomeip.json配置文件，可执行程序启动后调用，先于vsomeip的CreateApplication调用
     * @param  
     * @return  bool (true  初始化成功， false 初始化失败)
     */
    bool Init();

    /**
     * @brief  判断当前服务是否可调用，并通知动态服务调用模块更新配置文件。服务发现前调用
     * @param _serviceid     服务ID
     * @param _instanceid    服务实例ID
     * @return int         (0：当前服务在配置文件中已存在，可调用1：当前服务在配置文件中不存在，不可调用，次回启动后可用2：未预期的错误) 
     */
    int RequestService(uint16_t _serviceid, uint16_t _instanceid);

        /**
     * @brief  判断当前服务是否可调用，并通知动态服务调用模块更新配置文件。服务发现前调用
     * @param _serviceid     服务ID
     * @param _instanceid    服务实例ID
     * @return int         (0：当前服务在vsomeip.json配置文件中已存在 1：当前服务在配置文件中不存在，等待回调通知结果； 2：未预期的错误) 
     */
    int RequestService(uint16_t _serviceid, uint16_t _instanceid, finish_notify_handler_t _handler);

private:
    ServiceDynamicDiscoverySupporter();
    void RequestServiceNotify(const uint16_t & _serviceid, const uint16_t & _instanceid, const bool & result);
};

} //namespace extensionlib
} //namespace sdm

#endif //SERVICE_DYNAMIC_DISCOVERY_SUPPORTER_H
