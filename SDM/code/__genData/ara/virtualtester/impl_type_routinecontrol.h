#ifndef __ARA_VIRTUALTESTER__ROUTINECONTROL_H__
#define __ARA_VIRTUALTESTER__ROUTINECONTROL_H__


#include "cstdint"
#include "ara/ucm/pkgmgr/impl_type_bytevectortype.h"





namespace ara
{
namespace virtualtester
{

struct RoutineControl {
public:
	std::uint8_t success;
	std::uint8_t response_sid;
	std::uint8_t sub_function;
	std::uint16_t routine_identifier;
	ara::ucm::pkgmgr::ByteVectorType routine_status_record;
	std::uint8_t nrc;
/*
	RoutineControl() {}
	~RoutineControl() {}
	RoutineControl(const std::uint8_t _success,const std::uint8_t _response_sid,const std::uint8_t _sub_function,const std::uint16_t _routine_identifier,const ara::ucm::pkgmgr::ByteVectorType _routine_status_record,const std::uint8_t _nrc):success(_success),response_sid(_response_sid),sub_function(_sub_function),routine_identifier(_routine_identifier),routine_status_record(_routine_status_record),nrc(_nrc) {}
	RoutineControl(const RoutineControl &_x){
		success = _x.success;
		response_sid = _x.response_sid;
		sub_function = _x.sub_function;
		routine_identifier = _x.routine_identifier;
		routine_status_record = _x.routine_status_record;
		nrc = _x.nrc;
	}
	RoutineControl(RoutineControl &&_x){
		success = std::move(_x.success);
		response_sid = std::move(_x.response_sid);
		sub_function = std::move(_x.sub_function);
		routine_identifier = std::move(_x.routine_identifier);
		routine_status_record = std::move(_x.routine_status_record);
		nrc = std::move(_x.nrc);
	}
	RoutineControl& operator=(const RoutineControl &_x){
		success = _x.success;
		response_sid = _x.response_sid;
		sub_function = _x.sub_function;
		routine_identifier = _x.routine_identifier;
		routine_status_record = _x.routine_status_record;
		nrc = _x.nrc;
		return *this;
	}
	RoutineControl& operator=(RoutineControl &&_x){
		success = std::move(_x.success);
		response_sid = std::move(_x.response_sid);
		sub_function = std::move(_x.sub_function);
		routine_identifier = std::move(_x.routine_identifier);
		routine_status_record = std::move(_x.routine_status_record);
		nrc = std::move(_x.nrc);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(success);
		fun(response_sid);
		fun(sub_function);
		fun(routine_identifier);
		fun(routine_status_record);
		fun(nrc);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(success);
		fun(response_sid);
		fun(sub_function);
		fun(routine_identifier);
		fun(routine_status_record);
		fun(nrc);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (success);
		fun << (response_sid);
		fun << (sub_function);
		fun << (routine_identifier);
		fun << (routine_status_record);
		fun << (nrc);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (success);
		fun >> (response_sid);
		fun >> (sub_function);
		fun >> (routine_identifier);
		fun >> (routine_status_record);
		fun >> (nrc);
	}
};

}//ara
}//virtualtester
#endif //__ARA_VIRTUALTESTER__ROUTINECONTROL_H__
