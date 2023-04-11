#ifndef __ARA_COM_VSOMEIP__ROUTEINTERSECTIONINFO_TYPE_H__
#define __ARA_COM_VSOMEIP__ROUTEINTERSECTIONINFO_TYPE_H__


#include "ara/com/vsomeip/impl_type_ehr_inscttype_type.h"
#include "ara/com/vsomeip/impl_type_ehr_insctstubnum_type.h"
#include "ara/com/vsomeip/impl_type_ehr_calrouteturnangle_type.h"
#include "ara/com/vsomeip/impl_type_ehr_insctdis_type.h"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct RouteIntersectionInfo_Type {
public:
	ara::com::vsomeip::EHR_InsctType_Type EHR_InsctType;
	ara::com::vsomeip::EHR_InsctStubNum_Type EHR_InsctStubNum;
	ara::com::vsomeip::EHR_CalRouteTurnAngle_Type EHR_CalRouteTurnAngle;
	ara::com::vsomeip::EHR_InsctDis_Type EHR_InsctDis;
	bool EHR_StubInfState;
/*
	RouteIntersectionInfo_Type() {}
	~RouteIntersectionInfo_Type() {}
	RouteIntersectionInfo_Type(const ara::com::vsomeip::EHR_InsctType_Type _EHR_InsctType,const ara::com::vsomeip::EHR_InsctStubNum_Type _EHR_InsctStubNum,const ara::com::vsomeip::EHR_CalRouteTurnAngle_Type _EHR_CalRouteTurnAngle,const ara::com::vsomeip::EHR_InsctDis_Type _EHR_InsctDis,const bool _EHR_StubInfState):EHR_InsctType(_EHR_InsctType),EHR_InsctStubNum(_EHR_InsctStubNum),EHR_CalRouteTurnAngle(_EHR_CalRouteTurnAngle),EHR_InsctDis(_EHR_InsctDis),EHR_StubInfState(_EHR_StubInfState) {}
	RouteIntersectionInfo_Type(const RouteIntersectionInfo_Type &_x){
		EHR_InsctType = _x.EHR_InsctType;
		EHR_InsctStubNum = _x.EHR_InsctStubNum;
		EHR_CalRouteTurnAngle = _x.EHR_CalRouteTurnAngle;
		EHR_InsctDis = _x.EHR_InsctDis;
		EHR_StubInfState = _x.EHR_StubInfState;
	}
	RouteIntersectionInfo_Type(RouteIntersectionInfo_Type &&_x){
		EHR_InsctType = std::move(_x.EHR_InsctType);
		EHR_InsctStubNum = std::move(_x.EHR_InsctStubNum);
		EHR_CalRouteTurnAngle = std::move(_x.EHR_CalRouteTurnAngle);
		EHR_InsctDis = std::move(_x.EHR_InsctDis);
		EHR_StubInfState = std::move(_x.EHR_StubInfState);
	}
	RouteIntersectionInfo_Type& operator=(const RouteIntersectionInfo_Type &_x){
		EHR_InsctType = _x.EHR_InsctType;
		EHR_InsctStubNum = _x.EHR_InsctStubNum;
		EHR_CalRouteTurnAngle = _x.EHR_CalRouteTurnAngle;
		EHR_InsctDis = _x.EHR_InsctDis;
		EHR_StubInfState = _x.EHR_StubInfState;
		return *this;
	}
	RouteIntersectionInfo_Type& operator=(RouteIntersectionInfo_Type &&_x){
		EHR_InsctType = std::move(_x.EHR_InsctType);
		EHR_InsctStubNum = std::move(_x.EHR_InsctStubNum);
		EHR_CalRouteTurnAngle = std::move(_x.EHR_CalRouteTurnAngle);
		EHR_InsctDis = std::move(_x.EHR_InsctDis);
		EHR_StubInfState = std::move(_x.EHR_StubInfState);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(EHR_InsctType);
		fun(EHR_InsctStubNum);
		fun(EHR_CalRouteTurnAngle);
		fun(EHR_InsctDis);
		fun(EHR_StubInfState);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(EHR_InsctType);
		fun(EHR_InsctStubNum);
		fun(EHR_CalRouteTurnAngle);
		fun(EHR_InsctDis);
		fun(EHR_StubInfState);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (EHR_InsctType);
		fun << (EHR_InsctStubNum);
		fun << (EHR_CalRouteTurnAngle);
		fun << (EHR_InsctDis);
		fun << (EHR_StubInfState);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (EHR_InsctType);
		fun >> (EHR_InsctStubNum);
		fun >> (EHR_CalRouteTurnAngle);
		fun >> (EHR_InsctDis);
		fun >> (EHR_StubInfState);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__ROUTEINTERSECTIONINFO_TYPE_H__
