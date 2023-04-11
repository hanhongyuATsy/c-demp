#ifndef __ARA_VIRTUALTESTER__TESTERPRESENT_H__
#define __ARA_VIRTUALTESTER__TESTERPRESENT_H__


#include "cstdint"





namespace ara
{
namespace virtualtester
{

struct TesterPresent {
public:
	std::uint8_t success;
	std::uint8_t response_sid;
	std::uint8_t nrc;
/*
	TesterPresent() {}
	~TesterPresent() {}
	TesterPresent(const std::uint8_t _success,const std::uint8_t _response_sid,const std::uint8_t _nrc):success(_success),response_sid(_response_sid),nrc(_nrc) {}
	TesterPresent(const TesterPresent &_x){
		success = _x.success;
		response_sid = _x.response_sid;
		nrc = _x.nrc;
	}
	TesterPresent(TesterPresent &&_x){
		success = std::move(_x.success);
		response_sid = std::move(_x.response_sid);
		nrc = std::move(_x.nrc);
	}
	TesterPresent& operator=(const TesterPresent &_x){
		success = _x.success;
		response_sid = _x.response_sid;
		nrc = _x.nrc;
		return *this;
	}
	TesterPresent& operator=(TesterPresent &&_x){
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
#endif //__ARA_VIRTUALTESTER__TESTERPRESENT_H__
