#ifndef __ARA_COM_VSOMEIP__DATATIMEENDSTAMP_TYPE_H__
#define __ARA_COM_VSOMEIP__DATATIMEENDSTAMP_TYPE_H__


#include "ara/com/vsomeip/impl_type_datatime_type.h"
#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct DataTimeEndStamp_Type {
public:
	ara::com::vsomeip::DataTime_Type DataTimeEndStampArray;
	std::uint16_t TimeStampMicSec;
/*
	DataTimeEndStamp_Type() {}
	~DataTimeEndStamp_Type() {}
	DataTimeEndStamp_Type(const ara::com::vsomeip::DataTime_Type _DataTimeEndStampArray,const std::uint16_t _TimeStampMicSec):DataTimeEndStampArray(_DataTimeEndStampArray),TimeStampMicSec(_TimeStampMicSec) {}
	DataTimeEndStamp_Type(const DataTimeEndStamp_Type &_x){
		DataTimeEndStampArray = _x.DataTimeEndStampArray;
		TimeStampMicSec = _x.TimeStampMicSec;
	}
	DataTimeEndStamp_Type(DataTimeEndStamp_Type &&_x){
		DataTimeEndStampArray = std::move(_x.DataTimeEndStampArray);
		TimeStampMicSec = std::move(_x.TimeStampMicSec);
	}
	DataTimeEndStamp_Type& operator=(const DataTimeEndStamp_Type &_x){
		DataTimeEndStampArray = _x.DataTimeEndStampArray;
		TimeStampMicSec = _x.TimeStampMicSec;
		return *this;
	}
	DataTimeEndStamp_Type& operator=(DataTimeEndStamp_Type &&_x){
		DataTimeEndStampArray = std::move(_x.DataTimeEndStampArray);
		TimeStampMicSec = std::move(_x.TimeStampMicSec);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(DataTimeEndStampArray);
		fun(TimeStampMicSec);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(DataTimeEndStampArray);
		fun(TimeStampMicSec);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (DataTimeEndStampArray);
		fun << (TimeStampMicSec);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (DataTimeEndStampArray);
		fun >> (TimeStampMicSec);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__DATATIMEENDSTAMP_TYPE_H__
