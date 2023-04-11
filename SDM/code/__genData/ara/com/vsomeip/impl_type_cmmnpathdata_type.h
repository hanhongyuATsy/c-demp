#ifndef __ARA_COM_VSOMEIP__CMMNPATHDATA_TYPE_H__
#define __ARA_COM_VSOMEIP__CMMNPATHDATA_TYPE_H__


#include "ara/com/vsomeip/impl_type_datatimestamp_type.h"
#include "cstdint"
#include "ara/com/vsomeip/impl_type_cmmnpathdataarray_type.h"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct CmmnPathData_Type {
public:
	ara::com::vsomeip::DataTimeStamp_Type DataTimeStamp;
	std::uint8_t UpDataType;
	std::uint8_t CmmnRouteId;
	ara::com::vsomeip::CmmnPathDataArray_Type CmmnPathDataArray;
/*
	CmmnPathData_Type() {}
	~CmmnPathData_Type() {}
	CmmnPathData_Type(const ara::com::vsomeip::DataTimeStamp_Type _DataTimeStamp,const std::uint8_t _UpDataType,const std::uint8_t _CmmnRouteId,const ara::com::vsomeip::CmmnPathDataArray_Type _CmmnPathDataArray):DataTimeStamp(_DataTimeStamp),UpDataType(_UpDataType),CmmnRouteId(_CmmnRouteId),CmmnPathDataArray(_CmmnPathDataArray) {}
	CmmnPathData_Type(const CmmnPathData_Type &_x){
		DataTimeStamp = _x.DataTimeStamp;
		UpDataType = _x.UpDataType;
		CmmnRouteId = _x.CmmnRouteId;
		CmmnPathDataArray = _x.CmmnPathDataArray;
	}
	CmmnPathData_Type(CmmnPathData_Type &&_x){
		DataTimeStamp = std::move(_x.DataTimeStamp);
		UpDataType = std::move(_x.UpDataType);
		CmmnRouteId = std::move(_x.CmmnRouteId);
		CmmnPathDataArray = std::move(_x.CmmnPathDataArray);
	}
	CmmnPathData_Type& operator=(const CmmnPathData_Type &_x){
		DataTimeStamp = _x.DataTimeStamp;
		UpDataType = _x.UpDataType;
		CmmnRouteId = _x.CmmnRouteId;
		CmmnPathDataArray = _x.CmmnPathDataArray;
		return *this;
	}
	CmmnPathData_Type& operator=(CmmnPathData_Type &&_x){
		DataTimeStamp = std::move(_x.DataTimeStamp);
		UpDataType = std::move(_x.UpDataType);
		CmmnRouteId = std::move(_x.CmmnRouteId);
		CmmnPathDataArray = std::move(_x.CmmnPathDataArray);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(DataTimeStamp);
		fun(UpDataType);
		fun(CmmnRouteId);
		fun(CmmnPathDataArray);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(DataTimeStamp);
		fun(UpDataType);
		fun(CmmnRouteId);
		fun(CmmnPathDataArray);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (DataTimeStamp);
		fun << (UpDataType);
		fun << (CmmnRouteId);
		fun << (CmmnPathDataArray);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (DataTimeStamp);
		fun >> (UpDataType);
		fun >> (CmmnRouteId);
		fun >> (CmmnPathDataArray);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__CMMNPATHDATA_TYPE_H__
