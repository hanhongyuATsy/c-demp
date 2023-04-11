#ifndef __ARA_COM_VSOMEIP__DATATIMESTARTSTAMP_TYPE_H__
#define __ARA_COM_VSOMEIP__DATATIMESTARTSTAMP_TYPE_H__


#include "ara/com/vsomeip/impl_type_datatime_type.h"
#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct DataTimeStartStamp_Type {
public:
	ara::com::vsomeip::DataTime_Type DataTimeStartStampArray;
	std::uint16_t TimeStampMicSec;
/*
	DataTimeStartStamp_Type() {}
	~DataTimeStartStamp_Type() {}
	DataTimeStartStamp_Type(const ara::com::vsomeip::DataTime_Type _DataTimeStartStampArray,const std::uint16_t _TimeStampMicSec):DataTimeStartStampArray(_DataTimeStartStampArray),TimeStampMicSec(_TimeStampMicSec) {}
	DataTimeStartStamp_Type(const DataTimeStartStamp_Type &_x){
		DataTimeStartStampArray = _x.DataTimeStartStampArray;
		TimeStampMicSec = _x.TimeStampMicSec;
	}
	DataTimeStartStamp_Type(DataTimeStartStamp_Type &&_x){
		DataTimeStartStampArray = std::move(_x.DataTimeStartStampArray);
		TimeStampMicSec = std::move(_x.TimeStampMicSec);
	}
	DataTimeStartStamp_Type& operator=(const DataTimeStartStamp_Type &_x){
		DataTimeStartStampArray = _x.DataTimeStartStampArray;
		TimeStampMicSec = _x.TimeStampMicSec;
		return *this;
	}
	DataTimeStartStamp_Type& operator=(DataTimeStartStamp_Type &&_x){
		DataTimeStartStampArray = std::move(_x.DataTimeStartStampArray);
		TimeStampMicSec = std::move(_x.TimeStampMicSec);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(DataTimeStartStampArray);
		fun(TimeStampMicSec);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(DataTimeStartStampArray);
		fun(TimeStampMicSec);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (DataTimeStartStampArray);
		fun << (TimeStampMicSec);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (DataTimeStartStampArray);
		fun >> (TimeStampMicSec);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__DATATIMESTARTSTAMP_TYPE_H__
