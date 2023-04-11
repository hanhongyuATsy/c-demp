#ifndef __ARA_COM_VSOMEIP__FIXEDTRAFIICINFO_TYPE_H__
#define __ARA_COM_VSOMEIP__FIXEDTRAFIICINFO_TYPE_H__


#include "ara/com/vsomeip/impl_type_speedlimitinfo_type.h"
#include "ara/com/vsomeip/impl_type_curvatureinfo_type.h"
#include "ara/com/vsomeip/impl_type_roadclassinfo_type.h"
#include "ara/com/vsomeip/impl_type_roadslopeinfo_type.h"
#include "ara/com/vsomeip/impl_type_roadconditioninfo_type.h"
#include "ara/com/vsomeip/impl_type_routeintersectioninfo_type.h"
#include "ara/com/vsomeip/impl_type_overtkprohibstarstopinfo_type.h"
#include "ara/com/vsomeip/impl_type_routelaneinfo_type.h"
#include "ara/com/vsomeip/impl_type_routelineinfo_type.h"
#include "ara/com/vsomeip/impl_type_roadreferspeedinfo_type.h"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct FixedTrafiicInfo_Type {
public:
	ara::com::vsomeip::SpeedLimitInfo_Type SpeedLimitInfo;
	ara::com::vsomeip::CurvatureInfo_Type CurvatureInfo;
	ara::com::vsomeip::RoadClassInfo_Type RoadClassInfo;
	ara::com::vsomeip::RoadSlopeInfo_Type RoadSlopeInfo;
	ara::com::vsomeip::RoadConditionInfo_Type RoadConditionInfo;
	ara::com::vsomeip::RouteIntersectionInfo_Type RouteIntersectionInfo;
	ara::com::vsomeip::OverTkProHibStarStopInfo_Type OverTkProHibStarStopInfo;
	ara::com::vsomeip::RouteLaneInfo_Type RouteLaneInfo;
	ara::com::vsomeip::RouteLineInfo_Type RouteLineInfo;
	ara::com::vsomeip::RoadReferSpeedInfo_Type RoadReferSpeedInfo;
