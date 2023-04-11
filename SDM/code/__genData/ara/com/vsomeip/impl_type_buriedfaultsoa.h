#ifndef __ARA_COM_VSOMEIP__BURIEDFAULTSOA_H__
#define __ARA_COM_VSOMEIP__BURIEDFAULTSOA_H__


#include "cstdint"
#include "impl_type_string.h"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct BuriedFaultSOA {
public:
	std::uint16_t uServiceID;
	std::uint16_t uInterfaceID;
	std::uint32_t uFaultCode;
	String strDescribe;
	String strReason;
	String strDetai;
/*
	BuriedFaultSOA() {}
	~BuriedFaultSOA() {}
	BuriedFaultSOA(const std::uint16_t _uServiceID,const std::uint16_t _uInterfaceID,const std::uint32_t _uFaultCode,const String _strDescribe,const String _strReason,const String _strDetai):uServiceID(_uServiceID),uInterfaceID(_uInterfaceID),uFaultCode(_uFaultCode),strDescribe(_strDescribe),strReason(_strReason),strDetai(_strDetai) {}
	BuriedFaultSOA(const BuriedFaultSOA &_x){
		uServiceID = _x.uServiceID;
		uInterfaceID = _x.uInterfaceID;
		uFaultCode = _x.uFaultCode;
		strDescribe = _x.strDescribe;
		strReason = _x.strReason;
		strDetai = _x.strDetai;
	}
	BuriedFaultSOA(BuriedFaultSOA &&_x){
		uServiceID = std::move(_x.uServiceID);
		uInterfaceID = std::move(_x.uInterfaceID);
		uFaultCode = std::move(_x.uFaultCode);
		strDescribe = std::move(_x.strDescribe);
		strReason = std::move(_x.strReason);
		strDetai = std::move(_x.strDetai);
	}
	BuriedFaultSOA& operator=(const BuriedFaultSOA &_x){
		uServiceID = _x.uServiceID;
		uInterfaceID = _x.uInterfaceID;
		uFaultCode = _x.uFaultCode;
		strDescribe = _x.strDescribe;
		strReason = _x.strReason;
		strDetai = _x.strDetai;
		return *this;
	}
	BuriedFaultSOA& operator=(BuriedFaultSOA &&_x){
		uServiceID = std::move(_x.uServiceID);
		uInterfaceID = std::move(_x.uInterfaceID);
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
		fun(uServiceID);
		fun(uInterfaceID);
		fun(uFaultCode);
		fun(strDescribe);
		fun(strReason);
		fun(strDetai);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(uServiceID);
		fun(uInterfaceID);
		fun(uFaultCode);
		fun(strDescribe);
		fun(strReason);
		fun(strDetai);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (uServiceID);
		fun << (uInterfaceID);
		fun << (uFaultCode);
		fun << (strDescribe);
		fun << (strReason);
		fun << (strDetai);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (uServiceID);
		fun >> (uInterfaceID);
		fun >> (uFaultCode);
		fun >> (strDescribe);
		fun >> (strReason);
		fun >> (strDetai);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__BURIEDFAULTSOA_H__
