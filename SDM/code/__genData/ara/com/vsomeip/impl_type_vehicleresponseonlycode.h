#ifndef __ARA_COM_VSOMEIP__VEHICLERESPONSEONLYCODE_H__
#define __ARA_COM_VSOMEIP__VEHICLERESPONSEONLYCODE_H__


#include "cstdint"
#include "ara/com/vsomeip/impl_type_c2vresponsecode.h"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct vehicleResponseOnlyCode {
public:
	std::uint64_t c2vRequestId;
	ara::com::vsomeip::c2vResponseCode c2vResponseCode;
/*
	vehicleResponseOnlyCode() {}
	~vehicleResponseOnlyCode() {}
	vehicleResponseOnlyCode(const std::uint64_t _c2vRequestId,const ara::com::vsomeip::c2vResponseCode _c2vResponseCode):c2vRequestId(_c2vRequestId),c2vResponseCode(_c2vResponseCode) {}
	vehicleResponseOnlyCode(const vehicleResponseOnlyCode &_x){
		c2vRequestId = _x.c2vRequestId;
		c2vResponseCode = _x.c2vResponseCode;
	}
	vehicleResponseOnlyCode(vehicleResponseOnlyCode &&_x){
		c2vRequestId = std::move(_x.c2vRequestId);
		c2vResponseCode = std::move(_x.c2vResponseCode);
	}
	vehicleResponseOnlyCode& operator=(const vehicleResponseOnlyCode &_x){
		c2vRequestId = _x.c2vRequestId;
		c2vResponseCode = _x.c2vResponseCode;
		return *this;
	}
	vehicleResponseOnlyCode& operator=(vehicleResponseOnlyCode &&_x){
		c2vRequestId = std::move(_x.c2vRequestId);
		c2vResponseCode = std::move(_x.c2vResponseCode);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(c2vRequestId);
		fun(c2vResponseCode);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(c2vRequestId);
		fun(c2vResponseCode);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (c2vRequestId);
		fun << (c2vResponseCode);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (c2vRequestId);
		fun >> (c2vResponseCode);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__VEHICLERESPONSEONLYCODE_H__
