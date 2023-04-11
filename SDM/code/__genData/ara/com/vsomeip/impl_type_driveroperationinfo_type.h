#ifndef __ARA_COM_VSOMEIP__DRIVEROPERATIONINFO_TYPE_H__
#define __ARA_COM_VSOMEIP__DRIVEROPERATIONINFO_TYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct DriverOperationInfo_Type {
public:
	std::uint16_t VCU_ActVehWheelTorq;
	std::uint8_t VCU_BrkPedPst;
	std::uint8_t VCU_EMS_AccPedalActPst;
	bool VCU_EMS_AccPedalActPstVD;
	bool VCU_EMS_BrkPedalSt;
	bool VCU_EMS_BrkPedalStVD;
	std::uint8_t UMM_UsageModeSt;
	bool EPS_SteeringAngleSpdVD;
	std::uint8_t EPS_SteeringAngleSpd;
	std::uint16_t EPS_SteeringAngle;
	bool EPS_SteeringAngleVD;
	std::uint8_t EL_LeftTurnLightCtrlCmd;
	std::uint8_t EL_RightTurnLightCtrlCmd;
	std::uint8_t WW_RainFallLevel;
	std::uint16_t VCU_typectVehWheelTorq;
	std::uint8_t EMS_BrakePedalSt;
	std::uint8_t EMS_BrakePedalStVD;
	std::uint8_t EMS_GVS_typeccPedalPst;
	bool EMS_GVS_typeccPedalPstVD;