/*
	FixedTrafiicInfo_Type() {}
	~FixedTrafiicInfo_Type() {}
	FixedTrafiicInfo_Type(const ara::com::vsomeip::SpeedLimitInfo_Type _SpeedLimitInfo,const ara::com::vsomeip::CurvatureInfo_Type _CurvatureInfo,const ara::com::vsomeip::RoadClassInfo_Type _RoadClassInfo,const ara::com::vsomeip::RoadSlopeInfo_Type _RoadSlopeInfo,const ara::com::vsomeip::RoadConditionInfo_Type _RoadConditionInfo,const ara::com::vsomeip::RouteIntersectionInfo_Type _RouteIntersectionInfo,const ara::com::vsomeip::OverTkProHibStarStopInfo_Type _OverTkProHibStarStopInfo,const ara::com::vsomeip::RouteLaneInfo_Type _RouteLaneInfo,const ara::com::vsomeip::RouteLineInfo_Type _RouteLineInfo,const ara::com::vsomeip::RoadReferSpeedInfo_Type _RoadReferSpeedInfo):SpeedLimitInfo(_SpeedLimitInfo),CurvatureInfo(_CurvatureInfo),RoadClassInfo(_RoadClassInfo),RoadSlopeInfo(_RoadSlopeInfo),RoadConditionInfo(_RoadConditionInfo),RouteIntersectionInfo(_RouteIntersectionInfo),OverTkProHibStarStopInfo(_OverTkProHibStarStopInfo),RouteLaneInfo(_RouteLaneInfo),RouteLineInfo(_RouteLineInfo),RoadReferSpeedInfo(_RoadReferSpeedInfo) {}
	FixedTrafiicInfo_Type(const FixedTrafiicInfo_Type &_x){
		SpeedLimitInfo = _x.SpeedLimitInfo;
		CurvatureInfo = _x.CurvatureInfo;
		RoadClassInfo = _x.RoadClassInfo;
		RoadSlopeInfo = _x.RoadSlopeInfo;
		RoadConditionInfo = _x.RoadConditionInfo;
		RouteIntersectionInfo = _x.RouteIntersectionInfo;
		OverTkProHibStarStopInfo = _x.OverTkProHibStarStopInfo;
		RouteLaneInfo = _x.RouteLaneInfo;
		RouteLineInfo = _x.RouteLineInfo;
		RoadReferSpeedInfo = _x.RoadReferSpeedInfo;
	}
	FixedTrafiicInfo_Type(FixedTrafiicInfo_Type &&_x){
		SpeedLimitInfo = std::move(_x.SpeedLimitInfo);
		CurvatureInfo = std::move(_x.CurvatureInfo);
		RoadClassInfo = std::move(_x.RoadClassInfo);
		RoadSlopeInfo = std::move(_x.RoadSlopeInfo);
		RoadConditionInfo = std::move(_x.RoadConditionInfo);
		RouteIntersectionInfo = std::move(_x.RouteIntersectionInfo);
		OverTkProHibStarStopInfo = std::move(_x.OverTkProHibStarStopInfo);
		RouteLaneInfo = std::move(_x.RouteLaneInfo);
		RouteLineInfo = std::move(_x.RouteLineInfo);
		RoadReferSpeedInfo = std::move(_x.RoadReferSpeedInfo);
	}
	FixedTrafiicInfo_Type& operator=(const FixedTrafiicInfo_Type &_x){
		SpeedLimitInfo = _x.SpeedLimitInfo;
		CurvatureInfo = _x.CurvatureInfo;
		RoadClassInfo = _x.RoadClassInfo;
		RoadSlopeInfo = _x.RoadSlopeInfo;
		RoadConditionInfo = _x.RoadConditionInfo;
		RouteIntersectionInfo = _x.RouteIntersectionInfo;
		OverTkProHibStarStopInfo = _x.OverTkProHibStarStopInfo;
		RouteLaneInfo = _x.RouteLaneInfo;
		RouteLineInfo = _x.RouteLineInfo;
		RoadReferSpeedInfo = _x.RoadReferSpeedInfo;
		return *this;
	}
	FixedTrafiicInfo_Type& operator=(FixedTrafiicInfo_Type &&_x){
		SpeedLimitInfo = std::move(_x.SpeedLimitInfo);
		CurvatureInfo = std::move(_x.CurvatureInfo);
		RoadClassInfo = std::move(_x.RoadClassInfo);
		RoadSlopeInfo = std::move(_x.RoadSlopeInfo);
		RoadConditionInfo = std::move(_x.RoadConditionInfo);
		RouteIntersectionInfo = std::move(_x.RouteIntersectionInfo);
		OverTkProHibStarStopInfo = std::move(_x.OverTkProHibStarStopInfo);
		RouteLaneInfo = std::move(_x.RouteLaneInfo);
		RouteLineInfo = std::move(_x.RouteLineInfo);
		RoadReferSpeedInfo = std::move(_x.RoadReferSpeedInfo);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(SpeedLimitInfo);
		fun(CurvatureInfo);
		fun(RoadClassInfo);
		fun(RoadSlopeInfo);
		fun(RoadConditionInfo);
		fun(RouteIntersectionInfo);
		fun(OverTkProHibStarStopInfo);
		fun(RouteLaneInfo);
		fun(RouteLineInfo);
		fun(RoadReferSpeedInfo);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(SpeedLimitInfo);
		fun(CurvatureInfo);
		fun(RoadClassInfo);
		fun(RoadSlopeInfo);
		fun(RoadConditionInfo);
		fun(RouteIntersectionInfo);
		fun(OverTkProHibStarStopInfo);
		fun(RouteLaneInfo);
		fun(RouteLineInfo);
		fun(RoadReferSpeedInfo);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (SpeedLimitInfo);
		fun << (CurvatureInfo);
		fun << (RoadClassInfo);
		fun << (RoadSlopeInfo);
		fun << (RoadConditionInfo);
		fun << (RouteIntersectionInfo);
		fun << (OverTkProHibStarStopInfo);
		fun << (RouteLaneInfo);
		fun << (RouteLineInfo);
		fun << (RoadReferSpeedInfo);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (SpeedLimitInfo);
		fun >> (CurvatureInfo);
		fun >> (RoadClassInfo);
		fun >> (RoadSlopeInfo);
		fun >> (RoadConditionInfo);
		fun >> (RouteIntersectionInfo);
		fun >> (OverTkProHibStarStopInfo);
		fun >> (RouteLaneInfo);
		fun >> (RouteLineInfo);
		fun >> (RoadReferSpeedInfo);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__FIXEDTRAFIICINFO_TYPE_H__
