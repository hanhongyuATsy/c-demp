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

#include "GenData/Application_ServiceDispatchingManagementDemo.hpp"

/*************************************************************************************************************************************************
 * [NeuSAR Sign]DO NOT CHANGE THIS COMMENT!    << Begin of Modification is prohibited in this endifDHFArea >>          DO NOT CHANGE THIS COMMENT!
 ************************************************************************************************************************************************/
#endif
 /************************************************************************************************************************************************
 * [NeuSAR Sign]DO NOT CHANGE THIS COMMENT!    << Finish of Modification is prohibited in this endifDHFArea >>          DO NOT CHANGE THIS COMMENT!
 ************************************************************************************************************************************************/




#include "ara/exec/execution_client.h"
//#include "execution_client.h"
#include "extensionlib/service_dynamic_discovery_supporter.h"
#include <signal.h>
#include <midware/log_wrapper/logging_wrapper.h>
#include "midware/log_wrapper/logging_wrapper.h"
#include <iomanip>
#include <iostream>
#include <sstream>
#include <condition_variable>
#include <thread>
#include <unistd.h>
#include <vsomeip/vsomeip.hpp>

/***********************************************************************************************************************************
 * [NeuSAR Sign]DO NOT CHANGE THIS COMMENT!           << Start of include and declaration area >>        DO NOT CHANGE THIS COMMENT!
 **********************************************************************************************************************************/

 /**********************************************************************************************************************************
 * [NeuSAR Sign]DO NOT CHANGE THIS COMMENT!           << End of include and declaration area >>          DO NOT CHANGE THIS COMMENT!
 **********************************************************************************************************************************/

/***********************************************************************************************************************************
 * [NeuSAR Sign]DO NOT CHANGE THIS COMMENT!           << Start of function implementation >>             DO NOT CHANGE THIS COMMENT!
 **********************************************************************************************************************************/

/***********************************************************************************************************************************
 * [NeuSAR Sign]DO NOT CHANGE THIS COMMENT!           << End of function implementation >>               DO NOT CHANGE THIS COMMENT!
 **********************************************************************************************************************************/
void SignalHandler(int signum)
{
    ara::exec::ExecutionClient exec_client;
    exec_client.ReportExecutionState(ara::exec::ExecutionState::kTerminating);
    //DO something after catch signal SIGTERM
/***********************************************************************************************************************************
 * [NeuSAR Sign]DO NOT CHANGE THIS COMMENT!           << Start of the code after catch signal >>         DO NOT CHANGE THIS COMMENT!
 **********************************************************************************************************************************/


/***********************************************************************************************************************************
 * [NeuSAR Sign]DO NOT CHANGE THIS COMMENT!           << End of the code after catch signal >>           DO NOT CHANGE THIS COMMENT!
 **********************************************************************************************************************************/
    exit(0);
}


//#define SAMPLE_SERVICE_ID 0x201f
#define SAMPLE_SERVICE_ID 0xFF40
#define SAMPLE_INSTANCE_ID 0x33c
std::shared_ptr< vsomeip::application > _app_;
sdm::extensionlib::ServiceDynamicDiscoverySupporter& _sdm_ = sdm::extensionlib::ServiceDynamicDiscoverySupporter::GetInstance();
static void run()
{
    int i = 0;
    while (i < 5) {
        sleep(10);
	    _sdm_.RequestService(SAMPLE_SERVICE_ID+1, SAMPLE_INSTANCE_ID+1);
        i++;
    }
    _sdm_.RequestService(0x800E, SAMPLE_INSTANCE_ID);

    for (i = 0; i < 0xFFFF; i++) {
        for (int j = 0; j < 0xFFFF; j++) {
	    _sdm_.RequestService(i, j);
        sleep(3);
        }
    }
}

void on_availability(vsomeip::service_t _service, vsomeip::instance_t _instance, bool _is_available)
{
    std::cout << "[client][on_availability] Service ["
            << std::setw(4) << std::setfill('0') << std::hex << _service << "." << _instance
            << "] is "
            << (_is_available ? "available." : "NOT available.")
            << std::endl;
}

int main(int argc, char *argv[])
{
    signal(SIGTERM, SignalHandler);
    // report application state
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
    
 

    _sdm_.Init();
//    sleep(10);
// #if 1 //test service availability
//     _app_ = vsomeip::runtime::get()->create_application("client-sample");
//     _app_->init();
//     _app_->register_availability_handler(SAMPLE_SERVICE_ID, SAMPLE_INSTANCE_ID, on_availability);
//     _app_->request_service(SAMPLE_SERVICE_ID, SAMPLE_INSTANCE_ID);
    std::thread sender(run);
// //     sender.detach();
//     _app_->start();
// #endif


   while(1) {
        // core mock
       
       std::cout << "sdmdemo VERSION:" << APPCURRENTVERSION <<std::endl;
       std::this_thread::sleep_for(std::chrono::seconds(10));
   }
	
    /***********************************************************************************************************************************
     * [NeuSAR Sign]DO NOT CHANGE THIS COMMENT!           << End of code implementation >>                   DO NOT CHANGE THIS COMMENT!
     **********************************************************************************************************************************/

    // report application state
    exec_client.ReportExecutionState(ara::exec::ExecutionState::kTerminating);
    return 0;
}

