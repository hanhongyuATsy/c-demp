#ifndef __ARA_COM_VSOMEIP__GLBOPTMDATA_TYPE_H__
#define __ARA_COM_VSOMEIP__GLBOPTMDATA_TYPE_H__


#include "ara/com/vsomeip/impl_type_datatimestamp_type.h"
#include "cstdint"
#include "ara/com/vsomeip/impl_type_socinstartend_type.h"
#include "ara/com/vsomeip/impl_type_glboptmdataarray_type.h"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct GlbOptmData_Type {
public:
	ara::com::vsomeip::DataTimeStamp_Type DataTimeStamp;
	std::uint8_t UpDataType;
	ara::com::vsomeip::SOCInStartEnd_Type SOCInStartEnd;
	ara::com::vsomeip::GlbOptmDataArray_Type GlbOptmDataArray;
/*
	GlbOptmData_Type() {}
	~GlbOptmData_Type() {}
	GlbOptmData_Type(const ara::com::vsomeip::DataTimeStamp_Type _DataTimeStamp,const std::uint8_t _UpDataType,const ara::com::vsomeip::SOCInStartEnd_Type _SOCInStartEnd,const ara::com::vsomeip::GlbOptmDataArray_Type _GlbOptmDataArray):DataTimeStamp(_DataTimeStamp),UpDataType(_UpDataType),SOCInStartEnd(_SOCInStartEnd),GlbOptmDataArray(_GlbOptmDataArray) {}
	GlbOptmData_Type(const GlbOptmData_Type &_x){
		DataTimeStamp = _x.DataTimeStamp;
		UpDataType = _x.UpDataType;
		SOCInStartEnd = _x.SOCInStartEnd;
		GlbOptmDataArray = _x.GlbOptmDataArray;
	}
	GlbOptmData_Type(GlbOptmData_Type &&_x){
		DataTimeStamp = std::move(_x.DataTimeStamp);
		UpDataType = std::move(_x.UpDataType);
		SOCInStartEnd = std::move(_x.SOCInStartEnd);
		GlbOptmDataArray = std::move(_x.GlbOptmDataArray);
	}
	GlbOptmData_Type& operator=(const GlbOptmData_Type &_x){
		DataTimeStamp = _x.DataTimeStamp;
		UpDataType = _x.UpDataType;
		SOCInStartEnd = _x.SOCInStartEnd;
		GlbOptmDataArray = _x.GlbOptmDataArray;
		return *this;
	}
	GlbOptmData_Type& operator=(GlbOptmData_Type &&_x){
		DataTimeStamp = std::move(_x.DataTimeStamp);
		UpDataType = std::move(_x.UpDataType);
		SOCInStartEnd = std::move(_x.SOCInStartEnd);
		GlbOptmDataArray = std::move(_x.GlbOptmDataArray);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(DataTimeStamp);
		fun(UpDataType);
		fun(SOCInStartEnd);
		fun(GlbOptmDataArray);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(DataTimeStamp);
		fun(UpDataType);
		fun(SOCInStartEnd);
		fun(GlbOptmDataArray);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (DataTimeStamp);
		fun << (UpDataType);
		fun << (SOCInStartEnd);
		fun << (GlbOptmDataArray);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (DataTimeStamp);
		fun >> (UpDataType);
		fun >> (SOCInStartEnd);
		fun >> (GlbOptmDataArray);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__GLBOPTMDATA_TYPE_H__
