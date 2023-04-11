/**
 * @file  FGServiceConfigManager.cpp
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
#include "FGServiceConfigManager.h"
#include "ConfigOperation.h"

#include <fstream>
#include <iostream>
#include <sstream>
#include <exception>  

using namespace std;
namespace sdm
{
    //namespace extensionlib
    //{

FGServiceConfigManager::FGServiceConfigManager()
{
    // PrintLog("FGServiceConfigManager\n");
}

//FGServiceConfigManager::~FGServiceConfigManager()
//{
//
//}


            /**
             * @brief 初始化，获取ConfigOperation
             * @param  
             * @return  
             */
bool FGServiceConfigManager::getFileContent(const std::string & strFileName)
{
    if(strFileName.empty()) {
        PrintLog("strInput empty\n");
        return false;
    }
          
    std::ifstream input(strFileName.c_str(), std::ios::binary);
    if(input.is_open()) {
        // PrintLog("%s open sucess\n", strFileName.c_str());
        std::stringstream ss;
    	ss << input.rdbuf();
    	CfgServiceListValue = ss.str();
        return true;
    } else {
        PrintLog("%s open fail\n", strFileName.c_str());
        return false;
    }
    
}

#define STRTOINT(src, dst, str_name, base)                               \
    {                                                                    \
        if ((src.str_name).length() != 0)                                \
        {                                                                \
            (dst.str_name) = std::stoi((src.str_name), nullptr, (base)); \
        }                                                                \
    }

std::vector<std::string> FGServiceConfigManager::split(const std::string& in, const std::string& delim)
{
    std::vector<std::string> words;
    char* c1 = new char[in.size() + 1];
    if (c1 != nullptr) {
            c1[in.size()] = (char)0;
            strcpy(c1, in.c_str());
    }
    char* c2 = new char[delim.size() + 1];
    if (c2 != nullptr) {
        c2[delim.size()] = (char)0;
        strcpy(c2, delim.c_str());
    }
    
    char* p = strtok(c1, c2);
    if (p == 0)
    {
        words.push_back(c1);
    }
    else
    {
        while (p)
        {
            words.push_back(p);
            p = strtok(0, c2);
        }
    }
    delete[] c1;
    delete[] c2;

    return words;
}

unsigned int FGServiceConfigManager::ipstr2int(std::string ipstr)
{
    unsigned int ip = 0;

    std::vector<std::string> ip_vec = split(ipstr, ".");
    if (ip_vec.size() == 4)
    {
        for (int i = 0; i < 4; ++i)
        {
            int j = std::stoi(ip_vec[i], nullptr, 10);
            ip = ip << 8 | j;
        }
    }

    return ip;
}

bool FGServiceConfigManager::parseServiceConfigContent() 
{
    if (CfgServiceListValue.empty()){
        PrintLog("CfgServiceListValue.empty\n");
        return false;
    } 
   
    Json::CharReaderBuilder jcrBuilder;
    std::unique_ptr<Json::CharReader>jcReader(jcrBuilder.newCharReader());
    JSONCPP_STRING errs;
    Json::Value resp;

    if(!jcReader->parse(CfgServiceListValue.c_str(), CfgServiceListValue.c_str()+CfgServiceListValue.size(), &resp, &errs))
    {
        PrintLog("parse Gen Config content erro, bad jsonStr format!");
        return false;
    }
    
    ConfigOperation& co = ConfigOperation::GetInstance();  
    if (resp.isMember("ServiceList"))
    {   
        Json::Value jsList = resp["ServiceList"];
        for (auto subJs : jsList) 
        {      
            if (subJs.isObject()) 
            {
                struct ServiceListConfigType_xpack sc_x;
                try {
		            // PrintLog("ServiceListConfigType decode 之前： \n\n" );
                    xpack::json::decode(subJs.toStyledString(), sc_x);
                    // PrintLog ("after decode:\n ");
                    struct ServiceListConfigType sc;
                    STRTOINT(sc_x,sc,service,16);
                    STRTOINT(sc_x,sc,instance,16);
                    STRTOINT(sc_x,sc,major_version,16);
                    STRTOINT(sc_x,sc,protocol,10);
                    STRTOINT(sc_x,sc,port,10);
                    STRTOINT(sc_x,sc,type,10);
                    
                    sc.ip = ipstr2int(sc_x.ip);
                    bool bqac = co.AddConfig(sc);
                    if (!bqac) {
                        ErrorLog("AddConfig fasle");
                        return false;
                    }

                } catch (exception &e){
                    ErrorLog ("decode json failed!\n ");
                    return false;
                }
            }
        }
    }

     return true;
        
}

void FGServiceConfigManager::FunctionInit()
{
    // PrintLog("FunctionInit\n");
    const std::string CFG_SERVICE_LIST_PATH = "../CfgServiceList.json";

    if (getFileContent(CFG_SERVICE_LIST_PATH) ) {
        if (parseServiceConfigContent()) {
            PrintLog("config add scuess!!!\n");
        }
    } else {
        PrintLog("getFileContent fail!!!\n");
    }
    
    return;
}

            /**
             * @brief 注册服务列表变化通知
             * @param  
             * @return  
             */
void FGServiceConfigManager::FunctionRun()
{
    // PrintLog("FunctionRun\n");
}
}

