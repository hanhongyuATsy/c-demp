/**
 * @file SomeIpConfigFileOperation.h
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
#ifndef SOMEIP_CONFIGFILE_OPERATION_H
#define SOMEIP_CONFIGFILE_OPERATION_H

#include <iostream>
#include <stdint.h>
#include <thread>
#include <queue>

#if defined(__GNUC__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#elif defined(_MSC_VER)
#pragma warning(disable : 4996)
#endif

#include "SomeIpCommunicationProxy.h"
namespace sdm
{
namespace extensionlib
{

struct message_t
{
    uint16_t sid;
    uint16_t iid;
};

typedef std::function <void  (const uint16_t & _serviceid, const uint16_t & _instanceid, const bool & result)> updatefile_notify_handler_t;

class SomeIpConfigFileOperation
{
public:
    SomeIpConfigFileOperation();
    virtual ~SomeIpConfigFileOperation();

public:
    /**
     * @brief 切换到最新的vsomeip.json配置文件，可执行程序启动后调用，先于vsomeip的CreateApplication调用
     * @param  
     * @return  
     */
    bool Init();

    /**
     * @brief  判断当前服务是否可调用，并通知动态服务调用模块更新配置文件。服务发现前调用
     * @param _serviceid     服务ID
     * @param _instanceid    服务实例ID
     * @return int         (0：当前服务在配置文件中已存在，可调用1：当前服务在配置文件中不存在，不可调用，次回启动后可用2：未预期的错误) 
     */
    int RequestService(uint16_t _serviceid, uint16_t _instanceid, updatefile_notify_handler_t _handler);

    private:
        std::shared_ptr<SomeIpCommunicationProxy> comm_;
        
        updatefile_notify_handler_t UpdateSomeipJsonFileFinish;

        bool fileCopy(const std::string& _srcpath, const std::string& _dstpath);
        bool fileExist(const std::string& _path);
        bool fileCmpare(const std::string &_srcpath, const std::string &_dstpath);
        std::string hex2string(uint16_t hex);
        void add_service(const uint16_t& _service_id, const uint16_t& _instance_id);
        void pushMessage(uint16_t _service_id, uint16_t _instance_id);
        bool popMessage(uint16_t& _service_id, uint16_t& _instance_id) ;
        void run();
        void someip_init();
        bool ConfigFileReadInit();
        bool ConfigFileReplace();
        std::string GetCurrentTime();

        std::string  SOMEIP_JSON_PATH;

        bool SaveServiceInfo(const struct ServiceInfoType & s_info);
        
        std::mutex _file_mutex_, _message_mutex_, _method_mutex_;
        std::condition_variable _condition_;
        std::shared_ptr<vsomeip::application> _app_;
        std::queue<message_t> _messages_;
        std::set<uint32_t> _messageid_set_;
        bool _service_available_ ;
        bool _stop_ ;
        std::thread sdm_pthread;
};

    } // namespace extensionlib
} // namespace sdm

#endif //SOMEIP_CONFIGFILE_OPERATION_H
