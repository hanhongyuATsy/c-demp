#ifndef __ARA_VIRTUALTESTER__ECURESET_H__
#define __ARA_VIRTUALTESTER__ECURESET_H__


#include "cstdint"





namespace ara
{
namespace virtualtester
{

struct ECUReset {
public:
	std::uint8_t success;
	std::uint8_t response_sid;
	std::uint8_t sub_function;
	std::uint8_t nrc;
/*
	ECUReset() {}
	~ECUReset() {}
	ECUReset(const std::uint8_t _success,const std::uint8_t _response_sid,const std::uint8_t _sub_function,const std::uint8_t _nrc):success(_success),response_sid(_response_sid),sub_function(_sub_function),nrc(_nrc) {}
	ECUReset(const ECUReset &_x){
		success = _x.success;
		response_sid = _x.response_sid;
		sub_function = _x.sub_function;
		nrc = _x.nrc;
	}
	ECUReset(ECUReset &&_x){
		success = std::move(_x.success);
		response_sid = std::move(_x.response_sid);
		sub_function = std::move(_x.sub_function);
		nrc = std::move(_x.nrc);
	}
	ECUReset& operator=(const ECUReset &_x){
		success = _x.success;
		response_sid = _x.response_sid;
		sub_function = _x.sub_function;
		nrc = _x.nrc;
		return *this;
	}
	ECUReset& operator=(ECUReset &&_x){
		success = std::move(_x.success);
		response_sid = std::move(_x.response_sid);
		sub_function = std::move(_x.sub_function);
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
		fun(nrc);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(success);
		fun(response_sid);
		fun(sub_function);
		fun(nrc);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (success);
		fun << (response_sid);
		fun << (sub_function);
		fun << (nrc);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (success);
		fun >> (response_sid);
		fun >> (sub_function);
		fun >> (nrc);
	}
};

}//ara
}//virtualtester
#endif //__ARA_VIRTUALTESTER__ECURESET_H__
