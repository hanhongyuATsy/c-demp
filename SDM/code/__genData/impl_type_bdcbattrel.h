#ifndef ____BDCBATTREL_H__
#define ____BDCBATTREL_H__


#include "cstdint"






struct BDCBattRel {
public:
	std::uint16_t IPS_DCDCVoltLvAct;
	std::uint16_t IPS_DCDCCurrHvAct;
	std::uint16_t IPS_DCDCCurrLvAct;
	std::uint16_t IPS_DCDCVoltHvAct;
	std::uint32_t ICM_TotalOdometer_accurate;
	std::uint8_t IPS_DCDCModeSt;
	std::uint8_t VCU_VehRdySt;
	std::uint16_t DCU_TEL_BattCurr;
	std::uint16_t BMS_BattSocDisp;
	std::uint8_t EMS_EngSt;
	std::uint16_t EMS_EngSpd;
	std::uint8_t GEN_FlagHTCutoff;
	std::uint8_t GEN_FlagMechanicalSt;
	std::uint8_t GEN_FlagElectricalErr;
/*
	BDCBattRel() {}
	~BDCBattRel() {}
	BDCBattRel(const std::uint16_t _IPS_DCDCVoltLvAct,const std::uint16_t _IPS_DCDCCurrHvAct,const std::uint16_t _IPS_DCDCCurrLvAct,const std::uint16_t _IPS_DCDCVoltHvAct,const std::uint32_t _ICM_TotalOdometer_accurate,const std::uint8_t _IPS_DCDCModeSt,const std::uint8_t _VCU_VehRdySt,const std::uint16_t _DCU_TEL_BattCurr,const std::uint16_t _BMS_BattSocDisp,const std::uint8_t _EMS_EngSt,const std::uint16_t _EMS_EngSpd,const std::uint8_t _GEN_FlagHTCutoff,const std::uint8_t _GEN_FlagMechanicalSt,const std::uint8_t _GEN_FlagElectricalErr):IPS_DCDCVoltLvAct(_IPS_DCDCVoltLvAct),IPS_DCDCCurrHvAct(_IPS_DCDCCurrHvAct),IPS_DCDCCurrLvAct(_IPS_DCDCCurrLvAct),IPS_DCDCVoltHvAct(_IPS_DCDCVoltHvAct),ICM_TotalOdometer_accurate(_ICM_TotalOdometer_accurate),IPS_DCDCModeSt(_IPS_DCDCModeSt),VCU_VehRdySt(_VCU_VehRdySt),DCU_TEL_BattCurr(_DCU_TEL_BattCurr),BMS_BattSocDisp(_BMS_BattSocDisp),EMS_EngSt(_EMS_EngSt),EMS_EngSpd(_EMS_EngSpd),GEN_FlagHTCutoff(_GEN_FlagHTCutoff),GEN_FlagMechanicalSt(_GEN_FlagMechanicalSt),GEN_FlagElectricalErr(_GEN_FlagElectricalErr) {}
	BDCBattRel(const BDCBattRel &_x){
		IPS_DCDCVoltLvAct = _x.IPS_DCDCVoltLvAct;
		IPS_DCDCCurrHvAct = _x.IPS_DCDCCurrHvAct;
		IPS_DCDCCurrLvAct = _x.IPS_DCDCCurrLvAct;
		IPS_DCDCVoltHvAct = _x.IPS_DCDCVoltHvAct;
		ICM_TotalOdometer_accurate = _x.ICM_TotalOdometer_accurate;
		IPS_DCDCModeSt = _x.IPS_DCDCModeSt;
		VCU_VehRdySt = _x.VCU_VehRdySt;
		DCU_TEL_BattCurr = _x.DCU_TEL_BattCurr;
		BMS_BattSocDisp = _x.BMS_BattSocDisp;
		EMS_EngSt = _x.EMS_EngSt;
		EMS_EngSpd = _x.EMS_EngSpd;
		GEN_FlagHTCutoff = _x.GEN_FlagHTCutoff;
		GEN_FlagMechanicalSt = _x.GEN_FlagMechanicalSt;
		GEN_FlagElectricalErr = _x.GEN_FlagElectricalErr;
	}
	BDCBattRel(BDCBattRel &&_x){
		IPS_DCDCVoltLvAct = std::move(_x.IPS_DCDCVoltLvAct);
		IPS_DCDCCurrHvAct = std::move(_x.IPS_DCDCCurrHvAct);
		IPS_DCDCCurrLvAct = std::move(_x.IPS_DCDCCurrLvAct);
		IPS_DCDCVoltHvAct = std::move(_x.IPS_DCDCVoltHvAct);
		ICM_TotalOdometer_accurate = std::move(_x.ICM_TotalOdometer_accurate);
		IPS_DCDCModeSt = std::move(_x.IPS_DCDCModeSt);
		VCU_VehRdySt = std::move(_x.VCU_VehRdySt);
		DCU_TEL_BattCurr = std::move(_x.DCU_TEL_BattCurr);
		BMS_BattSocDisp = std::move(_x.BMS_BattSocDisp);
		EMS_EngSt = std::move(_x.EMS_EngSt);
		EMS_EngSpd = std::move(_x.EMS_EngSpd);
		GEN_FlagHTCutoff = std::move(_x.GEN_FlagHTCutoff);
		GEN_FlagMechanicalSt = std::move(_x.GEN_FlagMechanicalSt);
		GEN_FlagElectricalErr = std::move(_x.GEN_FlagElectricalErr);
	}
	BDCBattRel& operator=(const BDCBattRel &_x){
		IPS_DCDCVoltLvAct = _x.IPS_DCDCVoltLvAct;
		IPS_DCDCCurrHvAct = _x.IPS_DCDCCurrHvAct;
		IPS_DCDCCurrLvAct = _x.IPS_DCDCCurrLvAct;
		IPS_DCDCVoltHvAct = _x.IPS_DCDCVoltHvAct;
		ICM_TotalOdometer_accurate = _x.ICM_TotalOdometer_accurate;
		IPS_DCDCModeSt = _x.IPS_DCDCModeSt;
		VCU_VehRdySt = _x.VCU_VehRdySt;
		DCU_TEL_BattCurr = _x.DCU_TEL_BattCurr;
		BMS_BattSocDisp = _x.BMS_BattSocDisp;
		EMS_EngSt = _x.EMS_EngSt;
		EMS_EngSpd = _x.EMS_EngSpd;
		GEN_FlagHTCutoff = _x.GEN_FlagHTCutoff;
		GEN_FlagMechanicalSt = _x.GEN_FlagMechanicalSt;
		GEN_FlagElectricalErr = _x.GEN_FlagElectricalErr;
		return *this;
	}
	BDCBattRel& operator=(BDCBattRel &&_x){
		IPS_DCDCVoltLvAct = std::move(_x.IPS_DCDCVoltLvAct);
		IPS_DCDCCurrHvAct = std::move(_x.IPS_DCDCCurrHvAct);
		IPS_DCDCCurrLvAct = std::move(_x.IPS_DCDCCurrLvAct);
		IPS_DCDCVoltHvAct = std::move(_x.IPS_DCDCVoltHvAct);
		ICM_TotalOdometer_accurate = std::move(_x.ICM_TotalOdometer_accurate);
		IPS_DCDCModeSt = std::move(_x.IPS_DCDCModeSt);
		VCU_VehRdySt = std::move(_x.VCU_VehRdySt);
		DCU_TEL_BattCurr = std::move(_x.DCU_TEL_BattCurr);
		BMS_BattSocDisp = std::move(_x.BMS_BattSocDisp);
		EMS_EngSt = std::move(_x.EMS_EngSt);
		EMS_EngSpd = std::move(_x.EMS_EngSpd);
		GEN_FlagHTCutoff = std::move(_x.GEN_FlagHTCutoff);
		GEN_FlagMechanicalSt = std::move(_x.GEN_FlagMechanicalSt);
		GEN_FlagElectricalErr = std::move(_x.GEN_FlagElectricalErr);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(IPS_DCDCVoltLvAct);
		fun(IPS_DCDCCurrHvAct);
		fun(IPS_DCDCCurrLvAct);
		fun(IPS_DCDCVoltHvAct);
		fun(ICM_TotalOdometer_accurate);
		fun(IPS_DCDCModeSt);
		fun(VCU_VehRdySt);
		fun(DCU_TEL_BattCurr);
		fun(BMS_BattSocDisp);
		fun(EMS_EngSt);
		fun(EMS_EngSpd);
		fun(GEN_FlagHTCutoff);
		fun(GEN_FlagMechanicalSt);
		fun(GEN_FlagElectricalErr);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(IPS_DCDCVoltLvAct);
		fun(IPS_DCDCCurrHvAct);
		fun(IPS_DCDCCurrLvAct);
		fun(IPS_DCDCVoltHvAct);
		fun(ICM_TotalOdometer_accurate);
		fun(IPS_DCDCModeSt);
		fun(VCU_VehRdySt);
		fun(DCU_TEL_BattCurr);
		fun(BMS_BattSocDisp);
		fun(EMS_EngSt);
		fun(EMS_EngSpd);
		fun(GEN_FlagHTCutoff);
		fun(GEN_FlagMechanicalSt);
		fun(GEN_FlagElectricalErr);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (IPS_DCDCVoltLvAct);
		fun << (IPS_DCDCCurrHvAct);
		fun << (IPS_DCDCCurrLvAct);
		fun << (IPS_DCDCVoltHvAct);
		fun << (ICM_TotalOdometer_accurate);
		fun << (IPS_DCDCModeSt);
		fun << (VCU_VehRdySt);
		fun << (DCU_TEL_BattCurr);
		fun << (BMS_BattSocDisp);
		fun << (EMS_EngSt);
		fun << (EMS_EngSpd);
		fun << (GEN_FlagHTCutoff);
		fun << (GEN_FlagMechanicalSt);
		fun << (GEN_FlagElectricalErr);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (IPS_DCDCVoltLvAct);
		fun >> (IPS_DCDCCurrHvAct);
		fun >> (IPS_DCDCCurrLvAct);
		fun >> (IPS_DCDCVoltHvAct);
		fun >> (ICM_TotalOdometer_accurate);
		fun >> (IPS_DCDCModeSt);
		fun >> (VCU_VehRdySt);
		fun >> (DCU_TEL_BattCurr);
		fun >> (BMS_BattSocDisp);
		fun >> (EMS_EngSt);
		fun >> (EMS_EngSpd);
		fun >> (GEN_FlagHTCutoff);
		fun >> (GEN_FlagMechanicalSt);
		fun >> (GEN_FlagElectricalErr);
	}
};

#endif //____BDCBATTREL_H__
