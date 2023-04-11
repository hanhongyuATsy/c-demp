/**
 * @file SomeIpConfigFileOperation.cpp
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

#include "SomeIpConfigFileOperation.h"
#include "NetMaintainManagement.h"

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
#include <MD5.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>


namespace sdm
{
    namespace extensionlib
    {

//#define SOMEIP_JSON "vsomeip.json"
// #define SOMEIP_JSON_BAK "vsomeip.json.bak"
// #define SOMEIP_JSON_NEW "vsomeip.json.new"

#define SDM_SERVICE_SID (0x10F8) // SDMService
#define SDM_SERVICE_IID (0x0001)
#define SDM_SERVICE_MID (0x0031) // GetServiceInfo

                /**
         * @brief ServiceDynamicDiscoverySupporter
         */
        SomeIpConfigFileOperation::SomeIpConfigFileOperation():
        comm_(std::make_shared<SomeIpCommunicationProxy>())
        , UpdateSomeipJsonFileFinish(nullptr)
        , _service_available_(false)
        , _stop_(false)
        , sdm_pthread(std::bind(&SomeIpConfigFileOperation::run, this))
        {
            // std::cout<<"ServiceDynamicDiscoverySupporter"<<std::endl;
        }

        SomeIpConfigFileOperation::~SomeIpConfigFileOperation()
        {
            _stop_ = true;
            sdm_pthread.join();
            // std::cout<<"~ServiceDynamicDiscoverySupporter"<<std::endl;
        }

        bool SomeIpConfigFileOperation::fileCopy(const std::string &_srcpath, const std::string &_dstpath)
        {
            //NetMaintainManagement::GetInstance().StartNetMaintain();
            try {
                std::ifstream src(_srcpath.c_str(), std::ios::binary);
                std::ofstream dst(_dstpath.c_str(), std::ios::binary);

                dst << src.rdbuf();  
                src.close();
                dst.flush();
                dst.close();
                sync();
                sync();
                sync();

            } catch (const std::exception & e){
                ErrorLog(" dst << src ");
            }

            if (fileCmpare(_srcpath,_dstpath) ){
                PrintLog("fileCopy Success: ");
                return true;
            }  else {
                ErrorLog("fileCopy fail");
                return false;
            }

            //NetMaintainManagement::GetInstance().StopNetMaintain();
        }

        bool SomeIpConfigFileOperation::fileCmpare(const std::string &_srcpath, const std::string &_dstpath)
        {
            std::stringstream  ss1;
            std::stringstream  ss2;

            std::ifstream src(_srcpath.c_str(), std::ios::binary);
            std::ifstream dst(_dstpath.c_str(), std::ios::binary);

            ss1 << src.rdbuf();
            ss2 << dst.rdbuf();

            std::string s1, s2;

            s1 = ss1.str();
            s2 = ss2.str();

            std::string s1_md5 = md5(s1);
            std::string s2_md5 = md5(s2);

            PrintLog("md5 s1: %s, md5 s2:%s ", s1_md5.c_str(), s2_md5.c_str());

            if (s1_md5.compare(s2_md5) == 0) {
                PrintLog("file :%s and file : %s is the same", _srcpath.c_str(), _dstpath.c_str());
                return true;
            } else {
                PrintLog("file :%s and file : %s is the different ", _srcpath.c_str(), _dstpath.c_str());
                return false;
            }

        }


        bool SomeIpConfigFileOperation::fileExist(const std::string &_path)
        {
            struct stat buffer;
            return (stat(_path.c_str(), &buffer) == 0);
        }

        std::string SomeIpConfigFileOperation::hex2string(uint16_t hex)
        {
            char buf[10] = {0};
            std::sprintf(buf, "0x%04x", hex);
            std::string str(buf);
            return str;
        }

        void SomeIpConfigFileOperation::add_service(const uint16_t &_service_id, const uint16_t &_instance_id)
        {
            // check duplication
        
            uint32_t message_id = _service_id;
            message_id = message_id << 16 | _instance_id;
            if (_messageid_set_.find(message_id) != _messageid_set_.end())
            {
                PrintLog("[message_id %x] is in _messageid_set_!!\n", _service_id);
                return;
            }
            

            // call service method
            PrintLog("[call_method] is becalled!!\n");
            struct ServiceInfoType s;
            bool result= false;
            s = comm_->call_method(_service_id, _instance_id);
            if (s.serviceid != 0)
            {
                if (SaveServiceInfo(s)) {
                    _messageid_set_.insert(message_id);
                    result = true;    
                } else {
                    PrintLog("[SaveServiceInfo] fail!!\n");
                }
            } else {
                PrintLog("[call_method] is fail serviceid == 0!!\n");
            }

            if ( UpdateSomeipJsonFileFinish != nullptr) {
                    UpdateSomeipJsonFileFinish(_service_id, _instance_id, result); // notify user;
            }

        }

        void SomeIpConfigFileOperation::pushMessage(uint16_t _service_id, uint16_t _instance_id)
        {
            std::unique_lock<std::mutex> lock(_message_mutex_);
            PrintLog("pushMessage : %x %x\n", _service_id, _instance_id);
            message_t m;
            m.sid = _service_id;
            m.iid = _instance_id;
            _messages_.push(m);
        }

        bool SomeIpConfigFileOperation::popMessage(uint16_t &_service_id, uint16_t &_instance_id)
        {
            
            std::unique_lock<std::mutex> lock(_message_mutex_);
            
            if (_messages_.size() > 0)
            {
                message_t &m = _messages_.front();
                _service_id = m.sid;
                _instance_id = m.iid;
                _messages_.pop();
                return true;
            } else {
                ; //TraceLog("message none !!\n");
            }
            return false;
        }

        void SomeIpConfigFileOperation::run()
        {
            pthread_setname_np(pthread_self(), "sdm.sdds.thread");
            
            while (!_stop_)
            {
                usleep(30);
                
                uint16_t service_id = 0;
                uint16_t instance_id = 0;
                if (!popMessage(service_id, instance_id))
                {
                    continue;
                }
        
                add_service(service_id, instance_id);
            }
        }

        bool SomeIpConfigFileOperation::ConfigFileReadInit()
        {
            // read json
            Json::Value root;
            Json::Reader reader;
           
            //bool has = false; 10f8 服务，内部服务，不添加到vsomeip.json 中也可以调用
            std::ifstream ifs(SOMEIP_JSON_PATH);
            Json::Value services;
            
            PrintLog("ConfigFileReadInit\n");
            if (reader.parse(ifs, root))
            {
                
                if (root.isMember("services"))
                {
                    services = root["services"];
                }

                for (unsigned int i = 0; i < services.size(); ++i)
                {
                    std::string sid = services[i]["service"].asString();
                    std::string iid = services[i]["instance"].asString();
                    try
                    {
                        uint16_t service_id = std::stoi(sid, 0, 16);
                        uint16_t instance_id = std::stoi(iid, 0, 16);
                        // if (SDM_SERVICE_SID == service_id && SDM_SERVICE_IID == instance_id)
                        // {
                        //     has = true;
                        // }

                        uint32_t message_id = service_id;
                        message_id = message_id << 16 | instance_id;
                        _messageid_set_.insert(message_id);
                    }
                    catch (...)
                    {
                        ifs.close();
                        return false;
                    }
                }
            } else {
                PrintLog("[error] reader.parse failed\n");
                ifs.close();
                return false;
            }

            ifs.close();
            return true;

        }

        bool SomeIpConfigFileOperation::SaveServiceInfo(const struct ServiceInfoType & s_info)
        {
            // copy file
            std::string SOMEIP_JSON_NEW = SOMEIP_JSON_PATH+".new";

            PrintLog("NewFile %s File %s\n", SOMEIP_JSON_NEW.c_str(), SOMEIP_JSON_PATH.c_str());
            if (!fileExist(SOMEIP_JSON_NEW))
            {
                bool cp = fileCopy(SOMEIP_JSON_PATH, SOMEIP_JSON_NEW);

                if (!cp) {
                    ErrorLog("SOMEIP_JSON_NEW !!\n");
                    return false;
                }

                // char cmd[100] = {0};
                // sprintf(cmd ,"cp %s %s",SOMEIP_JSON_PATH.c_str(), SOMEIP_JSON_NEW.c_str());
                // printf("cmd : %s\n", cmd);
                // system(cmd);
                TraceLog("SOMEIP_JSON_NEW !!\n");
                
            }
            if (!fileExist(SOMEIP_JSON_NEW))
            {
                PrintLog("SOMEIP_JSON_NEW create  fail !!\n");
            }

            // read json
            Json::Reader reader;
            Json::Value root;
            Json::Value services;
            try {
                std::ifstream ifs(SOMEIP_JSON_NEW);
                if (!reader.parse(ifs, root))
                {
                    PrintLog("reader.parse fail !!\n");
                    return false;
                }
                
                if (root.isMember("services"))
                {
                    services = root["services"];
                }
                ifs.close();
            } catch (const std::exception & e){
                ErrorLog(" reader.parse error!!! ");
                return false;
            }


            // add service
            Json::Value service;
            char sip[16] = {0};
            //Json::arrayValue ;
            
            std::sprintf(sip, "%d.%d.%d.%d", (s_info.ip >> 24) & 0xff, (s_info.ip >> 16) & 0xff, (s_info.ip >> 8) & 0xff, s_info.ip & 0xff);
            TraceLog("[sip: %s] \n", sip);
            if (strncmp(sip, "0.0.0.0", 7) != 0 ) {
                //service["Tagwithoptionalvalue"]= "[]";
                service["service"] = hex2string(s_info.serviceid);
                service["instance"] = hex2string(s_info.instanceid);
                service["unicast"] = sip;
                //service["unreliable"] = "0";
                //service["reliable"] = "{\"port\" : \"0\"}”;
                std::ofstream os;
                try {
                    services.append(service);
                    root["services"] = services;
                    // write json
                    Json::StyledWriter sw;
                    
                    os.open(SOMEIP_JSON_NEW);
                    //  判断返回，添加同步  //  失败处理 删除 vsomeip.json.new; 
                    os << sw.write(root);
                    //  判断返回，添加同步
                    os.flush();
                    os.close();
		    sync();
                    sync();
                    sync();
                } catch (const std::exception & e){
                    //先 close 再del ; 再判断文件是否存在
                    if (os.is_open()) {
                        os.close();
                    }
                    
                    if ( fileExist(SOMEIP_JSON_NEW) ) {
                        // vsomeip.json 文件写错误，会导致未知问题，将文件删除保底
                        std::remove(SOMEIP_JSON_NEW.c_str());
                    }

                    ErrorLog(" services.append error!!! ");
                    return false;
                }
            } else {
                PrintLog("ip 0.0.0.0 not avliable!!!");
                return false;
            }

            return true;
        }

        std::string SomeIpConfigFileOperation::GetCurrentTime()
        {
            //获取系统时间戳
            char time_string[128];
            time_t curtm = time(NULL);
            struct tm tm;
        #if defined(WIN32) || defined(_WINDLL)
            localtime_s(&tm, &curtm);
        #else
            localtime_r(&curtm, &tm);
        #endif
            sprintf(time_string, "%04d-%02d-%02d %02d:%02d:%02d",
                    tm.tm_year + 1900, tm.tm_mon + 1, tm.tm_mday, tm.tm_hour, tm.tm_min, tm.tm_sec);
            std::string str(time_string);
            PrintLog(" 本地日期和时间：%s\n ", str.c_str());  //core
            //std::cout <<  str <<std::endl;
            return str;
        }

        bool  SomeIpConfigFileOperation::Init()
        {
            if (! ConfigFileReplace()) {
                return false;
            }

            if (! ConfigFileReadInit()) {
                return false;
            }

            //comm_ = std::make_shared<SomeIpCommunicationProxy>();  // 生命周期啥,???
            comm_->init();
            
            GetCurrentTime(); 

            //std::thread sdm_pthread(std::bind(&SomeIpConfigFileOperation::run, this));
            //sdm_pthread.detach(); // 修改到初始化列表里
            return true;
        }




        /**
         * @brief 
         * @param
         * @return
         */
        bool SomeIpConfigFileOperation::ConfigFileReplace()
        {
            char *s = nullptr;
            s = getenv("VSOMEIP_CONFIGURATION");
            if (s == nullptr)
            {
                PrintLog("Get VSOMEIP_CONFIGURATION fail!!");
                return false;
            }
            PrintLog("VSOMEIP_CONFIGURATION : %s", s);


            SOMEIP_JSON_PATH = s;

            fileCopy(SOMEIP_JSON_PATH.c_str(), (SOMEIP_JSON_PATH + ".bak").c_str());

            
            if (fileExist((SOMEIP_JSON_PATH + ".new")))
            {      
                bool fc=fileCopy((SOMEIP_JSON_PATH + ".new"), SOMEIP_JSON_PATH);
                if (!fc) {
                    return false;
                }
                //std::remove((SOMEIP_JSON_PATH + ".new").c_str());
            }   
            return true;
        }

        /**
         * @brief  
         * @param serviceid     
         * @param instanceid    
         * @return int        
         */
        int SomeIpConfigFileOperation::RequestService(uint16_t _serviceid, uint16_t _instanceid, updatefile_notify_handler_t _handler)
        {
            std::unique_lock<std::mutex> lock(_file_mutex_);
            PrintLog("[RequestService %4X,  %4X ] \n ",_serviceid, _instanceid );
            if (_handler != nullptr) {
                UpdateSomeipJsonFileFinish = _handler;
            } else {
                return 2;
            }
            
            if (!fileExist(SOMEIP_JSON_PATH))
            {
                PrintLog("[error] no vsomeip.json\n");
                return 2;
            }

            int ret = 1;

            // check duplication
            uint32_t message_id = _serviceid;
            message_id = message_id << 16 | _instanceid;
            if (_messageid_set_.find(message_id) != _messageid_set_.end())
            {
                InfoLog("sid :%4X  已经在vsomeip.json中  \n");
                return 0;
            }

            pushMessage(_serviceid, _instanceid);

            return ret;
        }

    } // namespace extensionlib
} // namespace sdm
