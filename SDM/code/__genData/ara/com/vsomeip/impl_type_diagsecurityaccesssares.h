#ifndef __ARA_COM_VSOMEIP__DIAGSECURITYACCESSSARES_H__
#define __ARA_COM_VSOMEIP__DIAGSECURITYACCESSSARES_H__


#include "cstdint"
#include "impl_type_string.h"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct DiagSecurityAccessSaRes {
public:
	std::int32_t retVal;
	String ioKeyArray;
/*
	DiagSecurityAccessSaRes() {}
	~DiagSecurityAccessSaRes() {}
	DiagSecurityAccessSaRes(const std::int32_t _retVal,const String _ioKeyArray):retVal(_retVal),ioKeyArray(_ioKeyArray) {}
	DiagSecurityAccessSaRes(const DiagSecurityAccessSaRes &_x){
		retVal = _x.retVal;
		ioKeyArray = _x.ioKeyArray;
	}
	DiagSecurityAccessSaRes(DiagSecurityAccessSaRes &&_x){
		retVal = std::move(_x.retVal);
		ioKeyArray = std::move(_x.ioKeyArray);
	}
	DiagSecurityAccessSaRes& operator=(const DiagSecurityAccessSaRes &_x){
		retVal = _x.retVal;
		ioKeyArray = _x.ioKeyArray;
		return *this;
	}
	DiagSecurityAccessSaRes& operator=(DiagSecurityAccessSaRes &&_x){
		retVal = std::move(_x.retVal);
		ioKeyArray = std::move(_x.ioKeyArray);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(retVal);
		fun(ioKeyArray);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(retVal);
		fun(ioKeyArray);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (retVal);
		fun << (ioKeyArray);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (retVal);
		fun >> (ioKeyArray);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__DIAGSECURITYACCESSSARES_H__
