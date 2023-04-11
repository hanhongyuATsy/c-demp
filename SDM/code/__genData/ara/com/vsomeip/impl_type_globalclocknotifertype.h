#ifndef __ARA_COM_VSOMEIP__GLOBALCLOCKNOTIFERTYPE_H__
#define __ARA_COM_VSOMEIP__GLOBALCLOCKNOTIFERTYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct GlobalClockNotifertype {
public:
	std::uint32_t APPID;
	std::uint8_t EventID;
	bool Clocknotifer;
/*
	GlobalClockNotifertype() {}
	~GlobalClockNotifertype() {}
	GlobalClockNotifertype(const std::uint32_t _APPID,const std::uint8_t _EventID,const bool _Clocknotifer):APPID(_APPID),EventID(_EventID),Clocknotifer(_Clocknotifer) {}
	GlobalClockNotifertype(const GlobalClockNotifertype &_x){
		APPID = _x.APPID;
		EventID = _x.EventID;
		Clocknotifer = _x.Clocknotifer;
	}
	GlobalClockNotifertype(GlobalClockNotifertype &&_x){
		APPID = std::move(_x.APPID);
		EventID = std::move(_x.EventID);
		Clocknotifer = std::move(_x.Clocknotifer);
	}
	GlobalClockNotifertype& operator=(const GlobalClockNotifertype &_x){
		APPID = _x.APPID;
		EventID = _x.EventID;
		Clocknotifer = _x.Clocknotifer;
		return *this;
	}
	GlobalClockNotifertype& operator=(GlobalClockNotifertype &&_x){
		APPID = std::move(_x.APPID);
		EventID = std::move(_x.EventID);
		Clocknotifer = std::move(_x.Clocknotifer);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(APPID);
		fun(EventID);
		fun(Clocknotifer);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(APPID);
		fun(EventID);
		fun(Clocknotifer);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (APPID);
		fun << (EventID);
		fun << (Clocknotifer);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (APPID);
		fun >> (EventID);
		fun >> (Clocknotifer);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__GLOBALCLOCKNOTIFERTYPE_H__
