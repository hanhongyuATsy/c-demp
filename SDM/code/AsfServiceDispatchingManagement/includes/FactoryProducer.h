/**
 * @file  FactoryProducer.h
 * @brief 功能组
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
#ifndef FACTORY_PRODUCER_H
#define FACTORY_PRODUCER_H
#include<iostream>
#include <memory>
#include "FGFactory.h"
namespace sdm
{
    //namespace extensionlib
    //{

        /**
         * @brief 
         */
        class FactoryProducer
        {
        public:
            FactoryProducer() {};
            virtual  ~FactoryProducer() noexcept {};

        public:
            /**
             * @brief 初始化，获取ConfigOperation
             * @param  
             * @return  
             */
            std::shared_ptr<sdm::AbstractFactory>  GetFactory();   
            
        };
    //}
}



#endif
