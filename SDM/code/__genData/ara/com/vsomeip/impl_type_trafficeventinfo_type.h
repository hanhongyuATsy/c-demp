#ifndef __ARA_COM_VSOMEIP__TRAFFICEVENTINFO_TYPE_H__
#define __ARA_COM_VSOMEIP__TRAFFICEVENTINFO_TYPE_H__


#include "ara/com/vsomeip/impl_type_ehr_trffcevntinf_type.h"
#include "ara/com/vsomeip/impl_type_ehr_trffcevntdis_type.h"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct TrafficEventInfo_Type {
public:
	bool EHR_TrffcEvntSt;
	ara::com::vsomeip::EHR_TrffcEvntInf_Type EHR_TrffcEvntInf;
	ara::com::vsomeip::EHR_TrffcEvntDis_Type EHR_TrffcEvntDis;
/*
	TrafficEventInfo_Type() {}
	~TrafficEventInfo_Type() {}
	TrafficEventInfo_Type(const bool _EHR_TrffcEvntSt,const ara::com::vsomeip::EHR_TrffcEvntInf_Type _EHR_TrffcEvntInf,const ara::com::vsomeip::EHR_TrffcEvntDis_Type _EHR_TrffcEvntDis):EHR_TrffcEvntSt(_EHR_TrffcEvntSt),EHR_TrffcEvntInf(_EHR_TrffcEvntInf),EHR_TrffcEvntDis(_EHR_TrffcEvntDis) {}
	TrafficEventInfo_Type(const TrafficEventInfo_Type &_x){
		EHR_TrffcEvntSt = _x.EHR_TrffcEvntSt;
		EHR_TrffcEvntInf = _x.EHR_TrffcEvntInf;
		EHR_TrffcEvntDis = _x.EHR_TrffcEvntDis;
	}
	TrafficEventInfo_Type(TrafficEventInfo_Type &&_x){
		EHR_TrffcEvntSt = std::move(_x.EHR_TrffcEvntSt);
		EHR_TrffcEvntInf = std::move(_x.EHR_TrffcEvntInf);
		EHR_TrffcEvntDis = std::move(_x.EHR_TrffcEvntDis);
	}
	TrafficEventInfo_Type& operator=(const TrafficEventInfo_Type &_x){
		EHR_TrffcEvntSt = _x.EHR_TrffcEvntSt;
		EHR_TrffcEvntInf = _x.EHR_TrffcEvntInf;
		EHR_TrffcEvntDis = _x.EHR_TrffcEvntDis;
		return *this;
	}
	TrafficEventInfo_Type& operator=(TrafficEventInfo_Type &&_x){
		EHR_TrffcEvntSt = std::move(_x.EHR_TrffcEvntSt);
		EHR_TrffcEvntInf = std::move(_x.EHR_TrffcEvntInf);
		EHR_TrffcEvntDis = std::move(_x.EHR_TrffcEvntDis);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(EHR_TrffcEvntSt);
		fun(EHR_TrffcEvntInf);
		fun(EHR_TrffcEvntDis);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(EHR_TrffcEvntSt);
		fun(EHR_TrffcEvntInf);
		fun(EHR_TrffcEvntDis);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (EHR_TrffcEvntSt);
		fun << (EHR_TrffcEvntInf);
		fun << (EHR_TrffcEvntDis);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (EHR_TrffcEvntSt);
		fun >> (EHR_TrffcEvntInf);
		fun >> (EHR_TrffcEvntDis);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__TRAFFICEVENTINFO_TYPE_H__
