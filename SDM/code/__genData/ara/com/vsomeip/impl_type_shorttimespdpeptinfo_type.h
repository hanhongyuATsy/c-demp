#ifndef __ARA_COM_VSOMEIP__SHORTTIMESPDPEPTINFO_TYPE_H__
#define __ARA_COM_VSOMEIP__SHORTTIMESPDPEPTINFO_TYPE_H__


#include "ara/com/vsomeip/impl_type_roadsegmentsr_type.h"
#include "ara/com/vsomeip/impl_type_shorttimeperception_type.h"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct ShortTimeSpdPeptInfo_Type {
public:
	ara::com::vsomeip::RoadSegmentSR_Type RoadSegmentSR;
	ara::com::vsomeip::ShortTimePerception_Type ShortTimePerception;
/*
	ShortTimeSpdPeptInfo_Type() {}
	~ShortTimeSpdPeptInfo_Type() {}
	ShortTimeSpdPeptInfo_Type(const ara::com::vsomeip::RoadSegmentSR_Type _RoadSegmentSR,const ara::com::vsomeip::ShortTimePerception_Type _ShortTimePerception):RoadSegmentSR(_RoadSegmentSR),ShortTimePerception(_ShortTimePerception) {}
	ShortTimeSpdPeptInfo_Type(const ShortTimeSpdPeptInfo_Type &_x){
		RoadSegmentSR = _x.RoadSegmentSR;
		ShortTimePerception = _x.ShortTimePerception;
	}
	ShortTimeSpdPeptInfo_Type(ShortTimeSpdPeptInfo_Type &&_x){
		RoadSegmentSR = std::move(_x.RoadSegmentSR);
		ShortTimePerception = std::move(_x.ShortTimePerception);
	}
	ShortTimeSpdPeptInfo_Type& operator=(const ShortTimeSpdPeptInfo_Type &_x){
		RoadSegmentSR = _x.RoadSegmentSR;
		ShortTimePerception = _x.ShortTimePerception;
		return *this;
	}
	ShortTimeSpdPeptInfo_Type& operator=(ShortTimeSpdPeptInfo_Type &&_x){
		RoadSegmentSR = std::move(_x.RoadSegmentSR);
		ShortTimePerception = std::move(_x.ShortTimePerception);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(RoadSegmentSR);
		fun(ShortTimePerception);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(RoadSegmentSR);
		fun(ShortTimePerception);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (RoadSegmentSR);
		fun << (ShortTimePerception);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (RoadSegmentSR);
		fun >> (ShortTimePerception);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__SHORTTIMESPDPEPTINFO_TYPE_H__
