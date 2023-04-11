#ifndef __ARA_VIRTUALTESTER__SESSIONCONTROL_H__
#define __ARA_VIRTUALTESTER__SESSIONCONTROL_H__


#include "cstdint"





namespace ara
{
namespace virtualtester
{

struct SessionControl {
public:
	std::uint8_t success;
	std::uint8_t response_sid;
	std::uint32_t session_parameter_record;
	std::uint8_t nrc;
/*
	SessionControl() {}
	~SessionControl() {}
	SessionControl(const std::uint8_t _success,const std::uint8_t _response_sid,const std::uint32_t _session_parameter_record,const std::uint8_t _nrc):success(_success),response_sid(_response_sid),session_parameter_record(_session_parameter_record),nrc(_nrc) {}
	SessionControl(const SessionControl &_x){
		success = _x.success;
		response_sid = _x.response_sid;
		session_parameter_record = _x.session_parameter_record;
		nrc = _x.nrc;
	}
	SessionControl(SessionControl &&_x){
		success = std::move(_x.success);
		response_sid = std::move(_x.response_sid);
		session_parameter_record = std::move(_x.session_parameter_record);
		nrc = std::move(_x.nrc);
	}
	SessionControl& operator=(const SessionControl &_x){
		success = _x.success;
		response_sid = _x.response_sid;
		session_parameter_record = _x.session_parameter_record;
		nrc = _x.nrc;
		return *this;
	}
	SessionControl& operator=(SessionControl &&_x){
		success = std::move(_x.success);
		response_sid = std::move(_x.response_sid);
		session_parameter_record = std::move(_x.session_parameter_record);
		nrc = std::move(_x.nrc);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(success);
		fun(response_sid);
		fun(session_parameter_record);
		fun(nrc);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(success);
		fun(response_sid);
		fun(session_parameter_record);
		fun(nrc);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (success);
		fun << (response_sid);
		fun << (session_parameter_record);
		fun << (nrc);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (success);
		fun >> (response_sid);
		fun >> (session_parameter_record);
		fun >> (nrc);
	}
};

}//ara
}//virtualtester
#endif //__ARA_VIRTUALTESTER__SESSIONCONTROL_H__
