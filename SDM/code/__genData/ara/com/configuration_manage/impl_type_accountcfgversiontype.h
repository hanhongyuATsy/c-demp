#ifndef __ARA_COM_CONFIGURATION_MANAGE__ACCOUNTCFGVERSIONTYPE_H__
#define __ARA_COM_CONFIGURATION_MANAGE__ACCOUNTCFGVERSIONTYPE_H__


#include "ara/core/string.h"





namespace ara
{
namespace com
{
namespace configuration_manage
{

struct AccountCfgVersionType {
public:
	::ara::core::String tinyid;
	::ara::core::String version;
/*
	AccountCfgVersionType() {}
	~AccountCfgVersionType() {}
	AccountCfgVersionType(const ::ara::core::String _tinyid,const ::ara::core::String _version):tinyid(_tinyid),version(_version) {}
	AccountCfgVersionType(const AccountCfgVersionType &_x){
		tinyid = _x.tinyid;
		version = _x.version;
	}
	AccountCfgVersionType(AccountCfgVersionType &&_x){
		tinyid = std::move(_x.tinyid);
		version = std::move(_x.version);
	}
	AccountCfgVersionType& operator=(const AccountCfgVersionType &_x){
		tinyid = _x.tinyid;
		version = _x.version;
		return *this;
	}
	AccountCfgVersionType& operator=(AccountCfgVersionType &&_x){
		tinyid = std::move(_x.tinyid);
		version = std::move(_x.version);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(tinyid);
		fun(version);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(tinyid);
		fun(version);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (tinyid);
		fun << (version);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (tinyid);
		fun >> (version);
	}
};

}//ara
}//com
}//configuration_manage
#endif //__ARA_COM_CONFIGURATION_MANAGE__ACCOUNTCFGVERSIONTYPE_H__
