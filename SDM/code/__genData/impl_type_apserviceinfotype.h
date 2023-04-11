#ifndef ____APSERVICEINFOTYPE_H__
#define ____APSERVICEINFOTYPE_H__


#include "cstdint"
#include "impl_type_string.h"






struct ApServiceInfoType {
public:
	std::uint16_t service_id;
	std::uint16_t instance_id;
	std::uint8_t major_verson;
	String local_ip;
	String remote_ip;
/*
	ApServiceInfoType() {}
	~ApServiceInfoType() {}
	ApServiceInfoType(const std::uint16_t _service_id,const std::uint16_t _instance_id,const std::uint8_t _major_verson,const String _local_ip,const String _remote_ip):service_id(_service_id),instance_id(_instance_id),major_verson(_major_verson),local_ip(_local_ip),remote_ip(_remote_ip) {}
	ApServiceInfoType(const ApServiceInfoType &_x){
		service_id = _x.service_id;
		instance_id = _x.instance_id;
		major_verson = _x.major_verson;
		local_ip = _x.local_ip;
		remote_ip = _x.remote_ip;
	}
	ApServiceInfoType(ApServiceInfoType &&_x){
		service_id = std::move(_x.service_id);
		instance_id = std::move(_x.instance_id);
		major_verson = std::move(_x.major_verson);
		local_ip = std::move(_x.local_ip);
		remote_ip = std::move(_x.remote_ip);
	}
	ApServiceInfoType& operator=(const ApServiceInfoType &_x){
		service_id = _x.service_id;
		instance_id = _x.instance_id;
		major_verson = _x.major_verson;
		local_ip = _x.local_ip;
		remote_ip = _x.remote_ip;
		return *this;
	}
	ApServiceInfoType& operator=(ApServiceInfoType &&_x){
		service_id = std::move(_x.service_id);
		instance_id = std::move(_x.instance_id);
		major_verson = std::move(_x.major_verson);
		local_ip = std::move(_x.local_ip);
		remote_ip = std::move(_x.remote_ip);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(service_id);
		fun(instance_id);
		fun(major_verson);
		fun(local_ip);
		fun(remote_ip);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(service_id);
		fun(instance_id);
		fun(major_verson);
		fun(local_ip);
		fun(remote_ip);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (service_id);
		fun << (instance_id);
		fun << (major_verson);
		fun << (local_ip);
		fun << (remote_ip);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (service_id);
		fun >> (instance_id);
		fun >> (major_verson);
		fun >> (local_ip);
		fun >> (remote_ip);
	}
};

#endif //____APSERVICEINFOTYPE_H__
