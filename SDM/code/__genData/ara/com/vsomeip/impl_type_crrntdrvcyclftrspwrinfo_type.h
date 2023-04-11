#ifndef __ARA_COM_VSOMEIP__CRRNTDRVCYCLFTRSPWRINFO_TYPE_H__
#define __ARA_COM_VSOMEIP__CRRNTDRVCYCLFTRSPWRINFO_TYPE_H__


#include "ara/com/vsomeip/impl_type_power_type.h"
#include "ara/com/vsomeip/impl_type_pwrpec_type.h"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct CrrntDrvCyclFtrsPwrInfo_Type {
public:
	ara::com::vsomeip::Power_Type SegPwrAvg;
	ara::com::vsomeip::PwrPec_Type PwrMinPec;
	ara::com::vsomeip::PwrPec_Type PwrMaxnPec;
/*
	CrrntDrvCyclFtrsPwrInfo_Type() {}
	~CrrntDrvCyclFtrsPwrInfo_Type() {}
	CrrntDrvCyclFtrsPwrInfo_Type(const ara::com::vsomeip::Power_Type _SegPwrAvg,const ara::com::vsomeip::PwrPec_Type _PwrMinPec,const ara::com::vsomeip::PwrPec_Type _PwrMaxnPec):SegPwrAvg(_SegPwrAvg),PwrMinPec(_PwrMinPec),PwrMaxnPec(_PwrMaxnPec) {}
	CrrntDrvCyclFtrsPwrInfo_Type(const CrrntDrvCyclFtrsPwrInfo_Type &_x){
		SegPwrAvg = _x.SegPwrAvg;
		PwrMinPec = _x.PwrMinPec;
		PwrMaxnPec = _x.PwrMaxnPec;
	}
	CrrntDrvCyclFtrsPwrInfo_Type(CrrntDrvCyclFtrsPwrInfo_Type &&_x){
		SegPwrAvg = std::move(_x.SegPwrAvg);
		PwrMinPec = std::move(_x.PwrMinPec);
		PwrMaxnPec = std::move(_x.PwrMaxnPec);
	}
	CrrntDrvCyclFtrsPwrInfo_Type& operator=(const CrrntDrvCyclFtrsPwrInfo_Type &_x){
		SegPwrAvg = _x.SegPwrAvg;
		PwrMinPec = _x.PwrMinPec;
		PwrMaxnPec = _x.PwrMaxnPec;
		return *this;
	}
	CrrntDrvCyclFtrsPwrInfo_Type& operator=(CrrntDrvCyclFtrsPwrInfo_Type &&_x){
		SegPwrAvg = std::move(_x.SegPwrAvg);
		PwrMinPec = std::move(_x.PwrMinPec);
		PwrMaxnPec = std::move(_x.PwrMaxnPec);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(SegPwrAvg);
		fun(PwrMinPec);
		fun(PwrMaxnPec);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(SegPwrAvg);
		fun(PwrMinPec);
		fun(PwrMaxnPec);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (SegPwrAvg);
		fun << (PwrMinPec);
		fun << (PwrMaxnPec);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (SegPwrAvg);
		fun >> (PwrMinPec);
		fun >> (PwrMaxnPec);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__CRRNTDRVCYCLFTRSPWRINFO_TYPE_H__
