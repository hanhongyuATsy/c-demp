#ifndef ____APSINGLESERVICEINFOTYPE_H__
#define ____APSINGLESERVICEINFOTYPE_H__


#include "cstdint"






struct ApSingleServiceInfoType {
public:
	std::uint16_t service_id;
	std::uint16_t instance_id;
	std::uint8_t major_verson;
/*
	ApSingleServiceInfoType() {}
	~ApSingleServiceInfoType() {}
	ApSingleServiceInfoType(const std::uint16_t _service_id,const std::uint16_t _instance_id,const std::uint8_t _major_verson):service_id(_service_id),instance_id(_instance_id),major_verson(_major_verson) {}
	ApSingleServiceInfoType(const ApSingleServiceInfoType &_x){
		service_id = _x.service_id;
		instance_id = _x.instance_id;
		major_verson = _x.major_verson;
	}
	ApSingleServiceInfoType(ApSingleServiceInfoType &&_x){
		service_id = std::move(_x.service_id);
		instance_id = std::move(_x.instance_id);
		major_verson = std::move(_x.major_verson);
	}
	ApSingleServiceInfoType& operator=(const ApSingleServiceInfoType &_x){
		service_id = _x.service_id;
		instance_id = _x.instance_id;
		major_verson = _x.major_verson;
		return *this;
	}
	ApSingleServiceInfoType& operator=(ApSingleServiceInfoType &&_x){
		service_id = std::move(_x.service_id);
		instance_id = std::move(_x.instance_id);
		major_verson = std::move(_x.major_verson);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(service_id);
		fun(instance_id);
		fun(major_verson);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(service_id);
		fun(instance_id);
		fun(major_verson);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (service_id);
		fun << (instance_id);
		fun << (major_verson);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (service_id);
		fun >> (instance_id);
		fun >> (major_verson);
	}
};

#endif //____APSINGLESERVICEINFOTYPE_H__
