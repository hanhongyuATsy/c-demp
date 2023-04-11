#ifndef __ARA_COM_VSOMEIP__TRACKINGTARGETINFO_TYPE_H__
#define __ARA_COM_VSOMEIP__TRACKINGTARGETINFO_TYPE_H__


#include "ara/com/vsomeip/impl_type_ner_trktargtst_type.h"
#include "ara/com/vsomeip/impl_type_ner_trktargttype_type.h"
#include "ara/com/vsomeip/impl_type_ner_trktargtlongpos_type.h"
#include "ara/com/vsomeip/impl_type_ner_trktargtlatpos_type.h"
#include "ara/com/vsomeip/impl_type_ner_trktargtlongreltspd_type.h"
#include "ara/com/vsomeip/impl_type_ner_trktargtlatreltspd_type.h"
#include "ara/com/vsomeip/impl_type_ner_trktargtlongreltaccspd_type.h"
#include "ara/com/vsomeip/impl_type_ner_trktargtlatreltaccspd_type.h"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct TrackingTargetInfo_Type {
public:
	ara::com::vsomeip::NER_TrkTargtSt_Type NER_TrkTargtSt;
	ara::com::vsomeip::NER_TrkTargtType_Type NER_TrkTargtType;
	ara::com::vsomeip::NER_TrkTargtLongPos_Type NER_TrkTargtLongPos;
	ara::com::vsomeip::NER_TrkTargtLatPos_Type NER_TrkTargtLatPos;
	ara::com::vsomeip::NER_TrkTargtLongReltSpd_Type NER_TrkTargtLongReltSpd;
	ara::com::vsomeip::NER_TrkTargtLatReltSpd_Type NER_TrkTargtLatReltSpd;
	ara::com::vsomeip::NER_TrkTargtLongReltAccSpd_Type NER_TrkTargtLongReltAccSpd;
	ara::com::vsomeip::NER_TrkTargtLatReltAccSpd_Type NER_TrkTargtLatReltAccSpd;
