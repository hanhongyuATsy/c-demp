#ifndef __ARA_COM_VSOMEIP__DRIVERMONITORINFO_TYPE_H__
#define __ARA_COM_VSOMEIP__DRIVERMONITORINFO_TYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct DriverMonitorInfo_Type {
public:
	std::uint16_t ISD_FatigLvl;
	std::uint8_t ISD_Distraction;
	std::uint8_t ISD_InterestsRegion;
	std::uint8_t ISD_DriverExpression;
/*
	DriverMonitorInfo_Type() {}
	~DriverMonitorInfo_Type() {}
	DriverMonitorInfo_Type(const std::uint16_t _ISD_FatigLvl,const std::uint8_t _ISD_Distraction,const std::uint8_t _ISD_InterestsRegion,const std::uint8_t _ISD_DriverExpression):ISD_FatigLvl(_ISD_FatigLvl),ISD_Distraction(_ISD_Distraction),ISD_InterestsRegion(_ISD_InterestsRegion),ISD_DriverExpression(_ISD_DriverExpression) {}
	DriverMonitorInfo_Type(const DriverMonitorInfo_Type &_x){
		ISD_FatigLvl = _x.ISD_FatigLvl;
		ISD_Distraction = _x.ISD_Distraction;
		ISD_InterestsRegion = _x.ISD_InterestsRegion;
		ISD_DriverExpression = _x.ISD_DriverExpression;
	}
	DriverMonitorInfo_Type(DriverMonitorInfo_Type &&_x){
		ISD_FatigLvl = std::move(_x.ISD_FatigLvl);
		ISD_Distraction = std::move(_x.ISD_Distraction);
		ISD_InterestsRegion = std::move(_x.ISD_InterestsRegion);
		ISD_DriverExpression = std::move(_x.ISD_DriverExpression);
	}
	DriverMonitorInfo_Type& operator=(const DriverMonitorInfo_Type &_x){
		ISD_FatigLvl = _x.ISD_FatigLvl;
		ISD_Distraction = _x.ISD_Distraction;
		ISD_InterestsRegion = _x.ISD_InterestsRegion;
		ISD_DriverExpression = _x.ISD_DriverExpression;
		return *this;
	}
	DriverMonitorInfo_Type& operator=(DriverMonitorInfo_Type &&_x){
		ISD_FatigLvl = std::move(_x.ISD_FatigLvl);
		ISD_Distraction = std::move(_x.ISD_Distraction);
		ISD_InterestsRegion = std::move(_x.ISD_InterestsRegion);
		ISD_DriverExpression = std::move(_x.ISD_DriverExpression);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(ISD_FatigLvl);
		fun(ISD_Distraction);
		fun(ISD_InterestsRegion);
		fun(ISD_DriverExpression);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(ISD_FatigLvl);
		fun(ISD_Distraction);
		fun(ISD_InterestsRegion);
		fun(ISD_DriverExpression);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (ISD_FatigLvl);
		fun << (ISD_Distraction);
		fun << (ISD_InterestsRegion);
		fun << (ISD_DriverExpression);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (ISD_FatigLvl);
		fun >> (ISD_Distraction);
		fun >> (ISD_InterestsRegion);
		fun >> (ISD_DriverExpression);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__DRIVERMONITORINFO_TYPE_H__
