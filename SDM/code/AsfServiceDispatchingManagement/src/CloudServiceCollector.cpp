#include "CloudServiceCollector.h"
#include "ServiceList.h"

namespace sdm {

void CloudServiceCollector::GetServiceList()
{
	// nothing to do
}

void CloudServiceCollector::ReceiveCloudMessage(const service_info_t& _info)
{
	sdm::service_info_t si = _info;
	sdm::ServiceList& sl = sdm::ServiceList::GetInstance();
	si.from = (unsigned char)SERVICE_FROM_CLOUD;
	si.status = (unsigned char)SERVICE_STATUS_UNKNOWN;
	si.type = (unsigned char)SERVICE_TYPE_PUBLIC;
	if (_info.ttl == (unsigned int)0)
	{
		sl.RemoveService(si);
	}
	else
	{
		sl.AddService(si);
	}
}

} //namespace sdm
	