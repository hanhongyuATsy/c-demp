#ifndef __ARA_COM_VSOMEIP__EMGSHORTTIMECTRLINFO_TYPE_H__
#define __ARA_COM_VSOMEIP__EMGSHORTTIMECTRLINFO_TYPE_H__


#include "ara/com/vsomeip/impl_type_soctargetshrtctrl_type.h"
#include "ara/com/vsomeip/impl_type_engtorqreqshorttime_type.h"
#include "ara/com/vsomeip/impl_type_dcutorqreqshorttime_type.h"
#include "ara/com/vsomeip/impl_type_gcutorqreqshorttime_type.h"
#include "ara/com/vsomeip/impl_type_engspeedshorttime_type.h"
#include "ara/com/vsomeip/impl_type_hybridmodereqshrtctrl_type.h"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct EmgShortTimeCtrlInfo_Type {
public:
	ara::com::vsomeip::SocTargetShrtCtrl_Type SocTargetShrtTimeCtrl;
	ara::com::vsomeip::EngTorqReqShortTime_Type EngTorqReqShortTime;
	ara::com::vsomeip::DcuTorqReqShortTime_Type DcuTorqReqShortTime;
	ara::com::vsomeip::GcuTorqReqShortTime_Type GcuTorqReqShortTime;
	ara::com::vsomeip::EngSpeedShortTime_Type EngSpeedShortTime;
	ara::com::vsomeip::HybridModeReqShrtCtrl_Type HybridModeReqShrtTimeCtrl;
/*
	EmgShortTimeCtrlInfo_Type() {}
	~EmgShortTimeCtrlInfo_Type() {}
	EmgShortTimeCtrlInfo_Type(const ara::com::vsomeip::SocTargetShrtCtrl_Type _SocTargetShrtTimeCtrl,const ara::com::vsomeip::EngTorqReqShortTime_Type _EngTorqReqShortTime,const ara::com::vsomeip::DcuTorqReqShortTime_Type _DcuTorqReqShortTime,const ara::com::vsomeip::GcuTorqReqShortTime_Type _GcuTorqReqShortTime,const ara::com::vsomeip::EngSpeedShortTime_Type _EngSpeedShortTime,const ara::com::vsomeip::HybridModeReqShrtCtrl_Type _HybridModeReqShrtTimeCtrl):SocTargetShrtTimeCtrl(_SocTargetShrtTimeCtrl),EngTorqReqShortTime(_EngTorqReqShortTime),DcuTorqReqShortTime(_DcuTorqReqShortTime),GcuTorqReqShortTime(_GcuTorqReqShortTime),EngSpeedShortTime(_EngSpeedShortTime),HybridModeReqShrtTimeCtrl(_HybridModeReqShrtTimeCtrl) {}
	EmgShortTimeCtrlInfo_Type(const EmgShortTimeCtrlInfo_Type &_x){
		SocTargetShrtTimeCtrl = _x.SocTargetShrtTimeCtrl;
		EngTorqReqShortTime = _x.EngTorqReqShortTime;
		DcuTorqReqShortTime = _x.DcuTorqReqShortTime;
		GcuTorqReqShortTime = _x.GcuTorqReqShortTime;
		EngSpeedShortTime = _x.EngSpeedShortTime;
		HybridModeReqShrtTimeCtrl = _x.HybridModeReqShrtTimeCtrl;
	}
	EmgShortTimeCtrlInfo_Type(EmgShortTimeCtrlInfo_Type &&_x){
		SocTargetShrtTimeCtrl = std::move(_x.SocTargetShrtTimeCtrl);
		EngTorqReqShortTime = std::move(_x.EngTorqReqShortTime);
		DcuTorqReqShortTime = std::move(_x.DcuTorqReqShortTime);
		GcuTorqReqShortTime = std::move(_x.GcuTorqReqShortTime);
		EngSpeedShortTime = std::move(_x.EngSpeedShortTime);
		HybridModeReqShrtTimeCtrl = std::move(_x.HybridModeReqShrtTimeCtrl);
	}
	EmgShortTimeCtrlInfo_Type& operator=(const EmgShortTimeCtrlInfo_Type &_x){
		SocTargetShrtTimeCtrl = _x.SocTargetShrtTimeCtrl;
		EngTorqReqShortTime = _x.EngTorqReqShortTime;
		DcuTorqReqShortTime = _x.DcuTorqReqShortTime;
		GcuTorqReqShortTime = _x.GcuTorqReqShortTime;
		EngSpeedShortTime = _x.EngSpeedShortTime;
		HybridModeReqShrtTimeCtrl = _x.HybridModeReqShrtTimeCtrl;
		return *this;
	}
	EmgShortTimeCtrlInfo_Type& operator=(EmgShortTimeCtrlInfo_Type &&_x){
		SocTargetShrtTimeCtrl = std::move(_x.SocTargetShrtTimeCtrl);
		EngTorqReqShortTime = std::move(_x.EngTorqReqShortTime);
		DcuTorqReqShortTime = std::move(_x.DcuTorqReqShortTime);
		GcuTorqReqShortTime = std::move(_x.GcuTorqReqShortTime);
		EngSpeedShortTime = std::move(_x.EngSpeedShortTime);
		HybridModeReqShrtTimeCtrl = std::move(_x.HybridModeReqShrtTimeCtrl);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(SocTargetShrtTimeCtrl);
		fun(EngTorqReqShortTime);
		fun(DcuTorqReqShortTime);
		fun(GcuTorqReqShortTime);
		fun(EngSpeedShortTime);
		fun(HybridModeReqShrtTimeCtrl);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(SocTargetShrtTimeCtrl);
		fun(EngTorqReqShortTime);
		fun(DcuTorqReqShortTime);
		fun(GcuTorqReqShortTime);
		fun(EngSpeedShortTime);
		fun(HybridModeReqShrtTimeCtrl);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (SocTargetShrtTimeCtrl);
		fun << (EngTorqReqShortTime);
		fun << (DcuTorqReqShortTime);
		fun << (GcuTorqReqShortTime);
		fun << (EngSpeedShortTime);
		fun << (HybridModeReqShrtTimeCtrl);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (SocTargetShrtTimeCtrl);
		fun >> (EngTorqReqShortTime);
		fun >> (DcuTorqReqShortTime);
		fun >> (GcuTorqReqShortTime);
		fun >> (EngSpeedShortTime);
		fun >> (HybridModeReqShrtTimeCtrl);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__EMGSHORTTIMECTRLINFO_TYPE_H__
