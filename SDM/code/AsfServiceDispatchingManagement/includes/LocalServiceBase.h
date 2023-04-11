#ifndef LOCAL_SERVICE_BASE_H
#define LOCAL_SERVICE_BASE_H

#include "def.h"

namespace sdm {

class LocalServiceBase 
{
public:
	LocalServiceBase() {}
	virtual ~LocalServiceBase();
	
public:
	void SetService(const service_info_t& _service);
	bool TakeService(service_info_t& _service);
	
private:
	std::queue<service_info_t> m_services;
	std::mutex m_mutex;
};
} //namespace sdm

#endif //LOCAL_SERVICE_BASE_H
