/**
 * @file  ConfigOperation.cpp
 * @brief 
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

#include "ConfigOperation.h"
#include "LogPrint.h"
namespace sdm
{
    /**
     * @brief 获取单例指针
     * @param  
     * @return  
     */
    //std::shared_ptr<sdm::ConfigOperation> ConfigOperation::GetInstance();
    
    ConfigOperation & ConfigOperation::GetInstance()
    {
        static ConfigOperation co;
	    return co;
    }
            /**
             * @brief 配置添加
             * @param  
             * @return  
             */
    
    bool ConfigOperation::AddConfig(const ServiceListConfigType & si)
        {
            unsigned int message_id = si.service;
			message_id = (message_id << 16) | si.instance;
            data_[message_id] = si;
            // PrintLog(" service %d \n", message_id);
            notifyAlteration(message_id);
            return true;
        }
            /**
             * @brief 配置删除
             * @param  
             * @return  
             */
    bool ConfigOperation::DelConfig(unsigned short service, unsigned short instance)
    {
        unsigned int message_id = service;
		message_id = (message_id << 16) | instance;
        // PrintLog(" service %d \n", message_id);
        if (data_.find(message_id) != data_.end())
		{
			data_.erase(message_id);
			notifyAlteration(message_id);
		}
        return true;
    }
            /**
             * @brief 配置修改
             * @param  
             * @return  
             */
    bool ConfigOperation::ConfigModify(const ServiceListConfigType & si)
    {
        unsigned int message_id = si.service;
		message_id = (message_id << 16) | si.instance;
        if (data_.find(message_id) != data_.end())
		{
            data_[message_id] = si;
            notifyAlteration(message_id);
        }
        return true;
    }
            /**
             * @brief 配置读取
             * @param  
             * @return  
             */
    ServiceListConfigType ConfigOperation::ConfigRead(unsigned short service, unsigned short instance)
    {
        ServiceListConfigType sl;

        unsigned int message_id = service;
		message_id = (message_id << 16) | instance;
        // PrintLog(" service %d \n", message_id);
        if (data_.find(message_id) != data_.end()) {
            sl = data_[message_id];
		}
        else {
            PrintLog("no service %d \n", service);
        }
            return sl;
    }
                /**
             * @brief 配置读取
             * @param  
             * @return  
             */
    std::vector<ServiceListConfigType>  ConfigOperation:: GetConfigList()
    {
        std::vector<ServiceListConfigType> slct;
        std::map<unsigned int, ServiceListConfigType>::iterator it;

        for( it = data_.begin();it!= data_.end();it++)  { //copy
            slct.push_back(it->second);
        }
        //std::vector<ServiceListConfigType> slct(data_.begin(),data_.end());
        return slct;
    }

            /**
             * @brief  配置变化通知
             * @param  s
             * @return  
             */
    bool ConfigOperation::RegisterConfigAlertationNotify(alteration_fun_t _handler)
    {
        static unsigned int token = (unsigned int)0;
	    m_alteration[++token] = _handler;
        return true;
    }
    void ConfigOperation::notifyAlteration(unsigned int message_id) 
    {
    
        for (auto& i : m_alteration)
	    {
		    i.second(message_id);
	    }
    }
            
}
