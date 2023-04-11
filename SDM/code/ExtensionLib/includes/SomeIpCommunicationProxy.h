/**SomeIpCommunicationProxy.h
 * 
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
#ifndef SOMEIP_COMMUNICATION_PROXY_H
#define SOMEIP_COMMUNICATION_PROXY_H
#include <vsomeip/vsomeip.hpp>
#include <memory>
#include <iostream>
#include <thread>
#include <future>
#include <unordered_map>
namespace sdm
{
namespace extensionlib
{

    struct ServiceInfoType {
        ServiceInfoType():serviceid(0),instanceid(0),ncip(0),ip(0),port(0),protocol(0),version(1),status(0),type(0){};

        std::uint16_t serviceid;
        std::uint16_t instanceid;
        std::uint32_t ncip;
        std::uint32_t ip;
        std::uint16_t port;
        std::uint8_t protocol;
        std::uint8_t version;
        std::uint8_t status;
        std::uint8_t type;
    };


class SomeIpCommunicationProxy
{

    public:
        SomeIpCommunicationProxy();
        //virtual ~SomeIpCommunicationProxy();

        bool init();
        struct ServiceInfoType call_method(const uint16_t& _service_id, const uint16_t& _instance_id);

    private:
        std::shared_ptr<vsomeip::runtime> rtm_;
        std::shared_ptr<vsomeip::application> app_;

        std::shared_ptr<vsomeip::message> request_;
        std::mutex mutex_;
        std::mutex _method_mutex_;
        std::condition_variable _condition_;
        bool block_;
        std::thread vsomeipstart;

        struct ServiceInfoType s_info_;

        void vsomeip_run();
        void on_message(const std::shared_ptr<vsomeip::message> &_response);
        void on_state(vsomeip::state_type_e _state);
        void on_availability(vsomeip::service_t _service, vsomeip::instance_t _instance, bool _is_available);
};

    } // namespace extensionlib
} // namespace sdm

#endif