#ifndef __ARA_COM_VSOMEIP__DRVSTYLEVALUE_TYPE_H__
#define __ARA_COM_VSOMEIP__DRVSTYLEVALUE_TYPE_H__


#include "ara/com/vsomeip/impl_type_datatimestamp_type.h"
#include "cstdint"
#include "ara/com/vsomeip/impl_type_drvstylelistarray_type.h"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct DrvStylEvalue_Type {
public:
	ara::com::vsomeip::DataTimeStamp_Type DataTimeStamp;
	std::uint8_t UpDataType;
	ara::com::vsomeip::DrvStyleListArray_Type DrvStyleListArray;
/*
	DrvStylEvalue_Type() {}
	~DrvStylEvalue_Type() {}
	DrvStylEvalue_Type(const ara::com::vsomeip::DataTimeStamp_Type _DataTimeStamp,const std::uint8_t _UpDataType,const ara::com::vsomeip::DrvStyleListArray_Type _DrvStyleListArray):DataTimeStamp(_DataTimeStamp),UpDataType(_UpDataType),DrvStyleListArray(_DrvStyleListArray) {}
	DrvStylEvalue_Type(const DrvStylEvalue_Type &_x){
		DataTimeStamp = _x.DataTimeStamp;
		UpDataType = _x.UpDataType;
		DrvStyleListArray = _x.DrvStyleListArray;
	}
	DrvStylEvalue_Type(DrvStylEvalue_Type &&_x){
		DataTimeStamp = std::move(_x.DataTimeStamp);
		UpDataType = std::move(_x.UpDataType);
		DrvStyleListArray = std::move(_x.DrvStyleListArray);
	}
	DrvStylEvalue_Type& operator=(const DrvStylEvalue_Type &_x){
		DataTimeStamp = _x.DataTimeStamp;
		UpDataType = _x.UpDataType;
		DrvStyleListArray = _x.DrvStyleListArray;
		return *this;
	}
	DrvStylEvalue_Type& operator=(DrvStylEvalue_Type &&_x){
		DataTimeStamp = std::move(_x.DataTimeStamp);
		UpDataType = std::move(_x.UpDataType);
		DrvStyleListArray = std::move(_x.DrvStyleListArray);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(DataTimeStamp);
		fun(UpDataType);
		fun(DrvStyleListArray);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(DataTimeStamp);
		fun(UpDataType);
		fun(DrvStyleListArray);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (DataTimeStamp);
		fun << (UpDataType);
		fun << (DrvStyleListArray);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (DataTimeStamp);
		fun >> (UpDataType);
		fun >> (DrvStyleListArray);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__DRVSTYLEVALUE_TYPE_H__
