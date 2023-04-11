#ifndef __ARA_COM_CONFIGURATION_MANAGE__ACCOUNTIDSTYPE_H__
#define __ARA_COM_CONFIGURATION_MANAGE__ACCOUNTIDSTYPE_H__


#include "ara/core/string.h"
#include "cstdint"





namespace ara
{
namespace com
{
namespace configuration_manage
{

struct AccountIdsType {
public:
	::ara::core::String tinyid;
	std::uint32_t auid;
/*
	AccountIdsType() {}
	~AccountIdsType() {}
	AccountIdsType(const ::ara::core::String _tinyid,const std::uint32_t _auid):tinyid(_tinyid),auid(_auid) {}
	AccountIdsType(const AccountIdsType &_x){
		tinyid = _x.tinyid;
		auid = _x.auid;
	}
	AccountIdsType(AccountIdsType &&_x){
		tinyid = std::move(_x.tinyid);
		auid = std::move(_x.auid);
	}
	AccountIdsType& operator=(const AccountIdsType &_x){
		tinyid = _x.tinyid;
		auid = _x.auid;
		return *this;
	}
	AccountIdsType& operator=(AccountIdsType &&_x){
		tinyid = std::move(_x.tinyid);
		auid = std::move(_x.auid);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(tinyid);
		fun(auid);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(tinyid);
		fun(auid);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (tinyid);
		fun << (auid);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (tinyid);
		fun >> (auid);
	}
};

}//ara
}//com
}//configuration_manage
#endif //__ARA_COM_CONFIGURATION_MANAGE__ACCOUNTIDSTYPE_H__
