#ifndef __ARA_COM_VSOMEIP__ROUTELANEINFO_TYPE_H__
#define __ARA_COM_VSOMEIP__ROUTELANEINFO_TYPE_H__


#include "ara/com/vsomeip/impl_type_ehr_lanetypeinf_type.h"
#include "ara/com/vsomeip/impl_type_ehr_lanetypedis_type.h"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct RouteLaneInfo_Type {
public:
	bool EHR_LaneTypeSt;
	ara::com::vsomeip::EHR_LaneTypeInf_Type EHR_LaneTypeInf;
	ara::com::vsomeip::EHR_LaneTypeDis_Type EHR_LaneTypeDis;
/*
	RouteLaneInfo_Type() {}
	~RouteLaneInfo_Type() {}
	RouteLaneInfo_Type(const bool _EHR_LaneTypeSt,const ara::com::vsomeip::EHR_LaneTypeInf_Type _EHR_LaneTypeInf,const ara::com::vsomeip::EHR_LaneTypeDis_Type _EHR_LaneTypeDis):EHR_LaneTypeSt(_EHR_LaneTypeSt),EHR_LaneTypeInf(_EHR_LaneTypeInf),EHR_LaneTypeDis(_EHR_LaneTypeDis) {}
	RouteLaneInfo_Type(const RouteLaneInfo_Type &_x){
		EHR_LaneTypeSt = _x.EHR_LaneTypeSt;
		EHR_LaneTypeInf = _x.EHR_LaneTypeInf;
		EHR_LaneTypeDis = _x.EHR_LaneTypeDis;
	}
	RouteLaneInfo_Type(RouteLaneInfo_Type &&_x){
		EHR_LaneTypeSt = std::move(_x.EHR_LaneTypeSt);
		EHR_LaneTypeInf = std::move(_x.EHR_LaneTypeInf);
		EHR_LaneTypeDis = std::move(_x.EHR_LaneTypeDis);
	}
	RouteLaneInfo_Type& operator=(const RouteLaneInfo_Type &_x){
		EHR_LaneTypeSt = _x.EHR_LaneTypeSt;
		EHR_LaneTypeInf = _x.EHR_LaneTypeInf;
		EHR_LaneTypeDis = _x.EHR_LaneTypeDis;
		return *this;
	}
	RouteLaneInfo_Type& operator=(RouteLaneInfo_Type &&_x){
		EHR_LaneTypeSt = std::move(_x.EHR_LaneTypeSt);
		EHR_LaneTypeInf = std::move(_x.EHR_LaneTypeInf);
		EHR_LaneTypeDis = std::move(_x.EHR_LaneTypeDis);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(EHR_LaneTypeSt);
		fun(EHR_LaneTypeInf);
		fun(EHR_LaneTypeDis);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(EHR_LaneTypeSt);
		fun(EHR_LaneTypeInf);
		fun(EHR_LaneTypeDis);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (EHR_LaneTypeSt);
		fun << (EHR_LaneTypeInf);
		fun << (EHR_LaneTypeDis);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (EHR_LaneTypeSt);
		fun >> (EHR_LaneTypeInf);
		fun >> (EHR_LaneTypeDis);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__ROUTELANEINFO_TYPE_H__
