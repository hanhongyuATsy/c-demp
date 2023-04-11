#ifndef __ARA_COM_VSOMEIP__LONGTIMESPDPEPTINFO_TYPE_H__
#define __ARA_COM_VSOMEIP__LONGTIMESPDPEPTINFO_TYPE_H__


#include "ara/com/vsomeip/impl_type_roadsegment_type.h"
#include "ara/com/vsomeip/impl_type_longtimeperception_type.h"
#include "ara/com/vsomeip/impl_type_roadsegmentlr_type.h"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct LongTimeSpdPeptInfo_Type {
public:
	ara::com::vsomeip::RoadSegment_Type RoadSegment;
	ara::com::vsomeip::LongTimePerception_Type LongTimePerception;
	ara::com::vsomeip::RoadSegmentLR_Type RoadSegmentLR;
/*
	LongTimeSpdPeptInfo_Type() {}
	~LongTimeSpdPeptInfo_Type() {}
	LongTimeSpdPeptInfo_Type(const ara::com::vsomeip::RoadSegment_Type _RoadSegment,const ara::com::vsomeip::LongTimePerception_Type _LongTimePerception,const ara::com::vsomeip::RoadSegmentLR_Type _RoadSegmentLR):RoadSegment(_RoadSegment),LongTimePerception(_LongTimePerception),RoadSegmentLR(_RoadSegmentLR) {}
	LongTimeSpdPeptInfo_Type(const LongTimeSpdPeptInfo_Type &_x){
		RoadSegment = _x.RoadSegment;
		LongTimePerception = _x.LongTimePerception;
		RoadSegmentLR = _x.RoadSegmentLR;
	}
	LongTimeSpdPeptInfo_Type(LongTimeSpdPeptInfo_Type &&_x){
		RoadSegment = std::move(_x.RoadSegment);
		LongTimePerception = std::move(_x.LongTimePerception);
		RoadSegmentLR = std::move(_x.RoadSegmentLR);
	}
	LongTimeSpdPeptInfo_Type& operator=(const LongTimeSpdPeptInfo_Type &_x){
		RoadSegment = _x.RoadSegment;
		LongTimePerception = _x.LongTimePerception;
		RoadSegmentLR = _x.RoadSegmentLR;
		return *this;
	}
	LongTimeSpdPeptInfo_Type& operator=(LongTimeSpdPeptInfo_Type &&_x){
		RoadSegment = std::move(_x.RoadSegment);
		LongTimePerception = std::move(_x.LongTimePerception);
		RoadSegmentLR = std::move(_x.RoadSegmentLR);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(RoadSegment);
		fun(LongTimePerception);
		fun(RoadSegmentLR);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(RoadSegment);
		fun(LongTimePerception);
		fun(RoadSegmentLR);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (RoadSegment);
		fun << (LongTimePerception);
		fun << (RoadSegmentLR);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (RoadSegment);
		fun >> (LongTimePerception);
		fun >> (RoadSegmentLR);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__LONGTIMESPDPEPTINFO_TYPE_H__
