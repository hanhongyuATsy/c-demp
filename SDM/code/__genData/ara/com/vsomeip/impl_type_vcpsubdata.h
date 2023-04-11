#ifndef __ARA_COM_VSOMEIP__VCPSUBDATA_H__
#define __ARA_COM_VSOMEIP__VCPSUBDATA_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct VCPSUBDATA {
public:
	std::uint16_t serviceid;
	std::uint16_t eventgroupid;
/*
	VCPSUBDATA() {}
	~VCPSUBDATA() {}
	VCPSUBDATA(const std::uint16_t _serviceid,const std::uint16_t _eventgroupid):serviceid(_serviceid),eventgroupid(_eventgroupid) {}
	VCPSUBDATA(const VCPSUBDATA &_x){
		serviceid = _x.serviceid;
		eventgroupid = _x.eventgroupid;
	}
	VCPSUBDATA(VCPSUBDATA &&_x){
		serviceid = std::move(_x.serviceid);
		eventgroupid = std::move(_x.eventgroupid);
	}
	VCPSUBDATA& operator=(const VCPSUBDATA &_x){
		serviceid = _x.serviceid;
		eventgroupid = _x.eventgroupid;
		return *this;
	}
	VCPSUBDATA& operator=(VCPSUBDATA &&_x){
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

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__VCPSUBDATA_H__
