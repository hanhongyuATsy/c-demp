#ifndef ____BDCVCUDATA8_H__
#define ____BDCVCUDATA8_H__


#include "cstdint"






struct BDCVCUDATA8 {
public:
	std::uint8_t VCU_BMS_BattSocDisp;
	std::uint16_t BCS_VehSpd;
	std::uint8_t VCU_VehCrusSt;
	std::uint8_t VCU_APAResp;
	std::uint8_t VCU_PwrCoolEn;
	std::uint8_t VCU_CrntGearLvl;
	std::uint16_t BCS_TargetRecpTorqRq;
	std::uint8_t VCU_TorqReqForICE;
	std::uint8_t VCU_VehDrvMod;
	std::uint8_t VCU_SysFaultLvl;
	std::uint8_t VCU_BrkPedPst;
	std::uint8_t VCU_HVACPwrLimit;
	std::uint8_t VCU_HVACPwrLimitAct;
	std::uint8_t EMS_AtmosphericPressure;
	std::uint16_t VCU_VehElcConspAvg;
	std::uint16_t VCU_VehElcConspAccumAvg;
	std::uint16_t VCU_EVRng;
	std::uint16_t VCU_DspChgVolt;
	std::uint16_t VCU_DspChgCurr;
	std::uint8_t VCU_DspDischgSt;
	std::uint16_t VCU_DspDischgVolt;
	std::uint16_t VCU_DspDischgCurr;
	std::uint8_t VCU_WarmTimeCfgResp;
/*
	BDCVCUDATA8() {}
	~BDCVCUDATA8() {}
	BDCVCUDATA8(const std::uint8_t _VCU_BMS_BattSocDisp,const std::uint16_t _BCS_VehSpd,const std::uint8_t _VCU_VehCrusSt,const std::uint8_t _VCU_APAResp,const std::uint8_t _VCU_PwrCoolEn,const std::uint8_t _VCU_CrntGearLvl,const std::uint16_t _BCS_TargetRecpTorqRq,const std::uint8_t _VCU_TorqReqForICE,const std::uint8_t _VCU_VehDrvMod,const std::uint8_t _VCU_SysFaultLvl,const std::uint8_t _VCU_BrkPedPst,const std::uint8_t _VCU_HVACPwrLimit,const std::uint8_t _VCU_HVACPwrLimitAct,const std::uint8_t _EMS_AtmosphericPressure,const std::uint16_t _VCU_VehElcConspAvg,const std::uint16_t _VCU_VehElcConspAccumAvg,const std::uint16_t _VCU_EVRng,const std::uint16_t _VCU_DspChgVolt,const std::uint16_t _VCU_DspChgCurr,const std::uint8_t _VCU_DspDischgSt,const std::uint16_t _VCU_DspDischgVolt,const std::uint16_t _VCU_DspDischgCurr,const std::uint8_t _VCU_WarmTimeCfgResp):VCU_BMS_BattSocDisp(_VCU_BMS_BattSocDisp),BCS_VehSpd(_BCS_VehSpd),VCU_VehCrusSt(_VCU_VehCrusSt),VCU_APAResp(_VCU_APAResp),VCU_PwrCoolEn(_VCU_PwrCoolEn),VCU_CrntGearLvl(_VCU_CrntGearLvl),BCS_TargetRecpTorqRq(_BCS_TargetRecpTorqRq),VCU_TorqReqForICE(_VCU_TorqReqForICE),VCU_VehDrvMod(_VCU_VehDrvMod),VCU_SysFaultLvl(_VCU_SysFaultLvl),VCU_BrkPedPst(_VCU_BrkPedPst),VCU_HVACPwrLimit(_VCU_HVACPwrLimit),VCU_HVACPwrLimitAct(_VCU_HVACPwrLimitAct),EMS_AtmosphericPressure(_EMS_AtmosphericPressure),VCU_VehElcConspAvg(_VCU_VehElcConspAvg),VCU_VehElcConspAccumAvg(_VCU_VehElcConspAccumAvg),VCU_EVRng(_VCU_EVRng),VCU_DspChgVolt(_VCU_DspChgVolt),VCU_DspChgCurr(_VCU_DspChgCurr),VCU_DspDischgSt(_VCU_DspDischgSt),VCU_DspDischgVolt(_VCU_DspDischgVolt),VCU_DspDischgCurr(_VCU_DspDischgCurr),VCU_WarmTimeCfgResp(_VCU_WarmTimeCfgResp) {}
	BDCVCUDATA8(const BDCVCUDATA8 &_x){
		VCU_BMS_BattSocDisp = _x.VCU_BMS_BattSocDisp;
		BCS_VehSpd = _x.BCS_VehSpd;
		VCU_VehCrusSt = _x.VCU_VehCrusSt;
		VCU_APAResp = _x.VCU_APAResp;
		VCU_PwrCoolEn = _x.VCU_PwrCoolEn;
		VCU_CrntGearLvl = _x.VCU_CrntGearLvl;
		BCS_TargetRecpTorqRq = _x.BCS_TargetRecpTorqRq;
		VCU_TorqReqForICE = _x.VCU_TorqReqForICE;
		VCU_VehDrvMod = _x.VCU_VehDrvMod;
		VCU_SysFaultLvl = _x.VCU_SysFaultLvl;
		VCU_BrkPedPst = _x.VCU_BrkPedPst;
		VCU_HVACPwrLimit = _x.VCU_HVACPwrLimit;
		VCU_HVACPwrLimitAct = _x.VCU_HVACPwrLimitAct;
		EMS_AtmosphericPressure = _x.EMS_AtmosphericPressure;
		VCU_VehElcConspAvg = _x.VCU_VehElcConspAvg;
		VCU_VehElcConspAccumAvg = _x.VCU_VehElcConspAccumAvg;
		VCU_EVRng = _x.VCU_EVRng;
		VCU_DspChgVolt = _x.VCU_DspChgVolt;
		VCU_DspChgCurr = _x.VCU_DspChgCurr;
		VCU_DspDischgSt = _x.VCU_DspDischgSt;
		VCU_DspDischgVolt = _x.VCU_DspDischgVolt;
		VCU_DspDischgCurr = _x.VCU_DspDischgCurr;
		VCU_WarmTimeCfgResp = _x.VCU_WarmTimeCfgResp;
	}
	BDCVCUDATA8(BDCVCUDATA8 &&_x){
		VCU_BMS_BattSocDisp = std::move(_x.VCU_BMS_BattSocDisp);
		BCS_VehSpd = std::move(_x.BCS_VehSpd);
		VCU_VehCrusSt = std::move(_x.VCU_VehCrusSt);
		VCU_APAResp = std::move(_x.VCU_APAResp);
		VCU_PwrCoolEn = std::move(_x.VCU_PwrCoolEn);
		VCU_CrntGearLvl = std::move(_x.VCU_CrntGearLvl);
		BCS_TargetRecpTorqRq = std::move(_x.BCS_TargetRecpTorqRq);
		VCU_TorqReqForICE = std::move(_x.VCU_TorqReqForICE);
		VCU_VehDrvMod = std::move(_x.VCU_VehDrvMod);
		VCU_SysFaultLvl = std::move(_x.VCU_SysFaultLvl);
		VCU_BrkPedPst = std::move(_x.VCU_BrkPedPst);
		VCU_HVACPwrLimit = std::move(_x.VCU_HVACPwrLimit);
		VCU_HVACPwrLimitAct = std::move(_x.VCU_HVACPwrLimitAct);
		EMS_AtmosphericPressure = std::move(_x.EMS_AtmosphericPressure);
		VCU_VehElcConspAvg = std::move(_x.VCU_VehElcConspAvg);
		VCU_VehElcConspAccumAvg = std::move(_x.VCU_VehElcConspAccumAvg);
		VCU_EVRng = std::move(_x.VCU_EVRng);
		VCU_DspChgVolt = std::move(_x.VCU_DspChgVolt);
		VCU_DspChgCurr = std::move(_x.VCU_DspChgCurr);
		VCU_DspDischgSt = std::move(_x.VCU_DspDischgSt);
		VCU_DspDischgVolt = std::move(_x.VCU_DspDischgVolt);
		VCU_DspDischgCurr = std::move(_x.VCU_DspDischgCurr);
		VCU_WarmTimeCfgResp = std::move(_x.VCU_WarmTimeCfgResp);
	}
	BDCVCUDATA8& operator=(const BDCVCUDATA8 &_x){
		VCU_BMS_BattSocDisp = _x.VCU_BMS_BattSocDisp;
		BCS_VehSpd = _x.BCS_VehSpd;
		VCU_VehCrusSt = _x.VCU_VehCrusSt;
		VCU_APAResp = _x.VCU_APAResp;
		VCU_PwrCoolEn = _x.VCU_PwrCoolEn;
		VCU_CrntGearLvl = _x.VCU_CrntGearLvl;
		BCS_TargetRecpTorqRq = _x.BCS_TargetRecpTorqRq;
		VCU_TorqReqForICE = _x.VCU_TorqReqForICE;
		VCU_VehDrvMod = _x.VCU_VehDrvMod;
		VCU_SysFaultLvl = _x.VCU_SysFaultLvl;
		VCU_BrkPedPst = _x.VCU_BrkPedPst;
		VCU_HVACPwrLimit = _x.VCU_HVACPwrLimit;
		VCU_HVACPwrLimitAct = _x.VCU_HVACPwrLimitAct;
		EMS_AtmosphericPressure = _x.EMS_AtmosphericPressure;
		VCU_VehElcConspAvg = _x.VCU_VehElcConspAvg;
		VCU_VehElcConspAccumAvg = _x.VCU_VehElcConspAccumAvg;
		VCU_EVRng = _x.VCU_EVRng;
		VCU_DspChgVolt = _x.VCU_DspChgVolt;
		VCU_DspChgCurr = _x.VCU_DspChgCurr;
		VCU_DspDischgSt = _x.VCU_DspDischgSt;
		VCU_DspDischgVolt = _x.VCU_DspDischgVolt;
		VCU_DspDischgCurr = _x.VCU_DspDischgCurr;
		VCU_WarmTimeCfgResp = _x.VCU_WarmTimeCfgResp;
		return *this;
	}
	BDCVCUDATA8& operator=(BDCVCUDATA8 &&_x){
		VCU_BMS_BattSocDisp = std::move(_x.VCU_BMS_BattSocDisp);
		BCS_VehSpd = std::move(_x.BCS_VehSpd);
		VCU_VehCrusSt = std::move(_x.VCU_VehCrusSt);
		VCU_APAResp = std::move(_x.VCU_APAResp);
		VCU_PwrCoolEn = std::move(_x.VCU_PwrCoolEn);
		VCU_CrntGearLvl = std::move(_x.VCU_CrntGearLvl);
		BCS_TargetRecpTorqRq = std::move(_x.BCS_TargetRecpTorqRq);
		VCU_TorqReqForICE = std::move(_x.VCU_TorqReqForICE);
		VCU_VehDrvMod = std::move(_x.VCU_VehDrvMod);
		VCU_SysFaultLvl = std::move(_x.VCU_SysFaultLvl);
		VCU_BrkPedPst = std::move(_x.VCU_BrkPedPst);
		VCU_HVACPwrLimit = std::move(_x.VCU_HVACPwrLimit);
		VCU_HVACPwrLimitAct = std::move(_x.VCU_HVACPwrLimitAct);
		EMS_AtmosphericPressure = std::move(_x.EMS_AtmosphericPressure);
		VCU_VehElcConspAvg = std::move(_x.VCU_VehElcConspAvg);
		VCU_VehElcConspAccumAvg = std::move(_x.VCU_VehElcConspAccumAvg);
		VCU_EVRng = std::move(_x.VCU_EVRng);
		VCU_DspChgVolt = std::move(_x.VCU_DspChgVolt);
		VCU_DspChgCurr = std::move(_x.VCU_DspChgCurr);
		VCU_DspDischgSt = std::move(_x.VCU_DspDischgSt);
		VCU_DspDischgVolt = std::move(_x.VCU_DspDischgVolt);
		VCU_DspDischgCurr = std::move(_x.VCU_DspDischgCurr);
		VCU_WarmTimeCfgResp = std::move(_x.VCU_WarmTimeCfgResp);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(VCU_BMS_BattSocDisp);
		fun(BCS_VehSpd);
		fun(VCU_VehCrusSt);
		fun(VCU_APAResp);
		fun(VCU_PwrCoolEn);
		fun(VCU_CrntGearLvl);
		fun(BCS_TargetRecpTorqRq);
		fun(VCU_TorqReqForICE);
		fun(VCU_VehDrvMod);
		fun(VCU_SysFaultLvl);
		fun(VCU_BrkPedPst);
		fun(VCU_HVACPwrLimit);
		fun(VCU_HVACPwrLimitAct);
		fun(EMS_AtmosphericPressure);
		fun(VCU_VehElcConspAvg);
		fun(VCU_VehElcConspAccumAvg);
		fun(VCU_EVRng);
		fun(VCU_DspChgVolt);
		fun(VCU_DspChgCurr);
		fun(VCU_DspDischgSt);
		fun(VCU_DspDischgVolt);
		fun(VCU_DspDischgCurr);
		fun(VCU_WarmTimeCfgResp);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(VCU_BMS_BattSocDisp);
		fun(BCS_VehSpd);
		fun(VCU_VehCrusSt);
		fun(VCU_APAResp);
		fun(VCU_PwrCoolEn);
		fun(VCU_CrntGearLvl);
		fun(BCS_TargetRecpTorqRq);
		fun(VCU_TorqReqForICE);
		fun(VCU_VehDrvMod);
		fun(VCU_SysFaultLvl);
		fun(VCU_BrkPedPst);
		fun(VCU_HVACPwrLimit);
		fun(VCU_HVACPwrLimitAct);
		fun(EMS_AtmosphericPressure);
		fun(VCU_VehElcConspAvg);
		fun(VCU_VehElcConspAccumAvg);
		fun(VCU_EVRng);
		fun(VCU_DspChgVolt);
		fun(VCU_DspChgCurr);
		fun(VCU_DspDischgSt);
		fun(VCU_DspDischgVolt);
		fun(VCU_DspDischgCurr);
		fun(VCU_WarmTimeCfgResp);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (VCU_BMS_BattSocDisp);
		fun << (BCS_VehSpd);
		fun << (VCU_VehCrusSt);
		fun << (VCU_APAResp);
		fun << (VCU_PwrCoolEn);
		fun << (VCU_CrntGearLvl);
		fun << (BCS_TargetRecpTorqRq);
		fun << (VCU_TorqReqForICE);
		fun << (VCU_VehDrvMod);
		fun << (VCU_SysFaultLvl);
		fun << (VCU_BrkPedPst);
		fun << (VCU_HVACPwrLimit);
		fun << (VCU_HVACPwrLimitAct);
		fun << (EMS_AtmosphericPressure);
		fun << (VCU_VehElcConspAvg);
		fun << (VCU_VehElcConspAccumAvg);
		fun << (VCU_EVRng);
		fun << (VCU_DspChgVolt);
		fun << (VCU_DspChgCurr);
		fun << (VCU_DspDischgSt);
		fun << (VCU_DspDischgVolt);
		fun << (VCU_DspDischgCurr);
		fun << (VCU_WarmTimeCfgResp);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (VCU_BMS_BattSocDisp);
		fun >> (BCS_VehSpd);
		fun >> (VCU_VehCrusSt);
		fun >> (VCU_APAResp);
		fun >> (VCU_PwrCoolEn);
		fun >> (VCU_CrntGearLvl);
		fun >> (BCS_TargetRecpTorqRq);
		fun >> (VCU_TorqReqForICE);
		fun >> (VCU_VehDrvMod);
		fun >> (VCU_SysFaultLvl);
		fun >> (VCU_BrkPedPst);
		fun >> (VCU_HVACPwrLimit);
		fun >> (VCU_HVACPwrLimitAct);
		fun >> (EMS_AtmosphericPressure);
		fun >> (VCU_VehElcConspAvg);
		fun >> (VCU_VehElcConspAccumAvg);
		fun >> (VCU_EVRng);
		fun >> (VCU_DspChgVolt);
		fun >> (VCU_DspChgCurr);
		fun >> (VCU_DspDischgSt);
		fun >> (VCU_DspDischgVolt);
		fun >> (VCU_DspDischgCurr);
		fun >> (VCU_WarmTimeCfgResp);
	}
};

#endif //____BDCVCUDATA8_H__
