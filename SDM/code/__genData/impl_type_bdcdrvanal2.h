#ifndef ____BDCDRVANAL2_H__
#define ____BDCDRVANAL2_H__


#include "cstdint"






struct BDCDRVANAL2 {
public:
	std::uint16_t VCU_VehElcConspAvg;
	std::uint16_t BMC_BattVolt;
	std::uint16_t BMC_BattCurr;
	std::uint16_t BMC_BattSocAct;
	std::uint16_t VCU_VehElcConspInst;
	std::uint16_t VCU_VehElcConspAccumAvg;
	std::uint8_t ICM_FuelAverageConsumed;
	std::uint32_t ICM_FuelAllConsumed;
	std::uint8_t ICM_FuelAvgConsumeTemp;
	std::uint8_t EMS_EngSpdVD;
/*
	BDCDRVANAL2() {}
	~BDCDRVANAL2() {}
	BDCDRVANAL2(const std::uint16_t _VCU_VehElcConspAvg,const std::uint16_t _BMC_BattVolt,const std::uint16_t _BMC_BattCurr,const std::uint16_t _BMC_BattSocAct,const std::uint16_t _VCU_VehElcConspInst,const std::uint16_t _VCU_VehElcConspAccumAvg,const std::uint8_t _ICM_FuelAverageConsumed,const std::uint32_t _ICM_FuelAllConsumed,const std::uint8_t _ICM_FuelAvgConsumeTemp,const std::uint8_t _EMS_EngSpdVD):VCU_VehElcConspAvg(_VCU_VehElcConspAvg),BMC_BattVolt(_BMC_BattVolt),BMC_BattCurr(_BMC_BattCurr),BMC_BattSocAct(_BMC_BattSocAct),VCU_VehElcConspInst(_VCU_VehElcConspInst),VCU_VehElcConspAccumAvg(_VCU_VehElcConspAccumAvg),ICM_FuelAverageConsumed(_ICM_FuelAverageConsumed),ICM_FuelAllConsumed(_ICM_FuelAllConsumed),ICM_FuelAvgConsumeTemp(_ICM_FuelAvgConsumeTemp),EMS_EngSpdVD(_EMS_EngSpdVD) {}
	BDCDRVANAL2(const BDCDRVANAL2 &_x){
		VCU_VehElcConspAvg = _x.VCU_VehElcConspAvg;
		BMC_BattVolt = _x.BMC_BattVolt;
		BMC_BattCurr = _x.BMC_BattCurr;
		BMC_BattSocAct = _x.BMC_BattSocAct;
		VCU_VehElcConspInst = _x.VCU_VehElcConspInst;
		VCU_VehElcConspAccumAvg = _x.VCU_VehElcConspAccumAvg;
		ICM_FuelAverageConsumed = _x.ICM_FuelAverageConsumed;
		ICM_FuelAllConsumed = _x.ICM_FuelAllConsumed;
		ICM_FuelAvgConsumeTemp = _x.ICM_FuelAvgConsumeTemp;
		EMS_EngSpdVD = _x.EMS_EngSpdVD;
	}
	BDCDRVANAL2(BDCDRVANAL2 &&_x){
		VCU_VehElcConspAvg = std::move(_x.VCU_VehElcConspAvg);
		BMC_BattVolt = std::move(_x.BMC_BattVolt);
		BMC_BattCurr = std::move(_x.BMC_BattCurr);
		BMC_BattSocAct = std::move(_x.BMC_BattSocAct);
		VCU_VehElcConspInst = std::move(_x.VCU_VehElcConspInst);
		VCU_VehElcConspAccumAvg = std::move(_x.VCU_VehElcConspAccumAvg);
		ICM_FuelAverageConsumed = std::move(_x.ICM_FuelAverageConsumed);
		ICM_FuelAllConsumed = std::move(_x.ICM_FuelAllConsumed);
		ICM_FuelAvgConsumeTemp = std::move(_x.ICM_FuelAvgConsumeTemp);
		EMS_EngSpdVD = std::move(_x.EMS_EngSpdVD);
	}
	BDCDRVANAL2& operator=(const BDCDRVANAL2 &_x){
		VCU_VehElcConspAvg = _x.VCU_VehElcConspAvg;
		BMC_BattVolt = _x.BMC_BattVolt;
		BMC_BattCurr = _x.BMC_BattCurr;
		BMC_BattSocAct = _x.BMC_BattSocAct;
		VCU_VehElcConspInst = _x.VCU_VehElcConspInst;
		VCU_VehElcConspAccumAvg = _x.VCU_VehElcConspAccumAvg;
		ICM_FuelAverageConsumed = _x.ICM_FuelAverageConsumed;
		ICM_FuelAllConsumed = _x.ICM_FuelAllConsumed;
		ICM_FuelAvgConsumeTemp = _x.ICM_FuelAvgConsumeTemp;
		EMS_EngSpdVD = _x.EMS_EngSpdVD;
		return *this;
	}
	BDCDRVANAL2& operator=(BDCDRVANAL2 &&_x){
		VCU_VehElcConspAvg = std::move(_x.VCU_VehElcConspAvg);
		BMC_BattVolt = std::move(_x.BMC_BattVolt);
		BMC_BattCurr = std::move(_x.BMC_BattCurr);
		BMC_BattSocAct = std::move(_x.BMC_BattSocAct);
		VCU_VehElcConspInst = std::move(_x.VCU_VehElcConspInst);
		VCU_VehElcConspAccumAvg = std::move(_x.VCU_VehElcConspAccumAvg);
		ICM_FuelAverageConsumed = std::move(_x.ICM_FuelAverageConsumed);
		ICM_FuelAllConsumed = std::move(_x.ICM_FuelAllConsumed);
		ICM_FuelAvgConsumeTemp = std::move(_x.ICM_FuelAvgConsumeTemp);
		EMS_EngSpdVD = std::move(_x.EMS_EngSpdVD);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(VCU_VehElcConspAvg);
		fun(BMC_BattVolt);
		fun(BMC_BattCurr);
		fun(BMC_BattSocAct);
		fun(VCU_VehElcConspInst);
		fun(VCU_VehElcConspAccumAvg);
		fun(ICM_FuelAverageConsumed);
		fun(ICM_FuelAllConsumed);
		fun(ICM_FuelAvgConsumeTemp);
		fun(EMS_EngSpdVD);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(VCU_VehElcConspAvg);
		fun(BMC_BattVolt);
		fun(BMC_BattCurr);
		fun(BMC_BattSocAct);
		fun(VCU_VehElcConspInst);
		fun(VCU_VehElcConspAccumAvg);
		fun(ICM_FuelAverageConsumed);
		fun(ICM_FuelAllConsumed);
		fun(ICM_FuelAvgConsumeTemp);
		fun(EMS_EngSpdVD);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (VCU_VehElcConspAvg);
		fun << (BMC_BattVolt);
		fun << (BMC_BattCurr);
		fun << (BMC_BattSocAct);
		fun << (VCU_VehElcConspInst);
		fun << (VCU_VehElcConspAccumAvg);
		fun << (ICM_FuelAverageConsumed);
		fun << (ICM_FuelAllConsumed);
		fun << (ICM_FuelAvgConsumeTemp);
		fun << (EMS_EngSpdVD);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (VCU_VehElcConspAvg);
		fun >> (BMC_BattVolt);
		fun >> (BMC_BattCurr);
		fun >> (BMC_BattSocAct);
		fun >> (VCU_VehElcConspInst);
		fun >> (VCU_VehElcConspAccumAvg);
		fun >> (ICM_FuelAverageConsumed);
		fun >> (ICM_FuelAllConsumed);
		fun >> (ICM_FuelAvgConsumeTemp);
		fun >> (EMS_EngSpdVD);
	}
};

#endif //____BDCDRVANAL2_H__
