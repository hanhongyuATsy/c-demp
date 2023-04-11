#include "ConfigServiceCollector.h"
#include "ServiceList.h"
#include "ConfigOperation.h"

namespace sdm {

void ConfigServiceCollector::GetServiceList()
{
	sdm::ServiceList& sl = sdm::ServiceList::GetInstance();
	std::vector<ServiceListConfigType> configs = ConfigOperation::GetInstance().GetConfigList();
	for (ServiceListConfigType& config : configs)
	{
		sdm::service_info_t si;
		si.service_id = config.service;
		si.instance_id = config.instance;
		si.ip = config.ip;
		si.port = config.port;
		si.major_version = config.major_version;
		si.type = config.type;
		si.protocol = config.protocol;
		si.status = (unsigned char)SERVICE_STATUS_UNKNOWN;
		sl.AddService(si);
	}
	return ;
}

} //namespace sdm
	