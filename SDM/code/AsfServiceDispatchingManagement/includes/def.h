#ifndef DEF_H
#define DEF_H

#include <unistd.h>
#include <map>
#include <queue>
#include <vector>
#include <thread>
#include <functional>
#include <condition_variable>
#include "LogPrint.h"

namespace sdm {

enum SERVICE_PROTOCOL
{
	SERVICE_PROTOCOL_UDP = 0,
	SERVICE_PROTOCOL_TCP,
	SERVICE_PROTOCOL_COUNT
};

enum SERVICE_FROM
{
	SERVICE_FROM_CLOUD = 0,
	SERVICE_FROM_TBOX,
    SERVICE_FROM_CCU,
    SERVICE_FROM_IDC,
    SERVICE_FROM_ADC,
    SERVICE_FROM_MPROXY,
	SERVICE_FROM_COUNT
};

enum SERVICE_STATUS
{
	SERVICE_STATUS_RUNNING = 0,
	SERVICE_STATUS_TERMINATED,
	SERVICE_STATUS_UNKNOWN,
	SERVICE_STATUS_COUNT
};

enum SERVICE_TYPE
{
	SERVICE_TYPE_PRIVATE = 0,
	SERVICE_TYPE_PROTECTED,
	SERVICE_TYPE_PUBLIC,
	SERVICE_TYPE_COUNT
};

struct service_info_t
{
    service_info_t():ip(0), port(0),minor_version(0),ttl(0),service_id(0),
    instance_id(0x1),major_version(0x1),protocol(SERVICE_PROTOCOL_UDP),
    from(SERVICE_FROM_COUNT),status(SERVICE_PROTOCOL_UDP),type(SERVICE_TYPE_PUBLIC){};

    unsigned int ip;
    unsigned int port;
    unsigned int minor_version;
    unsigned int ttl;
    unsigned short service_id;
    unsigned short instance_id;
    unsigned char major_version;
    unsigned char protocol;
    unsigned char from;
    unsigned char status;
    unsigned char type;

    // service_info_t()
    // {
    //     ip = 0;
    //     port = 0;
    //     minor_version = 0x0;
    //     ttl = 0;
    //     service_id = 0x0;
    //     instance_id = 0x1;
    //     major_version = 0x1;
    //     protocol = SERVICE_PROTOCOL_UDP;
    //     from = SERVICE_FROM_COUNT;
    //     status = SERVICE_STATUS_COUNT;
    //     type = SERVICE_TYPE_PUBLIC;
    // }
};

} //namespace sdm
#endif //DEF_H