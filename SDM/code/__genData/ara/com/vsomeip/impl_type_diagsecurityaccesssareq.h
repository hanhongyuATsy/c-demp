#ifndef __ARA_COM_VSOMEIP__DIAGSECURITYACCESSSAREQ_H__
#define __ARA_COM_VSOMEIP__DIAGSECURITYACCESSSAREQ_H__


#include "impl_type_string.h"
#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct DiagSecurityAccessSaReq {
public:
	String pnStr;
	String iSeedArray;
	std::uint8_t iSecurityLevel;
	String iVariant;
/*
	DiagSecurityAccessSaReq() {}
	~DiagSecurityAccessSaReq() {}
	DiagSecurityAccessSaReq(const String _pnStr,const String _iSeedArray,const std::uint8_t _iSecurityLevel,const String _iVariant):pnStr(_pnStr),iSeedArray(_iSeedArray),iSecurityLevel(_iSecurityLevel),iVariant(_iVariant) {}
	DiagSecurityAccessSaReq(const DiagSecurityAccessSaReq &_x){
		pnStr = _x.pnStr;
		iSeedArray = _x.iSeedArray;
		iSecurityLevel = _x.iSecurityLevel;
		iVariant = _x.iVariant;
	}
	DiagSecurityAccessSaReq(DiagSecurityAccessSaReq &&_x){
		pnStr = std::move(_x.pnStr);
		iSeedArray = std::move(_x.iSeedArray);
		iSecurityLevel = std::move(_x.iSecurityLevel);
		iVariant = std::move(_x.iVariant);
	}
	DiagSecurityAccessSaReq& operator=(const DiagSecurityAccessSaReq &_x){
		pnStr = _x.pnStr;
		iSeedArray = _x.iSeedArray;
		iSecurityLevel = _x.iSecurityLevel;
		iVariant = _x.iVariant;
		return *this;
	}
	DiagSecurityAccessSaReq& operator=(DiagSecurityAccessSaReq &&_x){
		pnStr = std::move(_x.pnStr);
		iSeedArray = std::move(_x.iSeedArray);
		iSecurityLevel = std::move(_x.iSecurityLevel);
		iVariant = std::move(_x.iVariant);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(pnStr);
		fun(iSeedArray);
		fun(iSecurityLevel);
		fun(iVariant);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(pnStr);
		fun(iSeedArray);
		fun(iSecurityLevel);
		fun(iVariant);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (pnStr);
		fun << (iSeedArray);
		fun << (iSecurityLevel);
		fun << (iVariant);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (pnStr);
		fun >> (iSeedArray);
		fun >> (iSecurityLevel);
		fun >> (iVariant);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__DIAGSECURITYACCESSSAREQ_H__
