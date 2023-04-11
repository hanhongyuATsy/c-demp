/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *
 *            This software is copyright protected and proprietary to Neusoft Reach.
 *            Neusoft Reach grants to you only those rights as set out in the license conditions.
 *            All other rights remain with Neusoft Reach.
 *  -------------------------------------------------------------------------------------------------------------------
 *********************************************************************************************************************/
 
#include <gtest/gtest.h>
#include "../ExtensionLib/includes/service_dynamic_discovery_supporter.h"

using namespace sdm::extensionlib;

bool Init() {
    ServiceDynamicDiscoverySupporter::GetInstance().Init();
    return true;
}

TEST(ServiceDynamicDiscoverySupporter, ServiceDynamicDiscoverySupporter_Init) {
    bool value = Init();
    EXPECT_EQ(true, value);
}

bool RequestService() {
    ServiceDynamicDiscoverySupporter::GetInstance().RequestService(0, 0);
    return true;
}

TEST(ServiceDynamicDiscoverySupporter, ServiceDynamicDiscoverySupporter_RequestService) {
    bool value = RequestService();
    EXPECT_EQ(true, value);
}

int main(int argc, char* argv[])
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    
}

