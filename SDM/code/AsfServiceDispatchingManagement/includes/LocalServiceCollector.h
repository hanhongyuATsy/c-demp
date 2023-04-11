#ifndef LOCAL_SERVICE_COLLECTOR_H
#define LOCAL_SERVICE_COLLECTOR_H

#include "ServiceCollectorBase.h"

namespace sdm {

class LocalServiceBase;
class LocalServiceCollector : public ServiceCollectorBase
{
public:
    LocalServiceCollector();
    virtual ~LocalServiceCollector();
    virtual void GetServiceList();

private:
    static void run(LocalServiceCollector* _handle);
    
    bool m_stop;   
    LocalServiceBase* m_service_adapter;
    std::thread tm;

};

} //namespace sdm
#endif //LOCAL_SERVICE_COLLECTOR_H