#ifndef __ARA_COM_VSOMEIP__DRIVINGROUTESURVEYINFO_TYPE_H__
#define __ARA_COM_VSOMEIP__DRIVINGROUTESURVEYINFO_TYPE_H__


#include "ara/com/vsomeip/impl_type_def_cummtroutelength_type.h"
#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct DrivingRouteSurveyInfo_Type {
public:
	ara::com::vsomeip::DEF_CummtRouteLength_Type DEF_CummtRouteLength;
	std::uint8_t DEF_DrvRouteSt;
	std::uint32_t DEF_DrvRouteLength;
	std::uint32_t DEF_DrvRouteRmnLength;
	std::uint16_t DEF_DrvRouteRmnTime;
/*
	DrivingRouteSurveyInfo_Type() {}
	~DrivingRouteSurveyInfo_Type() {}
	DrivingRouteSurveyInfo_Type(const ara::com::vsomeip::DEF_CummtRouteLength_Type _DEF_CummtRouteLength,const std::uint8_t _DEF_DrvRouteSt,const std::uint32_t _DEF_DrvRouteLength,const std::uint32_t _DEF_DrvRouteRmnLength,const std::uint16_t _DEF_DrvRouteRmnTime):DEF_CummtRouteLength(_DEF_CummtRouteLength),DEF_DrvRouteSt(_DEF_DrvRouteSt),DEF_DrvRouteLength(_DEF_DrvRouteLength),DEF_DrvRouteRmnLength(_DEF_DrvRouteRmnLength),DEF_DrvRouteRmnTime(_DEF_DrvRouteRmnTime) {}
	DrivingRouteSurveyInfo_Type(const DrivingRouteSurveyInfo_Type &_x){
		DEF_CummtRouteLength = _x.DEF_CummtRouteLength;
		DEF_DrvRouteSt = _x.DEF_DrvRouteSt;
		DEF_DrvRouteLength = _x.DEF_DrvRouteLength;
		DEF_DrvRouteRmnLength = _x.DEF_DrvRouteRmnLength;
		DEF_DrvRouteRmnTime = _x.DEF_DrvRouteRmnTime;
	}
	DrivingRouteSurveyInfo_Type(DrivingRouteSurveyInfo_Type &&_x){
		DEF_CummtRouteLength = std::move(_x.DEF_CummtRouteLength);
		DEF_DrvRouteSt = std::move(_x.DEF_DrvRouteSt);
		DEF_DrvRouteLength = std::move(_x.DEF_DrvRouteLength);
		DEF_DrvRouteRmnLength = std::move(_x.DEF_DrvRouteRmnLength);
		DEF_DrvRouteRmnTime = std::move(_x.DEF_DrvRouteRmnTime);
	}
	DrivingRouteSurveyInfo_Type& operator=(const DrivingRouteSurveyInfo_Type &_x){
		DEF_CummtRouteLength = _x.DEF_CummtRouteLength;
		DEF_DrvRouteSt = _x.DEF_DrvRouteSt;
		DEF_DrvRouteLength = _x.DEF_DrvRouteLength;
		DEF_DrvRouteRmnLength = _x.DEF_DrvRouteRmnLength;
		DEF_DrvRouteRmnTime = _x.DEF_DrvRouteRmnTime;
		return *this;
	}
	DrivingRouteSurveyInfo_Type& operator=(DrivingRouteSurveyInfo_Type &&_x){
		DEF_CummtRouteLength = std::move(_x.DEF_CummtRouteLength);
		DEF_DrvRouteSt = std::move(_x.DEF_DrvRouteSt);
		DEF_DrvRouteLength = std::move(_x.DEF_DrvRouteLength);
		DEF_DrvRouteRmnLength = std::move(_x.DEF_DrvRouteRmnLength);
		DEF_DrvRouteRmnTime = std::move(_x.DEF_DrvRouteRmnTime);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(DEF_CummtRouteLength);
		fun(DEF_DrvRouteSt);
		fun(DEF_DrvRouteLength);
		fun(DEF_DrvRouteRmnLength);
		fun(DEF_DrvRouteRmnTime);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(DEF_CummtRouteLength);
		fun(DEF_DrvRouteSt);
		fun(DEF_DrvRouteLength);
		fun(DEF_DrvRouteRmnLength);
		fun(DEF_DrvRouteRmnTime);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (DEF_CummtRouteLength);
		fun << (DEF_DrvRouteSt);
		fun << (DEF_DrvRouteLength);
		fun << (DEF_DrvRouteRmnLength);
		fun << (DEF_DrvRouteRmnTime);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (DEF_CummtRouteLength);
		fun >> (DEF_DrvRouteSt);
		fun >> (DEF_DrvRouteLength);
		fun >> (DEF_DrvRouteRmnLength);
		fun >> (DEF_DrvRouteRmnTime);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__DRIVINGROUTESURVEYINFO_TYPE_H__
