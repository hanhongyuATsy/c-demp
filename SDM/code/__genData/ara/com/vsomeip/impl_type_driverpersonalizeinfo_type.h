#ifndef __ARA_COM_VSOMEIP__DRIVERPERSONALIZEINFO_TYPE_H__
#define __ARA_COM_VSOMEIP__DRIVERPERSONALIZEINFO_TYPE_H__


#include "ara/com/vsomeip/impl_type_driveraccountinfo_type.h"
#include "ara/com/vsomeip/impl_type_drivermonitorinfo_type.h"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct DriverPersonalizeInfo_Type {
public:
	ara::com::vsomeip::DriverAccountInfo_Type DriverAccountInfo;
	ara::com::vsomeip::DriverMonitorInfo_Type DriverMonitorInfo;
/*
	DriverPersonalizeInfo_Type() {}
	~DriverPersonalizeInfo_Type() {}
	DriverPersonalizeInfo_Type(const ara::com::vsomeip::DriverAccountInfo_Type _DriverAccountInfo,const ara::com::vsomeip::DriverMonitorInfo_Type _DriverMonitorInfo):DriverAccountInfo(_DriverAccountInfo),DriverMonitorInfo(_DriverMonitorInfo) {}
	DriverPersonalizeInfo_Type(const DriverPersonalizeInfo_Type &_x){
		DriverAccountInfo = _x.DriverAccountInfo;
		DriverMonitorInfo = _x.DriverMonitorInfo;
	}
	DriverPersonalizeInfo_Type(DriverPersonalizeInfo_Type &&_x){
		DriverAccountInfo = std::move(_x.DriverAccountInfo);
		DriverMonitorInfo = std::move(_x.DriverMonitorInfo);
	}
	DriverPersonalizeInfo_Type& operator=(const DriverPersonalizeInfo_Type &_x){
		DriverAccountInfo = _x.DriverAccountInfo;
		DriverMonitorInfo = _x.DriverMonitorInfo;
		return *this;
	}
	DriverPersonalizeInfo_Type& operator=(DriverPersonalizeInfo_Type &&_x){
		DriverAccountInfo = std::move(_x.DriverAccountInfo);
		DriverMonitorInfo = std::move(_x.DriverMonitorInfo);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(DriverAccountInfo);
		fun(DriverMonitorInfo);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(DriverAccountInfo);
		fun(DriverMonitorInfo);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (DriverAccountInfo);
		fun << (DriverMonitorInfo);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (DriverAccountInfo);
		fun >> (DriverMonitorInfo);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__DRIVERPERSONALIZEINFO_TYPE_H__
