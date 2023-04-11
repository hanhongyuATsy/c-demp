/**
 * @file  FGFactory.cpp
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

#include "FGFactory.h"
#include "LogPrint.h"
#include "FGServiceConfigManager.h"
#include "FGServiceListManager.h"
#include "FGServiceStateManager.h"

namespace sdm
{
    //namespace extensionlib
    //{
        FGFactory::FGFactory() { // 写到cpp 中； 头文件依赖关系不够清楚； 头文件中会影响编译时间；
                fg_factorys["FGServiceConfigManager"] = std::make_shared<sdm::FGServiceConfigManager>();
                fg_factorys["FGServiceListManager"] = std::make_shared<sdm::FGServiceListManager>();
                fg_factorys["FGServiceStateManager"] = std::make_shared<sdm::FGServiceStateManager>();
            };

        /**
        * @brief 初始化，获取ConfigOperation
        * @param  
        * @return  
        */
        std::shared_ptr<sdm::FGBase> FGFactory::Create(std::string fg) 
        {
            return fg_factorys[fg];    
        }   

        
    //}
}

