#ifndef ____BDCTESTEMS2_H__
#define ____BDCTESTEMS2_H__


#include "cstdint"






struct BDCTestEMS2 {
public:
	std::uint8_t IPS_DCDCTempAct;
	std::uint8_t EMS_AtmosphericPressureVD;
	std::uint8_t EMS_AtmosphericPressure;
	std::uint8_t EMS_AbsoluteThrottlepst;
	std::uint8_t EMS_BrakePedalStVD;
	std::uint8_t EMS_BrakePedalSt;
	std::uint8_t EMS_ClutchTorqVD;
	std::uint16_t EMS_ClutchTorq;
	std::uint16_t EMS_EngFrictionTorq;
	std::uint8_t EMS_EngFrictionTorqVD;
	std::uint8_t EMS_EMSReleased;
	std::uint8_t EMS_EngWaterTemp;
	std::uint8_t EMS_EngWaterTempVD;
	std::uint8_t EMS_EngOilPreLowLamp;
	std::uint8_t EMS_EPCSt;
	std::uint16_t EMS_EngIdleRefSpd;
	std::uint8_t EMS_EngIntakeAirTemp;
	std::uint8_t EMS_EngIntakeAirTempVD;
	std::uint8_t EMS_EngCalculatedLoad;
	std::uint8_t EMS_FuelCutOff;
	std::uint8_t EMS_FuelPumpCtrl;
	std::uint8_t EMS_FuelPumpCtrlVD;
	std::uint16_t EMS_FuelPulse;
	std::uint8_t EMS_GPFLightSt;
	std::uint8_t EMS_IdleSpdInfo;
	std::uint8_t EMS_MaxEngTorqNorm;
	std::uint8_t EMS_MilSt;
	std::uint16_t EMS_MinClutchTorq;
	std::uint8_t EMS_MinClutchTorqVD;
	std::uint8_t EMS_MaxClutchTorqVD;
	std::uint8_t EMS_OBDWarmUpCycleSt;
	std::uint8_t EMS_OBDDrivingCycleStForPDTC;
	std::uint16_t EMS_MaxClutchTorq;
	std::uint8_t EMS_HSDCtrlReq;
/*
	BDCTestEMS2() {}
	~BDCTestEMS2() {}
	BDCTestEMS2(const std::uint8_t _IPS_DCDCTempAct,const std::uint8_t _EMS_AtmosphericPressureVD,const std::uint8_t _EMS_AtmosphericPressure,const std::uint8_t _EMS_AbsoluteThrottlepst,const std::uint8_t _EMS_BrakePedalStVD,const std::uint8_t _EMS_BrakePedalSt,const std::uint8_t _EMS_ClutchTorqVD,const std::uint16_t _EMS_ClutchTorq,const std::uint16_t _EMS_EngFrictionTorq,const std::uint8_t _EMS_EngFrictionTorqVD,const std::uint8_t _EMS_EMSReleased,const std::uint8_t _EMS_EngWaterTemp,const std::uint8_t _EMS_EngWaterTempVD,const std::uint8_t _EMS_EngOilPreLowLamp,const std::uint8_t _EMS_EPCSt,const std::uint16_t _EMS_EngIdleRefSpd,const std::uint8_t _EMS_EngIntakeAirTemp,const std::uint8_t _EMS_EngIntakeAirTempVD,const std::uint8_t _EMS_EngCalculatedLoad,const std::uint8_t _EMS_FuelCutOff,const std::uint8_t _EMS_FuelPumpCtrl,const std::uint8_t _EMS_FuelPumpCtrlVD,const std::uint16_t _EMS_FuelPulse,const std::uint8_t _EMS_GPFLightSt,const std::uint8_t _EMS_IdleSpdInfo,const std::uint8_t _EMS_MaxEngTorqNorm,const std::uint8_t _EMS_MilSt,const std::uint16_t _EMS_MinClutchTorq,const std::uint8_t _EMS_MinClutchTorqVD,const std::uint8_t _EMS_MaxClutchTorqVD,const std::uint8_t _EMS_OBDWarmUpCycleSt,const std::uint8_t _EMS_OBDDrivingCycleStForPDTC,const std::uint16_t _EMS_MaxClutchTorq,const std::uint8_t _EMS_HSDCtrlReq):IPS_DCDCTempAct(_IPS_DCDCTempAct),EMS_AtmosphericPressureVD(_EMS_AtmosphericPressureVD),EMS_AtmosphericPressure(_EMS_AtmosphericPressure),EMS_AbsoluteThrottlepst(_EMS_AbsoluteThrottlepst),EMS_BrakePedalStVD(_EMS_BrakePedalStVD),EMS_BrakePedalSt(_EMS_BrakePedalSt),EMS_ClutchTorqVD(_EMS_ClutchTorqVD),EMS_ClutchTorq(_EMS_ClutchTorq),EMS_EngFrictionTorq(_EMS_EngFrictionTorq),EMS_EngFrictionTorqVD(_EMS_EngFrictionTorqVD),EMS_EMSReleased(_EMS_EMSReleased),EMS_EngWaterTemp(_EMS_EngWaterTemp),EMS_EngWaterTempVD(_EMS_EngWaterTempVD),EMS_EngOilPreLowLamp(_EMS_EngOilPreLowLamp),EMS_EPCSt(_EMS_EPCSt),EMS_EngIdleRefSpd(_EMS_EngIdleRefSpd),EMS_EngIntakeAirTemp(_EMS_EngIntakeAirTemp),EMS_EngIntakeAirTempVD(_EMS_EngIntakeAirTempVD),EMS_EngCalculatedLoad(_EMS_EngCalculatedLoad),EMS_FuelCutOff(_EMS_FuelCutOff),EMS_FuelPumpCtrl(_EMS_FuelPumpCtrl),EMS_FuelPumpCtrlVD(_EMS_FuelPumpCtrlVD),EMS_FuelPulse(_EMS_FuelPulse),EMS_GPFLightSt(_EMS_GPFLightSt),EMS_IdleSpdInfo(_EMS_IdleSpdInfo),EMS_MaxEngTorqNorm(_EMS_MaxEngTorqNorm),EMS_MilSt(_EMS_MilSt),EMS_MinClutchTorq(_EMS_MinClutchTorq),EMS_MinClutchTorqVD(_EMS_MinClutchTorqVD),EMS_MaxClutchTorqVD(_EMS_MaxClutchTorqVD),EMS_OBDWarmUpCycleSt(_EMS_OBDWarmUpCycleSt),EMS_OBDDrivingCycleStForPDTC(_EMS_OBDDrivingCycleStForPDTC),EMS_MaxClutchTorq(_EMS_MaxClutchTorq),EMS_HSDCtrlReq(_EMS_HSDCtrlReq) {}
	BDCTestEMS2(const BDCTestEMS2 &_x){
		IPS_DCDCTempAct = _x.IPS_DCDCTempAct;
		EMS_AtmosphericPressureVD = _x.EMS_AtmosphericPressureVD;
		EMS_AtmosphericPressure = _x.EMS_AtmosphericPressure;
		EMS_AbsoluteThrottlepst = _x.EMS_AbsoluteThrottlepst;
		EMS_BrakePedalStVD = _x.EMS_BrakePedalStVD;
		EMS_BrakePedalSt = _x.EMS_BrakePedalSt;
		EMS_ClutchTorqVD = _x.EMS_ClutchTorqVD;
		EMS_ClutchTorq = _x.EMS_ClutchTorq;
		EMS_EngFrictionTorq = _x.EMS_EngFrictionTorq;
		EMS_EngFrictionTorqVD = _x.EMS_EngFrictionTorqVD;
		EMS_EMSReleased = _x.EMS_EMSReleased;
		EMS_EngWaterTemp = _x.EMS_EngWaterTemp;
		EMS_EngWaterTempVD = _x.EMS_EngWaterTempVD;
		EMS_EngOilPreLowLamp = _x.EMS_EngOilPreLowLamp;
		EMS_EPCSt = _x.EMS_EPCSt;
		EMS_EngIdleRefSpd = _x.EMS_EngIdleRefSpd;
		EMS_EngIntakeAirTemp = _x.EMS_EngIntakeAirTemp;
		EMS_EngIntakeAirTempVD = _x.EMS_EngIntakeAirTempVD;
		EMS_EngCalculatedLoad = _x.EMS_EngCalculatedLoad;
		EMS_FuelCutOff = _x.EMS_FuelCutOff;
		EMS_FuelPumpCtrl = _x.EMS_FuelPumpCtrl;
		EMS_FuelPumpCtrlVD = _x.EMS_FuelPumpCtrlVD;
		EMS_FuelPulse = _x.EMS_FuelPulse;
		EMS_GPFLightSt = _x.EMS_GPFLightSt;
		EMS_IdleSpdInfo = _x.EMS_IdleSpdInfo;
		EMS_MaxEngTorqNorm = _x.EMS_MaxEngTorqNorm;
		EMS_MilSt = _x.EMS_MilSt;
		EMS_MinClutchTorq = _x.EMS_MinClutchTorq;
		EMS_MinClutchTorqVD = _x.EMS_MinClutchTorqVD;
		EMS_MaxClutchTorqVD = _x.EMS_MaxClutchTorqVD;
		EMS_OBDWarmUpCycleSt = _x.EMS_OBDWarmUpCycleSt;
		EMS_OBDDrivingCycleStForPDTC = _x.EMS_OBDDrivingCycleStForPDTC;
		EMS_MaxClutchTorq = _x.EMS_MaxClutchTorq;
		EMS_HSDCtrlReq = _x.EMS_HSDCtrlReq;
	}
	BDCTestEMS2(BDCTestEMS2 &&_x){
		IPS_DCDCTempAct = std::move(_x.IPS_DCDCTempAct);
		EMS_AtmosphericPressureVD = std::move(_x.EMS_AtmosphericPressureVD);
		EMS_AtmosphericPressure = std::move(_x.EMS_AtmosphericPressure);
		EMS_AbsoluteThrottlepst = std::move(_x.EMS_AbsoluteThrottlepst);
		EMS_BrakePedalStVD = std::move(_x.EMS_BrakePedalStVD);
		EMS_BrakePedalSt = std::move(_x.EMS_BrakePedalSt);
		EMS_ClutchTorqVD = std::move(_x.EMS_ClutchTorqVD);
		EMS_ClutchTorq = std::move(_x.EMS_ClutchTorq);
		EMS_EngFrictionTorq = std::move(_x.EMS_EngFrictionTorq);
		EMS_EngFrictionTorqVD = std::move(_x.EMS_EngFrictionTorqVD);
		EMS_EMSReleased = std::move(_x.EMS_EMSReleased);
		EMS_EngWaterTemp = std::move(_x.EMS_EngWaterTemp);
		EMS_EngWaterTempVD = std::move(_x.EMS_EngWaterTempVD);
		EMS_EngOilPreLowLamp = std::move(_x.EMS_EngOilPreLowLamp);
		EMS_EPCSt = std::move(_x.EMS_EPCSt);
		EMS_EngIdleRefSpd = std::move(_x.EMS_EngIdleRefSpd);
		EMS_EngIntakeAirTemp = std::move(_x.EMS_EngIntakeAirTemp);
		EMS_EngIntakeAirTempVD = std::move(_x.EMS_EngIntakeAirTempVD);
		EMS_EngCalculatedLoad = std::move(_x.EMS_EngCalculatedLoad);
		EMS_FuelCutOff = std::move(_x.EMS_FuelCutOff);
		EMS_FuelPumpCtrl = std::move(_x.EMS_FuelPumpCtrl);
		EMS_FuelPumpCtrlVD = std::move(_x.EMS_FuelPumpCtrlVD);
		EMS_FuelPulse = std::move(_x.EMS_FuelPulse);
		EMS_GPFLightSt = std::move(_x.EMS_GPFLightSt);
		EMS_IdleSpdInfo = std::move(_x.EMS_IdleSpdInfo);
		EMS_MaxEngTorqNorm = std::move(_x.EMS_MaxEngTorqNorm);
		EMS_MilSt = std::move(_x.EMS_MilSt);
		EMS_MinClutchTorq = std::move(_x.EMS_MinClutchTorq);
		EMS_MinClutchTorqVD = std::move(_x.EMS_MinClutchTorqVD);
		EMS_MaxClutchTorqVD = std::move(_x.EMS_MaxClutchTorqVD);
		EMS_OBDWarmUpCycleSt = std::move(_x.EMS_OBDWarmUpCycleSt);
		EMS_OBDDrivingCycleStForPDTC = std::move(_x.EMS_OBDDrivingCycleStForPDTC);
		EMS_MaxClutchTorq = std::move(_x.EMS_MaxClutchTorq);
		EMS_HSDCtrlReq = std::move(_x.EMS_HSDCtrlReq);
	}
	BDCTestEMS2& operator=(const BDCTestEMS2 &_x){
		IPS_DCDCTempAct = _x.IPS_DCDCTempAct;
		EMS_AtmosphericPressureVD = _x.EMS_AtmosphericPressureVD;
		EMS_AtmosphericPressure = _x.EMS_AtmosphericPressure;
		EMS_AbsoluteThrottlepst = _x.EMS_AbsoluteThrottlepst;
		EMS_BrakePedalStVD = _x.EMS_BrakePedalStVD;
		EMS_BrakePedalSt = _x.EMS_BrakePedalSt;
		EMS_ClutchTorqVD = _x.EMS_ClutchTorqVD;
		EMS_ClutchTorq = _x.EMS_ClutchTorq;
		EMS_EngFrictionTorq = _x.EMS_EngFrictionTorq;
		EMS_EngFrictionTorqVD = _x.EMS_EngFrictionTorqVD;
		EMS_EMSReleased = _x.EMS_EMSReleased;
		EMS_EngWaterTemp = _x.EMS_EngWaterTemp;
		EMS_EngWaterTempVD = _x.EMS_EngWaterTempVD;
		EMS_EngOilPreLowLamp = _x.EMS_EngOilPreLowLamp;
		EMS_EPCSt = _x.EMS_EPCSt;
		EMS_EngIdleRefSpd = _x.EMS_EngIdleRefSpd;
		EMS_EngIntakeAirTemp = _x.EMS_EngIntakeAirTemp;
		EMS_EngIntakeAirTempVD = _x.EMS_EngIntakeAirTempVD;
		EMS_EngCalculatedLoad = _x.EMS_EngCalculatedLoad;
		EMS_FuelCutOff = _x.EMS_FuelCutOff;
		EMS_FuelPumpCtrl = _x.EMS_FuelPumpCtrl;
		EMS_FuelPumpCtrlVD = _x.EMS_FuelPumpCtrlVD;
		EMS_FuelPulse = _x.EMS_FuelPulse;
		EMS_GPFLightSt = _x.EMS_GPFLightSt;
		EMS_IdleSpdInfo = _x.EMS_IdleSpdInfo;
		EMS_MaxEngTorqNorm = _x.EMS_MaxEngTorqNorm;
		EMS_MilSt = _x.EMS_MilSt;
		EMS_MinClutchTorq = _x.EMS_MinClutchTorq;
		EMS_MinClutchTorqVD = _x.EMS_MinClutchTorqVD;
		EMS_MaxClutchTorqVD = _x.EMS_MaxClutchTorqVD;
		EMS_OBDWarmUpCycleSt = _x.EMS_OBDWarmUpCycleSt;
		EMS_OBDDrivingCycleStForPDTC = _x.EMS_OBDDrivingCycleStForPDTC;
		EMS_MaxClutchTorq = _x.EMS_MaxClutchTorq;
		EMS_HSDCtrlReq = _x.EMS_HSDCtrlReq;
		return *this;
	}
	BDCTestEMS2& operator=(BDCTestEMS2 &&_x){
		IPS_DCDCTempAct = std::move(_x.IPS_DCDCTempAct);
		EMS_AtmosphericPressureVD = std::move(_x.EMS_AtmosphericPressureVD);
		EMS_AtmosphericPressure = std::move(_x.EMS_AtmosphericPressure);
		EMS_AbsoluteThrottlepst = std::move(_x.EMS_AbsoluteThrottlepst);
		EMS_BrakePedalStVD = std::move(_x.EMS_BrakePedalStVD);
		EMS_BrakePedalSt = std::move(_x.EMS_BrakePedalSt);
		EMS_ClutchTorqVD = std::move(_x.EMS_ClutchTorqVD);
		EMS_ClutchTorq = std::move(_x.EMS_ClutchTorq);
		EMS_EngFrictionTorq = std::move(_x.EMS_EngFrictionTorq);
		EMS_EngFrictionTorqVD = std::move(_x.EMS_EngFrictionTorqVD);
		EMS_EMSReleased = std::move(_x.EMS_EMSReleased);
		EMS_EngWaterTemp = std::move(_x.EMS_EngWaterTemp);
		EMS_EngWaterTempVD = std::move(_x.EMS_EngWaterTempVD);
		EMS_EngOilPreLowLamp = std::move(_x.EMS_EngOilPreLowLamp);
		EMS_EPCSt = std::move(_x.EMS_EPCSt);
		EMS_EngIdleRefSpd = std::move(_x.EMS_EngIdleRefSpd);
		EMS_EngIntakeAirTemp = std::move(_x.EMS_EngIntakeAirTemp);
		EMS_EngIntakeAirTempVD = std::move(_x.EMS_EngIntakeAirTempVD);
		EMS_EngCalculatedLoad = std::move(_x.EMS_EngCalculatedLoad);
		EMS_FuelCutOff = std::move(_x.EMS_FuelCutOff);
		EMS_FuelPumpCtrl = std::move(_x.EMS_FuelPumpCtrl);
		EMS_FuelPumpCtrlVD = std::move(_x.EMS_FuelPumpCtrlVD);
		EMS_FuelPulse = std::move(_x.EMS_FuelPulse);
		EMS_GPFLightSt = std::move(_x.EMS_GPFLightSt);
		EMS_IdleSpdInfo = std::move(_x.EMS_IdleSpdInfo);
		EMS_MaxEngTorqNorm = std::move(_x.EMS_MaxEngTorqNorm);
		EMS_MilSt = std::move(_x.EMS_MilSt);
		EMS_MinClutchTorq = std::move(_x.EMS_MinClutchTorq);
		EMS_MinClutchTorqVD = std::move(_x.EMS_MinClutchTorqVD);
		EMS_MaxClutchTorqVD = std::move(_x.EMS_MaxClutchTorqVD);
		EMS_OBDWarmUpCycleSt = std::move(_x.EMS_OBDWarmUpCycleSt);
		EMS_OBDDrivingCycleStForPDTC = std::move(_x.EMS_OBDDrivingCycleStForPDTC);
		EMS_MaxClutchTorq = std::move(_x.EMS_MaxClutchTorq);
		EMS_HSDCtrlReq = std::move(_x.EMS_HSDCtrlReq);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(IPS_DCDCTempAct);
		fun(EMS_AtmosphericPressureVD);
		fun(EMS_AtmosphericPressure);
		fun(EMS_AbsoluteThrottlepst);
		fun(EMS_BrakePedalStVD);
		fun(EMS_BrakePedalSt);
		fun(EMS_ClutchTorqVD);
		fun(EMS_ClutchTorq);
		fun(EMS_EngFrictionTorq);
		fun(EMS_EngFrictionTorqVD);
		fun(EMS_EMSReleased);
		fun(EMS_EngWaterTemp);
		fun(EMS_EngWaterTempVD);
		fun(EMS_EngOilPreLowLamp);
		fun(EMS_EPCSt);
		fun(EMS_EngIdleRefSpd);
		fun(EMS_EngIntakeAirTemp);
		fun(EMS_EngIntakeAirTempVD);
		fun(EMS_EngCalculatedLoad);
		fun(EMS_FuelCutOff);
		fun(EMS_FuelPumpCtrl);
		fun(EMS_FuelPumpCtrlVD);
		fun(EMS_FuelPulse);
		fun(EMS_GPFLightSt);
		fun(EMS_IdleSpdInfo);
		fun(EMS_MaxEngTorqNorm);
		fun(EMS_MilSt);
		fun(EMS_MinClutchTorq);
		fun(EMS_MinClutchTorqVD);
		fun(EMS_MaxClutchTorqVD);
		fun(EMS_OBDWarmUpCycleSt);
		fun(EMS_OBDDrivingCycleStForPDTC);
		fun(EMS_MaxClutchTorq);
		fun(EMS_HSDCtrlReq);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(IPS_DCDCTempAct);
		fun(EMS_AtmosphericPressureVD);
		fun(EMS_AtmosphericPressure);
		fun(EMS_AbsoluteThrottlepst);
		fun(EMS_BrakePedalStVD);
		fun(EMS_BrakePedalSt);
		fun(EMS_ClutchTorqVD);
		fun(EMS_ClutchTorq);
		fun(EMS_EngFrictionTorq);
		fun(EMS_EngFrictionTorqVD);
		fun(EMS_EMSReleased);
		fun(EMS_EngWaterTemp);
		fun(EMS_EngWaterTempVD);
		fun(EMS_EngOilPreLowLamp);
		fun(EMS_EPCSt);
		fun(EMS_EngIdleRefSpd);
		fun(EMS_EngIntakeAirTemp);
		fun(EMS_EngIntakeAirTempVD);
		fun(EMS_EngCalculatedLoad);
		fun(EMS_FuelCutOff);
		fun(EMS_FuelPumpCtrl);
		fun(EMS_FuelPumpCtrlVD);
		fun(EMS_FuelPulse);
		fun(EMS_GPFLightSt);
		fun(EMS_IdleSpdInfo);
		fun(EMS_MaxEngTorqNorm);
		fun(EMS_MilSt);
		fun(EMS_MinClutchTorq);
		fun(EMS_MinClutchTorqVD);
		fun(EMS_MaxClutchTorqVD);
		fun(EMS_OBDWarmUpCycleSt);
		fun(EMS_OBDDrivingCycleStForPDTC);
		fun(EMS_MaxClutchTorq);
		fun(EMS_HSDCtrlReq);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (IPS_DCDCTempAct);
		fun << (EMS_AtmosphericPressureVD);
		fun << (EMS_AtmosphericPressure);
		fun << (EMS_AbsoluteThrottlepst);
		fun << (EMS_BrakePedalStVD);
		fun << (EMS_BrakePedalSt);
		fun << (EMS_ClutchTorqVD);
		fun << (EMS_ClutchTorq);
		fun << (EMS_EngFrictionTorq);
		fun << (EMS_EngFrictionTorqVD);
		fun << (EMS_EMSReleased);
		fun << (EMS_EngWaterTemp);
		fun << (EMS_EngWaterTempVD);
		fun << (EMS_EngOilPreLowLamp);
		fun << (EMS_EPCSt);
		fun << (EMS_EngIdleRefSpd);
		fun << (EMS_EngIntakeAirTemp);
		fun << (EMS_EngIntakeAirTempVD);
		fun << (EMS_EngCalculatedLoad);
		fun << (EMS_FuelCutOff);
		fun << (EMS_FuelPumpCtrl);
		fun << (EMS_FuelPumpCtrlVD);
		fun << (EMS_FuelPulse);
		fun << (EMS_GPFLightSt);
		fun << (EMS_IdleSpdInfo);
		fun << (EMS_MaxEngTorqNorm);
		fun << (EMS_MilSt);
		fun << (EMS_MinClutchTorq);
		fun << (EMS_MinClutchTorqVD);
		fun << (EMS_MaxClutchTorqVD);
		fun << (EMS_OBDWarmUpCycleSt);
		fun << (EMS_OBDDrivingCycleStForPDTC);
		fun << (EMS_MaxClutchTorq);
		fun << (EMS_HSDCtrlReq);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (IPS_DCDCTempAct);
		fun >> (EMS_AtmosphericPressureVD);
		fun >> (EMS_AtmosphericPressure);
		fun >> (EMS_AbsoluteThrottlepst);
		fun >> (EMS_BrakePedalStVD);
		fun >> (EMS_BrakePedalSt);
		fun >> (EMS_ClutchTorqVD);
		fun >> (EMS_ClutchTorq);
		fun >> (EMS_EngFrictionTorq);
		fun >> (EMS_EngFrictionTorqVD);
		fun >> (EMS_EMSReleased);
		fun >> (EMS_EngWaterTemp);
		fun >> (EMS_EngWaterTempVD);
		fun >> (EMS_EngOilPreLowLamp);
		fun >> (EMS_EPCSt);
		fun >> (EMS_EngIdleRefSpd);
		fun >> (EMS_EngIntakeAirTemp);
		fun >> (EMS_EngIntakeAirTempVD);
		fun >> (EMS_EngCalculatedLoad);
		fun >> (EMS_FuelCutOff);
		fun >> (EMS_FuelPumpCtrl);
		fun >> (EMS_FuelPumpCtrlVD);
		fun >> (EMS_FuelPulse);
		fun >> (EMS_GPFLightSt);
		fun >> (EMS_IdleSpdInfo);
		fun >> (EMS_MaxEngTorqNorm);
		fun >> (EMS_MilSt);
		fun >> (EMS_MinClutchTorq);
		fun >> (EMS_MinClutchTorqVD);
		fun >> (EMS_MaxClutchTorqVD);
		fun >> (EMS_OBDWarmUpCycleSt);
		fun >> (EMS_OBDDrivingCycleStForPDTC);
		fun >> (EMS_MaxClutchTorq);
		fun >> (EMS_HSDCtrlReq);
	}
};

#endif //____BDCTESTEMS2_H__
