#ifndef __ARA_COM_VSOMEIP__CRRNTDRVCYCLFTRSTRQINFO_TYPE_H__
#define __ARA_COM_VSOMEIP__CRRNTDRVCYCLFTRSTRQINFO_TYPE_H__


#include "ara/com/vsomeip/impl_type_torq_type.h"
#include "ara/com/vsomeip/impl_type_torqpec_type.h"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct CrrntDrvCyclFtrsTrqInfo_Type {
public:
	ara::com::vsomeip::Torq_Type SegTrqAvg;
	ara::com::vsomeip::TorqPec_Type TorqMinPec;
	ara::com::vsomeip::TorqPec_Type TorqMaxnPec;
/*
	CrrntDrvCyclFtrsTrqInfo_Type() {}
	~CrrntDrvCyclFtrsTrqInfo_Type() {}
	CrrntDrvCyclFtrsTrqInfo_Type(const ara::com::vsomeip::Torq_Type _SegTrqAvg,const ara::com::vsomeip::TorqPec_Type _TorqMinPec,const ara::com::vsomeip::TorqPec_Type _TorqMaxnPec):SegTrqAvg(_SegTrqAvg),TorqMinPec(_TorqMinPec),TorqMaxnPec(_TorqMaxnPec) {}
	CrrntDrvCyclFtrsTrqInfo_Type(const CrrntDrvCyclFtrsTrqInfo_Type &_x){
		SegTrqAvg = _x.SegTrqAvg;
		TorqMinPec = _x.TorqMinPec;
		TorqMaxnPec = _x.TorqMaxnPec;
	}
	CrrntDrvCyclFtrsTrqInfo_Type(CrrntDrvCyclFtrsTrqInfo_Type &&_x){
		SegTrqAvg = std::move(_x.SegTrqAvg);
		TorqMinPec = std::move(_x.TorqMinPec);
		TorqMaxnPec = std::move(_x.TorqMaxnPec);
	}
	CrrntDrvCyclFtrsTrqInfo_Type& operator=(const CrrntDrvCyclFtrsTrqInfo_Type &_x){
		SegTrqAvg = _x.SegTrqAvg;
		TorqMinPec = _x.TorqMinPec;
		TorqMaxnPec = _x.TorqMaxnPec;
		return *this;
	}
	CrrntDrvCyclFtrsTrqInfo_Type& operator=(CrrntDrvCyclFtrsTrqInfo_Type &&_x){
		SegTrqAvg = std::move(_x.SegTrqAvg);
		TorqMinPec = std::move(_x.TorqMinPec);
		TorqMaxnPec = std::move(_x.TorqMaxnPec);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(SegTrqAvg);
		fun(TorqMinPec);
		fun(TorqMaxnPec);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(SegTrqAvg);
		fun(TorqMinPec);
		fun(TorqMaxnPec);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (SegTrqAvg);
		fun << (TorqMinPec);
		fun << (TorqMaxnPec);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (SegTrqAvg);
		fun >> (TorqMinPec);
		fun >> (TorqMaxnPec);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__CRRNTDRVCYCLFTRSTRQINFO_TYPE_H__
