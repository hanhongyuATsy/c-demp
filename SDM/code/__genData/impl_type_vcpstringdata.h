#ifndef ____VCPSTRINGDATA_H__
#define ____VCPSTRINGDATA_H__


#include "cstdint"
#include "impl_type_string.h"






struct VCPSTRINGDATA {
public:
	std::uint16_t serviceid;
	std::uint16_t methodid;
	String vcpstringdata;
/*
	VCPSTRINGDATA() {}
	~VCPSTRINGDATA() {}
	VCPSTRINGDATA(const std::uint16_t _serviceid,const std::uint16_t _methodid,const String _vcpstringdata):serviceid(_serviceid),methodid(_methodid),vcpstringdata(_vcpstringdata) {}
	VCPSTRINGDATA(const VCPSTRINGDATA &_x){
		serviceid = _x.serviceid;
		methodid = _x.methodid;
		vcpstringdata = _x.vcpstringdata;
	}
	VCPSTRINGDATA(VCPSTRINGDATA &&_x){
		serviceid = std::move(_x.serviceid);
		methodid = std::move(_x.methodid);
		vcpstringdata = std::move(_x.vcpstringdata);
	}
	VCPSTRINGDATA& operator=(const VCPSTRINGDATA &_x){
		serviceid = _x.serviceid;
		methodid = _x.methodid;
		vcpstringdata = _x.vcpstringdata;
		return *this;
	}
	VCPSTRINGDATA& operator=(VCPSTRINGDATA &&_x){
		serviceid = std::move(_x.serviceid);
		methodid = std::move(_x.methodid);
		vcpstringdata = std::move(_x.vcpstringdata);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(serviceid);
		fun(methodid);
		fun(vcpstringdata);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(serviceid);
		fun(methodid);
		fun(vcpstringdata);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (serviceid);
		fun << (methodid);
		fun << (vcpstringdata);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (serviceid);
		fun >> (methodid);
		fun >> (vcpstringdata);
	}
};

#endif //____VCPSTRINGDATA_H__
