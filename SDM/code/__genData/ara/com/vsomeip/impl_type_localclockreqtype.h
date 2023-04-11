#ifndef __ARA_COM_VSOMEIP__LOCALCLOCKREQTYPE_H__
#define __ARA_COM_VSOMEIP__LOCALCLOCKREQTYPE_H__


#include "cstdint"
#include "ara/com/vsomeip/impl_type_localtime.h"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct LocalClockReqtype {
public:
	std::uint32_t APPID;
	std::uint8_t EventID;
	ara::com::vsomeip::LocalTime AlarmOnTime;
/*
	LocalClockReqtype() {}
	~LocalClockReqtype() {}
	LocalClockReqtype(const std::uint32_t _APPID,const std::uint8_t _EventID,const ara::com::vsomeip::LocalTime _AlarmOnTime):APPID(_APPID),EventID(_EventID),AlarmOnTime(_AlarmOnTime) {}
	LocalClockReqtype(const LocalClockReqtype &_x){
		APPID = _x.APPID;
		EventID = _x.EventID;
		AlarmOnTime = _x.AlarmOnTime;
	}
	LocalClockReqtype(LocalClockReqtype &&_x){
		APPID = std::move(_x.APPID);
		EventID = std::move(_x.EventID);
		AlarmOnTime = std::move(_x.AlarmOnTime);
	}
	LocalClockReqtype& operator=(const LocalClockReqtype &_x){
		APPID = _x.APPID;
		EventID = _x.EventID;
		AlarmOnTime = _x.AlarmOnTime;
		return *this;
	}
	LocalClockReqtype& operator=(LocalClockReqtype &&_x){
		APPID = std::move(_x.APPID);
		EventID = std::move(_x.EventID);
		AlarmOnTime = std::move(_x.AlarmOnTime);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(APPID);
		fun(EventID);
		fun(AlarmOnTime);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(APPID);
		fun(EventID);
		fun(AlarmOnTime);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (APPID);
		fun << (EventID);
		fun << (AlarmOnTime);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (APPID);
		fun >> (EventID);
		fun >> (AlarmOnTime);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__LOCALCLOCKREQTYPE_H__
