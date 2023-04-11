#ifndef __ARA_UCM_FAMGR__FLASHINGADAPTERCURRENTUPDATEECUDIDSTYPE_H__
#define __ARA_UCM_FAMGR__FLASHINGADAPTERCURRENTUPDATEECUDIDSTYPE_H__


#include "impl_type_string.h"
#include "cstdint"





namespace ara
{
namespace ucm
{
namespace famgr
{

struct FlashingAdapterCurrentUpdateEcuDidsType {
public:
	String did;
	String didValue;
	std::uint32_t start;
	std::uint32_t end;
/*
	FlashingAdapterCurrentUpdateEcuDidsType() {}
	~FlashingAdapterCurrentUpdateEcuDidsType() {}
	FlashingAdapterCurrentUpdateEcuDidsType(const String _did,const String _didValue,const std::uint32_t _start,const std::uint32_t _end):did(_did),didValue(_didValue),start(_start),end(_end) {}
	FlashingAdapterCurrentUpdateEcuDidsType(const FlashingAdapterCurrentUpdateEcuDidsType &_x){
		did = _x.did;
		didValue = _x.didValue;
		start = _x.start;
		end = _x.end;
	}
	FlashingAdapterCurrentUpdateEcuDidsType(FlashingAdapterCurrentUpdateEcuDidsType &&_x){
		did = std::move(_x.did);
		didValue = std::move(_x.didValue);
		start = std::move(_x.start);
		end = std::move(_x.end);
	}
	FlashingAdapterCurrentUpdateEcuDidsType& operator=(const FlashingAdapterCurrentUpdateEcuDidsType &_x){
		did = _x.did;
		didValue = _x.didValue;
		start = _x.start;
		end = _x.end;
		return *this;
	}
	FlashingAdapterCurrentUpdateEcuDidsType& operator=(FlashingAdapterCurrentUpdateEcuDidsType &&_x){
		did = std::move(_x.did);
		didValue = std::move(_x.didValue);
		start = std::move(_x.start);
		end = std::move(_x.end);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(did);
		fun(didValue);
		fun(start);
		fun(end);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(did);
		fun(didValue);
		fun(start);
		fun(end);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (did);
		fun << (didValue);
		fun << (start);
		fun << (end);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (did);
		fun >> (didValue);
		fun >> (start);
		fun >> (end);
	}
};

}//ara
}//ucm
}//famgr
#endif //__ARA_UCM_FAMGR__FLASHINGADAPTERCURRENTUPDATEECUDIDSTYPE_H__
