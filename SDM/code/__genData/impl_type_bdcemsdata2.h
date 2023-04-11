#ifndef ____BDCEMSDATA2_H__
#define ____BDCEMSDATA2_H__


#include "cstdint"






struct BDCEMSDATA2 {
public:
	std::uint8_t UMM_UsageModeSt;
	std::uint8_t HVAC_CorrectedExterTemp;
	std::uint8_t HVAC_AirCompressorReq;
	std::uint16_t BCS_VehSpd;
	std::uint8_t BCS_VehSpdVD;
	std::uint8_t BMS_EngMilLampReq;
	std::uint8_t BMS_BattTempAvg;
	std::uint32_t ICM_TotalOdometer;
	std::uint8_t SRS_CrashOutputSt;
	std::uint8_t VCU_VehRdySt;
	std::uint8_t VCU_VehDrvMod;
	std::uint8_t VCU_BMS_BattSocDisp;
	std::uint8_t UINM_SwitchLockFillerCapReq;
	std::uint8_t EMS_EngSpdVD;
/*
	BDCEMSDATA2() {}
	~BDCEMSDATA2() {}
	BDCEMSDATA2(const std::uint8_t _UMM_UsageModeSt,const std::uint8_t _HVAC_CorrectedExterTemp,const std::uint8_t _HVAC_AirCompressorReq,const std::uint16_t _BCS_VehSpd,const std::uint8_t _BCS_VehSpdVD,const std::uint8_t _BMS_EngMilLampReq,const std::uint8_t _BMS_BattTempAvg,const std::uint32_t _ICM_TotalOdometer,const std::uint8_t _SRS_CrashOutputSt,const std::uint8_t _VCU_VehRdySt,const std::uint8_t _VCU_VehDrvMod,const std::uint8_t _VCU_BMS_BattSocDisp,const std::uint8_t _UINM_SwitchLockFillerCapReq,const std::uint8_t _EMS_EngSpdVD):UMM_UsageModeSt(_UMM_UsageModeSt),HVAC_CorrectedExterTemp(_HVAC_CorrectedExterTemp),HVAC_AirCompressorReq(_HVAC_AirCompressorReq),BCS_VehSpd(_BCS_VehSpd),BCS_VehSpdVD(_BCS_VehSpdVD),BMS_EngMilLampReq(_BMS_EngMilLampReq),BMS_BattTempAvg(_BMS_BattTempAvg),ICM_TotalOdometer(_ICM_TotalOdometer),SRS_CrashOutputSt(_SRS_CrashOutputSt),VCU_VehRdySt(_VCU_VehRdySt),VCU_VehDrvMod(_VCU_VehDrvMod),VCU_BMS_BattSocDisp(_VCU_BMS_BattSocDisp),UINM_SwitchLockFillerCapReq(_UINM_SwitchLockFillerCapReq),EMS_EngSpdVD(_EMS_EngSpdVD) {}
	BDCEMSDATA2(const BDCEMSDATA2 &_x){
		UMM_UsageModeSt = _x.UMM_UsageModeSt;
		HVAC_CorrectedExterTemp = _x.HVAC_CorrectedExterTemp;
		HVAC_AirCompressorReq = _x.HVAC_AirCompressorReq;
		BCS_VehSpd = _x.BCS_VehSpd;
		BCS_VehSpdVD = _x.BCS_VehSpdVD;
		BMS_EngMilLampReq = _x.BMS_EngMilLampReq;
		BMS_BattTempAvg = _x.BMS_BattTempAvg;
		ICM_TotalOdometer = _x.ICM_TotalOdometer;
		SRS_CrashOutputSt = _x.SRS_CrashOutputSt;
		VCU_VehRdySt = _x.VCU_VehRdySt;
		VCU_VehDrvMod = _x.VCU_VehDrvMod;
		VCU_BMS_BattSocDisp = _x.VCU_BMS_BattSocDisp;
		UINM_SwitchLockFillerCapReq = _x.UINM_SwitchLockFillerCapReq;
		EMS_EngSpdVD = _x.EMS_EngSpdVD;
	}
	BDCEMSDATA2(BDCEMSDATA2 &&_x){
		UMM_UsageModeSt = std::move(_x.UMM_UsageModeSt);
		HVAC_CorrectedExterTemp = std::move(_x.HVAC_CorrectedExterTemp);
		HVAC_AirCompressorReq = std::move(_x.HVAC_AirCompressorReq);
		BCS_VehSpd = std::move(_x.BCS_VehSpd);
		BCS_VehSpdVD = std::move(_x.BCS_VehSpdVD);
		BMS_EngMilLampReq = std::move(_x.BMS_EngMilLampReq);
		BMS_BattTempAvg = std::move(_x.BMS_BattTempAvg);
		ICM_TotalOdometer = std::move(_x.ICM_TotalOdometer);
		SRS_CrashOutputSt = std::move(_x.SRS_CrashOutputSt);
		VCU_VehRdySt = std::move(_x.VCU_VehRdySt);
		VCU_VehDrvMod = std::move(_x.VCU_VehDrvMod);
		VCU_BMS_BattSocDisp = std::move(_x.VCU_BMS_BattSocDisp);
		UINM_SwitchLockFillerCapReq = std::move(_x.UINM_SwitchLockFillerCapReq);
		EMS_EngSpdVD = std::move(_x.EMS_EngSpdVD);
	}
	BDCEMSDATA2& operator=(const BDCEMSDATA2 &_x){
		UMM_UsageModeSt = _x.UMM_UsageModeSt;
		HVAC_CorrectedExterTemp = _x.HVAC_CorrectedExterTemp;
		HVAC_AirCompressorReq = _x.HVAC_AirCompressorReq;
		BCS_VehSpd = _x.BCS_VehSpd;
		BCS_VehSpdVD = _x.BCS_VehSpdVD;
		BMS_EngMilLampReq = _x.BMS_EngMilLampReq;
		BMS_BattTempAvg = _x.BMS_BattTempAvg;
		ICM_TotalOdometer = _x.ICM_TotalOdometer;
		SRS_CrashOutputSt = _x.SRS_CrashOutputSt;
		VCU_VehRdySt = _x.VCU_VehRdySt;
		VCU_VehDrvMod = _x.VCU_VehDrvMod;
		VCU_BMS_BattSocDisp = _x.VCU_BMS_BattSocDisp;
		UINM_SwitchLockFillerCapReq = _x.UINM_SwitchLockFillerCapReq;
		EMS_EngSpdVD = _x.EMS_EngSpdVD;
		return *this;
	}
	BDCEMSDATA2& operator=(BDCEMSDATA2 &&_x){
		UMM_UsageModeSt = std::move(_x.UMM_UsageModeSt);
		HVAC_CorrectedExterTemp = std::move(_x.HVAC_CorrectedExterTemp);
		HVAC_AirCompressorReq = std::move(_x.HVAC_AirCompressorReq);
		BCS_VehSpd = std::move(_x.BCS_VehSpd);
		BCS_VehSpdVD = std::move(_x.BCS_VehSpdVD);
		BMS_EngMilLampReq = std::move(_x.BMS_EngMilLampReq);
		BMS_BattTempAvg = std::move(_x.BMS_BattTempAvg);
		ICM_TotalOdometer = std::move(_x.ICM_TotalOdometer);
		SRS_CrashOutputSt = std::move(_x.SRS_CrashOutputSt);
		VCU_VehRdySt = std::move(_x.VCU_VehRdySt);
		VCU_VehDrvMod = std::move(_x.VCU_VehDrvMod);
		VCU_BMS_BattSocDisp = std::move(_x.VCU_BMS_BattSocDisp);
		UINM_SwitchLockFillerCapReq = std::move(_x.UINM_SwitchLockFillerCapReq);
		EMS_EngSpdVD = std::move(_x.EMS_EngSpdVD);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(UMM_UsageModeSt);
		fun(HVAC_CorrectedExterTemp);
		fun(HVAC_AirCompressorReq);
		fun(BCS_VehSpd);
		fun(BCS_VehSpdVD);
		fun(BMS_EngMilLampReq);
		fun(BMS_BattTempAvg);
		fun(ICM_TotalOdometer);
		fun(SRS_CrashOutputSt);
		fun(VCU_VehRdySt);
		fun(VCU_VehDrvMod);
		fun(VCU_BMS_BattSocDisp);
		fun(UINM_SwitchLockFillerCapReq);
		fun(EMS_EngSpdVD);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(UMM_UsageModeSt);
		fun(HVAC_CorrectedExterTemp);
		fun(HVAC_AirCompressorReq);
		fun(BCS_VehSpd);
		fun(BCS_VehSpdVD);
		fun(BMS_EngMilLampReq);
		fun(BMS_BattTempAvg);
		fun(ICM_TotalOdometer);
		fun(SRS_CrashOutputSt);
		fun(VCU_VehRdySt);
		fun(VCU_VehDrvMod);
		fun(VCU_BMS_BattSocDisp);
		fun(UINM_SwitchLockFillerCapReq);
		fun(EMS_EngSpdVD);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (UMM_UsageModeSt);
		fun << (HVAC_CorrectedExterTemp);
		fun << (HVAC_AirCompressorReq);
		fun << (BCS_VehSpd);
		fun << (BCS_VehSpdVD);
		fun << (BMS_EngMilLampReq);
		fun << (BMS_BattTempAvg);
		fun << (ICM_TotalOdometer);
		fun << (SRS_CrashOutputSt);
		fun << (VCU_VehRdySt);
		fun << (VCU_VehDrvMod);
		fun << (VCU_BMS_BattSocDisp);
		fun << (UINM_SwitchLockFillerCapReq);
		fun << (EMS_EngSpdVD);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (UMM_UsageModeSt);
		fun >> (HVAC_CorrectedExterTemp);
		fun >> (HVAC_AirCompressorReq);
		fun >> (BCS_VehSpd);
		fun >> (BCS_VehSpdVD);
		fun >> (BMS_EngMilLampReq);
		fun >> (BMS_BattTempAvg);
		fun >> (ICM_TotalOdometer);
		fun >> (SRS_CrashOutputSt);
		fun >> (VCU_VehRdySt);
		fun >> (VCU_VehDrvMod);
		fun >> (VCU_BMS_BattSocDisp);
		fun >> (UINM_SwitchLockFillerCapReq);
		fun >> (EMS_EngSpdVD);
	}
};

#endif //____BDCEMSDATA2_H__
