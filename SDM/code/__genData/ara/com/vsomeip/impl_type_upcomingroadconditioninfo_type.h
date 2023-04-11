#ifndef __ARA_COM_VSOMEIP__UPCOMINGROADCONDITIONINFO_TYPE_H__
#define __ARA_COM_VSOMEIP__UPCOMINGROADCONDITIONINFO_TYPE_H__


#include "ara/com/vsomeip/impl_type_nearestexeninfo_type.h"
#include "ara/com/vsomeip/impl_type_nearestturnnelinfo_type.h"
#include "ara/com/vsomeip/impl_type_nearesttollgate_type.h"
#include "ara/com/vsomeip/impl_type_nearestbridgeinfo_type.h"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct UpcomingRoadConditionInfo_Type {
public:
	ara::com::vsomeip::NearestEXENInfo_Type NearestEXENInfo;
	ara::com::vsomeip::NearestTurnnelInfo_Type NearestTurnnelInfo;
	ara::com::vsomeip::NearestTollGate_Type NearestTollGate;
	ara::com::vsomeip::NearestBridgeInfo_Type NearestBridgeInfo;
/*
	UpcomingRoadConditionInfo_Type() {}
	~UpcomingRoadConditionInfo_Type() {}
	UpcomingRoadConditionInfo_Type(const ara::com::vsomeip::NearestEXENInfo_Type _NearestEXENInfo,const ara::com::vsomeip::NearestTurnnelInfo_Type _NearestTurnnelInfo,const ara::com::vsomeip::NearestTollGate_Type _NearestTollGate,const ara::com::vsomeip::NearestBridgeInfo_Type _NearestBridgeInfo):NearestEXENInfo(_NearestEXENInfo),NearestTurnnelInfo(_NearestTurnnelInfo),NearestTollGate(_NearestTollGate),NearestBridgeInfo(_NearestBridgeInfo) {}
	UpcomingRoadConditionInfo_Type(const UpcomingRoadConditionInfo_Type &_x){
		NearestEXENInfo = _x.NearestEXENInfo;
		NearestTurnnelInfo = _x.NearestTurnnelInfo;
		NearestTollGate = _x.NearestTollGate;
		NearestBridgeInfo = _x.NearestBridgeInfo;
	}
	UpcomingRoadConditionInfo_Type(UpcomingRoadConditionInfo_Type &&_x){
		NearestEXENInfo = std::move(_x.NearestEXENInfo);
		NearestTurnnelInfo = std::move(_x.NearestTurnnelInfo);
		NearestTollGate = std::move(_x.NearestTollGate);
		NearestBridgeInfo = std::move(_x.NearestBridgeInfo);
	}
	UpcomingRoadConditionInfo_Type& operator=(const UpcomingRoadConditionInfo_Type &_x){
		NearestEXENInfo = _x.NearestEXENInfo;
		NearestTurnnelInfo = _x.NearestTurnnelInfo;
		NearestTollGate = _x.NearestTollGate;
		NearestBridgeInfo = _x.NearestBridgeInfo;
		return *this;
	}
	UpcomingRoadConditionInfo_Type& operator=(UpcomingRoadConditionInfo_Type &&_x){
		NearestEXENInfo = std::move(_x.NearestEXENInfo);
		NearestTurnnelInfo = std::move(_x.NearestTurnnelInfo);
		NearestTollGate = std::move(_x.NearestTollGate);
		NearestBridgeInfo = std::move(_x.NearestBridgeInfo);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(NearestEXENInfo);
		fun(NearestTurnnelInfo);
		fun(NearestTollGate);
		fun(NearestBridgeInfo);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(NearestEXENInfo);
		fun(NearestTurnnelInfo);
		fun(NearestTollGate);
		fun(NearestBridgeInfo);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (NearestEXENInfo);
		fun << (NearestTurnnelInfo);
		fun << (NearestTollGate);
		fun << (NearestBridgeInfo);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (NearestEXENInfo);
		fun >> (NearestTurnnelInfo);
		fun >> (NearestTollGate);
		fun >> (NearestBridgeInfo);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__UPCOMINGROADCONDITIONINFO_TYPE_H__
