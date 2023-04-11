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
#include <CloudServiceCollector.h>
#include <ConfigOperation.h>
#include <ConfigServiceCollector.h>
#include <FactoryProducer.h>
#include <FGServiceConfigManager.h>
#include <FGServiceListManager.h>
#include <LocalServiceBase.h>
#include <FGServiceStateManager.h>
#include <LocalServiceCollector.h>
#include <NeusarWrapperAdapterImpl.h>
#include <SDMservice.h>
#include <ServiceMonitorAdapterImpl.h>
#include <ServiceList.h>

using namespace sdm;
/*
bool GetServiceList() {
    CloudServiceCollector css;
    css.GetServiceList();
    return true;
}

TEST(CloudServiceCollector, CloudServiceCollector_GetServiceList) {
    bool value = GetServiceList();
    EXPECT_EQ(true, value);
}

bool ReceiveCloudMessage() {
    service_info_t info;
    CloudServiceCollector::ReceiveCloudMessage(info);
    return true;
}

TEST(CloudServiceCollector, CloudServiceCollector_ReceiveCloudMessage) {
    bool value = ReceiveCloudMessage();
    EXPECT_EQ(true, value);
}
*/
bool AddConfig() {
     ServiceListConfigType slct;
     slct.service = 0;
     slct.instance = 0;
     ConfigOperation::GetInstance().AddConfig(slct);
     return true;
}

