#ifndef __ARA_COM_VSOMEIP__WAKEUPDELETEREQTYPE_H__
#define __ARA_COM_VSOMEIP__WAKEUPDELETEREQTYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct WakeupDeleteReqtype {
public:
	std::uint32_t APPID;
	std::uint8_t EventID;
/*
	WakeupDeleteReqtype() {}
	~WakeupDeleteReqtype() {}
	WakeupDeleteReqtype(const std::uint32_t _APPID,const std::uint8_t _EventID):APPID(_APPID),EventID(_EventID) {}
	WakeupDeleteReqtype(const WakeupDeleteReqtype &_x){
		APPID = _x.APPID;
		EventID = _x.EventID;
	}
	WakeupDeleteReqtype(WakeupDeleteReqtype &&_x){
		APPID = std::move(_x.APPID);
		EventID = std::move(_x.EventID);
	}
	WakeupDeleteReqtype& operator=(const WakeupDeleteReqtype &_x){
		APPID = _x.APPID;
		EventID = _x.EventID;
		return *this;
	}
	WakeupDeleteReqtype& operator=(WakeupDeleteReqtype &&_x){
		APPID = std::move(_x.APPID);
		EventID = std::move(_x.EventID);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(APPID);
		fun(EventID);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(APPID);
		fun(EventID);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (APPID);
		fun << (EventID);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (APPID);
		fun >> (EventID);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__WAKEUPDELETEREQTYPE_H__
