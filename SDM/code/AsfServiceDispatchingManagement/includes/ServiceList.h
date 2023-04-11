#ifndef SERVICE_LIST_H
#define SERVICE_LIST_H

#include "def.h"

namespace sdm {

enum SERVICE_ALTERATION_TYPE
{
	SERVICE_ALTERATION_ADD = 0,
	SERVICE_ALTERATION_REMOVE,
    SERVICE_ALTERATION_STATUS,
    SERVICE_ALTERATION_FROM,
	SERVICE_ALTERATION_COUNT
};

enum MESSAGE_TYPE
{
	MESSAGE_TYPE_ADD_SERVICE = 0,
	MESSAGE_TYPE_REMOVE_SERVICE,
	MESSAGE_TYPE_REDUCE_TTL,
	MESSAGE_TYPE_PRINT,
	MESSAGE_TYPE_COUNT
};

struct message_t
{
	MESSAGE_TYPE id;
	void* param;
};

typedef std::function< void (int, const service_info_t&) > alteration_handler_t;

class ServiceList
{
public:
    static ServiceList& GetInstance();
    virtual ~ServiceList();

    void AddService(const service_info_t& _si);
    void RemoveService(const service_info_t& _si);
    void RemoveService(unsigned short _service_id, unsigned short _instance_id);
    void ShowServiceList();
    void GetServiceList();
    bool GetServiceInfo(service_info_t& _si);
    service_info_t GetServiceInfo(unsigned short _service_id, unsigned short _instance_id);
    unsigned int RegisterServiceAlterationNotify(alteration_handler_t _handler);
    void UnregisterServiceAlterationNotify(unsigned int _token);

private:
    ServiceList();
    static void run(ServiceList* _handle);
    void pushMessage(const message_t& m);
	void popMessage();
	void reduceTTL();
    void notifyAlteration(int _type, const service_info_t& _info);
    void notifyAlteration(const service_info_t& _old, const service_info_t& _new);

    std::map<unsigned int, alteration_handler_t> m_alteration;
	std::map<unsigned int, service_info_t> m_services;
	std::mutex m_mutex, m_alteration_mutex;
	std::queue<message_t> m_messages;
	bool m_stop;
};

} //namespace sdm
#endif //SERVICE_LIST_H