TEST(ConfigOperation, ConfigOperation_AddConfig) {
    ServiceListConfigType slct;
    slct.service = 0;
    slct.instance = 0;
    bool value = ConfigOperation::GetInstance().AddConfig(slct);
    EXPECT_TRUE(value);
}
/*
bool DelConfig() {
    ConfigOperation::GetInstance().DelConfig(1, 1);
    return true;
}

TEST(ConfigOperation, ConfigOperation_DelConfig) {
    bool value = DelConfig();
    EXPECT_EQ(true, value);
}

bool ConfigModify() {
    ServiceListConfigType slct;
    slct.service = 0;
    slct.instance = 0;
    ConfigOperation::GetInstance().ConfigModify(slct);
    return true;
}

TEST(ConfigOperation, ConfigOperation_ConfigModify) {
    bool value = ConfigModify();
    EXPECT_EQ(true, value);
}

bool ConfigRead() {
    ConfigOperation::GetInstance().ConfigRead(0, 0);
    return true;
}

TEST(ConfigOperation, ConfigOperation_ConfigRead) {
    bool value = ConfigRead();
    EXPECT_EQ(true, value);
}

bool GetConfigList() {
    ConfigOperation::GetInstance().GetConfigList();
    return true;
}

TEST(ConfigOperation, ConfigOperation_GetConfigList) {
    bool value = GetConfigList();
    EXPECT_EQ(true, value);
}

void callback(unsigned int) {

}

bool RegisterConfigAlertationNotify() {
    ConfigOperation::GetInstance().RegisterConfigAlertationNotify(callback);
    return true;
}

TEST(ConfigOperation, ConfigOperation_RegisterConfigAlertationNotify) {
    bool value = RegisterConfigAlertationNotify();
    EXPECT_EQ(true, value);
}

bool GetServiceList2() {
    ConfigServiceCollector csc;
    csc.GetServiceList();
    return true;
}

TEST(ConfigServiceCollector, ConfigServiceCollector_GetServiceList) {
    bool value = GetServiceList2();
    EXPECT_EQ(true, value);
}

bool GetFactory() {
    FactoryProducer fp;
    fp.GetFactory();
    return true;
}

TEST(FactoryProducer, FactoryProducer_GetFactory) {
    bool value = GetFactory();
    EXPECT_EQ(true, value);
}

bool Create() {
    FGFactory ff;
    ff.Create("aaaa");
    return true;
}

TEST(FGFactory, FGFactory_Create) {
    bool value = Create();
    EXPECT_EQ(true, value);
}

bool FunctionInit() {
    FGServiceConfigManager fcm;
    fcm.FunctionInit();
    return true;
}

TEST(FGServiceConfigManager, FGServiceConfigManager_FunctionInit) {
    bool value = FunctionInit();
    EXPECT_EQ(true, value);
}

bool FunctionRun() {
    FGServiceConfigManager fcm;
    fcm.FunctionRun();
    return true;
}

TEST(FGServiceConfigManager, FGServiceConfigManager_FunctionRun) {
    bool value = FunctionRun();
    EXPECT_EQ(true, value);
}

bool FunctionInit2() {
    FGServiceListManager flm;
    flm.FunctionInit();
    return true;
}

TEST(FGServiceListManager, FGServiceListManager_FunctionInit) {
    bool value = FunctionInit2();
    EXPECT_EQ(true, value);
}

bool FunctionRun2() {
    FGServiceListManager flm;
    flm.FunctionRun();
    return true;
}

TEST(FGServiceListManager, FGServiceListManager_FunctionRun) {
    bool value = FunctionRun2();
    EXPECT_EQ(true, value);
}

bool FunctionInit3() {
    FGServiceStateManager ssm;
    ssm.FunctionInit();
    return true;
}

TEST(FGServiceStateManager, FGServiceStateManager_FunctionInit) {
    bool value = FunctionInit3();
    EXPECT_EQ(true, value);
}

bool FunctionRun3() {
    FGServiceStateManager ssm;
    ssm.FunctionRun();
    return true;
}

TEST(FGServiceStateManager, FGServiceStateManager_FunctionRun) {
    bool value = FunctionRun3();
    EXPECT_EQ(true, value);
}

bool SetService() {
    LocalServiceBase lsb;
    service_info_t a;
    lsb.SetService(a);
    return true;
}

TEST(LocalServiceBase, LocalServiceBase_SetService) {
    bool value = SetService();
    EXPECT_EQ(true, value);
}

bool TakeService() {
    LocalServiceBase lsb;
    service_info_t a;
    lsb.TakeService(a);
    return true;
}

TEST(LocalServiceBase, LocalServiceBase_TakeService) {
    bool value = TakeService();
    EXPECT_EQ(true, value);
}

bool GetServiceList3() {
    LocalServiceCollector lsc;
    lsc.GetServiceList();
    return true;
}

TEST(LocalServiceCollector, LocalServiceCollector_GetServiceList) {
    bool value = GetServiceList3();
    EXPECT_EQ(true, value);
}


bool AddService() {
    service_info_t si;
    si.service_id = 0;
    si.instance_id = 0;
    ServiceList::GetInstance().AddService(si);
    return true;
}

TEST(ServiceList, ServiceList_AddService) {
    bool value = AddService();
    EXPECT_EQ(true, value);
}

bool RemoveService() {
    service_info_t si;
    si.service_id = 0;
    si.instance_id = 0;
    ServiceList::GetInstance().RemoveService(si);
    return true;
}

TEST(ServiceList, ServiceList_RemoveService) {
    bool value = RemoveService();
    EXPECT_EQ(true, value);
}

bool ShowServiceList() {
    ServiceList::GetInstance().ShowServiceList();
    return true;
}

TEST(ServiceList, ServiceList_ShowServiceList) {
    bool value = ShowServiceList();
    EXPECT_EQ(true, value);
}

bool GetServiceList4() {
    ServiceList::GetInstance().GetServiceList();
    return true;
}

TEST(ServiceList, ServiceList_GetServiceList) {
    bool value = GetServiceList4();
    EXPECT_EQ(true, value);
}

bool GetServiceInfo() {
    service_info_t si;
    ServiceList::GetInstance().GetServiceInfo(si);
    return true;
}

TEST(ServiceList, ServiceList_GetServiceInfo) {
    bool value = GetServiceInfo();
    EXPECT_EQ(true, value);
}

void callback3(int, const service_info_t&) {

}

bool RegisterServiceAlterationNotify() {
    ServiceList::GetInstance().RegisterServiceAlterationNotify(callback3);
    return true;
}

TEST(ServiceList, ServiceList_RegisterServiceAlterationNotify) {
    bool value = RegisterServiceAlterationNotify();
    EXPECT_EQ(true, value);
}

bool Stop() {
    ServiceMonitorAdapterImpl smai;
    smai.Stop();
    return true;
}

TEST(ServiceMonitorAdapterImpl, ServiceMonitorAdapterImpl_Stop) {
    bool value = Stop();
    EXPECT_EQ(true, value);
}

bool SetPort() {
    ServiceMonitorAdapterImpl smai;
    int port;
    smai.SetPort(port);
    return true;
}

TEST(ServiceMonitorAdapterImpl, ServiceMonitorAdapterImpl_SetPort) {
    bool value = SetPort();
    EXPECT_EQ(true, value);
}
*/
int main(int argc, char* argv[])
{
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
    
}

