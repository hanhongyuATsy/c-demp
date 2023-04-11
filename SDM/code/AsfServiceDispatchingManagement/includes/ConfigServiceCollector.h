#ifndef CONFIG_SERVICE_COLLECTOR_H
#define CONFIG_SERVICE_COLLECTOR_H

#include "ServiceCollectorBase.h"

namespace sdm {

class ConfigServiceCollector : public ServiceCollectorBase
{
public:
    ConfigServiceCollector() {}
    virtual ~ConfigServiceCollector() noexcept {}
    virtual void GetServiceList();
};

} //namespace sdm
#endif //CONFIG_SERVICE_COLLECTOR_H
