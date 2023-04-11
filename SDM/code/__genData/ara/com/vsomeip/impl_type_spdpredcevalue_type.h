#ifndef __ARA_COM_VSOMEIP__SPDPREDCEVALUE_TYPE_H__
#define __ARA_COM_VSOMEIP__SPDPREDCEVALUE_TYPE_H__


#include "ara/com/vsomeip/impl_type_datatimestamp_type.h"
#include "cstdint"
#include "ara/com/vsomeip/impl_type_spdpredctevaluelistarray_type.h"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct SpdPredcEvalue_Type {
public:
	ara::com::vsomeip::DataTimeStamp_Type DataTimeStamp;
	std::uint8_t UpDataType;
	ara::com::vsomeip::SpdPredctEvalueListArray_Type SpdPredctEvalueListArray;
/*
	SpdPredcEvalue_Type() {}
	~SpdPredcEvalue_Type() {}
	SpdPredcEvalue_Type(const ara::com::vsomeip::DataTimeStamp_Type _DataTimeStamp,const std::uint8_t _UpDataType,const ara::com::vsomeip::SpdPredctEvalueListArray_Type _SpdPredctEvalueListArray):DataTimeStamp(_DataTimeStamp),UpDataType(_UpDataType),SpdPredctEvalueListArray(_SpdPredctEvalueListArray) {}
	SpdPredcEvalue_Type(const SpdPredcEvalue_Type &_x){
		DataTimeStamp = _x.DataTimeStamp;
		UpDataType = _x.UpDataType;
		SpdPredctEvalueListArray = _x.SpdPredctEvalueListArray;
	}
	SpdPredcEvalue_Type(SpdPredcEvalue_Type &&_x){
		DataTimeStamp = std::move(_x.DataTimeStamp);
		UpDataType = std::move(_x.UpDataType);
		SpdPredctEvalueListArray = std::move(_x.SpdPredctEvalueListArray);
	}
	SpdPredcEvalue_Type& operator=(const SpdPredcEvalue_Type &_x){
		DataTimeStamp = _x.DataTimeStamp;
		UpDataType = _x.UpDataType;
		SpdPredctEvalueListArray = _x.SpdPredctEvalueListArray;
		return *this;
	}
	SpdPredcEvalue_Type& operator=(SpdPredcEvalue_Type &&_x){
		DataTimeStamp = std::move(_x.DataTimeStamp);
		UpDataType = std::move(_x.UpDataType);
		SpdPredctEvalueListArray = std::move(_x.SpdPredctEvalueListArray);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(DataTimeStamp);
		fun(UpDataType);
		fun(SpdPredctEvalueListArray);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(DataTimeStamp);
		fun(UpDataType);
		fun(SpdPredctEvalueListArray);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (DataTimeStamp);
		fun << (UpDataType);
		fun << (SpdPredctEvalueListArray);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (DataTimeStamp);
		fun >> (UpDataType);
		fun >> (SpdPredctEvalueListArray);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__SPDPREDCEVALUE_TYPE_H__
