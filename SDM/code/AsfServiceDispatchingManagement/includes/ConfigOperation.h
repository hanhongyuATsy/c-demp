/**
 * @file  ConfigOperation.h
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
#ifndef CONFIG_OPERATION_H
#define CONFIG_OPERATION_H
#include <iostream>
#include <memory>
#include <map>
#include <functional>
#include <condition_variable>

#include "def.h"

#if defined(__GNUC__)
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
#elif defined(_MSC_VER)
#pragma warning(disable : 4996)
#endif

namespace sdm
{
    //namespace service
        struct ServiceListConfigType
        {
            unsigned short service;
            unsigned short instance;
            unsigned char  major_version;
            unsigned char  type;
            unsigned char  protocol;
            unsigned int   ip;
            unsigned int   port;
            
        };
        struct ServiceControlConfigType
        {
            unsigned short service_id;
            unsigned short instance_id;
            uint8_t control;
        };

        typedef std::function< void (unsigned int) > alteration_fun_t;
        class ConfigOperation
        {
        public:
            /**
             * @brief 获取单例指针
             * @param  
             * @return  
             */
            static ConfigOperation& GetInstance();
            ~ConfigOperation() {};
            /**
             * @brief 配置添加
             * @param  
             * @return  
             */
            bool AddConfig(const ServiceListConfigType& _sc);
            /**
             * @brief 配置删除
             * @param  
             * @return  
             */
            bool DelConfig(unsigned short service, unsigned short instance);
            /**
             * @brief 配置修改
             * @param  
             * @return  
             */
            bool ConfigModify(const ServiceListConfigType & si);
            /**
             * @brief 配置读取
             * @param  
             * @return  
             */
            ServiceListConfigType ConfigRead(unsigned short service, unsigned short instance);
            /**
             * @brief  配置变化通知
             * @param  
             * @return  
             */
            std::vector<ServiceListConfigType> GetConfigList();
            /**
             * @brief  配置变化通知
             * @param  
             * @return  
             */
            bool RegisterConfigAlertationNotify(alteration_fun_t _handler);
            
        private:
            //static void run(ServiceList* _handle);
            std::map<unsigned int, ServiceListConfigType> data_;
            std::map<unsigned int, alteration_fun_t> m_alteration;
            ConfigOperation() {};  
            void notifyAlteration(unsigned int message_id);
        };

        //template <typename T>
        //T* ConfigOperation<T>::c_instance = NULL;
}




#endif