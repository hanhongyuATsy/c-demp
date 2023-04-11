#ifndef __ARA_COM_VSOMEIP__CRRNTDRVCYCLFTRSSPDINFO_TYPE_H__
#define __ARA_COM_VSOMEIP__CRRNTDRVCYCLFTRSSPDINFO_TYPE_H__


#include "ara/com/vsomeip/impl_type_segspd_type.h"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct CrrntDrvCyclFtrsSpdInfo_Type {
public:
	ara::com::vsomeip::SegSpd_Type SegSpedAvg;
	ara::com::vsomeip::SegSpd_Type SegSpedMin;
	ara::com::vsomeip::SegSpd_Type SegSpedMax;
/*
	CrrntDrvCyclFtrsSpdInfo_Type() {}
	~CrrntDrvCyclFtrsSpdInfo_Type() {}
	CrrntDrvCyclFtrsSpdInfo_Type(const ara::com::vsomeip::SegSpd_Type _SegSpedAvg,const ara::com::vsomeip::SegSpd_Type _SegSpedMin,const ara::com::vsomeip::SegSpd_Type _SegSpedMax):SegSpedAvg(_SegSpedAvg),SegSpedMin(_SegSpedMin),SegSpedMax(_SegSpedMax) {}
	CrrntDrvCyclFtrsSpdInfo_Type(const CrrntDrvCyclFtrsSpdInfo_Type &_x){
		SegSpedAvg = _x.SegSpedAvg;
		SegSpedMin = _x.SegSpedMin;
		SegSpedMax = _x.SegSpedMax;
	}
	CrrntDrvCyclFtrsSpdInfo_Type(CrrntDrvCyclFtrsSpdInfo_Type &&_x){
		SegSpedAvg = std::move(_x.SegSpedAvg);
		SegSpedMin = std::move(_x.SegSpedMin);
		SegSpedMax = std::move(_x.SegSpedMax);
	}
	CrrntDrvCyclFtrsSpdInfo_Type& operator=(const CrrntDrvCyclFtrsSpdInfo_Type &_x){
		SegSpedAvg = _x.SegSpedAvg;
		SegSpedMin = _x.SegSpedMin;
		SegSpedMax = _x.SegSpedMax;
		return *this;
	}
	CrrntDrvCyclFtrsSpdInfo_Type& operator=(CrrntDrvCyclFtrsSpdInfo_Type &&_x){
		SegSpedAvg = std::move(_x.SegSpedAvg);
		SegSpedMin = std::move(_x.SegSpedMin);
		SegSpedMax = std::move(_x.SegSpedMax);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(SegSpedAvg);
		fun(SegSpedMin);
		fun(SegSpedMax);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(SegSpedAvg);
		fun(SegSpedMin);
		fun(SegSpedMax);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (SegSpedAvg);
		fun << (SegSpedMin);
		fun << (SegSpedMax);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (SegSpedAvg);
		fun >> (SegSpedMin);
		fun >> (SegSpedMax);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__CRRNTDRVCYCLFTRSSPDINFO_TYPE_H__
