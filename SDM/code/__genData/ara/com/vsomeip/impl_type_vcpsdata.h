#ifndef __ARA_COM_VSOMEIP__VCPSDATA_H__
#define __ARA_COM_VSOMEIP__VCPSDATA_H__


#include "cstdint"
#include "ara/com/vsomeip/impl_type_vcpappdata_t.h"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct VCPSDATA {
public:
	std::uint16_t serviceid;
	std::uint16_t methodid;
	ara::com::vsomeip::vcpappdata_t vcpappdata;
/*
	VCPSDATA() {}
	~VCPSDATA() {}
	VCPSDATA(const std::uint16_t _serviceid,const std::uint16_t _methodid,const ara::com::vsomeip::vcpappdata_t _vcpappdata):serviceid(_serviceid),methodid(_methodid),vcpappdata(_vcpappdata) {}
	VCPSDATA(const VCPSDATA &_x){
		serviceid = _x.serviceid;
		methodid = _x.methodid;
		vcpappdata = _x.vcpappdata;
	}
	VCPSDATA(VCPSDATA &&_x){
		serviceid = std::move(_x.serviceid);
		methodid = std::move(_x.methodid);
		vcpappdata = std::move(_x.vcpappdata);
	}
	VCPSDATA& operator=(const VCPSDATA &_x){
		serviceid = _x.serviceid;
		methodid = _x.methodid;
		vcpappdata = _x.vcpappdata;
		return *this;
	}
	VCPSDATA& operator=(VCPSDATA &&_x){
		serviceid = std::move(_x.serviceid);
		methodid = std::move(_x.methodid);
		vcpappdata = std::move(_x.vcpappdata);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(serviceid);
		fun(methodid);
		fun(vcpappdata);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(serviceid);
		fun(methodid);
		fun(vcpappdata);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (serviceid);
		fun << (methodid);
		fun << (vcpappdata);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (serviceid);
		fun >> (methodid);
		fun >> (vcpappdata);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__VCPSDATA_H__
