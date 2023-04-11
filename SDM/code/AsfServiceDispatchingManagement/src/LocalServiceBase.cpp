#include "LocalServiceBase.h"

namespace sdm {

LocalServiceBase::~LocalServiceBase()
{
	std::unique_lock<std::mutex> lock(m_mutex);
	try {
		std::queue<service_info_t> empty;
		m_services.swap(empty);
	} catch(...) { }
}

void LocalServiceBase::SetService(const service_info_t& _service)
{
	std::unique_lock<std::mutex> lock(m_mutex);
	m_services.push(_service);
}

bool LocalServiceBase::TakeService(service_info_t& _service)
{
	std::unique_lock<std::mutex> lock(m_mutex);
	if (m_services.size() > 0)
	{
		_service = m_services.front();
		m_services.pop();
		return true;
	}
	return false;
}
	
} //namespace sdm


	