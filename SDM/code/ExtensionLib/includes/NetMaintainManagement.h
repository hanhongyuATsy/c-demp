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
#include <iostream>
#include <thread>
#include <unistd.h>
#include <mutex>
#include <random>
#include <vsomeip/vsomeip.hpp>
#include <memory>
#include <iostream>
#include <thread>
#include <future>
#include <unordered_map>

#ifndef NET_MAINTAIN_MANAGEMENT_H
#define NET_MAINTAIN_MANAGEMENT_H

namespace sdm
{
namespace extensionlib
{
    enum class PncType:std::uint8_t
    {
	    PncGlobal=0U,
	    PncDownload=1U,
	    PncDomain=2U
    };

    enum class NmStatusType:std::uint8_t
    {
	    NoCom=0U,
	    FullCom=1U
    };

    class NetMaintainManagement
    {
    public:
        static NetMaintainManagement& GetInstance();

        void StartNetMaintain();
        void StopNetMaintain();

    private:
        NetMaintainManagement();

        void TriggerCountADD();
        void TriggerCountSUB();
        static std::shared_ptr<NetMaintainManagement> mgr_;
        int triggerCount_ = 0;
        bool thredExecute_ = 0;

        std::shared_ptr<vsomeip::runtime> rtm_;
        std::shared_ptr<vsomeip::application> app_;

        std::shared_ptr<vsomeip::message> request_;
        std::mutex mutex_;
        std::mutex _method_mutex_;
        std::condition_variable _condition_;
        bool block_;
        std::thread vsomeipstart;
        bool init();
        void vsomeip_run();
        void on_message(const std::shared_ptr<vsomeip::message> &_response);
        void on_state(vsomeip::state_type_e _state);
        void on_availability(vsomeip::service_t _service, vsomeip::instance_t _instance, bool _is_available);
    };

}
}

#endif
