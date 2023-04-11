#ifndef __ARA_VIRTUALTESTER__WRITEDATABYIDENTIFIER_H__
#define __ARA_VIRTUALTESTER__WRITEDATABYIDENTIFIER_H__


#include "cstdint"





namespace ara
{
namespace virtualtester
{

struct WriteDataByIdentifier {
public:
	std::uint8_t success;
	std::uint8_t response_sid;
	std::uint16_t did;
	std::uint8_t nrc;
/*
	WriteDataByIdentifier() {}
	~WriteDataByIdentifier() {}
	WriteDataByIdentifier(const std::uint8_t _success,const std::uint8_t _response_sid,const std::uint16_t _did,const std::uint8_t _nrc):success(_success),response_sid(_response_sid),did(_did),nrc(_nrc) {}
	WriteDataByIdentifier(const WriteDataByIdentifier &_x){
		success = _x.success;
		response_sid = _x.response_sid;
		did = _x.did;
		nrc = _x.nrc;
	}
	WriteDataByIdentifier(WriteDataByIdentifier &&_x){
		success = std::move(_x.success);
		response_sid = std::move(_x.response_sid);
		did = std::move(_x.did);
		nrc = std::move(_x.nrc);
	}
	WriteDataByIdentifier& operator=(const WriteDataByIdentifier &_x){
		success = _x.success;
		response_sid = _x.response_sid;
		did = _x.did;
		nrc = _x.nrc;
		return *this;
	}
	WriteDataByIdentifier& operator=(WriteDataByIdentifier &&_x){
		success = std::move(_x.success);
		response_sid = std::move(_x.response_sid);
		did = std::move(_x.did);
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
		fun(nrc);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(success);
		fun(response_sid);
		fun(did);
		fun(nrc);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (success);
		fun << (response_sid);
		fun << (did);
		fun << (nrc);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (success);
		fun >> (response_sid);
		fun >> (did);
		fun >> (nrc);
	}
};

}//ara
}//virtualtester
#endif //__ARA_VIRTUALTESTER__WRITEDATABYIDENTIFIER_H__
