#ifndef SERVICE_COLLECTOR_BASE_H
#define SERVICE_COLLECTOR_BASE_H

#include "def.h"

namespace sdm {

typedef std::function< void (const service_info_t&) > notify_handler_t;

class ServiceCollectorBase
{
public:
    ServiceCollectorBase();
    virtual ~ServiceCollectorBase();
    virtual void GetServiceList() = 0;
    virtual void RegisterServiceNotify(notify_handler_t _handler);
    virtual void UnregisterServiceNotify();

protected:
    virtual void serviceNotify(const service_info_t& _info);
    notify_handler_t m_handler;
};

} //namespace sdm
#endif //SERVICE_COLLECTOR_BASE_H