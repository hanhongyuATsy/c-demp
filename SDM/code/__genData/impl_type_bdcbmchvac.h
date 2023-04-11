#ifndef ____BDCBMCHVAC_H__
#define ____BDCBMCHVAC_H__


#include "cstdint"






struct BDCBMCHVAC {
public:
	std::uint16_t HVAC_ECPPwrConsump;
	std::uint16_t HVAC_PTCPwrConsmp;
	std::uint8_t HVAC_ACSt;
	std::uint8_t HVAC_PTCOutletTargetTemp;
	std::uint8_t HVAC_HeaterPumpSpdSet;
	std::uint8_t HVAC_ECPFault;
	std::uint8_t HVAC_PTCFault;
	std::uint8_t HVAC_PTCSt;
	std::uint8_t HVAC_CoolFanDutyCycleReq;
	std::uint8_t HVAC_CoolFanDutyCycleReqVD;
	std::uint8_t HVAC_CondDefSt;
	std::uint8_t HVAC_EVAvalve;
	std::uint8_t HVAC_StsCabinCoolPrioReq;
	std::uint8_t HVAC_StsCabinHeatPrioReq;
	std::uint8_t HVAC_ActGrillDutyCycleReq;
	std::uint8_t HVAC_ActGrillDutyCycleReqVD;
	std::uint8_t HVAC_ECV_PosnSet;
	std::uint8_t HVAC_WasteHeatTempMinReq;
	std::uint8_t HVAC_HeatPumpMode;
	std::uint8_t HVAC_ECPTargetDuty;
	std::uint8_t HVAC_WasteHeatTempMaxReq;
	std::uint8_t HVAC_CabinHeatReq;
	std::uint8_t HVAC_WindExitModeAct;
	std::uint8_t HVAC_WindExitSpdLvlAct;
	std::uint8_t HVAC_CompLPFault;
/*
	BDCBMCHVAC() {}
	~BDCBMCHVAC() {}
	BDCBMCHVAC(const std::uint16_t _HVAC_ECPPwrConsump,const std::uint16_t _HVAC_PTCPwrConsmp,const std::uint8_t _HVAC_ACSt,const std::uint8_t _HVAC_PTCOutletTargetTemp,const std::uint8_t _HVAC_HeaterPumpSpdSet,const std::uint8_t _HVAC_ECPFault,const std::uint8_t _HVAC_PTCFault,const std::uint8_t _HVAC_PTCSt,const std::uint8_t _HVAC_CoolFanDutyCycleReq,const std::uint8_t _HVAC_CoolFanDutyCycleReqVD,const std::uint8_t _HVAC_CondDefSt,const std::uint8_t _HVAC_EVAvalve,const std::uint8_t _HVAC_StsCabinCoolPrioReq,const std::uint8_t _HVAC_StsCabinHeatPrioReq,const std::uint8_t _HVAC_ActGrillDutyCycleReq,const std::uint8_t _HVAC_ActGrillDutyCycleReqVD,const std::uint8_t _HVAC_ECV_PosnSet,const std::uint8_t _HVAC_WasteHeatTempMinReq,const std::uint8_t _HVAC_HeatPumpMode,const std::uint8_t _HVAC_ECPTargetDuty,const std::uint8_t _HVAC_WasteHeatTempMaxReq,const std::uint8_t _HVAC_CabinHeatReq,const std::uint8_t _HVAC_WindExitModeAct,const std::uint8_t _HVAC_WindExitSpdLvlAct,const std::uint8_t _HVAC_CompLPFault):HVAC_ECPPwrConsump(_HVAC_ECPPwrConsump),HVAC_PTCPwrConsmp(_HVAC_PTCPwrConsmp),HVAC_ACSt(_HVAC_ACSt),HVAC_PTCOutletTargetTemp(_HVAC_PTCOutletTargetTemp),HVAC_HeaterPumpSpdSet(_HVAC_HeaterPumpSpdSet),HVAC_ECPFault(_HVAC_ECPFault),HVAC_PTCFault(_HVAC_PTCFault),HVAC_PTCSt(_HVAC_PTCSt),HVAC_CoolFanDutyCycleReq(_HVAC_CoolFanDutyCycleReq),HVAC_CoolFanDutyCycleReqVD(_HVAC_CoolFanDutyCycleReqVD),HVAC_CondDefSt(_HVAC_CondDefSt),HVAC_EVAvalve(_HVAC_EVAvalve),HVAC_StsCabinCoolPrioReq(_HVAC_StsCabinCoolPrioReq),HVAC_StsCabinHeatPrioReq(_HVAC_StsCabinHeatPrioReq),HVAC_ActGrillDutyCycleReq(_HVAC_ActGrillDutyCycleReq),HVAC_ActGrillDutyCycleReqVD(_HVAC_ActGrillDutyCycleReqVD),HVAC_ECV_PosnSet(_HVAC_ECV_PosnSet),HVAC_WasteHeatTempMinReq(_HVAC_WasteHeatTempMinReq),HVAC_HeatPumpMode(_HVAC_HeatPumpMode),HVAC_ECPTargetDuty(_HVAC_ECPTargetDuty),HVAC_WasteHeatTempMaxReq(_HVAC_WasteHeatTempMaxReq),HVAC_CabinHeatReq(_HVAC_CabinHeatReq),HVAC_WindExitModeAct(_HVAC_WindExitModeAct),HVAC_WindExitSpdLvlAct(_HVAC_WindExitSpdLvlAct),HVAC_CompLPFault(_HVAC_CompLPFault) {}
	BDCBMCHVAC(const BDCBMCHVAC &_x){
		HVAC_ECPPwrConsump = _x.HVAC_ECPPwrConsump;
		HVAC_PTCPwrConsmp = _x.HVAC_PTCPwrConsmp;
		HVAC_ACSt = _x.HVAC_ACSt;
		HVAC_PTCOutletTargetTemp = _x.HVAC_PTCOutletTargetTemp;
		HVAC_HeaterPumpSpdSet = _x.HVAC_HeaterPumpSpdSet;
		HVAC_ECPFault = _x.HVAC_ECPFault;
		HVAC_PTCFault = _x.HVAC_PTCFault;
		HVAC_PTCSt = _x.HVAC_PTCSt;
		HVAC_CoolFanDutyCycleReq = _x.HVAC_CoolFanDutyCycleReq;
		HVAC_CoolFanDutyCycleReqVD = _x.HVAC_CoolFanDutyCycleReqVD;
		HVAC_CondDefSt = _x.HVAC_CondDefSt;
		HVAC_EVAvalve = _x.HVAC_EVAvalve;
		HVAC_StsCabinCoolPrioReq = _x.HVAC_StsCabinCoolPrioReq;
		HVAC_StsCabinHeatPrioReq = _x.HVAC_StsCabinHeatPrioReq;
		HVAC_ActGrillDutyCycleReq = _x.HVAC_ActGrillDutyCycleReq;
		HVAC_ActGrillDutyCycleReqVD = _x.HVAC_ActGrillDutyCycleReqVD;
		HVAC_ECV_PosnSet = _x.HVAC_ECV_PosnSet;
		HVAC_WasteHeatTempMinReq = _x.HVAC_WasteHeatTempMinReq;
		HVAC_HeatPumpMode = _x.HVAC_HeatPumpMode;
		HVAC_ECPTargetDuty = _x.HVAC_ECPTargetDuty;
		HVAC_WasteHeatTempMaxReq = _x.HVAC_WasteHeatTempMaxReq;
		HVAC_CabinHeatReq = _x.HVAC_CabinHeatReq;
		HVAC_WindExitModeAct = _x.HVAC_WindExitModeAct;
		HVAC_WindExitSpdLvlAct = _x.HVAC_WindExitSpdLvlAct;
		HVAC_CompLPFault = _x.HVAC_CompLPFault;
	}
	BDCBMCHVAC(BDCBMCHVAC &&_x){
		HVAC_ECPPwrConsump = std::move(_x.HVAC_ECPPwrConsump);
		HVAC_PTCPwrConsmp = std::move(_x.HVAC_PTCPwrConsmp);
		HVAC_ACSt = std::move(_x.HVAC_ACSt);
		HVAC_PTCOutletTargetTemp = std::move(_x.HVAC_PTCOutletTargetTemp);
		HVAC_HeaterPumpSpdSet = std::move(_x.HVAC_HeaterPumpSpdSet);
		HVAC_ECPFault = std::move(_x.HVAC_ECPFault);
		HVAC_PTCFault = std::move(_x.HVAC_PTCFault);
		HVAC_PTCSt = std::move(_x.HVAC_PTCSt);
		HVAC_CoolFanDutyCycleReq = std::move(_x.HVAC_CoolFanDutyCycleReq);
		HVAC_CoolFanDutyCycleReqVD = std::move(_x.HVAC_CoolFanDutyCycleReqVD);
		HVAC_CondDefSt = std::move(_x.HVAC_CondDefSt);
		HVAC_EVAvalve = std::move(_x.HVAC_EVAvalve);
		HVAC_StsCabinCoolPrioReq = std::move(_x.HVAC_StsCabinCoolPrioReq);
		HVAC_StsCabinHeatPrioReq = std::move(_x.HVAC_StsCabinHeatPrioReq);
		HVAC_ActGrillDutyCycleReq = std::move(_x.HVAC_ActGrillDutyCycleReq);
		HVAC_ActGrillDutyCycleReqVD = std::move(_x.HVAC_ActGrillDutyCycleReqVD);
		HVAC_ECV_PosnSet = std::move(_x.HVAC_ECV_PosnSet);
		HVAC_WasteHeatTempMinReq = std::move(_x.HVAC_WasteHeatTempMinReq);
		HVAC_HeatPumpMode = std::move(_x.HVAC_HeatPumpMode);
		HVAC_ECPTargetDuty = std::move(_x.HVAC_ECPTargetDuty);
		HVAC_WasteHeatTempMaxReq = std::move(_x.HVAC_WasteHeatTempMaxReq);
		HVAC_CabinHeatReq = std::move(_x.HVAC_CabinHeatReq);
		HVAC_WindExitModeAct = std::move(_x.HVAC_WindExitModeAct);
		HVAC_WindExitSpdLvlAct = std::move(_x.HVAC_WindExitSpdLvlAct);
		HVAC_CompLPFault = std::move(_x.HVAC_CompLPFault);
	}
	BDCBMCHVAC& operator=(const BDCBMCHVAC &_x){
		HVAC_ECPPwrConsump = _x.HVAC_ECPPwrConsump;
		HVAC_PTCPwrConsmp = _x.HVAC_PTCPwrConsmp;
		HVAC_ACSt = _x.HVAC_ACSt;
		HVAC_PTCOutletTargetTemp = _x.HVAC_PTCOutletTargetTemp;
		HVAC_HeaterPumpSpdSet = _x.HVAC_HeaterPumpSpdSet;
		HVAC_ECPFault = _x.HVAC_ECPFault;
		HVAC_PTCFault = _x.HVAC_PTCFault;
		HVAC_PTCSt = _x.HVAC_PTCSt;
		HVAC_CoolFanDutyCycleReq = _x.HVAC_CoolFanDutyCycleReq;
		HVAC_CoolFanDutyCycleReqVD = _x.HVAC_CoolFanDutyCycleReqVD;
		HVAC_CondDefSt = _x.HVAC_CondDefSt;
		HVAC_EVAvalve = _x.HVAC_EVAvalve;
		HVAC_StsCabinCoolPrioReq = _x.HVAC_StsCabinCoolPrioReq;
		HVAC_StsCabinHeatPrioReq = _x.HVAC_StsCabinHeatPrioReq;
		HVAC_ActGrillDutyCycleReq = _x.HVAC_ActGrillDutyCycleReq;
		HVAC_ActGrillDutyCycleReqVD = _x.HVAC_ActGrillDutyCycleReqVD;
		HVAC_ECV_PosnSet = _x.HVAC_ECV_PosnSet;
		HVAC_WasteHeatTempMinReq = _x.HVAC_WasteHeatTempMinReq;
		HVAC_HeatPumpMode = _x.HVAC_HeatPumpMode;
		HVAC_ECPTargetDuty = _x.HVAC_ECPTargetDuty;
		HVAC_WasteHeatTempMaxReq = _x.HVAC_WasteHeatTempMaxReq;
		HVAC_CabinHeatReq = _x.HVAC_CabinHeatReq;
		HVAC_WindExitModeAct = _x.HVAC_WindExitModeAct;
		HVAC_WindExitSpdLvlAct = _x.HVAC_WindExitSpdLvlAct;
		HVAC_CompLPFault = _x.HVAC_CompLPFault;
		return *this;
	}
	BDCBMCHVAC& operator=(BDCBMCHVAC &&_x){
		HVAC_ECPPwrConsump = std::move(_x.HVAC_ECPPwrConsump);
		HVAC_PTCPwrConsmp = std::move(_x.HVAC_PTCPwrConsmp);
		HVAC_ACSt = std::move(_x.HVAC_ACSt);
		HVAC_PTCOutletTargetTemp = std::move(_x.HVAC_PTCOutletTargetTemp);
		HVAC_HeaterPumpSpdSet = std::move(_x.HVAC_HeaterPumpSpdSet);
		HVAC_ECPFault = std::move(_x.HVAC_ECPFault);
		HVAC_PTCFault = std::move(_x.HVAC_PTCFault);
		HVAC_PTCSt = std::move(_x.HVAC_PTCSt);
		HVAC_CoolFanDutyCycleReq = std::move(_x.HVAC_CoolFanDutyCycleReq);
		HVAC_CoolFanDutyCycleReqVD = std::move(_x.HVAC_CoolFanDutyCycleReqVD);
		HVAC_CondDefSt = std::move(_x.HVAC_CondDefSt);
		HVAC_EVAvalve = std::move(_x.HVAC_EVAvalve);
		HVAC_StsCabinCoolPrioReq = std::move(_x.HVAC_StsCabinCoolPrioReq);
		HVAC_StsCabinHeatPrioReq = std::move(_x.HVAC_StsCabinHeatPrioReq);
		HVAC_ActGrillDutyCycleReq = std::move(_x.HVAC_ActGrillDutyCycleReq);
		HVAC_ActGrillDutyCycleReqVD = std::move(_x.HVAC_ActGrillDutyCycleReqVD);
		HVAC_ECV_PosnSet = std::move(_x.HVAC_ECV_PosnSet);
		HVAC_WasteHeatTempMinReq = std::move(_x.HVAC_WasteHeatTempMinReq);
		HVAC_HeatPumpMode = std::move(_x.HVAC_HeatPumpMode);
		HVAC_ECPTargetDuty = std::move(_x.HVAC_ECPTargetDuty);
		HVAC_WasteHeatTempMaxReq = std::move(_x.HVAC_WasteHeatTempMaxReq);
		HVAC_CabinHeatReq = std::move(_x.HVAC_CabinHeatReq);
		HVAC_WindExitModeAct = std::move(_x.HVAC_WindExitModeAct);
		HVAC_WindExitSpdLvlAct = std::move(_x.HVAC_WindExitSpdLvlAct);
		HVAC_CompLPFault = std::move(_x.HVAC_CompLPFault);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(HVAC_ECPPwrConsump);
		fun(HVAC_PTCPwrConsmp);
		fun(HVAC_ACSt);
		fun(HVAC_PTCOutletTargetTemp);
		fun(HVAC_HeaterPumpSpdSet);
		fun(HVAC_ECPFault);
		fun(HVAC_PTCFault);
		fun(HVAC_PTCSt);
		fun(HVAC_CoolFanDutyCycleReq);
		fun(HVAC_CoolFanDutyCycleReqVD);
		fun(HVAC_CondDefSt);
		fun(HVAC_EVAvalve);
		fun(HVAC_StsCabinCoolPrioReq);
		fun(HVAC_StsCabinHeatPrioReq);
		fun(HVAC_ActGrillDutyCycleReq);
		fun(HVAC_ActGrillDutyCycleReqVD);
		fun(HVAC_ECV_PosnSet);
		fun(HVAC_WasteHeatTempMinReq);
		fun(HVAC_HeatPumpMode);
		fun(HVAC_ECPTargetDuty);
		fun(HVAC_WasteHeatTempMaxReq);
		fun(HVAC_CabinHeatReq);
		fun(HVAC_WindExitModeAct);
		fun(HVAC_WindExitSpdLvlAct);
		fun(HVAC_CompLPFault);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(HVAC_ECPPwrConsump);
		fun(HVAC_PTCPwrConsmp);
		fun(HVAC_ACSt);
		fun(HVAC_PTCOutletTargetTemp);
		fun(HVAC_HeaterPumpSpdSet);
		fun(HVAC_ECPFault);
		fun(HVAC_PTCFault);
		fun(HVAC_PTCSt);
		fun(HVAC_CoolFanDutyCycleReq);
		fun(HVAC_CoolFanDutyCycleReqVD);
		fun(HVAC_CondDefSt);
		fun(HVAC_EVAvalve);
		fun(HVAC_StsCabinCoolPrioReq);
		fun(HVAC_StsCabinHeatPrioReq);
		fun(HVAC_ActGrillDutyCycleReq);
		fun(HVAC_ActGrillDutyCycleReqVD);
		fun(HVAC_ECV_PosnSet);
		fun(HVAC_WasteHeatTempMinReq);
		fun(HVAC_HeatPumpMode);
		fun(HVAC_ECPTargetDuty);
		fun(HVAC_WasteHeatTempMaxReq);
		fun(HVAC_CabinHeatReq);
		fun(HVAC_WindExitModeAct);
		fun(HVAC_WindExitSpdLvlAct);
		fun(HVAC_CompLPFault);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (HVAC_ECPPwrConsump);
		fun << (HVAC_PTCPwrConsmp);
		fun << (HVAC_ACSt);
		fun << (HVAC_PTCOutletTargetTemp);
		fun << (HVAC_HeaterPumpSpdSet);
		fun << (HVAC_ECPFault);
		fun << (HVAC_PTCFault);
		fun << (HVAC_PTCSt);
		fun << (HVAC_CoolFanDutyCycleReq);
		fun << (HVAC_CoolFanDutyCycleReqVD);
		fun << (HVAC_CondDefSt);
		fun << (HVAC_EVAvalve);
		fun << (HVAC_StsCabinCoolPrioReq);
		fun << (HVAC_StsCabinHeatPrioReq);
		fun << (HVAC_ActGrillDutyCycleReq);
		fun << (HVAC_ActGrillDutyCycleReqVD);
		fun << (HVAC_ECV_PosnSet);
		fun << (HVAC_WasteHeatTempMinReq);
		fun << (HVAC_HeatPumpMode);
		fun << (HVAC_ECPTargetDuty);
		fun << (HVAC_WasteHeatTempMaxReq);
		fun << (HVAC_CabinHeatReq);
		fun << (HVAC_WindExitModeAct);
		fun << (HVAC_WindExitSpdLvlAct);
		fun << (HVAC_CompLPFault);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (HVAC_ECPPwrConsump);
		fun >> (HVAC_PTCPwrConsmp);
		fun >> (HVAC_ACSt);
		fun >> (HVAC_PTCOutletTargetTemp);
		fun >> (HVAC_HeaterPumpSpdSet);
		fun >> (HVAC_ECPFault);
		fun >> (HVAC_PTCFault);
		fun >> (HVAC_PTCSt);
		fun >> (HVAC_CoolFanDutyCycleReq);
		fun >> (HVAC_CoolFanDutyCycleReqVD);
		fun >> (HVAC_CondDefSt);
		fun >> (HVAC_EVAvalve);
		fun >> (HVAC_StsCabinCoolPrioReq);
		fun >> (HVAC_StsCabinHeatPrioReq);
		fun >> (HVAC_ActGrillDutyCycleReq);
		fun >> (HVAC_ActGrillDutyCycleReqVD);
		fun >> (HVAC_ECV_PosnSet);
		fun >> (HVAC_WasteHeatTempMinReq);
		fun >> (HVAC_HeatPumpMode);
		fun >> (HVAC_ECPTargetDuty);
		fun >> (HVAC_WasteHeatTempMaxReq);
		fun >> (HVAC_CabinHeatReq);
		fun >> (HVAC_WindExitModeAct);
		fun >> (HVAC_WindExitSpdLvlAct);
		fun >> (HVAC_CompLPFault);
	}
};

#endif //____BDCBMCHVAC_H__
