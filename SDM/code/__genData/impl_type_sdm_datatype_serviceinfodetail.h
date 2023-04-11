#ifndef ____SDM_DATATYPE_SERVICEINFODETAIL_H__
#define ____SDM_DATATYPE_SERVICEINFODETAIL_H__


#include "cstdint"






struct SDM_DataType_ServiceInfoDetail {
public:
	std::uint32_t ip;
	std::uint16_t port;
	std::uint8_t protocol;
	std::uint8_t version;
	std::uint8_t status;
	std::uint8_t type;
/*
	SDM_DataType_ServiceInfoDetail() {}
	~SDM_DataType_ServiceInfoDetail() {}
	SDM_DataType_ServiceInfoDetail(const std::uint32_t _ip,const std::uint16_t _port,const std::uint8_t _protocol,const std::uint8_t _version,const std::uint8_t _status,const std::uint8_t _type):ip(_ip),port(_port),protocol(_protocol),version(_version),status(_status),type(_type) {}
	SDM_DataType_ServiceInfoDetail(const SDM_DataType_ServiceInfoDetail &_x){
		ip = _x.ip;
		port = _x.port;
		protocol = _x.protocol;
		version = _x.version;
		status = _x.status;
		type = _x.type;
	}
	SDM_DataType_ServiceInfoDetail(SDM_DataType_ServiceInfoDetail &&_x){
		ip = std::move(_x.ip);
		port = std::move(_x.port);
		protocol = std::move(_x.protocol);
		version = std::move(_x.version);
		status = std::move(_x.status);
		type = std::move(_x.type);
	}
	SDM_DataType_ServiceInfoDetail& operator=(const SDM_DataType_ServiceInfoDetail &_x){
		ip = _x.ip;
		port = _x.port;
		protocol = _x.protocol;
		version = _x.version;
		status = _x.status;
		type = _x.type;
		return *this;
	}
	SDM_DataType_ServiceInfoDetail& operator=(SDM_DataType_ServiceInfoDetail &&_x){
		ip = std::move(_x.ip);
		port = std::move(_x.port);
		protocol = std::move(_x.protocol);
		version = std::move(_x.version);
		status = std::move(_x.status);
		type = std::move(_x.type);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(ip);
		fun(port);
		fun(protocol);
		fun(version);
		fun(status);
		fun(type);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(ip);
		fun(port);
		fun(protocol);
		fun(version);
		fun(status);
		fun(type);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (ip);
		fun << (port);
		fun << (protocol);
		fun << (version);
		fun << (status);
		fun << (type);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (ip);
		fun >> (port);
		fun >> (protocol);
		fun >> (version);
		fun >> (status);
		fun >> (type);
	}
};

#endif //____SDM_DATATYPE_SERVICEINFODETAIL_H__
