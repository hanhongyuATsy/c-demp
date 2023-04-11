/**
 * @file  FGFactory.h
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
#ifndef FG_FACTORY_H
#define FG_FACTORY_H
#include "FGBase.h"

#include <iostream>
#include <memory>
#include <string>
#include <map>

namespace sdm
{
    //namespace extensionlib
    //{
        /**
         * @brief FGFactory
         */

        class AbstractFactory
        {
        public:
            AbstractFactory() {};
            virtual ~AbstractFactory() {};

        public:
            /**
             * @brief 
             * @param  
             * @return  
             */
            virtual std::shared_ptr<sdm::FGBase>  Create(std::string )  = 0;   // 

        };
        /**
         * @brief 
         */
        class FGFactory:public AbstractFactory
        {
        public:
            FGFactory();
            ~FGFactory() noexcept {};

        public:
            /**
             * @brief 初始化，获取ConfigOperation
             * @param  
             * @return  
             */
            std::map<std::string, std::shared_ptr<sdm::FGBase>> fg_factorys;
            std::shared_ptr<sdm::FGBase>  Create(std::string ) override;   

        };
    //}
}



#endif
