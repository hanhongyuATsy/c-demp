#ifndef __ARA_COM_VSOMEIP__ROADCONDITIONINFO_TYPE_H__
#define __ARA_COM_VSOMEIP__ROADCONDITIONINFO_TYPE_H__


#include "ara/com/vsomeip/impl_type_ehr_roadcond_type.h"
#include "ara/com/vsomeip/impl_type_ehr_roadconddis_type.h"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct RoadConditionInfo_Type {
public:
	ara::com::vsomeip::EHR_RoadCond_Type EHR_RoadCond;
	ara::com::vsomeip::EHR_RoadCondDis_Type EHR_RoadCondDis;
/*
	RoadConditionInfo_Type() {}
	~RoadConditionInfo_Type() {}
	RoadConditionInfo_Type(const ara::com::vsomeip::EHR_RoadCond_Type _EHR_RoadCond,const ara::com::vsomeip::EHR_RoadCondDis_Type _EHR_RoadCondDis):EHR_RoadCond(_EHR_RoadCond),EHR_RoadCondDis(_EHR_RoadCondDis) {}
	RoadConditionInfo_Type(const RoadConditionInfo_Type &_x){
		EHR_RoadCond = _x.EHR_RoadCond;
		EHR_RoadCondDis = _x.EHR_RoadCondDis;
	}
	RoadConditionInfo_Type(RoadConditionInfo_Type &&_x){
		EHR_RoadCond = std::move(_x.EHR_RoadCond);
		EHR_RoadCondDis = std::move(_x.EHR_RoadCondDis);
	}
	RoadConditionInfo_Type& operator=(const RoadConditionInfo_Type &_x){
		EHR_RoadCond = _x.EHR_RoadCond;
		EHR_RoadCondDis = _x.EHR_RoadCondDis;
		return *this;
	}
	RoadConditionInfo_Type& operator=(RoadConditionInfo_Type &&_x){
		EHR_RoadCond = std::move(_x.EHR_RoadCond);
		EHR_RoadCondDis = std::move(_x.EHR_RoadCondDis);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(EHR_RoadCond);
		fun(EHR_RoadCondDis);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(EHR_RoadCond);
		fun(EHR_RoadCondDis);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (EHR_RoadCond);
		fun << (EHR_RoadCondDis);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (EHR_RoadCond);
		fun >> (EHR_RoadCondDis);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__ROADCONDITIONINFO_TYPE_H__
