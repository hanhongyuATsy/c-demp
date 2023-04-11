#ifndef CLOUD_SERVICE_COLLECTOR_H
#define CLOUD_SERVICE_COLLECTOR_H

#include "ServiceCollectorBase.h"

namespace sdm {

class CloudServiceCollector : public ServiceCollectorBase
{
public:
    CloudServiceCollector() {}
    virtual ~CloudServiceCollector() noexcept {}
    virtual void GetServiceList();

    static void ReceiveCloudMessage(const service_info_t& _info);
};

} //namespace sdm
#endif //CLOUD_SERVICE_COLLECTOR_H
