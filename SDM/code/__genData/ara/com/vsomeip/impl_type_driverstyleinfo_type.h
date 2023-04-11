#ifndef __ARA_COM_VSOMEIP__DRIVERSTYLEINFO_TYPE_H__
#define __ARA_COM_VSOMEIP__DRIVERSTYLEINFO_TYPE_H__


#include "ara/com/vsomeip/impl_type_roadsituation_type.h"
#include "ara/com/vsomeip/impl_type_driverstyle_type.h"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct DriverStyleInfo_Type {
public:
	ara::com::vsomeip::RoadSituation_Type RoadSituation;
	ara::com::vsomeip::DriverStyle_Type DriverStyle;
/*
	DriverStyleInfo_Type() {}
	~DriverStyleInfo_Type() {}
	DriverStyleInfo_Type(const ara::com::vsomeip::RoadSituation_Type _RoadSituation,const ara::com::vsomeip::DriverStyle_Type _DriverStyle):RoadSituation(_RoadSituation),DriverStyle(_DriverStyle) {}
	DriverStyleInfo_Type(const DriverStyleInfo_Type &_x){
		RoadSituation = _x.RoadSituation;
		DriverStyle = _x.DriverStyle;
	}
	DriverStyleInfo_Type(DriverStyleInfo_Type &&_x){
		RoadSituation = std::move(_x.RoadSituation);
		DriverStyle = std::move(_x.DriverStyle);
	}
	DriverStyleInfo_Type& operator=(const DriverStyleInfo_Type &_x){
		RoadSituation = _x.RoadSituation;
		DriverStyle = _x.DriverStyle;
		return *this;
	}
	DriverStyleInfo_Type& operator=(DriverStyleInfo_Type &&_x){
		RoadSituation = std::move(_x.RoadSituation);
		DriverStyle = std::move(_x.DriverStyle);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(RoadSituation);
		fun(DriverStyle);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(RoadSituation);
		fun(DriverStyle);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (RoadSituation);
		fun << (DriverStyle);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (RoadSituation);
		fun >> (DriverStyle);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__DRIVERSTYLEINFO_TYPE_H__
