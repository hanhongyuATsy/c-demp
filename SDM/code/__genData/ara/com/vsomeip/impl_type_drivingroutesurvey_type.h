#ifndef __ARA_COM_VSOMEIP__DRIVINGROUTESURVEY_TYPE_H__
#define __ARA_COM_VSOMEIP__DRIVINGROUTESURVEY_TYPE_H__


#include "ara/com/vsomeip/impl_type_destchrpilest_type.h"
#include "ara/com/vsomeip/impl_type_drivingroutesurveyinfo_type.h"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct DrivingRouteSurvey_Type {
public:
	ara::com::vsomeip::DestChrPileSt_Type DestChrgPileSt;
	ara::com::vsomeip::DrivingRouteSurveyInfo_Type DrivingRouteSurveyInfo;
/*
	DrivingRouteSurvey_Type() {}
	~DrivingRouteSurvey_Type() {}
	DrivingRouteSurvey_Type(const ara::com::vsomeip::DestChrPileSt_Type _DestChrgPileSt,const ara::com::vsomeip::DrivingRouteSurveyInfo_Type _DrivingRouteSurveyInfo):DestChrgPileSt(_DestChrgPileSt),DrivingRouteSurveyInfo(_DrivingRouteSurveyInfo) {}
	DrivingRouteSurvey_Type(const DrivingRouteSurvey_Type &_x){
		DestChrgPileSt = _x.DestChrgPileSt;
		DrivingRouteSurveyInfo = _x.DrivingRouteSurveyInfo;
	}
	DrivingRouteSurvey_Type(DrivingRouteSurvey_Type &&_x){
		DestChrgPileSt = std::move(_x.DestChrgPileSt);
		DrivingRouteSurveyInfo = std::move(_x.DrivingRouteSurveyInfo);
	}
	DrivingRouteSurvey_Type& operator=(const DrivingRouteSurvey_Type &_x){
		DestChrgPileSt = _x.DestChrgPileSt;
		DrivingRouteSurveyInfo = _x.DrivingRouteSurveyInfo;
		return *this;
	}
	DrivingRouteSurvey_Type& operator=(DrivingRouteSurvey_Type &&_x){
		DestChrgPileSt = std::move(_x.DestChrgPileSt);
		DrivingRouteSurveyInfo = std::move(_x.DrivingRouteSurveyInfo);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(DestChrgPileSt);
		fun(DrivingRouteSurveyInfo);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(DestChrgPileSt);
		fun(DrivingRouteSurveyInfo);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (DestChrgPileSt);
		fun << (DrivingRouteSurveyInfo);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (DestChrgPileSt);
		fun >> (DrivingRouteSurveyInfo);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__DRIVINGROUTESURVEY_TYPE_H__
