#ifndef __ARA_COM_VSOMEIP__BURIEDDATA_H__
#define __ARA_COM_VSOMEIP__BURIEDDATA_H__


#include "cstdint"
#include "impl_type_string.h"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct BuriedData {
public:
	std::uint8_t BusinessId;
	String DataInfo;
/*
	BuriedData() {}
	~BuriedData() {}
	BuriedData(const std::uint8_t _BusinessId,const String _DataInfo):BusinessId(_BusinessId),DataInfo(_DataInfo) {}
	BuriedData(const BuriedData &_x){
		BusinessId = _x.BusinessId;
		DataInfo = _x.DataInfo;
	}
	BuriedData(BuriedData &&_x){
		BusinessId = std::move(_x.BusinessId);
		DataInfo = std::move(_x.DataInfo);
	}
	BuriedData& operator=(const BuriedData &_x){
		BusinessId = _x.BusinessId;
		DataInfo = _x.DataInfo;
		return *this;
	}
	BuriedData& operator=(BuriedData &&_x){
		BusinessId = std::move(_x.BusinessId);
		DataInfo = std::move(_x.DataInfo);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(BusinessId);
		fun(DataInfo);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(BusinessId);
		fun(DataInfo);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (BusinessId);
		fun << (DataInfo);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (BusinessId);
		fun >> (DataInfo);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__BURIEDDATA_H__
