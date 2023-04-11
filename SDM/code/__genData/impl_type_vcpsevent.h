#ifndef ____VCPSEVENT_H__
#define ____VCPSEVENT_H__


#include "cstdint"
#include "ara/com/vsomeip/impl_type_vcpeventdata_t.h"






struct VCPSEVENT {
public:
	std::uint16_t eventid;
	ara::com::vsomeip::vcpeventdata_t vcpeventdata;
	std::uint16_t serviceid;
/*
	VCPSEVENT() {}
	~VCPSEVENT() {}
	VCPSEVENT(const std::uint16_t _eventid,const ara::com::vsomeip::vcpeventdata_t _vcpeventdata,const std::uint16_t _serviceid):eventid(_eventid),vcpeventdata(_vcpeventdata),serviceid(_serviceid) {}
	VCPSEVENT(const VCPSEVENT &_x){
		eventid = _x.eventid;
		vcpeventdata = _x.vcpeventdata;
		serviceid = _x.serviceid;
	}
	VCPSEVENT(VCPSEVENT &&_x){
		eventid = std::move(_x.eventid);
		vcpeventdata = std::move(_x.vcpeventdata);
		serviceid = std::move(_x.serviceid);
	}
	VCPSEVENT& operator=(const VCPSEVENT &_x){
		eventid = _x.eventid;
		vcpeventdata = _x.vcpeventdata;
		serviceid = _x.serviceid;
		return *this;
	}
	VCPSEVENT& operator=(VCPSEVENT &&_x){
		eventid = std::move(_x.eventid);
		vcpeventdata = std::move(_x.vcpeventdata);
		serviceid = std::move(_x.serviceid);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(eventid);
		fun(vcpeventdata);
		fun(serviceid);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(eventid);
		fun(vcpeventdata);
		fun(serviceid);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (eventid);
		fun << (vcpeventdata);
		fun << (serviceid);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (eventid);
		fun >> (vcpeventdata);
		fun >> (serviceid);
	}
};

#endif //____VCPSEVENT_H__
