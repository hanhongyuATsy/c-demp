#ifndef __ARA_COM_VSOMEIP__GLOBALCLOCKREQTYPE_H__
#define __ARA_COM_VSOMEIP__GLOBALCLOCKREQTYPE_H__


#include "cstdint"
#include "ara/com/vsomeip/impl_type_globaltime.h"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct GlobalClockReqtype {
public:
	std::uint32_t APPID;
	std::uint8_t EventID;
	ara::com::vsomeip::GlobalTime setTimerOnTime;
	bool SetTimertype;
	std::uint16_t Date;
/*
	GlobalClockReqtype() {}
	~GlobalClockReqtype() {}
	GlobalClockReqtype(const std::uint32_t _APPID,const std::uint8_t _EventID,const ara::com::vsomeip::GlobalTime _setTimerOnTime,const bool _SetTimertype,const std::uint16_t _Date):APPID(_APPID),EventID(_EventID),setTimerOnTime(_setTimerOnTime),SetTimertype(_SetTimertype),Date(_Date) {}
	GlobalClockReqtype(const GlobalClockReqtype &_x){
		APPID = _x.APPID;
		EventID = _x.EventID;
		setTimerOnTime = _x.setTimerOnTime;
		SetTimertype = _x.SetTimertype;
		Date = _x.Date;
	}
	GlobalClockReqtype(GlobalClockReqtype &&_x){
		APPID = std::move(_x.APPID);
		EventID = std::move(_x.EventID);
		setTimerOnTime = std::move(_x.setTimerOnTime);
		SetTimertype = std::move(_x.SetTimertype);
		Date = std::move(_x.Date);
	}
	GlobalClockReqtype& operator=(const GlobalClockReqtype &_x){
		APPID = _x.APPID;
		EventID = _x.EventID;
		setTimerOnTime = _x.setTimerOnTime;
		SetTimertype = _x.SetTimertype;
		Date = _x.Date;
		return *this;
	}
	GlobalClockReqtype& operator=(GlobalClockReqtype &&_x){
		APPID = std::move(_x.APPID);
		EventID = std::move(_x.EventID);
		setTimerOnTime = std::move(_x.setTimerOnTime);
		SetTimertype = std::move(_x.SetTimertype);
		Date = std::move(_x.Date);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(APPID);
		fun(EventID);
		fun(setTimerOnTime);
		fun(SetTimertype);
		fun(Date);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(APPID);
		fun(EventID);
		fun(setTimerOnTime);
		fun(SetTimertype);
		fun(Date);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (APPID);
		fun << (EventID);
		fun << (setTimerOnTime);
		fun << (SetTimertype);
		fun << (Date);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (APPID);
		fun >> (EventID);
		fun >> (setTimerOnTime);
		fun >> (SetTimertype);
		fun >> (Date);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__GLOBALCLOCKREQTYPE_H__
