#ifndef __ARA_VIRTUALTESTER__CLEARDIAGNOSTICINFORMATION_H__
#define __ARA_VIRTUALTESTER__CLEARDIAGNOSTICINFORMATION_H__


#include "cstdint"





namespace ara
{
namespace virtualtester
{

struct ClearDiagnosticInformation {
public:
	std::uint8_t success;
	std::uint8_t response_sid;
	std::uint8_t nrc;
/*
	ClearDiagnosticInformation() {}
	~ClearDiagnosticInformation() {}
	ClearDiagnosticInformation(const std::uint8_t _success,const std::uint8_t _response_sid,const std::uint8_t _nrc):success(_success),response_sid(_response_sid),nrc(_nrc) {}
	ClearDiagnosticInformation(const ClearDiagnosticInformation &_x){
		success = _x.success;
		response_sid = _x.response_sid;
		nrc = _x.nrc;
	}
	ClearDiagnosticInformation(ClearDiagnosticInformation &&_x){
		success = std::move(_x.success);
		response_sid = std::move(_x.response_sid);
		nrc = std::move(_x.nrc);
	}
	ClearDiagnosticInformation& operator=(const ClearDiagnosticInformation &_x){
		success = _x.success;
		response_sid = _x.response_sid;
		nrc = _x.nrc;
		return *this;
	}
	ClearDiagnosticInformation& operator=(ClearDiagnosticInformation &&_x){
		success = std::move(_x.success);
		response_sid = std::move(_x.response_sid);
		nrc = std::move(_x.nrc);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(success);
		fun(response_sid);
		fun(nrc);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(success);
		fun(response_sid);
		fun(nrc);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (success);
		fun << (response_sid);
		fun << (nrc);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (success);
		fun >> (response_sid);
		fun >> (nrc);
	}
};

}//ara
}//virtualtester
#endif //__ARA_VIRTUALTESTER__CLEARDIAGNOSTICINFORMATION_H__
