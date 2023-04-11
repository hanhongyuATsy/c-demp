#ifndef __ARA_COM_VSOMEIP__CURRENTROADCONDITIONINFO_TYPE_H__
#define __ARA_COM_VSOMEIP__CURRENTROADCONDITIONINFO_TYPE_H__


#include "ara/com/vsomeip/impl_type_currentlanenuminfo_type.h"
#include "ara/com/vsomeip/impl_type_trackingtargetinfo_type.h"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct CurrentRoadConditionInfo_Type {
public:
	ara::com::vsomeip::CurrentLaneNuminfo_Type CurrentLaneNuminfo;
	ara::com::vsomeip::TrackingTargetInfo_Type TrackingTargetInfo;
/*
	CurrentRoadConditionInfo_Type() {}
	~CurrentRoadConditionInfo_Type() {}
	CurrentRoadConditionInfo_Type(const ara::com::vsomeip::CurrentLaneNuminfo_Type _CurrentLaneNuminfo,const ara::com::vsomeip::TrackingTargetInfo_Type _TrackingTargetInfo):CurrentLaneNuminfo(_CurrentLaneNuminfo),TrackingTargetInfo(_TrackingTargetInfo) {}
	CurrentRoadConditionInfo_Type(const CurrentRoadConditionInfo_Type &_x){
		CurrentLaneNuminfo = _x.CurrentLaneNuminfo;
		TrackingTargetInfo = _x.TrackingTargetInfo;
	}
	CurrentRoadConditionInfo_Type(CurrentRoadConditionInfo_Type &&_x){
		CurrentLaneNuminfo = std::move(_x.CurrentLaneNuminfo);
		TrackingTargetInfo = std::move(_x.TrackingTargetInfo);
	}
	CurrentRoadConditionInfo_Type& operator=(const CurrentRoadConditionInfo_Type &_x){
		CurrentLaneNuminfo = _x.CurrentLaneNuminfo;
		TrackingTargetInfo = _x.TrackingTargetInfo;
		return *this;
	}
	CurrentRoadConditionInfo_Type& operator=(CurrentRoadConditionInfo_Type &&_x){
		CurrentLaneNuminfo = std::move(_x.CurrentLaneNuminfo);
		TrackingTargetInfo = std::move(_x.TrackingTargetInfo);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(CurrentLaneNuminfo);
		fun(TrackingTargetInfo);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(CurrentLaneNuminfo);
		fun(TrackingTargetInfo);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (CurrentLaneNuminfo);
		fun << (TrackingTargetInfo);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (CurrentLaneNuminfo);
		fun >> (TrackingTargetInfo);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__CURRENTROADCONDITIONINFO_TYPE_H__
