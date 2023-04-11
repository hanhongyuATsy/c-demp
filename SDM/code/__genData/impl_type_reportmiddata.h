#ifndef ____REPORTMIDDATA_H__
#define ____REPORTMIDDATA_H__


#include "cstdint"
#include "ara/com/vsomeip/impl_type_middata_t.h"






struct ReportMIDDATA {
public:
	std::uint16_t serviceid;
	std::uint16_t methodid;
	ara::com::vsomeip::middata_t middata;
/*
	ReportMIDDATA() {}
	~ReportMIDDATA() {}
	ReportMIDDATA(const std::uint16_t _serviceid,const std::uint16_t _methodid,const ara::com::vsomeip::middata_t _middata):serviceid(_serviceid),methodid(_methodid),middata(_middata) {}
	ReportMIDDATA(const ReportMIDDATA &_x){
		serviceid = _x.serviceid;
		methodid = _x.methodid;
		middata = _x.middata;
	}
	ReportMIDDATA(ReportMIDDATA &&_x){
		serviceid = std::move(_x.serviceid);
		methodid = std::move(_x.methodid);
		middata = std::move(_x.middata);
	}
	ReportMIDDATA& operator=(const ReportMIDDATA &_x){
		serviceid = _x.serviceid;
		methodid = _x.methodid;
		middata = _x.middata;
		return *this;
	}
	ReportMIDDATA& operator=(ReportMIDDATA &&_x){
		serviceid = std::move(_x.serviceid);
		methodid = std::move(_x.methodid);
		middata = std::move(_x.middata);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(serviceid);
		fun(methodid);
		fun(middata);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(serviceid);
		fun(methodid);
		fun(middata);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (serviceid);
		fun << (methodid);
		fun << (middata);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (serviceid);
		fun >> (methodid);
		fun >> (middata);
	}
};

#endif //____REPORTMIDDATA_H__
