#include "NeusarWrapperAdapterImpl.h"
#include <chrono>
#include <arpa/inet.h>

namespace sdm {

NeusarWrapperAdapterImpl::NeusarWrapperAdapterImpl()
    : m_stop(false)
    , m_proxy(nullptr)
    , tm(NeusarWrapperAdapterImpl::run, this)
{
    Proxy::StartFindService(
        [this](ara::com::ServiceHandleContainer<Proxy::HandleType> handles, ara::com::FindServiceHandle handler) {
            NeusarWrapperAdapterImpl::serviceAvailabilityCallback(std::move(handles), handler);
        }, (uint16_t)1);	
    
	//std::thread tm(NeusarWrapperAdapterImpl::run, this);
	//tm.detach();
    
}
	
NeusarWrapperAdapterImpl::~NeusarWrapperAdapterImpl()
{
    m_stop = true;
    tm.join();
}

void NeusarWrapperAdapterImpl::serviceAvailabilityCallback(ara::com::ServiceHandleContainer<Proxy::HandleType> handles, ara::com::FindServiceHandle handler)
{
    if (handles.size() > 0)
    {
        if (!m_proxy_valid.load())
        {
            // <Name>Proxy::<Name>Proxy(const HandleType &handle)：参见《NeuSARaCore_CM_API》
            m_proxy = std::make_shared<Proxy>(handles[0]);
            PrintLog("service available\n");
            m_proxy_valid = true;
        }
    }
    else
    {
        PrintLog("service unavailable\n");
        m_proxy_valid = false;
    }
}

int NeusarWrapperAdapterImpl::RequestServiceList()
{
    if (!m_proxy_valid.load())
    {
        return -1;
    }
    int size = 0;
    if (nullptr !=  m_proxy) {
        auto Request_future = m_proxy->GetAllService();

        std::chrono::time_point<std::chrono::system_clock> deadline
            = std::chrono::system_clock::now() + std::chrono::milliseconds(2000);
        if (Request_future.wait_until(deadline) != decltype(Request_future)::Status::kReady)
        {
            PrintLog("[error] request timeout\n");
            return -1;
        }

        
        auto r = Request_future.GetResult();
        if (r.HasValue())
        {
            auto Request_output = r.Value();
            //size = (int)Request_output.GetAllServiceOutput.size();
            // add services
        
            for (ApServiceInfoType& i : Request_output.ApServiceInfoVector)
            {
                service_info_t t;
                t.service_id = i.service_id;
                t.instance_id = i.instance_id;
                t.major_version = i.major_verson;
                //printf("service_id : %04X , local_ip : %s, remote_ip :%s\n", i.service_id, i.local_ip.c_str(),  i.remote_ip.c_str());
                int result = inet_pton(AF_INET,i.local_ip.c_str(),(void*) &t.ip );
                if (result != 1) {
                    PrintLog("inet_pton error!!");
                }
                t.ip = ntohl(t.ip);
                //i.remote_ip;
                SetService(t);
                size+=1;
            }
        }
        else
        {
            PrintLog("[error] request error\n");
            //auto err = r.Error();

        }
    }
	return size;
}

void NeusarWrapperAdapterImpl::run(NeusarWrapperAdapterImpl* _handle)
{
    int iqac = pthread_setname_np(pthread_self(), "sdm.nwai.thread");
    if (iqac != 0) {
        ErrorLog("pthread pthread_setname_np fail");
    }

    const int MIN_TIME = 500000;
    const int MAX_TIME = 900000;
    unsigned int time = MIN_TIME;
    int count = 0;
    //uint64_t t1, t2;

    while (!_handle->m_stop)
    {
        iqac = usleep(time++);

        // get service list from neusar
//        t1 = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
        int size = _handle->RequestServiceList();
//        t2 = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::system_clock::now().time_since_epoch()).count();
//        PrintLog("cost %ld to request service list of neusar!", t2 - t1);

        // ajust sleep time
        if (count != size)
        {
            time = MIN_TIME;
        }
        if (time > MAX_TIME)
        {
            time = MAX_TIME;
        }
        count = size;
    }
}

} //namespace sdm


	