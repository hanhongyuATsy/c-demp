#include "NetMaintainManagement.h"
#include "LogPrint.h"
#include <iomanip>

#define NM_SERVICE_SID (0x107E) //SDMService
#define NM_SERVICE_IID (0x0001)
#define NM_SERVICE_MID (0x0001) //GetServiceInfo
const std::string appId = "SDM";


namespace sdm
{
namespace extensionlib
{
    NetMaintainManagement& NetMaintainManagement::GetInstance()
    {
	    static NetMaintainManagement nmm;
	    return nmm;
    }

    NetMaintainManagement::NetMaintainManagement() : rtm_(vsomeip::runtime::get()),
                                                     app_(rtm_->create_application("client")),
                                                     block_(false)
    {
        TraceLog("NetMaintainManagement()\n" );
    }

    void NetMaintainManagement::on_availability(vsomeip::service_t _service, vsomeip::instance_t _instance, bool _is_available)
    {
        ;
    }

    bool NetMaintainManagement::init()
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
                &NetMaintainManagement::on_state,
                this,
                std::placeholders::_1));

        app_->register_message_handler(
            vsomeip::ANY_SERVICE, NM_SERVICE_IID, vsomeip::ANY_METHOD,
            std::bind(&NetMaintainManagement::on_message,
                      this,
                      std::placeholders::_1));

        TraceLog("register_state_handler \n");
        app_->register_availability_handler(NM_SERVICE_SID, NM_SERVICE_IID,
                                            std::bind(&NetMaintainManagement::on_availability,
                                                      this,
                                                      std::placeholders::_1, std::placeholders::_2, std::placeholders::_3));
        TraceLog("vsomeipstart \n");
        std::thread vsomeipstart(std::bind(&NetMaintainManagement::vsomeip_run, this));
        vsomeipstart.detach();

        return true;
    }

    void NetMaintainManagement::on_message(const std::shared_ptr<vsomeip::message> &_response)
    {
        TraceLog("[on_message1] !!!\n");
    }
    void NetMaintainManagement::on_state(vsomeip::state_type_e _state)
    {
        TraceLog("on_state \n");

        if (_state == vsomeip::state_type_e::ST_REGISTERED)
        {
            app_->request_service(NM_SERVICE_SID, NM_SERVICE_IID);
            TraceLog("request_service \n");   
        }
        return;
    }


    void NetMaintainManagement::vsomeip_run()
    {
        PrintLog("_app_->start \n");
        app_->start();
    }


    void NetMaintainManagement::TriggerCountADD()
    {
        std::unique_lock<std::mutex> lock(mutex_);
        triggerCount_++;
    }

    void NetMaintainManagement::TriggerCountSUB()
    {
        std::unique_lock<std::mutex> lock(mutex_);
        triggerCount_--;
    }

   void NetMaintainManagement::StartNetMaintain()
   {
      PrintLog("StartNetMaintain");
      TriggerCountADD();
      PrintLog("StartNetMaintain triggerCount_: %d", triggerCount_);
      if (1 == triggerCount_)
      {
         thredExecute_ = 1;
         PrintLog( "StartNetMaintain requestFullCom");
         std::thread th([&]
                        {
                            PrintLog("start NetMaintain ...");   
                           while(thredExecute_) 
                           {
                                //每隔1s调用NM接口开始网络维持
                                PrintLog("start NetMaintain ...");
                                std::shared_ptr<vsomeip::message> request = vsomeip::runtime::get()->create_request();

                                request->set_service(NM_SERVICE_SID);
                                request->set_instance(NM_SERVICE_IID);
                                request->set_method(NM_SERVICE_MID);
                                request->set_reliable(false);

                                std::vector<uint8_t> payload_data(appId.begin(),appId.end());
                                //unsigned char 

                                std::stringstream tlogStrx;
                                for (size_t i = 0; i < payload_data.size(); i++)
                                {
                                    tlogStrx << std::setw(2) << std::setfill('0') << std::hex << unsigned(payload_data[i]) << " ";
                                } 
                                TraceLog("start NetMaintain ...%s ", tlogStrx.str().c_str());

                                payload_data.insert(payload_data.begin(),0xbf);
                                payload_data.insert(payload_data.begin(),0xbb);
                                payload_data.insert(payload_data.begin(),0xef);
                                payload_data.push_back(0x00);
                                uint32_t len = payload_data.size();
                                PrintLog("len : %x...\n", len);
                                payload_data.insert(payload_data.begin(), (len & 0xFF));
                                payload_data.insert(payload_data.begin(), ((len & 0xFF00) >> 8));
                                payload_data.insert(payload_data.begin(), ((len & 0xFF0000) >> 16));
                                payload_data.insert(payload_data.begin(), ((len & 0xFF000000) >> 24));
                                
                                payload_data.push_back(static_cast<uint8_t>(PncType::PncDownload));
                                payload_data.push_back(static_cast<uint8_t>(NmStatusType::FullCom));

                                std::stringstream tlogStrx1;
                                for (size_t i = 0; i < payload_data.size(); i++)
                                {
                                    tlogStrx1 << std::setw(2) << std::setfill('0') << std::hex << unsigned(payload_data[i]) << " ";
                                } 
                                TraceLog("start NetMaintain ...%s ", tlogStrx1.str().c_str());

                                // set payload
                                std::shared_ptr<vsomeip::payload> payload = vsomeip::runtime::get()->create_payload();
                                payload->set_data(payload_data);
                                request->set_payload(payload);

                                // send request
                                PrintLog("[send sid: %4X  iid :%4X] !!!\n",NM_SERVICE_SID,  NM_SERVICE_IID);
                                app_->send(request);
                                
                                PrintLog("StartNetMaintain requestFullCom result");
                                //7.0需求每隔1S调用，6.0只发一次
                                sleep(1);                
                           } 
                        });
         th.detach();
      }
   }

   void NetMaintainManagement::StopNetMaintain()
   {
      PrintLog("StopNetMaintain");
      TriggerCountSUB();
      PrintLog("StopNetMaintain triggerCount_: %d", triggerCount_);
      if (0 == triggerCount_)
      {
         thredExecute_ = 0;
         //停止网络维持
        PrintLog("start NetMaintain ...");
        std::shared_ptr<vsomeip::message> request = vsomeip::runtime::get()->create_request();

        request->set_service(NM_SERVICE_SID);
        request->set_instance(NM_SERVICE_IID);
        request->set_method(NM_SERVICE_MID);
        request->set_reliable(false);

        std::vector<uint8_t> payload_data(appId.begin(),appId.end());
        //unsigned char 

        std::stringstream tlogStrx;
        for (size_t i = 0; i < payload_data.size(); i++)
        {
            tlogStrx << std::setw(2) << std::setfill('0') << std::hex << unsigned(payload_data[i]) << " ";
        } 
        TraceLog("start NetMaintain ...%s ", tlogStrx.str().c_str());

        payload_data.insert(payload_data.begin(),0xbf);
        payload_data.insert(payload_data.begin(),0xbb);
        payload_data.insert(payload_data.begin(),0xef);
        payload_data.push_back(0x00);
        uint32_t len = payload_data.size();
        PrintLog("len : %x...\n", len);
        payload_data.insert(payload_data.begin(), (len & 0xFF));
        payload_data.insert(payload_data.begin(), ((len & 0xFF00) >> 8));
        payload_data.insert(payload_data.begin(), ((len & 0xFF0000) >> 16));
        payload_data.insert(payload_data.begin(), ((len & 0xFF000000) >> 24));
        
        payload_data.push_back(static_cast<uint8_t>(PncType::PncDownload));
        payload_data.push_back(static_cast<uint8_t>(NmStatusType::NoCom));

        std::stringstream tlogStrx1;
        for (size_t i = 0; i < payload_data.size(); i++)
        {
            tlogStrx1 << std::setw(2) << std::setfill('0') << std::hex << unsigned(payload_data[i]) << " ";
        } 
        TraceLog("start NetMaintain ...%s ", tlogStrx1.str().c_str());

        // set payload
        std::shared_ptr<vsomeip::payload> payload = vsomeip::runtime::get()->create_payload();
        payload->set_data(payload_data);
        request->set_payload(payload);

        // send request
        PrintLog("[send sid: %4X  iid :%4X] !!!\n",NM_SERVICE_SID,  NM_SERVICE_IID);
        app_->send(request);
        
        PrintLog("StartNetMaintain requestFullCom result");
      }
   }

      
} 
}
