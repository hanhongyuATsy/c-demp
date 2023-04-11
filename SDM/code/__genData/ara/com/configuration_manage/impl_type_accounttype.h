#ifndef __ARA_COM_CONFIGURATION_MANAGE__ACCOUNTTYPE_H__
#define __ARA_COM_CONFIGURATION_MANAGE__ACCOUNTTYPE_H__


#include "ara/core/string.h"
#include "cstdint"





namespace ara
{
namespace com
{
namespace configuration_manage
{

struct AccountType {
public:
	::ara::core::String tinyid;
	std::uint32_t auid;
	std::uint32_t state;
	::ara::core::String version;
/*
	AccountType() {}
	~AccountType() {}
	AccountType(const ::ara::core::String _tinyid,const std::uint32_t _auid,const std::uint32_t _state,const ::ara::core::String _version):tinyid(_tinyid),auid(_auid),state(_state),version(_version) {}
	AccountType(const AccountType &_x){
		tinyid = _x.tinyid;
		auid = _x.auid;
		state = _x.state;
		version = _x.version;
	}
	AccountType(AccountType &&_x){
		tinyid = std::move(_x.tinyid);
		auid = std::move(_x.auid);
		state = std::move(_x.state);
		version = std::move(_x.version);
	}
	AccountType& operator=(const AccountType &_x){
		tinyid = _x.tinyid;
		auid = _x.auid;
		state = _x.state;
		version = _x.version;
		return *this;
	}
	AccountType& operator=(AccountType &&_x){
		tinyid = std::move(_x.tinyid);
		auid = std::move(_x.auid);
		state = std::move(_x.state);
		version = std::move(_x.version);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(tinyid);
		fun(auid);
		fun(state);
		fun(version);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(tinyid);
		fun(auid);
		fun(state);
		fun(version);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (tinyid);
		fun << (auid);
		fun << (state);
		fun << (version);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (tinyid);
		fun >> (auid);
		fun >> (state);
		fun >> (version);
	}
};

}//ara
}//com
}//configuration_manage
#endif //__ARA_COM_CONFIGURATION_MANAGE__ACCOUNTTYPE_H__
