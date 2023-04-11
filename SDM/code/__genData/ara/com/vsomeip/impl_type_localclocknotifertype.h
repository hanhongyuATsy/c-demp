#ifndef __ARA_COM_VSOMEIP__LOCALCLOCKNOTIFERTYPE_H__
#define __ARA_COM_VSOMEIP__LOCALCLOCKNOTIFERTYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct LocalClocknotifertype {
public:
	std::uint32_t APPID;
	std::uint8_t EventID;
	bool Clocknotifer;
/*
	LocalClocknotifertype() {}
	~LocalClocknotifertype() {}
	LocalClocknotifertype(const std::uint32_t _APPID,const std::uint8_t _EventID,const bool _Clocknotifer):APPID(_APPID),EventID(_EventID),Clocknotifer(_Clocknotifer) {}
	LocalClocknotifertype(const LocalClocknotifertype &_x){
		APPID = _x.APPID;
		EventID = _x.EventID;
		Clocknotifer = _x.Clocknotifer;
	}
	LocalClocknotifertype(LocalClocknotifertype &&_x){
		APPID = std::move(_x.APPID);
		EventID = std::move(_x.EventID);
		Clocknotifer = std::move(_x.Clocknotifer);
	}
	LocalClocknotifertype& operator=(const LocalClocknotifertype &_x){
		APPID = _x.APPID;
		EventID = _x.EventID;
		Clocknotifer = _x.Clocknotifer;
		return *this;
	}
	LocalClocknotifertype& operator=(LocalClocknotifertype &&_x){
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
#endif //__ARA_COM_VSOMEIP__LOCALCLOCKNOTIFERTYPE_H__
