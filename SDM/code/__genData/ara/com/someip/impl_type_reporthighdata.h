#ifndef __ARA_COM_SOMEIP__REPORTHIGHDATA_H__
#define __ARA_COM_SOMEIP__REPORTHIGHDATA_H__


#include "cstdint"
#include "ara/com/vsomeip/impl_type_highdata_t.h"





namespace ara
{
namespace com
{
namespace someip
{

struct ReportHIGHDATA {
public:
	std::uint16_t serviceid;
	std::uint16_t methodid;
	ara::com::vsomeip::highdata_t highdata;
/*
	ReportHIGHDATA() {}
	~ReportHIGHDATA() {}
	ReportHIGHDATA(const std::uint16_t _serviceid,const std::uint16_t _methodid,const ara::com::vsomeip::highdata_t _highdata):serviceid(_serviceid),methodid(_methodid),highdata(_highdata) {}
	ReportHIGHDATA(const ReportHIGHDATA &_x){
		serviceid = _x.serviceid;
		methodid = _x.methodid;
		highdata = _x.highdata;
	}
	ReportHIGHDATA(ReportHIGHDATA &&_x){
		serviceid = std::move(_x.serviceid);
		methodid = std::move(_x.methodid);
		highdata = std::move(_x.highdata);
	}
	ReportHIGHDATA& operator=(const ReportHIGHDATA &_x){
		serviceid = _x.serviceid;
		methodid = _x.methodid;
		highdata = _x.highdata;
		return *this;
	}
	ReportHIGHDATA& operator=(ReportHIGHDATA &&_x){
		serviceid = std::move(_x.serviceid);
		methodid = std::move(_x.methodid);
		highdata = std::move(_x.highdata);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(serviceid);
		fun(methodid);
		fun(highdata);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(serviceid);
		fun(methodid);
		fun(highdata);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (serviceid);
		fun << (methodid);
		fun << (highdata);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (serviceid);
		fun >> (methodid);
		fun >> (highdata);
	}
};

}//ara
}//com
}//someip
#endif //__ARA_COM_SOMEIP__REPORTHIGHDATA_H__
