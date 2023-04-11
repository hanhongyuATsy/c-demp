#include "ServiceCollectorBase.h"

namespace sdm {

ServiceCollectorBase::ServiceCollectorBase()
{
    m_handler = 0;
}

ServiceCollectorBase::~ServiceCollectorBase()
{
    m_handler = 0;
}

void ServiceCollectorBase::RegisterServiceNotify(notify_handler_t _handler)
{
	m_handler = _handler;
}

void ServiceCollectorBase::UnregisterServiceNotify()
{
	m_handler = 0;
}

void ServiceCollectorBase::serviceNotify(const service_info_t& _info)
{
	if (m_handler)
	{
		m_handler(_info);
	}
}

} //namespace sdm
	