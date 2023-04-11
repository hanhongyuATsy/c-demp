/**
 * @file  FactoryProducer.cpp
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

#include "FactoryProducer.h"
namespace sdm
{
    //namespace extensionlib
    //{

        
            /*
             * @brief 初始化，获取ConfigOperation
             * @param  
             * @return  
             */
            std::shared_ptr<sdm::AbstractFactory> FactoryProducer::GetFactory()
            {
                return std::make_shared<FGFactory>();
            }  

        
    //}
}

