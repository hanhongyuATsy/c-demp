#ifndef __ARA_VIRTUALTESTER__READDATABYIDENTIFIER_H__
#define __ARA_VIRTUALTESTER__READDATABYIDENTIFIER_H__


#include "cstdint"
#include "ara/ucm/pkgmgr/impl_type_bytevectortype.h"





namespace ara
{
namespace virtualtester
{

struct ReadDataByIdentifier {
public:
	std::uint8_t success;
	std::uint8_t response_sid;
	std::uint16_t did;
	ara::ucm::pkgmgr::ByteVectorType data;
	std::uint8_t nrc;
/*
	ReadDataByIdentifier() {}
	~ReadDataByIdentifier() {}
	ReadDataByIdentifier(const std::uint8_t _success,const std::uint8_t _response_sid,const std::uint16_t _did,const ara::ucm::pkgmgr::ByteVectorType _data,const std::uint8_t _nrc):success(_success),response_sid(_response_sid),did(_did),data(_data),nrc(_nrc) {}
	ReadDataByIdentifier(const ReadDataByIdentifier &_x){
		success = _x.success;
		response_sid = _x.response_sid;
		did = _x.did;
		data = _x.data;
		nrc = _x.nrc;
	}
	ReadDataByIdentifier(ReadDataByIdentifier &&_x){
		success = std::move(_x.success);
		response_sid = std::move(_x.response_sid);
		did = std::move(_x.did);
		data = std::move(_x.data);
		nrc = std::move(_x.nrc);
	}
	ReadDataByIdentifier& operator=(const ReadDataByIdentifier &_x){
		success = _x.success;
		response_sid = _x.response_sid;
		did = _x.did;
		data = _x.data;
		nrc = _x.nrc;
		return *this;
	}
	ReadDataByIdentifier& operator=(ReadDataByIdentifier &&_x){
		success = std::move(_x.success);
		response_sid = std::move(_x.response_sid);
		did = std::move(_x.did);
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
		fun(did);
		fun(data);
		fun(nrc);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(success);
		fun(response_sid);
		fun(did);
		fun(data);
		fun(nrc);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (success);
		fun << (response_sid);
		fun << (did);
		fun << (data);
		fun << (nrc);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (success);
		fun >> (response_sid);
		fun >> (did);
		fun >> (data);
		fun >> (nrc);
	}
};

}//ara
}//virtualtester
#endif //__ARA_VIRTUALTESTER__READDATABYIDENTIFIER_H__