/*
	DriverOperationInfo_Type() {}
	~DriverOperationInfo_Type() {}
	DriverOperationInfo_Type(const std::uint16_t _VCU_ActVehWheelTorq,const std::uint8_t _VCU_BrkPedPst,const std::uint8_t _VCU_EMS_AccPedalActPst,const bool _VCU_EMS_AccPedalActPstVD,const bool _VCU_EMS_BrkPedalSt,const bool _VCU_EMS_BrkPedalStVD,const std::uint8_t _UMM_UsageModeSt,const bool _EPS_SteeringAngleSpdVD,const std::uint8_t _EPS_SteeringAngleSpd,const std::uint16_t _EPS_SteeringAngle,const bool _EPS_SteeringAngleVD,const std::uint8_t _EL_LeftTurnLightCtrlCmd,const std::uint8_t _EL_RightTurnLightCtrlCmd,const std::uint8_t _WW_RainFallLevel,const std::uint16_t _VCU_typectVehWheelTorq,const std::uint8_t _EMS_BrakePedalSt,const std::uint8_t _EMS_BrakePedalStVD,const std::uint8_t _EMS_GVS_typeccPedalPst,const bool _EMS_GVS_typeccPedalPstVD):VCU_ActVehWheelTorq(_VCU_ActVehWheelTorq),VCU_BrkPedPst(_VCU_BrkPedPst),VCU_EMS_AccPedalActPst(_VCU_EMS_AccPedalActPst),VCU_EMS_AccPedalActPstVD(_VCU_EMS_AccPedalActPstVD),VCU_EMS_BrkPedalSt(_VCU_EMS_BrkPedalSt),VCU_EMS_BrkPedalStVD(_VCU_EMS_BrkPedalStVD),UMM_UsageModeSt(_UMM_UsageModeSt),EPS_SteeringAngleSpdVD(_EPS_SteeringAngleSpdVD),EPS_SteeringAngleSpd(_EPS_SteeringAngleSpd),EPS_SteeringAngle(_EPS_SteeringAngle),EPS_SteeringAngleVD(_EPS_SteeringAngleVD),EL_LeftTurnLightCtrlCmd(_EL_LeftTurnLightCtrlCmd),EL_RightTurnLightCtrlCmd(_EL_RightTurnLightCtrlCmd),WW_RainFallLevel(_WW_RainFallLevel),VCU_typectVehWheelTorq(_VCU_typectVehWheelTorq),EMS_BrakePedalSt(_EMS_BrakePedalSt),EMS_BrakePedalStVD(_EMS_BrakePedalStVD),EMS_GVS_typeccPedalPst(_EMS_GVS_typeccPedalPst),EMS_GVS_typeccPedalPstVD(_EMS_GVS_typeccPedalPstVD) {}
	DriverOperationInfo_Type(const DriverOperationInfo_Type &_x){
		VCU_ActVehWheelTorq = _x.VCU_ActVehWheelTorq;
		VCU_BrkPedPst = _x.VCU_BrkPedPst;
		VCU_EMS_AccPedalActPst = _x.VCU_EMS_AccPedalActPst;
		VCU_EMS_AccPedalActPstVD = _x.VCU_EMS_AccPedalActPstVD;
		VCU_EMS_BrkPedalSt = _x.VCU_EMS_BrkPedalSt;
		VCU_EMS_BrkPedalStVD = _x.VCU_EMS_BrkPedalStVD;
		UMM_UsageModeSt = _x.UMM_UsageModeSt;
		EPS_SteeringAngleSpdVD = _x.EPS_SteeringAngleSpdVD;
		EPS_SteeringAngleSpd = _x.EPS_SteeringAngleSpd;
		EPS_SteeringAngle = _x.EPS_SteeringAngle;
		EPS_SteeringAngleVD = _x.EPS_SteeringAngleVD;
		EL_LeftTurnLightCtrlCmd = _x.EL_LeftTurnLightCtrlCmd;
		EL_RightTurnLightCtrlCmd = _x.EL_RightTurnLightCtrlCmd;
		WW_RainFallLevel = _x.WW_RainFallLevel;
		VCU_typectVehWheelTorq = _x.VCU_typectVehWheelTorq;
		EMS_BrakePedalSt = _x.EMS_BrakePedalSt;
		EMS_BrakePedalStVD = _x.EMS_BrakePedalStVD;
		EMS_GVS_typeccPedalPst = _x.EMS_GVS_typeccPedalPst;
		EMS_GVS_typeccPedalPstVD = _x.EMS_GVS_typeccPedalPstVD;
	}
	DriverOperationInfo_Type(DriverOperationInfo_Type &&_x){
		VCU_ActVehWheelTorq = std::move(_x.VCU_ActVehWheelTorq);
		VCU_BrkPedPst = std::move(_x.VCU_BrkPedPst);
		VCU_EMS_AccPedalActPst = std::move(_x.VCU_EMS_AccPedalActPst);
		VCU_EMS_AccPedalActPstVD = std::move(_x.VCU_EMS_AccPedalActPstVD);
		VCU_EMS_BrkPedalSt = std::move(_x.VCU_EMS_BrkPedalSt);
		VCU_EMS_BrkPedalStVD = std::move(_x.VCU_EMS_BrkPedalStVD);
		UMM_UsageModeSt = std::move(_x.UMM_UsageModeSt);
		EPS_SteeringAngleSpdVD = std::move(_x.EPS_SteeringAngleSpdVD);
		EPS_SteeringAngleSpd = std::move(_x.EPS_SteeringAngleSpd);
		EPS_SteeringAngle = std::move(_x.EPS_SteeringAngle);
		EPS_SteeringAngleVD = std::move(_x.EPS_SteeringAngleVD);
		EL_LeftTurnLightCtrlCmd = std::move(_x.EL_LeftTurnLightCtrlCmd);
		EL_RightTurnLightCtrlCmd = std::move(_x.EL_RightTurnLightCtrlCmd);
		WW_RainFallLevel = std::move(_x.WW_RainFallLevel);
		VCU_typectVehWheelTorq = std::move(_x.VCU_typectVehWheelTorq);
		EMS_BrakePedalSt = std::move(_x.EMS_BrakePedalSt);
		EMS_BrakePedalStVD = std::move(_x.EMS_BrakePedalStVD);
		EMS_GVS_typeccPedalPst = std::move(_x.EMS_GVS_typeccPedalPst);
		EMS_GVS_typeccPedalPstVD = std::move(_x.EMS_GVS_typeccPedalPstVD);
	}
	DriverOperationInfo_Type& operator=(const DriverOperationInfo_Type &_x){
		VCU_ActVehWheelTorq = _x.VCU_ActVehWheelTorq;
		VCU_BrkPedPst = _x.VCU_BrkPedPst;
		VCU_EMS_AccPedalActPst = _x.VCU_EMS_AccPedalActPst;
		VCU_EMS_AccPedalActPstVD = _x.VCU_EMS_AccPedalActPstVD;
		VCU_EMS_BrkPedalSt = _x.VCU_EMS_BrkPedalSt;
		VCU_EMS_BrkPedalStVD = _x.VCU_EMS_BrkPedalStVD;
		UMM_UsageModeSt = _x.UMM_UsageModeSt;
		EPS_SteeringAngleSpdVD = _x.EPS_SteeringAngleSpdVD;
		EPS_SteeringAngleSpd = _x.EPS_SteeringAngleSpd;
		EPS_SteeringAngle = _x.EPS_SteeringAngle;
		EPS_SteeringAngleVD = _x.EPS_SteeringAngleVD;
		EL_LeftTurnLightCtrlCmd = _x.EL_LeftTurnLightCtrlCmd;
		EL_RightTurnLightCtrlCmd = _x.EL_RightTurnLightCtrlCmd;
		WW_RainFallLevel = _x.WW_RainFallLevel;
		VCU_typectVehWheelTorq = _x.VCU_typectVehWheelTorq;
		EMS_BrakePedalSt = _x.EMS_BrakePedalSt;
		EMS_BrakePedalStVD = _x.EMS_BrakePedalStVD;
		EMS_GVS_typeccPedalPst = _x.EMS_GVS_typeccPedalPst;
		EMS_GVS_typeccPedalPstVD = _x.EMS_GVS_typeccPedalPstVD;
		return *this;
	}
	DriverOperationInfo_Type& operator=(DriverOperationInfo_Type &&_x){
		VCU_ActVehWheelTorq = std::move(_x.VCU_ActVehWheelTorq);
		VCU_BrkPedPst = std::move(_x.VCU_BrkPedPst);
		VCU_EMS_AccPedalActPst = std::move(_x.VCU_EMS_AccPedalActPst);
		VCU_EMS_AccPedalActPstVD = std::move(_x.VCU_EMS_AccPedalActPstVD);
		VCU_EMS_BrkPedalSt = std::move(_x.VCU_EMS_BrkPedalSt);
		VCU_EMS_BrkPedalStVD = std::move(_x.VCU_EMS_BrkPedalStVD);
		UMM_UsageModeSt = std::move(_x.UMM_UsageModeSt);
		EPS_SteeringAngleSpdVD = std::move(_x.EPS_SteeringAngleSpdVD);
		EPS_SteeringAngleSpd = std::move(_x.EPS_SteeringAngleSpd);
		EPS_SteeringAngle = std::move(_x.EPS_SteeringAngle);
		EPS_SteeringAngleVD = std::move(_x.EPS_SteeringAngleVD);
		EL_LeftTurnLightCtrlCmd = std::move(_x.EL_LeftTurnLightCtrlCmd);
		EL_RightTurnLightCtrlCmd = std::move(_x.EL_RightTurnLightCtrlCmd);
		WW_RainFallLevel = std::move(_x.WW_RainFallLevel);
		VCU_typectVehWheelTorq = std::move(_x.VCU_typectVehWheelTorq);
		EMS_BrakePedalSt = std::move(_x.EMS_BrakePedalSt);
		EMS_BrakePedalStVD = std::move(_x.EMS_BrakePedalStVD);
		EMS_GVS_typeccPedalPst = std::move(_x.EMS_GVS_typeccPedalPst);
		EMS_GVS_typeccPedalPstVD = std::move(_x.EMS_GVS_typeccPedalPstVD);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(VCU_ActVehWheelTorq);
		fun(VCU_BrkPedPst);
		fun(VCU_EMS_AccPedalActPst);
		fun(VCU_EMS_AccPedalActPstVD);
		fun(VCU_EMS_BrkPedalSt);
		fun(VCU_EMS_BrkPedalStVD);
		fun(UMM_UsageModeSt);
		fun(EPS_SteeringAngleSpdVD);
		fun(EPS_SteeringAngleSpd);
		fun(EPS_SteeringAngle);
		fun(EPS_SteeringAngleVD);
		fun(EL_LeftTurnLightCtrlCmd);
		fun(EL_RightTurnLightCtrlCmd);
		fun(WW_RainFallLevel);
		fun(VCU_typectVehWheelTorq);
		fun(EMS_BrakePedalSt);
		fun(EMS_BrakePedalStVD);
		fun(EMS_GVS_typeccPedalPst);
		fun(EMS_GVS_typeccPedalPstVD);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(VCU_ActVehWheelTorq);
		fun(VCU_BrkPedPst);
		fun(VCU_EMS_AccPedalActPst);
		fun(VCU_EMS_AccPedalActPstVD);
		fun(VCU_EMS_BrkPedalSt);
		fun(VCU_EMS_BrkPedalStVD);
		fun(UMM_UsageModeSt);
		fun(EPS_SteeringAngleSpdVD);
		fun(EPS_SteeringAngleSpd);
		fun(EPS_SteeringAngle);
		fun(EPS_SteeringAngleVD);
		fun(EL_LeftTurnLightCtrlCmd);
		fun(EL_RightTurnLightCtrlCmd);
		fun(WW_RainFallLevel);
		fun(VCU_typectVehWheelTorq);
		fun(EMS_BrakePedalSt);
		fun(EMS_BrakePedalStVD);
		fun(EMS_GVS_typeccPedalPst);
		fun(EMS_GVS_typeccPedalPstVD);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (VCU_ActVehWheelTorq);
		fun << (VCU_BrkPedPst);
		fun << (VCU_EMS_AccPedalActPst);
		fun << (VCU_EMS_AccPedalActPstVD);
		fun << (VCU_EMS_BrkPedalSt);
		fun << (VCU_EMS_BrkPedalStVD);
		fun << (UMM_UsageModeSt);
		fun << (EPS_SteeringAngleSpdVD);
		fun << (EPS_SteeringAngleSpd);
		fun << (EPS_SteeringAngle);
		fun << (EPS_SteeringAngleVD);
		fun << (EL_LeftTurnLightCtrlCmd);
		fun << (EL_RightTurnLightCtrlCmd);
		fun << (WW_RainFallLevel);
		fun << (VCU_typectVehWheelTorq);
		fun << (EMS_BrakePedalSt);
		fun << (EMS_BrakePedalStVD);
		fun << (EMS_GVS_typeccPedalPst);
		fun << (EMS_GVS_typeccPedalPstVD);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (VCU_ActVehWheelTorq);
		fun >> (VCU_BrkPedPst);
		fun >> (VCU_EMS_AccPedalActPst);
		fun >> (VCU_EMS_AccPedalActPstVD);
		fun >> (VCU_EMS_BrkPedalSt);
		fun >> (VCU_EMS_BrkPedalStVD);
		fun >> (UMM_UsageModeSt);
		fun >> (EPS_SteeringAngleSpdVD);
		fun >> (EPS_SteeringAngleSpd);
		fun >> (EPS_SteeringAngle);
		fun >> (EPS_SteeringAngleVD);
		fun >> (EL_LeftTurnLightCtrlCmd);
		fun >> (EL_RightTurnLightCtrlCmd);
		fun >> (WW_RainFallLevel);
		fun >> (VCU_typectVehWheelTorq);
		fun >> (EMS_BrakePedalSt);
		fun >> (EMS_BrakePedalStVD);
		fun >> (EMS_GVS_typeccPedalPst);
		fun >> (EMS_GVS_typeccPedalPstVD);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__DRIVEROPERATIONINFO_TYPE_H__
