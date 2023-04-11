#ifndef __ARA_COM_VSOMEIP__ROADANDTRAFFICINFO_TYPE_H__
#define __ARA_COM_VSOMEIP__ROADANDTRAFFICINFO_TYPE_H__


#include "ara/com/vsomeip/impl_type_drivingroutesurvey_type.h"
#include "ara/com/vsomeip/impl_type_vehiclerealtimestatusinfo_type.h"
#include "ara/com/vsomeip/impl_type_fixedtrafiicinfo_type.h"
#include "ara/com/vsomeip/impl_type_dynamictrafiicinfo_type.h"
#include "ara/com/vsomeip/impl_type_upcomingroadconditioninfo_type.h"
#include "ara/com/vsomeip/impl_type_currentroadconditioninfo_type.h"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct RoadAndTrafficInfo_Type {
public:
	ara::com::vsomeip::DrivingRouteSurvey_Type DrivingRouteSurvey;
	ara::com::vsomeip::VehicleRealtimeStatusInfo_Type VehicleRealtimeStatusInfo;
	ara::com::vsomeip::FixedTrafiicInfo_Type FixedTrafiicInfo;
	ara::com::vsomeip::DynamicTrafiicInfo_Type DynamicTrafiicInfo;
	ara::com::vsomeip::UpcomingRoadConditionInfo_Type UpcomingRoadConditionInfo;
	ara::com::vsomeip::CurrentRoadConditionInfo_Type CurrentRoadConditionInfo;
/*
	RoadAndTrafficInfo_Type() {}
	~RoadAndTrafficInfo_Type() {}
	RoadAndTrafficInfo_Type(const ara::com::vsomeip::DrivingRouteSurvey_Type _DrivingRouteSurvey,const ara::com::vsomeip::VehicleRealtimeStatusInfo_Type _VehicleRealtimeStatusInfo,const ara::com::vsomeip::FixedTrafiicInfo_Type _FixedTrafiicInfo,const ara::com::vsomeip::DynamicTrafiicInfo_Type _DynamicTrafiicInfo,const ara::com::vsomeip::UpcomingRoadConditionInfo_Type _UpcomingRoadConditionInfo,const ara::com::vsomeip::CurrentRoadConditionInfo_Type _CurrentRoadConditionInfo):DrivingRouteSurvey(_DrivingRouteSurvey),VehicleRealtimeStatusInfo(_VehicleRealtimeStatusInfo),FixedTrafiicInfo(_FixedTrafiicInfo),DynamicTrafiicInfo(_DynamicTrafiicInfo),UpcomingRoadConditionInfo(_UpcomingRoadConditionInfo),CurrentRoadConditionInfo(_CurrentRoadConditionInfo) {}
	RoadAndTrafficInfo_Type(const RoadAndTrafficInfo_Type &_x){
		DrivingRouteSurvey = _x.DrivingRouteSurvey;
		VehicleRealtimeStatusInfo = _x.VehicleRealtimeStatusInfo;
		FixedTrafiicInfo = _x.FixedTrafiicInfo;
		DynamicTrafiicInfo = _x.DynamicTrafiicInfo;
		UpcomingRoadConditionInfo = _x.UpcomingRoadConditionInfo;
		CurrentRoadConditionInfo = _x.CurrentRoadConditionInfo;
	}
	RoadAndTrafficInfo_Type(RoadAndTrafficInfo_Type &&_x){
		DrivingRouteSurvey = std::move(_x.DrivingRouteSurvey);
		VehicleRealtimeStatusInfo = std::move(_x.VehicleRealtimeStatusInfo);
		FixedTrafiicInfo = std::move(_x.FixedTrafiicInfo);
		DynamicTrafiicInfo = std::move(_x.DynamicTrafiicInfo);
		UpcomingRoadConditionInfo = std::move(_x.UpcomingRoadConditionInfo);
		CurrentRoadConditionInfo = std::move(_x.CurrentRoadConditionInfo);
	}
	RoadAndTrafficInfo_Type& operator=(const RoadAndTrafficInfo_Type &_x){
		DrivingRouteSurvey = _x.DrivingRouteSurvey;
		VehicleRealtimeStatusInfo = _x.VehicleRealtimeStatusInfo;
		FixedTrafiicInfo = _x.FixedTrafiicInfo;
		DynamicTrafiicInfo = _x.DynamicTrafiicInfo;
		UpcomingRoadConditionInfo = _x.UpcomingRoadConditionInfo;
		CurrentRoadConditionInfo = _x.CurrentRoadConditionInfo;
		return *this;
	}
	RoadAndTrafficInfo_Type& operator=(RoadAndTrafficInfo_Type &&_x){
		DrivingRouteSurvey = std::move(_x.DrivingRouteSurvey);
		VehicleRealtimeStatusInfo = std::move(_x.VehicleRealtimeStatusInfo);
		FixedTrafiicInfo = std::move(_x.FixedTrafiicInfo);
		DynamicTrafiicInfo = std::move(_x.DynamicTrafiicInfo);
		UpcomingRoadConditionInfo = std::move(_x.UpcomingRoadConditionInfo);
		CurrentRoadConditionInfo = std::move(_x.CurrentRoadConditionInfo);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(DrivingRouteSurvey);
		fun(VehicleRealtimeStatusInfo);
		fun(FixedTrafiicInfo);
		fun(DynamicTrafiicInfo);
		fun(UpcomingRoadConditionInfo);
		fun(CurrentRoadConditionInfo);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(DrivingRouteSurvey);
		fun(VehicleRealtimeStatusInfo);
		fun(FixedTrafiicInfo);
		fun(DynamicTrafiicInfo);
		fun(UpcomingRoadConditionInfo);
		fun(CurrentRoadConditionInfo);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (DrivingRouteSurvey);
		fun << (VehicleRealtimeStatusInfo);
		fun << (FixedTrafiicInfo);
		fun << (DynamicTrafiicInfo);
		fun << (UpcomingRoadConditionInfo);
		fun << (CurrentRoadConditionInfo);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (DrivingRouteSurvey);
		fun >> (VehicleRealtimeStatusInfo);
		fun >> (FixedTrafiicInfo);
		fun >> (DynamicTrafiicInfo);
		fun >> (UpcomingRoadConditionInfo);
		fun >> (CurrentRoadConditionInfo);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__ROADANDTRAFFICINFO_TYPE_H__
