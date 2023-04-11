#ifndef ____REPORTLOWDATA_H__
#define ____REPORTLOWDATA_H__


#include "cstdint"
#include "ara/com/vsomeip/impl_type_lowdata_t.h"






struct ReportLOWDATA {
public:
	std::uint16_t serviceid;
	std::uint16_t methodid;
	ara::com::vsomeip::lowdata_t lowdata;
/*
	ReportLOWDATA() {}
	~ReportLOWDATA() {}
	ReportLOWDATA(const std::uint16_t _serviceid,const std::uint16_t _methodid,const ara::com::vsomeip::lowdata_t _lowdata):serviceid(_serviceid),methodid(_methodid),lowdata(_lowdata) {}
	ReportLOWDATA(const ReportLOWDATA &_x){
		serviceid = _x.serviceid;
		methodid = _x.methodid;
		lowdata = _x.lowdata;
	}
	ReportLOWDATA(ReportLOWDATA &&_x){
		serviceid = std::move(_x.serviceid);
		methodid = std::move(_x.methodid);
		lowdata = std::move(_x.lowdata);
	}
	ReportLOWDATA& operator=(const ReportLOWDATA &_x){
		serviceid = _x.serviceid;
		methodid = _x.methodid;
		lowdata = _x.lowdata;
		return *this;
	}
	ReportLOWDATA& operator=(ReportLOWDATA &&_x){
		serviceid = std::move(_x.serviceid);
		methodid = std::move(_x.methodid);
		lowdata = std::move(_x.lowdata);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(serviceid);
		fun(methodid);
		fun(lowdata);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(serviceid);
		fun(methodid);
		fun(lowdata);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (serviceid);
		fun << (methodid);
		fun << (lowdata);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (serviceid);
		fun >> (methodid);
		fun >> (lowdata);
	}
};

#endif //____REPORTLOWDATA_H__
