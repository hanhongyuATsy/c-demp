#include "SomeIpCommunicationProxy.h"
#include "LogPrint.h"

#include <iomanip>
#include <iostream>

#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>


#define SDM_SERVICE_SID (0x10F8) //SDMService
#define SDM_SERVICE_IID (0x0001)
#define SDM_SERVICE_MID (0x0031) //GetServiceInfo


namespace sdm
{
namespace extensionlib
{


    SomeIpCommunicationProxy::SomeIpCommunicationProxy() : rtm_(vsomeip::runtime::get()),
                                                     app_(rtm_->create_application("client")),
                                                     block_(false)
    {
        TraceLog("SomeIpClientTestAdapter()\n" );
    }
    // SomeIpCommunicationProxy::~SomeIpCommunicationProxy()
    // {
    //     //vsomeipstart.join();
    //     PrintLog("~SomeIpClientTestAdapter()\n" );
    // }

    void SomeIpCommunicationProxy::on_availability(vsomeip::service_t _service, vsomeip::instance_t _instance, bool _is_available)
    {
        // std::cout << "Service ["
        //           << std::setw(4) << std::setfill('0') << std::hex << _service << "." << _instance
        //           << "] is "
        //           << (_is_available ? "available." : "NOT available.")
        //           << std::endl;

        // if (SDM_SERVICE_SID == _service && SDM_SERVICE_IID == _instance)
        // {
        //     if (is_available_ && !_is_available)
        //     {
        //         is_available_ = false;
        //     }
        //     else if (_is_available && !is_available_)
        //     {
        //         is_available_ = true;
        //     }
        // }
        ;
    }

    bool SomeIpCommunicationProxy::init()
    {
        TraceLog("Init \n");
        if (!app_->init())
        {
            std::cerr << "Couldn't initialize application" << std::endl;
            return false;
        }
        TraceLog("register_state_handler \n");

        app_->register_state_handler(
            std::bind(
                &SomeIpCommunicationProxy::on_state,
                this,
                std::placeholders::_1));

        app_->register_message_handler(
            vsomeip::ANY_SERVICE, SDM_SERVICE_IID, vsomeip::ANY_METHOD,
            std::bind(&SomeIpCommunicationProxy::on_message,
                      this,
                      std::placeholders::_1));

        TraceLog("register_state_handler \n");
        app_->register_availability_handler(SDM_SERVICE_SID, SDM_SERVICE_IID,
                                            std::bind(&SomeIpCommunicationProxy::on_availability,
                                                      this,
                                                      std::placeholders::_1, std::placeholders::_2, std::placeholders::_3));
        TraceLog("vsomeipstart \n");
        std::thread vsomeipstart(std::bind(&SomeIpCommunicationProxy::vsomeip_run, this));
        vsomeipstart.detach();

        return true;
    }

    void SomeIpCommunicationProxy::on_state(vsomeip::state_type_e _state)
    {
        TraceLog("on_state \n");

        if (_state == vsomeip::state_type_e::ST_REGISTERED)
        {
            app_->request_service(SDM_SERVICE_SID, SDM_SERVICE_IID);
            TraceLog("request_service \n");   
        }
        return;
    }



    struct ServiceInfoType SomeIpCommunicationProxy::call_method(const uint16_t& _service_id, const uint16_t& _instance_id)
    {
        TraceLog("call_method !!!\n");
        if (! app_->is_available(SDM_SERVICE_SID, SDM_SERVICE_IID, 0x1))
        {
            s_info_.serviceid = 0;
            s_info_.instanceid = 0;
            PrintLog("%x not avaiable!!! \n",SDM_SERVICE_SID );
            return s_info_;
        }
        PrintLog("%x avaiable!!! \n",SDM_SERVICE_SID );
        // make request
        std::shared_ptr<vsomeip::message> request = vsomeip::runtime::get()->create_request();
        request->set_service(SDM_SERVICE_SID);
        request->set_instance(SDM_SERVICE_IID);
        request->set_method(SDM_SERVICE_MID);
        request->set_reliable(false);

        // make payload
        std::vector<vsomeip::byte_t> payload_data;
        payload_data.push_back((_service_id >> 8) & 0xff);
        payload_data.push_back(_service_id & 0xff);
        payload_data.push_back((_instance_id >> 8) & 0xff);
        payload_data.push_back(_instance_id & 0xff);

        // set payload
        std::shared_ptr<vsomeip::payload> payload = vsomeip::runtime::get()->create_payload();
        payload->set_data(payload_data);
        request->set_payload(payload);

        // send request
        PrintLog("[send sid: %4X  iid :%4X] !!!\n",_service_id,  _instance_id);
        app_->send(request);

        // wait call ending
        std::unique_lock<std::mutex> its_lock(_method_mutex_);
        if (std::cv_status::timeout == _condition_.wait_for(its_lock, std::chrono::seconds(3)))
        {
            PrintLog("[SDDS][ERR] wait_for timeout");
            s_info_.serviceid = 0;
            s_info_.instanceid = 0;
            
        }

        return s_info_;
    }


    void SomeIpCommunicationProxy::on_message(const std::shared_ptr<vsomeip::message> &_response)
    {
        TraceLog("[on_message1] !!!\n");
        std::shared_ptr<vsomeip::payload> payload = _response->get_payload();
        vsomeip::length_t len = payload->get_length();
        TraceLog("[on_message] !!!\n");
        // ServiceInfoType
        // {
        //     uint16_t serviceid;
        //     uint16_t instanceid;
        //     uint32_t ncip; //network card ip
        //     uint32_t ip;
        //     uint32_t port;
        //     uint8_t protocol; //0-udp, 1-tcp
        //     uint8_t version;
        //     uint8_t status; //0-running, 1- terminated, 2-unknown
        //     uint8_t type; //
        // }
        
        char rec_buf[512];
        for (uint32_t i = 0; i < len; i++) {
            sprintf(rec_buf+i*2, "%02x", *(payload->get_data() + i));
        }  
        TraceLog("[len: %d buf: %s]\n", len, rec_buf);

        memcpy(&s_info_, (unsigned char *)(payload->get_data() + 4), sizeof(struct ServiceInfoType) );

        InfoLog("[sid: %X iid: %X ip: %X] \n", s_info_.serviceid, s_info_.instanceid,s_info_.ip);
        s_info_.serviceid = ntohs(s_info_.serviceid);
        s_info_.instanceid = ntohs(s_info_.instanceid);
        s_info_.ip = ntohl(s_info_.ip);
        

        //TraceLog("[sip: %x iid: %x ip: %x] \n", s_info_.serviceid, s_info_.instanceid,s_info_.ip);
        char sip[16] = {0};
        std::sprintf(sip, "%d.%d.%d.%d", (s_info_.ip >> 24) & 0xff, (s_info_.ip >> 16) & 0xff, (s_info_.ip >> 8) & 0xff, s_info_.ip & 0xff);
        InfoLog("[sid: %X iid: %X ip: %X  sip: %s ] \n", s_info_.serviceid, s_info_.instanceid,s_info_.ip, sip);

        //char* inet_ntoa(struct in_addr in); 二进制，转点十进制

        // call next
        _condition_.notify_one();
    }

    void SomeIpCommunicationProxy::vsomeip_run()
    {
        PrintLog("_app_->start \n");
        app_->start();
    }


    } // namespace extensionlib
} // namespace sdm
