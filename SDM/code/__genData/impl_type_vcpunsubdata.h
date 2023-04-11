#ifndef ____VCPUNSUBDATA_H__
#define ____VCPUNSUBDATA_H__


#include "cstdint"






struct VCPUNSUBDATA {
public:
	std::uint16_t serviceid;
	std::uint16_t eventgroupid;
/*
	VCPUNSUBDATA() {}
	~VCPUNSUBDATA() {}
	VCPUNSUBDATA(const std::uint16_t _serviceid,const std::uint16_t _eventgroupid):serviceid(_serviceid),eventgroupid(_eventgroupid) {}
	VCPUNSUBDATA(const VCPUNSUBDATA &_x){
		serviceid = _x.serviceid;
		eventgroupid = _x.eventgroupid;
	}
	VCPUNSUBDATA(VCPUNSUBDATA &&_x){
		serviceid = std::move(_x.serviceid);
		eventgroupid = std::move(_x.eventgroupid);
	}
	VCPUNSUBDATA& operator=(const VCPUNSUBDATA &_x){
		serviceid = _x.serviceid;
		eventgroupid = _x.eventgroupid;
		return *this;
	}
	VCPUNSUBDATA& operator=(VCPUNSUBDATA &&_x){
		serviceid = std::move(_x.serviceid);
		eventgroupid = std::move(_x.eventgroupid);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(serviceid);
		fun(eventgroupid);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(serviceid);
		fun(eventgroupid);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (serviceid);
		fun << (eventgroupid);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (serviceid);
		fun >> (eventgroupid);
	}
};

#endif //____VCPUNSUBDATA_H__
