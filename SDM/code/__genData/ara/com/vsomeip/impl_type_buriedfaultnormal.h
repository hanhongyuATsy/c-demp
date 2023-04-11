#ifndef __ARA_COM_VSOMEIP__BURIEDFAULTNORMAL_H__
#define __ARA_COM_VSOMEIP__BURIEDFAULTNORMAL_H__


#include "cstdint"
#include "impl_type_string.h"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct BuriedFaultNormal {
public:
	std::uint16_t uSystemID;
	std::uint16_t uAppID;
	std::uint16_t uFaultCode;
	String strDescribe;
	String strReason;
	String strDetai;
/*
	BuriedFaultNormal() {}
	~BuriedFaultNormal() {}
	BuriedFaultNormal(const std::uint16_t _uSystemID,const std::uint16_t _uAppID,const std::uint16_t _uFaultCode,const String _strDescribe,const String _strReason,const String _strDetai):uSystemID(_uSystemID),uAppID(_uAppID),uFaultCode(_uFaultCode),strDescribe(_strDescribe),strReason(_strReason),strDetai(_strDetai) {}
	BuriedFaultNormal(const BuriedFaultNormal &_x){
		uSystemID = _x.uSystemID;
		uAppID = _x.uAppID;
		uFaultCode = _x.uFaultCode;
		strDescribe = _x.strDescribe;
		strReason = _x.strReason;
		strDetai = _x.strDetai;
	}
	BuriedFaultNormal(BuriedFaultNormal &&_x){
		uSystemID = std::move(_x.uSystemID);
		uAppID = std::move(_x.uAppID);
		uFaultCode = std::move(_x.uFaultCode);
		strDescribe = std::move(_x.strDescribe);
		strReason = std::move(_x.strReason);
		strDetai = std::move(_x.strDetai);
	}
	BuriedFaultNormal& operator=(const BuriedFaultNormal &_x){
		uSystemID = _x.uSystemID;
		uAppID = _x.uAppID;
		uFaultCode = _x.uFaultCode;
		strDescribe = _x.strDescribe;
		strReason = _x.strReason;
		strDetai = _x.strDetai;
		return *this;
	}
	BuriedFaultNormal& operator=(BuriedFaultNormal &&_x){
		uSystemID = std::move(_x.uSystemID);
		uAppID = std::move(_x.uAppID);
		uFaultCode = std::move(_x.uFaultCode);
		strDescribe = std::move(_x.strDescribe);
		strReason = std::move(_x.strReason);
		strDetai = std::move(_x.strDetai);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(uSystemID);
		fun(uAppID);
		fun(uFaultCode);
		fun(strDescribe);
		fun(strReason);
		fun(strDetai);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(uSystemID);
		fun(uAppID);
		fun(uFaultCode);
		fun(strDescribe);
		fun(strReason);
		fun(strDetai);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (uSystemID);
		fun << (uAppID);
		fun << (uFaultCode);
		fun << (strDescribe);
		fun << (strReason);
		fun << (strDetai);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (uSystemID);
		fun >> (uAppID);
		fun >> (uFaultCode);
		fun >> (strDescribe);
		fun >> (strReason);
		fun >> (strDetai);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__BURIEDFAULTNORMAL_H__
