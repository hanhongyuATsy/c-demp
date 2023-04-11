#ifndef __ARA_COM_VSOMEIP__DYNAMICTRAFIICINFO_TYPE_H__
#define __ARA_COM_VSOMEIP__DYNAMICTRAFIICINFO_TYPE_H__


#include "ara/com/vsomeip/impl_type_trafiicflowinfo_type.h"
#include "ara/com/vsomeip/impl_type_historytrafficspdinfo_type.h"
#include "ara/com/vsomeip/impl_type_currentweather_type.h"
#include "ara/com/vsomeip/impl_type_trafficeventinfo_type.h"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct DynamicTrafiicInfo_Type {
public:
	ara::com::vsomeip::TrafiicFlowInfo_Type TrafiicFlowInfo;
	ara::com::vsomeip::HistoryTrafficSpdInfo_Type HistoryTrafficSpdInfo;
	ara::com::vsomeip::CurrentWeather_Type CurrentWeather;
	ara::com::vsomeip::TrafficEventInfo_Type TrafficEventInfo;
/*
	DynamicTrafiicInfo_Type() {}
	~DynamicTrafiicInfo_Type() {}
	DynamicTrafiicInfo_Type(const ara::com::vsomeip::TrafiicFlowInfo_Type _TrafiicFlowInfo,const ara::com::vsomeip::HistoryTrafficSpdInfo_Type _HistoryTrafficSpdInfo,const ara::com::vsomeip::CurrentWeather_Type _CurrentWeather,const ara::com::vsomeip::TrafficEventInfo_Type _TrafficEventInfo):TrafiicFlowInfo(_TrafiicFlowInfo),HistoryTrafficSpdInfo(_HistoryTrafficSpdInfo),CurrentWeather(_CurrentWeather),TrafficEventInfo(_TrafficEventInfo) {}
	DynamicTrafiicInfo_Type(const DynamicTrafiicInfo_Type &_x){
		TrafiicFlowInfo = _x.TrafiicFlowInfo;
		HistoryTrafficSpdInfo = _x.HistoryTrafficSpdInfo;
		CurrentWeather = _x.CurrentWeather;
		TrafficEventInfo = _x.TrafficEventInfo;
	}
	DynamicTrafiicInfo_Type(DynamicTrafiicInfo_Type &&_x){
		TrafiicFlowInfo = std::move(_x.TrafiicFlowInfo);
		HistoryTrafficSpdInfo = std::move(_x.HistoryTrafficSpdInfo);
		CurrentWeather = std::move(_x.CurrentWeather);
		TrafficEventInfo = std::move(_x.TrafficEventInfo);
	}
	DynamicTrafiicInfo_Type& operator=(const DynamicTrafiicInfo_Type &_x){
		TrafiicFlowInfo = _x.TrafiicFlowInfo;
		HistoryTrafficSpdInfo = _x.HistoryTrafficSpdInfo;
		CurrentWeather = _x.CurrentWeather;
		TrafficEventInfo = _x.TrafficEventInfo;
		return *this;
	}
	DynamicTrafiicInfo_Type& operator=(DynamicTrafiicInfo_Type &&_x){
		TrafiicFlowInfo = std::move(_x.TrafiicFlowInfo);
		HistoryTrafficSpdInfo = std::move(_x.HistoryTrafficSpdInfo);
		CurrentWeather = std::move(_x.CurrentWeather);
		TrafficEventInfo = std::move(_x.TrafficEventInfo);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(TrafiicFlowInfo);
		fun(HistoryTrafficSpdInfo);
		fun(CurrentWeather);
		fun(TrafficEventInfo);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(TrafiicFlowInfo);
		fun(HistoryTrafficSpdInfo);
		fun(CurrentWeather);
		fun(TrafficEventInfo);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (TrafiicFlowInfo);
		fun << (HistoryTrafficSpdInfo);
		fun << (CurrentWeather);
		fun << (TrafficEventInfo);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (TrafiicFlowInfo);
		fun >> (HistoryTrafficSpdInfo);
		fun >> (CurrentWeather);
		fun >> (TrafficEventInfo);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__DYNAMICTRAFIICINFO_TYPE_H__
