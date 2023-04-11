#ifndef SERVICE_MONITOR_ADAPTER_IMPL_H
#define SERVICE_MONITOR_ADAPTER_IMPL_H

#include "LocalServiceBase.h"

namespace sdm {

class ServiceMonitorAdapterImpl : public LocalServiceBase 
{
public:
	ServiceMonitorAdapterImpl();
	virtual ~ServiceMonitorAdapterImpl();

	void Start();
	void Stop();
	void SetMulticast(const char* _ip);
	void SetPort(int _port);
	void AddRoute(const char* _ip);
	void DelRoute(const char* _ip);
	void ClearRoutes();

private:
	static void run(ServiceMonitorAdapterImpl* _handle);
	void parseSomeipSd(unsigned char _buf[], int _size);

	char m_multicast[16];
	int m_port;
	std::vector<char*> m_routes;
	bool m_stop;
};
} //namespace sdm

#endif //SERVICE_MONITOR_ADAPTER_IMPL_H
