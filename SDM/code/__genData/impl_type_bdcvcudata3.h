#ifndef ____BDCVCUDATA3_H__
#define ____BDCVCUDATA3_H__


#include "cstdint"






struct BDCVCUDATA3 {
public:
	std::uint64_t VCU_EngStartNum;
	std::uint64_t VCU_C1CombNum;
	std::uint64_t VCU_ClutchBCombNum;
	std::uint64_t VCU_ETCSActiveNum1cycle;
	std::uint64_t VCU_EnergyRecovActiveNum;
	std::uint64_t VCU_CommuteModeActiveNum;
	std::uint64_t VCU_CreepActiveNum;
	std::uint64_t VCU_IntenseBrkNum;
	std::uint64_t VCU_FrqtAccelNum;
	std::uint64_t VCU_FrqtBrkNum;
	std::uint64_t VCU_FrqtSteerNum;
	std::uint64_t VCU_OPCBlockNum;
	std::uint64_t VCU_OPCOverCurrNum;
	std::uint64_t VCU_OPCUnderVoltNum;
	std::uint64_t VCU_AvgFuelConsp1Cycle;
	std::uint64_t VCU_HighFuelConspFlag;
	std::uint64_t VCU_OPCAvgPwr1Cycle;
	std::uint64_t VCU_OPCMaxPwr1Cycle;
	std::uint64_t VCU_noOverRngHyb1;
	std::uint64_t VCU_noOverRngHyb2;
	std::uint64_t VCU_noOverRngEv;
	std::uint64_t VCU_noOverRngRex;
	std::uint64_t VCU_rNumberIdleReq;
	std::uint64_t VCU_rNumEngOnSoc;
	std::uint64_t VCU_rNumEngOnBatPwr;
	std::uint64_t VCU_rNumDriReqPwr4EngOn;
	std::uint64_t VCU_rNumGpf4EngOn;
	std::uint64_t VCU_rNumDriPwrExceedBattPwr;
	std::uint64_t VCU_rNumWotStartEngine;
	std::uint64_t VCU_rSmartNaviDrive;
	std::uint64_t VCU_rSmartNaviChrgHeat;
	std::uint64_t VCU_rPlugCharge;
	std::uint64_t VCU_rDisChrV2L;
	std::uint64_t VCU_rDisChrV2V;
/*
	BDCVCUDATA3() {}
	~BDCVCUDATA3() {}
	BDCVCUDATA3(const std::uint64_t _VCU_EngStartNum,const std::uint64_t _VCU_C1CombNum,const std::uint64_t _VCU_ClutchBCombNum,const std::uint64_t _VCU_ETCSActiveNum1cycle,const std::uint64_t _VCU_EnergyRecovActiveNum,const std::uint64_t _VCU_CommuteModeActiveNum,const std::uint64_t _VCU_CreepActiveNum,const std::uint64_t _VCU_IntenseBrkNum,const std::uint64_t _VCU_FrqtAccelNum,const std::uint64_t _VCU_FrqtBrkNum,const std::uint64_t _VCU_FrqtSteerNum,const std::uint64_t _VCU_OPCBlockNum,const std::uint64_t _VCU_OPCOverCurrNum,const std::uint64_t _VCU_OPCUnderVoltNum,const std::uint64_t _VCU_AvgFuelConsp1Cycle,const std::uint64_t _VCU_HighFuelConspFlag,const std::uint64_t _VCU_OPCAvgPwr1Cycle,const std::uint64_t _VCU_OPCMaxPwr1Cycle,const std::uint64_t _VCU_noOverRngHyb1,const std::uint64_t _VCU_noOverRngHyb2,const std::uint64_t _VCU_noOverRngEv,const std::uint64_t _VCU_noOverRngRex,const std::uint64_t _VCU_rNumberIdleReq,const std::uint64_t _VCU_rNumEngOnSoc,const std::uint64_t _VCU_rNumEngOnBatPwr,const std::uint64_t _VCU_rNumDriReqPwr4EngOn,const std::uint64_t _VCU_rNumGpf4EngOn,const std::uint64_t _VCU_rNumDriPwrExceedBattPwr,const std::uint64_t _VCU_rNumWotStartEngine,const std::uint64_t _VCU_rSmartNaviDrive,const std::uint64_t _VCU_rSmartNaviChrgHeat,const std::uint64_t _VCU_rPlugCharge,const std::uint64_t _VCU_rDisChrV2L,const std::uint64_t _VCU_rDisChrV2V):VCU_EngStartNum(_VCU_EngStartNum),VCU_C1CombNum(_VCU_C1CombNum),VCU_ClutchBCombNum(_VCU_ClutchBCombNum),VCU_ETCSActiveNum1cycle(_VCU_ETCSActiveNum1cycle),VCU_EnergyRecovActiveNum(_VCU_EnergyRecovActiveNum),VCU_CommuteModeActiveNum(_VCU_CommuteModeActiveNum),VCU_CreepActiveNum(_VCU_CreepActiveNum),VCU_IntenseBrkNum(_VCU_IntenseBrkNum),VCU_FrqtAccelNum(_VCU_FrqtAccelNum),VCU_FrqtBrkNum(_VCU_FrqtBrkNum),VCU_FrqtSteerNum(_VCU_FrqtSteerNum),VCU_OPCBlockNum(_VCU_OPCBlockNum),VCU_OPCOverCurrNum(_VCU_OPCOverCurrNum),VCU_OPCUnderVoltNum(_VCU_OPCUnderVoltNum),VCU_AvgFuelConsp1Cycle(_VCU_AvgFuelConsp1Cycle),VCU_HighFuelConspFlag(_VCU_HighFuelConspFlag),VCU_OPCAvgPwr1Cycle(_VCU_OPCAvgPwr1Cycle),VCU_OPCMaxPwr1Cycle(_VCU_OPCMaxPwr1Cycle),VCU_noOverRngHyb1(_VCU_noOverRngHyb1),VCU_noOverRngHyb2(_VCU_noOverRngHyb2),VCU_noOverRngEv(_VCU_noOverRngEv),VCU_noOverRngRex(_VCU_noOverRngRex),VCU_rNumberIdleReq(_VCU_rNumberIdleReq),VCU_rNumEngOnSoc(_VCU_rNumEngOnSoc),VCU_rNumEngOnBatPwr(_VCU_rNumEngOnBatPwr),VCU_rNumDriReqPwr4EngOn(_VCU_rNumDriReqPwr4EngOn),VCU_rNumGpf4EngOn(_VCU_rNumGpf4EngOn),VCU_rNumDriPwrExceedBattPwr(_VCU_rNumDriPwrExceedBattPwr),VCU_rNumWotStartEngine(_VCU_rNumWotStartEngine),VCU_rSmartNaviDrive(_VCU_rSmartNaviDrive),VCU_rSmartNaviChrgHeat(_VCU_rSmartNaviChrgHeat),VCU_rPlugCharge(_VCU_rPlugCharge),VCU_rDisChrV2L(_VCU_rDisChrV2L),VCU_rDisChrV2V(_VCU_rDisChrV2V) {}
	BDCVCUDATA3(const BDCVCUDATA3 &_x){
		VCU_EngStartNum = _x.VCU_EngStartNum;
		VCU_C1CombNum = _x.VCU_C1CombNum;
		VCU_ClutchBCombNum = _x.VCU_ClutchBCombNum;
		VCU_ETCSActiveNum1cycle = _x.VCU_ETCSActiveNum1cycle;
		VCU_EnergyRecovActiveNum = _x.VCU_EnergyRecovActiveNum;
		VCU_CommuteModeActiveNum = _x.VCU_CommuteModeActiveNum;
		VCU_CreepActiveNum = _x.VCU_CreepActiveNum;
		VCU_IntenseBrkNum = _x.VCU_IntenseBrkNum;
		VCU_FrqtAccelNum = _x.VCU_FrqtAccelNum;
		VCU_FrqtBrkNum = _x.VCU_FrqtBrkNum;
		VCU_FrqtSteerNum = _x.VCU_FrqtSteerNum;
		VCU_OPCBlockNum = _x.VCU_OPCBlockNum;
		VCU_OPCOverCurrNum = _x.VCU_OPCOverCurrNum;
		VCU_OPCUnderVoltNum = _x.VCU_OPCUnderVoltNum;
		VCU_AvgFuelConsp1Cycle = _x.VCU_AvgFuelConsp1Cycle;
		VCU_HighFuelConspFlag = _x.VCU_HighFuelConspFlag;
		VCU_OPCAvgPwr1Cycle = _x.VCU_OPCAvgPwr1Cycle;
		VCU_OPCMaxPwr1Cycle = _x.VCU_OPCMaxPwr1Cycle;
		VCU_noOverRngHyb1 = _x.VCU_noOverRngHyb1;
		VCU_noOverRngHyb2 = _x.VCU_noOverRngHyb2;
		VCU_noOverRngEv = _x.VCU_noOverRngEv;
		VCU_noOverRngRex = _x.VCU_noOverRngRex;
		VCU_rNumberIdleReq = _x.VCU_rNumberIdleReq;
		VCU_rNumEngOnSoc = _x.VCU_rNumEngOnSoc;
		VCU_rNumEngOnBatPwr = _x.VCU_rNumEngOnBatPwr;
		VCU_rNumDriReqPwr4EngOn = _x.VCU_rNumDriReqPwr4EngOn;
		VCU_rNumGpf4EngOn = _x.VCU_rNumGpf4EngOn;
		VCU_rNumDriPwrExceedBattPwr = _x.VCU_rNumDriPwrExceedBattPwr;
		VCU_rNumWotStartEngine = _x.VCU_rNumWotStartEngine;
		VCU_rSmartNaviDrive = _x.VCU_rSmartNaviDrive;
		VCU_rSmartNaviChrgHeat = _x.VCU_rSmartNaviChrgHeat;
		VCU_rPlugCharge = _x.VCU_rPlugCharge;
		VCU_rDisChrV2L = _x.VCU_rDisChrV2L;
		VCU_rDisChrV2V = _x.VCU_rDisChrV2V;
	}
	BDCVCUDATA3(BDCVCUDATA3 &&_x){
		VCU_EngStartNum = std::move(_x.VCU_EngStartNum);
		VCU_C1CombNum = std::move(_x.VCU_C1CombNum);
		VCU_ClutchBCombNum = std::move(_x.VCU_ClutchBCombNum);
		VCU_ETCSActiveNum1cycle = std::move(_x.VCU_ETCSActiveNum1cycle);
		VCU_EnergyRecovActiveNum = std::move(_x.VCU_EnergyRecovActiveNum);
		VCU_CommuteModeActiveNum = std::move(_x.VCU_CommuteModeActiveNum);
		VCU_CreepActiveNum = std::move(_x.VCU_CreepActiveNum);
		VCU_IntenseBrkNum = std::move(_x.VCU_IntenseBrkNum);
		VCU_FrqtAccelNum = std::move(_x.VCU_FrqtAccelNum);
		VCU_FrqtBrkNum = std::move(_x.VCU_FrqtBrkNum);
		VCU_FrqtSteerNum = std::move(_x.VCU_FrqtSteerNum);
		VCU_OPCBlockNum = std::move(_x.VCU_OPCBlockNum);
		VCU_OPCOverCurrNum = std::move(_x.VCU_OPCOverCurrNum);
		VCU_OPCUnderVoltNum = std::move(_x.VCU_OPCUnderVoltNum);
		VCU_AvgFuelConsp1Cycle = std::move(_x.VCU_AvgFuelConsp1Cycle);
		VCU_HighFuelConspFlag = std::move(_x.VCU_HighFuelConspFlag);
		VCU_OPCAvgPwr1Cycle = std::move(_x.VCU_OPCAvgPwr1Cycle);
		VCU_OPCMaxPwr1Cycle = std::move(_x.VCU_OPCMaxPwr1Cycle);
		VCU_noOverRngHyb1 = std::move(_x.VCU_noOverRngHyb1);
		VCU_noOverRngHyb2 = std::move(_x.VCU_noOverRngHyb2);
		VCU_noOverRngEv = std::move(_x.VCU_noOverRngEv);
		VCU_noOverRngRex = std::move(_x.VCU_noOverRngRex);
		VCU_rNumberIdleReq = std::move(_x.VCU_rNumberIdleReq);
		VCU_rNumEngOnSoc = std::move(_x.VCU_rNumEngOnSoc);
		VCU_rNumEngOnBatPwr = std::move(_x.VCU_rNumEngOnBatPwr);
		VCU_rNumDriReqPwr4EngOn = std::move(_x.VCU_rNumDriReqPwr4EngOn);
		VCU_rNumGpf4EngOn = std::move(_x.VCU_rNumGpf4EngOn);
		VCU_rNumDriPwrExceedBattPwr = std::move(_x.VCU_rNumDriPwrExceedBattPwr);
		VCU_rNumWotStartEngine = std::move(_x.VCU_rNumWotStartEngine);
		VCU_rSmartNaviDrive = std::move(_x.VCU_rSmartNaviDrive);
		VCU_rSmartNaviChrgHeat = std::move(_x.VCU_rSmartNaviChrgHeat);
		VCU_rPlugCharge = std::move(_x.VCU_rPlugCharge);
		VCU_rDisChrV2L = std::move(_x.VCU_rDisChrV2L);
		VCU_rDisChrV2V = std::move(_x.VCU_rDisChrV2V);
	}
	BDCVCUDATA3& operator=(const BDCVCUDATA3 &_x){
		VCU_EngStartNum = _x.VCU_EngStartNum;
		VCU_C1CombNum = _x.VCU_C1CombNum;
		VCU_ClutchBCombNum = _x.VCU_ClutchBCombNum;
		VCU_ETCSActiveNum1cycle = _x.VCU_ETCSActiveNum1cycle;
		VCU_EnergyRecovActiveNum = _x.VCU_EnergyRecovActiveNum;
		VCU_CommuteModeActiveNum = _x.VCU_CommuteModeActiveNum;
		VCU_CreepActiveNum = _x.VCU_CreepActiveNum;
		VCU_IntenseBrkNum = _x.VCU_IntenseBrkNum;
		VCU_FrqtAccelNum = _x.VCU_FrqtAccelNum;
		VCU_FrqtBrkNum = _x.VCU_FrqtBrkNum;
		VCU_FrqtSteerNum = _x.VCU_FrqtSteerNum;
		VCU_OPCBlockNum = _x.VCU_OPCBlockNum;
		VCU_OPCOverCurrNum = _x.VCU_OPCOverCurrNum;
		VCU_OPCUnderVoltNum = _x.VCU_OPCUnderVoltNum;
		VCU_AvgFuelConsp1Cycle = _x.VCU_AvgFuelConsp1Cycle;
		VCU_HighFuelConspFlag = _x.VCU_HighFuelConspFlag;
		VCU_OPCAvgPwr1Cycle = _x.VCU_OPCAvgPwr1Cycle;
		VCU_OPCMaxPwr1Cycle = _x.VCU_OPCMaxPwr1Cycle;
		VCU_noOverRngHyb1 = _x.VCU_noOverRngHyb1;
		VCU_noOverRngHyb2 = _x.VCU_noOverRngHyb2;
		VCU_noOverRngEv = _x.VCU_noOverRngEv;
		VCU_noOverRngRex = _x.VCU_noOverRngRex;
		VCU_rNumberIdleReq = _x.VCU_rNumberIdleReq;
		VCU_rNumEngOnSoc = _x.VCU_rNumEngOnSoc;
		VCU_rNumEngOnBatPwr = _x.VCU_rNumEngOnBatPwr;
		VCU_rNumDriReqPwr4EngOn = _x.VCU_rNumDriReqPwr4EngOn;
		VCU_rNumGpf4EngOn = _x.VCU_rNumGpf4EngOn;
		VCU_rNumDriPwrExceedBattPwr = _x.VCU_rNumDriPwrExceedBattPwr;
		VCU_rNumWotStartEngine = _x.VCU_rNumWotStartEngine;
		VCU_rSmartNaviDrive = _x.VCU_rSmartNaviDrive;
		VCU_rSmartNaviChrgHeat = _x.VCU_rSmartNaviChrgHeat;
		VCU_rPlugCharge = _x.VCU_rPlugCharge;
		VCU_rDisChrV2L = _x.VCU_rDisChrV2L;
		VCU_rDisChrV2V = _x.VCU_rDisChrV2V;
		return *this;
	}
	BDCVCUDATA3& operator=(BDCVCUDATA3 &&_x){
		VCU_EngStartNum = std::move(_x.VCU_EngStartNum);
		VCU_C1CombNum = std::move(_x.VCU_C1CombNum);
		VCU_ClutchBCombNum = std::move(_x.VCU_ClutchBCombNum);
		VCU_ETCSActiveNum1cycle = std::move(_x.VCU_ETCSActiveNum1cycle);
		VCU_EnergyRecovActiveNum = std::move(_x.VCU_EnergyRecovActiveNum);
		VCU_CommuteModeActiveNum = std::move(_x.VCU_CommuteModeActiveNum);
		VCU_CreepActiveNum = std::move(_x.VCU_CreepActiveNum);
		VCU_IntenseBrkNum = std::move(_x.VCU_IntenseBrkNum);
		VCU_FrqtAccelNum = std::move(_x.VCU_FrqtAccelNum);
		VCU_FrqtBrkNum = std::move(_x.VCU_FrqtBrkNum);
		VCU_FrqtSteerNum = std::move(_x.VCU_FrqtSteerNum);
		VCU_OPCBlockNum = std::move(_x.VCU_OPCBlockNum);
		VCU_OPCOverCurrNum = std::move(_x.VCU_OPCOverCurrNum);
		VCU_OPCUnderVoltNum = std::move(_x.VCU_OPCUnderVoltNum);
		VCU_AvgFuelConsp1Cycle = std::move(_x.VCU_AvgFuelConsp1Cycle);
		VCU_HighFuelConspFlag = std::move(_x.VCU_HighFuelConspFlag);
		VCU_OPCAvgPwr1Cycle = std::move(_x.VCU_OPCAvgPwr1Cycle);
		VCU_OPCMaxPwr1Cycle = std::move(_x.VCU_OPCMaxPwr1Cycle);
		VCU_noOverRngHyb1 = std::move(_x.VCU_noOverRngHyb1);
		VCU_noOverRngHyb2 = std::move(_x.VCU_noOverRngHyb2);
		VCU_noOverRngEv = std::move(_x.VCU_noOverRngEv);
		VCU_noOverRngRex = std::move(_x.VCU_noOverRngRex);
		VCU_rNumberIdleReq = std::move(_x.VCU_rNumberIdleReq);
		VCU_rNumEngOnSoc = std::move(_x.VCU_rNumEngOnSoc);
		VCU_rNumEngOnBatPwr = std::move(_x.VCU_rNumEngOnBatPwr);
		VCU_rNumDriReqPwr4EngOn = std::move(_x.VCU_rNumDriReqPwr4EngOn);
		VCU_rNumGpf4EngOn = std::move(_x.VCU_rNumGpf4EngOn);
		VCU_rNumDriPwrExceedBattPwr = std::move(_x.VCU_rNumDriPwrExceedBattPwr);
		VCU_rNumWotStartEngine = std::move(_x.VCU_rNumWotStartEngine);
		VCU_rSmartNaviDrive = std::move(_x.VCU_rSmartNaviDrive);
		VCU_rSmartNaviChrgHeat = std::move(_x.VCU_rSmartNaviChrgHeat);
		VCU_rPlugCharge = std::move(_x.VCU_rPlugCharge);
		VCU_rDisChrV2L = std::move(_x.VCU_rDisChrV2L);
		VCU_rDisChrV2V = std::move(_x.VCU_rDisChrV2V);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(VCU_EngStartNum);
		fun(VCU_C1CombNum);
		fun(VCU_ClutchBCombNum);
		fun(VCU_ETCSActiveNum1cycle);
		fun(VCU_EnergyRecovActiveNum);
		fun(VCU_CommuteModeActiveNum);
		fun(VCU_CreepActiveNum);
		fun(VCU_IntenseBrkNum);
		fun(VCU_FrqtAccelNum);
		fun(VCU_FrqtBrkNum);
		fun(VCU_FrqtSteerNum);
		fun(VCU_OPCBlockNum);
		fun(VCU_OPCOverCurrNum);
		fun(VCU_OPCUnderVoltNum);
		fun(VCU_AvgFuelConsp1Cycle);
		fun(VCU_HighFuelConspFlag);
		fun(VCU_OPCAvgPwr1Cycle);
		fun(VCU_OPCMaxPwr1Cycle);
		fun(VCU_noOverRngHyb1);
		fun(VCU_noOverRngHyb2);
		fun(VCU_noOverRngEv);
		fun(VCU_noOverRngRex);
		fun(VCU_rNumberIdleReq);
		fun(VCU_rNumEngOnSoc);
		fun(VCU_rNumEngOnBatPwr);
		fun(VCU_rNumDriReqPwr4EngOn);
		fun(VCU_rNumGpf4EngOn);
		fun(VCU_rNumDriPwrExceedBattPwr);
		fun(VCU_rNumWotStartEngine);
		fun(VCU_rSmartNaviDrive);
		fun(VCU_rSmartNaviChrgHeat);
		fun(VCU_rPlugCharge);
		fun(VCU_rDisChrV2L);
		fun(VCU_rDisChrV2V);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(VCU_EngStartNum);
		fun(VCU_C1CombNum);
		fun(VCU_ClutchBCombNum);
		fun(VCU_ETCSActiveNum1cycle);
		fun(VCU_EnergyRecovActiveNum);
		fun(VCU_CommuteModeActiveNum);
		fun(VCU_CreepActiveNum);
		fun(VCU_IntenseBrkNum);
		fun(VCU_FrqtAccelNum);
		fun(VCU_FrqtBrkNum);
		fun(VCU_FrqtSteerNum);
		fun(VCU_OPCBlockNum);
		fun(VCU_OPCOverCurrNum);
		fun(VCU_OPCUnderVoltNum);
		fun(VCU_AvgFuelConsp1Cycle);
		fun(VCU_HighFuelConspFlag);
		fun(VCU_OPCAvgPwr1Cycle);
		fun(VCU_OPCMaxPwr1Cycle);
		fun(VCU_noOverRngHyb1);
		fun(VCU_noOverRngHyb2);
		fun(VCU_noOverRngEv);
		fun(VCU_noOverRngRex);
		fun(VCU_rNumberIdleReq);
		fun(VCU_rNumEngOnSoc);
		fun(VCU_rNumEngOnBatPwr);
		fun(VCU_rNumDriReqPwr4EngOn);
		fun(VCU_rNumGpf4EngOn);
		fun(VCU_rNumDriPwrExceedBattPwr);
		fun(VCU_rNumWotStartEngine);
		fun(VCU_rSmartNaviDrive);
		fun(VCU_rSmartNaviChrgHeat);
		fun(VCU_rPlugCharge);
		fun(VCU_rDisChrV2L);
		fun(VCU_rDisChrV2V);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (VCU_EngStartNum);
		fun << (VCU_C1CombNum);
		fun << (VCU_ClutchBCombNum);
		fun << (VCU_ETCSActiveNum1cycle);
		fun << (VCU_EnergyRecovActiveNum);
		fun << (VCU_CommuteModeActiveNum);
		fun << (VCU_CreepActiveNum);
		fun << (VCU_IntenseBrkNum);
		fun << (VCU_FrqtAccelNum);
		fun << (VCU_FrqtBrkNum);
		fun << (VCU_FrqtSteerNum);
		fun << (VCU_OPCBlockNum);
		fun << (VCU_OPCOverCurrNum);
		fun << (VCU_OPCUnderVoltNum);
		fun << (VCU_AvgFuelConsp1Cycle);
		fun << (VCU_HighFuelConspFlag);
		fun << (VCU_OPCAvgPwr1Cycle);
		fun << (VCU_OPCMaxPwr1Cycle);
		fun << (VCU_noOverRngHyb1);
		fun << (VCU_noOverRngHyb2);
		fun << (VCU_noOverRngEv);
		fun << (VCU_noOverRngRex);
		fun << (VCU_rNumberIdleReq);
		fun << (VCU_rNumEngOnSoc);
		fun << (VCU_rNumEngOnBatPwr);
		fun << (VCU_rNumDriReqPwr4EngOn);
		fun << (VCU_rNumGpf4EngOn);
		fun << (VCU_rNumDriPwrExceedBattPwr);
		fun << (VCU_rNumWotStartEngine);
		fun << (VCU_rSmartNaviDrive);
		fun << (VCU_rSmartNaviChrgHeat);
		fun << (VCU_rPlugCharge);
		fun << (VCU_rDisChrV2L);
		fun << (VCU_rDisChrV2V);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (VCU_EngStartNum);
		fun >> (VCU_C1CombNum);
		fun >> (VCU_ClutchBCombNum);
		fun >> (VCU_ETCSActiveNum1cycle);
		fun >> (VCU_EnergyRecovActiveNum);
		fun >> (VCU_CommuteModeActiveNum);
		fun >> (VCU_CreepActiveNum);
		fun >> (VCU_IntenseBrkNum);
		fun >> (VCU_FrqtAccelNum);
		fun >> (VCU_FrqtBrkNum);
		fun >> (VCU_FrqtSteerNum);
		fun >> (VCU_OPCBlockNum);
		fun >> (VCU_OPCOverCurrNum);
		fun >> (VCU_OPCUnderVoltNum);
		fun >> (VCU_AvgFuelConsp1Cycle);
		fun >> (VCU_HighFuelConspFlag);
		fun >> (VCU_OPCAvgPwr1Cycle);
		fun >> (VCU_OPCMaxPwr1Cycle);
		fun >> (VCU_noOverRngHyb1);
		fun >> (VCU_noOverRngHyb2);
		fun >> (VCU_noOverRngEv);
		fun >> (VCU_noOverRngRex);
		fun >> (VCU_rNumberIdleReq);
		fun >> (VCU_rNumEngOnSoc);
		fun >> (VCU_rNumEngOnBatPwr);
		fun >> (VCU_rNumDriReqPwr4EngOn);
		fun >> (VCU_rNumGpf4EngOn);
		fun >> (VCU_rNumDriPwrExceedBattPwr);
		fun >> (VCU_rNumWotStartEngine);
		fun >> (VCU_rSmartNaviDrive);
		fun >> (VCU_rSmartNaviChrgHeat);
		fun >> (VCU_rPlugCharge);
		fun >> (VCU_rDisChrV2L);
		fun >> (VCU_rDisChrV2V);
	}
};

#endif //____BDCVCUDATA3_H__
