#ifndef __ARA_COM_VSOMEIP__PIDCCPFRMEVALUERSLT_TYPE_H__
#define __ARA_COM_VSOMEIP__PIDCCPFRMEVALUERSLT_TYPE_H__


#include "ara/com/vsomeip/impl_type_datatimestamp_type.h"
#include "cstdint"
#include "ara/com/vsomeip/impl_type_pidccpfrmevaluersltarray_type.h"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct PidccPfrmEvalueRslt_Type {
public:
	ara::com::vsomeip::DataTimeStamp_Type DataTimeStamp;
	std::uint8_t UpDataType;
	ara::com::vsomeip::PidccPfrmEvalueRsltArray_Type PidccPfrmEvalueRsltArray;
/*
	PidccPfrmEvalueRslt_Type() {}
	~PidccPfrmEvalueRslt_Type() {}
	PidccPfrmEvalueRslt_Type(const ara::com::vsomeip::DataTimeStamp_Type _DataTimeStamp,const std::uint8_t _UpDataType,const ara::com::vsomeip::PidccPfrmEvalueRsltArray_Type _PidccPfrmEvalueRsltArray):DataTimeStamp(_DataTimeStamp),UpDataType(_UpDataType),PidccPfrmEvalueRsltArray(_PidccPfrmEvalueRsltArray) {}
	PidccPfrmEvalueRslt_Type(const PidccPfrmEvalueRslt_Type &_x){
		DataTimeStamp = _x.DataTimeStamp;
		UpDataType = _x.UpDataType;
		PidccPfrmEvalueRsltArray = _x.PidccPfrmEvalueRsltArray;
	}
	PidccPfrmEvalueRslt_Type(PidccPfrmEvalueRslt_Type &&_x){
		DataTimeStamp = std::move(_x.DataTimeStamp);
		UpDataType = std::move(_x.UpDataType);
		PidccPfrmEvalueRsltArray = std::move(_x.PidccPfrmEvalueRsltArray);
	}
	PidccPfrmEvalueRslt_Type& operator=(const PidccPfrmEvalueRslt_Type &_x){
		DataTimeStamp = _x.DataTimeStamp;
		UpDataType = _x.UpDataType;
		PidccPfrmEvalueRsltArray = _x.PidccPfrmEvalueRsltArray;
		return *this;
	}
	PidccPfrmEvalueRslt_Type& operator=(PidccPfrmEvalueRslt_Type &&_x){
		DataTimeStamp = std::move(_x.DataTimeStamp);
		UpDataType = std::move(_x.UpDataType);
		PidccPfrmEvalueRsltArray = std::move(_x.PidccPfrmEvalueRsltArray);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(DataTimeStamp);
		fun(UpDataType);
		fun(PidccPfrmEvalueRsltArray);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(DataTimeStamp);
		fun(UpDataType);
		fun(PidccPfrmEvalueRsltArray);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (DataTimeStamp);
		fun << (UpDataType);
		fun << (PidccPfrmEvalueRsltArray);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (DataTimeStamp);
		fun >> (UpDataType);
		fun >> (PidccPfrmEvalueRsltArray);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__PIDCCPFRMEVALUERSLT_TYPE_H__
