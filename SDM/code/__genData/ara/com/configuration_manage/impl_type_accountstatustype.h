#ifndef __ARA_COM_CONFIGURATION_MANAGE__ACCOUNTSTATUSTYPE_H__
#define __ARA_COM_CONFIGURATION_MANAGE__ACCOUNTSTATUSTYPE_H__


#include "ara/core/string.h"
#include "cstdint"





namespace ara
{
namespace com
{
namespace configuration_manage
{

struct AccountStatusType {
public:
	::ara::core::String tinyid;
	std::uint32_t state;
/*
	AccountStatusType() {}
	~AccountStatusType() {}
	AccountStatusType(const ::ara::core::String _tinyid,const std::uint32_t _state):tinyid(_tinyid),state(_state) {}
	AccountStatusType(const AccountStatusType &_x){
		tinyid = _x.tinyid;
		state = _x.state;
	}
	AccountStatusType(AccountStatusType &&_x){
		tinyid = std::move(_x.tinyid);
		state = std::move(_x.state);
	}
	AccountStatusType& operator=(const AccountStatusType &_x){
		tinyid = _x.tinyid;
		state = _x.state;
		return *this;
	}
	AccountStatusType& operator=(AccountStatusType &&_x){
		tinyid = std::move(_x.tinyid);
		state = std::move(_x.state);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(tinyid);
		fun(state);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(tinyid);
		fun(state);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (tinyid);
		fun << (state);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (tinyid);
		fun >> (state);
	}
};

}//ara
}//com
}//configuration_manage
#endif //__ARA_COM_CONFIGURATION_MANAGE__ACCOUNTSTATUSTYPE_H__