/*
	TrackingTargetInfo_Type() {}
	~TrackingTargetInfo_Type() {}
	TrackingTargetInfo_Type(const ara::com::vsomeip::NER_TrkTargtSt_Type _NER_TrkTargtSt,const ara::com::vsomeip::NER_TrkTargtType_Type _NER_TrkTargtType,const ara::com::vsomeip::NER_TrkTargtLongPos_Type _NER_TrkTargtLongPos,const ara::com::vsomeip::NER_TrkTargtLatPos_Type _NER_TrkTargtLatPos,const ara::com::vsomeip::NER_TrkTargtLongReltSpd_Type _NER_TrkTargtLongReltSpd,const ara::com::vsomeip::NER_TrkTargtLatReltSpd_Type _NER_TrkTargtLatReltSpd,const ara::com::vsomeip::NER_TrkTargtLongReltAccSpd_Type _NER_TrkTargtLongReltAccSpd,const ara::com::vsomeip::NER_TrkTargtLatReltAccSpd_Type _NER_TrkTargtLatReltAccSpd):NER_TrkTargtSt(_NER_TrkTargtSt),NER_TrkTargtType(_NER_TrkTargtType),NER_TrkTargtLongPos(_NER_TrkTargtLongPos),NER_TrkTargtLatPos(_NER_TrkTargtLatPos),NER_TrkTargtLongReltSpd(_NER_TrkTargtLongReltSpd),NER_TrkTargtLatReltSpd(_NER_TrkTargtLatReltSpd),NER_TrkTargtLongReltAccSpd(_NER_TrkTargtLongReltAccSpd),NER_TrkTargtLatReltAccSpd(_NER_TrkTargtLatReltAccSpd) {}
	TrackingTargetInfo_Type(const TrackingTargetInfo_Type &_x){
		NER_TrkTargtSt = _x.NER_TrkTargtSt;
		NER_TrkTargtType = _x.NER_TrkTargtType;
		NER_TrkTargtLongPos = _x.NER_TrkTargtLongPos;
		NER_TrkTargtLatPos = _x.NER_TrkTargtLatPos;
		NER_TrkTargtLongReltSpd = _x.NER_TrkTargtLongReltSpd;
		NER_TrkTargtLatReltSpd = _x.NER_TrkTargtLatReltSpd;
		NER_TrkTargtLongReltAccSpd = _x.NER_TrkTargtLongReltAccSpd;
		NER_TrkTargtLatReltAccSpd = _x.NER_TrkTargtLatReltAccSpd;
	}
	TrackingTargetInfo_Type(TrackingTargetInfo_Type &&_x){
		NER_TrkTargtSt = std::move(_x.NER_TrkTargtSt);
		NER_TrkTargtType = std::move(_x.NER_TrkTargtType);
		NER_TrkTargtLongPos = std::move(_x.NER_TrkTargtLongPos);
		NER_TrkTargtLatPos = std::move(_x.NER_TrkTargtLatPos);
		NER_TrkTargtLongReltSpd = std::move(_x.NER_TrkTargtLongReltSpd);
		NER_TrkTargtLatReltSpd = std::move(_x.NER_TrkTargtLatReltSpd);
		NER_TrkTargtLongReltAccSpd = std::move(_x.NER_TrkTargtLongReltAccSpd);
		NER_TrkTargtLatReltAccSpd = std::move(_x.NER_TrkTargtLatReltAccSpd);
	}
	TrackingTargetInfo_Type& operator=(const TrackingTargetInfo_Type &_x){
		NER_TrkTargtSt = _x.NER_TrkTargtSt;
		NER_TrkTargtType = _x.NER_TrkTargtType;
		NER_TrkTargtLongPos = _x.NER_TrkTargtLongPos;
		NER_TrkTargtLatPos = _x.NER_TrkTargtLatPos;
		NER_TrkTargtLongReltSpd = _x.NER_TrkTargtLongReltSpd;
		NER_TrkTargtLatReltSpd = _x.NER_TrkTargtLatReltSpd;
		NER_TrkTargtLongReltAccSpd = _x.NER_TrkTargtLongReltAccSpd;
		NER_TrkTargtLatReltAccSpd = _x.NER_TrkTargtLatReltAccSpd;
		return *this;
	}
	TrackingTargetInfo_Type& operator=(TrackingTargetInfo_Type &&_x){
		NER_TrkTargtSt = std::move(_x.NER_TrkTargtSt);
		NER_TrkTargtType = std::move(_x.NER_TrkTargtType);
		NER_TrkTargtLongPos = std::move(_x.NER_TrkTargtLongPos);
		NER_TrkTargtLatPos = std::move(_x.NER_TrkTargtLatPos);
		NER_TrkTargtLongReltSpd = std::move(_x.NER_TrkTargtLongReltSpd);
		NER_TrkTargtLatReltSpd = std::move(_x.NER_TrkTargtLatReltSpd);
		NER_TrkTargtLongReltAccSpd = std::move(_x.NER_TrkTargtLongReltAccSpd);
		NER_TrkTargtLatReltAccSpd = std::move(_x.NER_TrkTargtLatReltAccSpd);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(NER_TrkTargtSt);
		fun(NER_TrkTargtType);
		fun(NER_TrkTargtLongPos);
		fun(NER_TrkTargtLatPos);
		fun(NER_TrkTargtLongReltSpd);
		fun(NER_TrkTargtLatReltSpd);
		fun(NER_TrkTargtLongReltAccSpd);
		fun(NER_TrkTargtLatReltAccSpd);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(NER_TrkTargtSt);
		fun(NER_TrkTargtType);
		fun(NER_TrkTargtLongPos);
		fun(NER_TrkTargtLatPos);
		fun(NER_TrkTargtLongReltSpd);
		fun(NER_TrkTargtLatReltSpd);
		fun(NER_TrkTargtLongReltAccSpd);
		fun(NER_TrkTargtLatReltAccSpd);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (NER_TrkTargtSt);
		fun << (NER_TrkTargtType);
		fun << (NER_TrkTargtLongPos);
		fun << (NER_TrkTargtLatPos);
		fun << (NER_TrkTargtLongReltSpd);
		fun << (NER_TrkTargtLatReltSpd);
		fun << (NER_TrkTargtLongReltAccSpd);
		fun << (NER_TrkTargtLatReltAccSpd);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (NER_TrkTargtSt);
		fun >> (NER_TrkTargtType);
		fun >> (NER_TrkTargtLongPos);
		fun >> (NER_TrkTargtLatPos);
		fun >> (NER_TrkTargtLongReltSpd);
		fun >> (NER_TrkTargtLatReltSpd);
		fun >> (NER_TrkTargtLongReltAccSpd);
		fun >> (NER_TrkTargtLatReltAccSpd);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__TRACKINGTARGETINFO_TYPE_H__
