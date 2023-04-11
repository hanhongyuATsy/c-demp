#ifndef __ARA_VIRTUALTESTER__SECURITYACCESS_H__
#define __ARA_VIRTUALTESTER__SECURITYACCESS_H__


#include "cstdint"
#include "ara/ucm/pkgmgr/impl_type_bytevectortype.h"





namespace ara
{
namespace virtualtester
{

struct SecurityAccess {
public:
	std::uint8_t success;
	std::uint8_t response_sid;
	std::uint8_t sub_function;
	ara::ucm::pkgmgr::ByteVectorType data;
	std::uint8_t nrc;
/*
	SecurityAccess() {}
	~SecurityAccess() {}
	SecurityAccess(const std::uint8_t _success,const std::uint8_t _response_sid,const std::uint8_t _sub_function,const ara::ucm::pkgmgr::ByteVectorType _data,const std::uint8_t _nrc):success(_success),response_sid(_response_sid),sub_function(_sub_function),data(_data),nrc(_nrc) {}
	SecurityAccess(const SecurityAccess &_x){
		success = _x.success;
		response_sid = _x.response_sid;
		sub_function = _x.sub_function;
		data = _x.data;
		nrc = _x.nrc;
	}
	SecurityAccess(SecurityAccess &&_x){
		success = std::move(_x.success);
		response_sid = std::move(_x.response_sid);
		sub_function = std::move(_x.sub_function);
		data = std::move(_x.data);
		nrc = std::move(_x.nrc);
	}
	SecurityAccess& operator=(const SecurityAccess &_x){
		success = _x.success;
		response_sid = _x.response_sid;
		sub_function = _x.sub_function;
		data = _x.data;
		nrc = _x.nrc;
		return *this;
	}
	SecurityAccess& operator=(SecurityAccess &&_x){
		success = std::move(_x.success);
		response_sid = std::move(_x.response_sid);
		sub_function = std::move(_x.sub_function);
		data = std::move(_x.data);
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
		fun(data);
		fun(nrc);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(success);
		fun(response_sid);
		fun(sub_function);
		fun(data);
		fun(nrc);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (success);
		fun << (response_sid);
		fun << (sub_function);
		fun << (data);
		fun << (nrc);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (success);
		fun >> (response_sid);
		fun >> (sub_function);
		fun >> (data);
		fun >> (nrc);
	}
};

}//ara
}//virtualtester
#endif //__ARA_VIRTUALTESTER__SECURITYACCESS_H__
