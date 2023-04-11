/**********************************************************************************************************************
 *  COPYRIGHT
 *  -------------------------------------------------------------------------------------------------------------------
 *
 *            This software is copyright protected and proprietary to Neusoft Reach.
 *            Neusoft Reach grants to you only those rights as set out in the license conditions.
 *            All other rights remain with Neusoft Reach.
 *  -------------------------------------------------------------------------------------------------------------------
 *********************************************************************************************************************/

/***********************************************************************************************************************************
 * [NeuSAR Sign]DO NOT CHANGE THIS COMMENT!    << Start of defaultHeaderFile reference define >>        DO NOT CHANGE THIS COMMENT!
 **********************************************************************************************************************************/
#if 1
 /**********************************************************************************************************************************
 * [NeuSAR Sign]DO NOT CHANGE THIS COMMENT!    << End of defaultHeaderFile reference define >>          DO NOT CHANGE THIS COMMENT!
 **********************************************************************************************************************************/
#define AARCH64 1

#ifdef AARCH64
#include "GenData/Application_AsfServiceDispatchingManagement.hpp"
#endif
/*************************************************************************************************************************************************
 * [NeuSAR Sign]DO NOT CHANGE THIS COMMENT!    << Begin of Modification is prohibited in this endifDHFArea >>          DO NOT CHANGE THIS COMMENT!
 ************************************************************************************************************************************************/
#endif
 /************************************************************************************************************************************************
 * [NeuSAR Sign]DO NOT CHANGE THIS COMMENT!    << Finish of Modification is prohibited in this endifDHFArea >>          DO NOT CHANGE THIS COMMENT!
 ************************************************************************************************************************************************/


#ifdef AARCH64
#include "ara/exec/execution_client.h"
#endif
#include <signal.h>
/***********************************************************************************************************************************
 * [NeuSAR Sign]DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 **********************************************************************************************************************************/
#include "FactoryProducer.h"
#include "SDMservice.h"
#include<iostream>
#include <map>
#include "ara/phm/com/utils/health_data_server.h"
#include "ara/phm/supervised_entity.h"

// #include <midware/log_wrapper/logging_wrapper.h>
// #include "midware/log_wrapper/logging_wrapper.h"
 /**********************************************************************************************************************************
 * [NeuSAR Sign]DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 **********************************************************************************************************************************/

/***********************************************************************************************************************************
 * [NeuSAR Sign]DO NOT CHANGE THIS COMMENT!           << Start of function implementation >>             DO NOT CHANGE THIS COMMENT!
 **********************************************************************************************************************************/

/***********************************************************************************************************************************
 * [NeuSAR Sign]DO NOT CHANGE THIS COMMENT!           << End of function implementation >>               DO NOT CHANGE THIS COMMENT!
 **********************************************************************************************************************************/
// 退出运行的标识
static bool s_need_quit = false;
// main 的处理
//int s_pipes[2];

void SignalHandler(int signum)
{
    if(signum == SIGPIPE)
    {
        // Ignore SIGPIPE
        return;
    }

    if((signum == SIGTERM) && (!s_need_quit))
    {
        // 收到SIGTERM，设置需要退出，并向 main 等待的 pipe 写入内容
        // 注意，信号可能在任意线程中，所以不可重入的操作不能执行，比如文件读写、输出日志等。此处只适合修改标志，通知main退出
        s_need_quit = true;
        //write(s_pipes[1], "12345678", 8);
    }

}
using namespace std;
int main(int argc, char* argv[])
{
    signal(SIGTERM, SignalHandler); //
	
    signal(SIGPIPE, SignalHandler); // 

    signal(SIGABRT, SignalHandler);// 内存问题

	PrintLog("main test\n");
	
	//std::cout << "test1" <<std::endl;
	//char a[]="###########testaaa##############";
	
    // report application state
#ifdef AARCH64
    ara::exec::ExecutionClient exec_client;

    //TODO: DO SOMETHING
 /***********************************************************************************************************************************
 * [NeuSAR Sign]DO NOT CHANGE THIS COMMENT!           << Start of per update callback >>                 DO NOT CHANGE THIS COMMENT!
 **********************************************************************************************************************************/
 
 /***********************************************************************************************************************************
 * [NeuSAR Sign]DO NOT CHANGE THIS COMMENT!           << End of per update callback >>                   DO NOT CHANGE THIS COMMENT!
 **********************************************************************************************************************************/
    exec_client.ReportExecutionState(ara::exec::ExecutionState::kRunning);

/***********************************************************************************************************************************
 * [NeuSAR Sign]DO NOT CHANGE THIS COMMENT!           << Start of code implementation >>                 DO NOT CHANGE THIS COMMENT!
 **********************************************************************************************************************************/
#endif
	shared_ptr<sdm::FactoryProducer> fp = make_shared<sdm::FactoryProducer>();
	shared_ptr<sdm::AbstractFactory> fg_factory = fp->GetFactory();
	shared_ptr<sdm::FGBase> scm = fg_factory->Create("FGServiceConfigManager");
	shared_ptr<sdm::FGBase> slm = fg_factory->Create("FGServiceListManager");
	shared_ptr<sdm::FGBase> ssm = fg_factory->Create("FGServiceStateManager");
	scm->FunctionInit();
	slm->FunctionInit();
	ssm->FunctionInit();
	scm->FunctionRun();
	slm->FunctionRun();
	ssm->FunctionRun();
	
	shared_ptr<sdm::SDMAppInterface> sdma = make_shared<sdm::SDMAppInterface>();
	sdma->Init();

	using namespace ara::phm::com::utils;
	//using InstanceSpecifier = ara::phm::com::utils::InstanceSpecifier;
	ara::phm::SupervisedEntity Instance(instanceId_SE_AsfServiceDispatchingManagement_AsfServiceDispatchingManagement_Phm_RPort);
	PrintLog("ara::phm");
	while (!s_need_quit) {   
		TraceLog("ara::phm heardbeat!!!");
	    Instance.ReportCheckpoint(AsfServiceDispatchingManagement_CP1);
	    std::this_thread::sleep_for(std::chrono::seconds(2));
	}

	sleep(1);
/***********************************************************************************************************************************
 * [NeuSAR Sign]DO NOT CHANGE THIS COMMENT!           << End of code implementation >>                   DO NOT CHANGE THIS COMMENT!
 **********************************************************************************************************************************/
#ifdef AARCH64
    // report application state
    exec_client.ReportExecutionState(ara::exec::ExecutionState::kTerminating);
#endif

	// close(s_pipes[0]);
    // close(s_pipes[1]);

    return 0;
}

