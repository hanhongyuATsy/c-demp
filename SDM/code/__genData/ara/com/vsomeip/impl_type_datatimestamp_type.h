#ifndef __ARA_COM_VSOMEIP__DATATIMESTAMP_TYPE_H__
#define __ARA_COM_VSOMEIP__DATATIMESTAMP_TYPE_H__


#include "ara/com/vsomeip/impl_type_datatimestartstamp_type.h"
#include "ara/com/vsomeip/impl_type_datatimeendstamp_type.h"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct DataTimeStamp_Type {
public:
	ara::com::vsomeip::DataTimeStartStamp_Type DataTimeStartStamp;
	ara::com::vsomeip::DataTimeEndStamp_Type DataTimeEndStamp;
/*
	DataTimeStamp_Type() {}
	~DataTimeStamp_Type() {}
	DataTimeStamp_Type(const ara::com::vsomeip::DataTimeStartStamp_Type _DataTimeStartStamp,const ara::com::vsomeip::DataTimeEndStamp_Type _DataTimeEndStamp):DataTimeStartStamp(_DataTimeStartStamp),DataTimeEndStamp(_DataTimeEndStamp) {}
	DataTimeStamp_Type(const DataTimeStamp_Type &_x){
		DataTimeStartStamp = _x.DataTimeStartStamp;
		DataTimeEndStamp = _x.DataTimeEndStamp;
	}
	DataTimeStamp_Type(DataTimeStamp_Type &&_x){
		DataTimeStartStamp = std::move(_x.DataTimeStartStamp);
		DataTimeEndStamp = std::move(_x.DataTimeEndStamp);
	}
	DataTimeStamp_Type& operator=(const DataTimeStamp_Type &_x){
		DataTimeStartStamp = _x.DataTimeStartStamp;
		DataTimeEndStamp = _x.DataTimeEndStamp;
		return *this;
	}
	DataTimeStamp_Type& operator=(DataTimeStamp_Type &&_x){
		DataTimeStartStamp = std::move(_x.DataTimeStartStamp);
		DataTimeEndStamp = std::move(_x.DataTimeEndStamp);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(DataTimeStartStamp);
		fun(DataTimeEndStamp);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(DataTimeStartStamp);
		fun(DataTimeEndStamp);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (DataTimeStartStamp);
		fun << (DataTimeEndStamp);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (DataTimeStartStamp);
		fun >> (DataTimeEndStamp);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__DATATIMESTAMP_TYPE_H__
