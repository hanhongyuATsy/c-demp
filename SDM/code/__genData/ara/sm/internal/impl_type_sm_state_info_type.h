#ifndef __ARA_SM_INTERNAL__SM_STATE_INFO_TYPE_H__
#define __ARA_SM_INTERNAL__SM_STATE_INFO_TYPE_H__


#include "impl_type_string.h"
#include "ara/sm/internal/impl_type_sm_state_change_parameter_type.h"
#include "cstdint"





namespace ara
{
namespace sm
{
namespace internal
{

struct sm_state_info_type {
public:
	String stateGroupName;
	String stateName;
	ara::sm::internal::sm_state_change_parameter_type changeParameter;
	String changeCause;
	std::int32_t status;
/*
	sm_state_info_type() {}
	~sm_state_info_type() {}
	sm_state_info_type(const String _stateGroupName,const String _stateName,const ara::sm::internal::sm_state_change_parameter_type _changeParameter,const String _changeCause,const std::int32_t _status):stateGroupName(_stateGroupName),stateName(_stateName),changeParameter(_changeParameter),changeCause(_changeCause),status(_status) {}
	sm_state_info_type(const sm_state_info_type &_x){
		stateGroupName = _x.stateGroupName;
		stateName = _x.stateName;
		changeParameter = _x.changeParameter;
		changeCause = _x.changeCause;
		status = _x.status;
	}
	sm_state_info_type(sm_state_info_type &&_x){
		stateGroupName = std::move(_x.stateGroupName);
		stateName = std::move(_x.stateName);
		changeParameter = std::move(_x.changeParameter);
		changeCause = std::move(_x.changeCause);
		status = std::move(_x.status);
	}
	sm_state_info_type& operator=(const sm_state_info_type &_x){
		stateGroupName = _x.stateGroupName;
		stateName = _x.stateName;
		changeParameter = _x.changeParameter;
		changeCause = _x.changeCause;
		status = _x.status;
		return *this;
	}
	sm_state_info_type& operator=(sm_state_info_type &&_x){
		stateGroupName = std::move(_x.stateGroupName);
		stateName = std::move(_x.stateName);
		changeParameter = std::move(_x.changeParameter);
		changeCause = std::move(_x.changeCause);
		status = std::move(_x.status);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(stateGroupName);
		fun(stateName);
		fun(changeParameter);
		fun(changeCause);
		fun(status);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(stateGroupName);
		fun(stateName);
		fun(changeParameter);
		fun(changeCause);
		fun(status);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (stateGroupName);
		fun << (stateName);
		fun << (changeParameter);
		fun << (changeCause);
		fun << (status);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (stateGroupName);
		fun >> (stateName);
		fun >> (changeParameter);
		fun >> (changeCause);
		fun >> (status);
	}
};

}//ara
}//sm
}//internal
#endif //__ARA_SM_INTERNAL__SM_STATE_INFO_TYPE_H__
