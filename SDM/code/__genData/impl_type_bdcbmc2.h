#ifndef ____BDCBMC2_H__
#define ____BDCBMC2_H__


#include "cstdint"






struct BDCBMC2 {
public:
	std::uint8_t BMC_FaultInSpectMod;
	std::uint16_t BMC_BattCurr;
	std::uint8_t BMC_HvilSt;
	std::uint16_t BMC_BattVolt;
	std::uint8_t BMC_HVBattSt;
	std::uint8_t BMC_PwrDwnReq;
	std::uint8_t BMC_PrecResOverTemp;
	std::uint8_t BMC_ThermalRunawayErr;
	std::uint16_t BMC_BattSocAct;
	std::uint16_t BMC_DchgCurrMax_Peak;
	std::uint16_t BMC_DchgCurrMax_Contns;
	std::uint8_t BMC_DiagErrCode;
	std::uint8_t BMC_BalExecutionStatus;
	std::uint8_t BMC_DcChgLowTempSt;
	std::uint8_t BMC_EMER_DutyCycle;
	std::uint8_t BMC_EMER_Frequency;
	std::uint8_t BMC_HVIL_DutyCycle;
	std::uint8_t BMC_HVIL_Frequency;
	std::uint8_t BMC_Insl_DetectiongSt;
/*
	BDCBMC2() {}
	~BDCBMC2() {}
	BDCBMC2(const std::uint8_t _BMC_FaultInSpectMod,const std::uint16_t _BMC_BattCurr,const std::uint8_t _BMC_HvilSt,const std::uint16_t _BMC_BattVolt,const std::uint8_t _BMC_HVBattSt,const std::uint8_t _BMC_PwrDwnReq,const std::uint8_t _BMC_PrecResOverTemp,const std::uint8_t _BMC_ThermalRunawayErr,const std::uint16_t _BMC_BattSocAct,const std::uint16_t _BMC_DchgCurrMax_Peak,const std::uint16_t _BMC_DchgCurrMax_Contns,const std::uint8_t _BMC_DiagErrCode,const std::uint8_t _BMC_BalExecutionStatus,const std::uint8_t _BMC_DcChgLowTempSt,const std::uint8_t _BMC_EMER_DutyCycle,const std::uint8_t _BMC_EMER_Frequency,const std::uint8_t _BMC_HVIL_DutyCycle,const std::uint8_t _BMC_HVIL_Frequency,const std::uint8_t _BMC_Insl_DetectiongSt):BMC_FaultInSpectMod(_BMC_FaultInSpectMod),BMC_BattCurr(_BMC_BattCurr),BMC_HvilSt(_BMC_HvilSt),BMC_BattVolt(_BMC_BattVolt),BMC_HVBattSt(_BMC_HVBattSt),BMC_PwrDwnReq(_BMC_PwrDwnReq),BMC_PrecResOverTemp(_BMC_PrecResOverTemp),BMC_ThermalRunawayErr(_BMC_ThermalRunawayErr),BMC_BattSocAct(_BMC_BattSocAct),BMC_DchgCurrMax_Peak(_BMC_DchgCurrMax_Peak),BMC_DchgCurrMax_Contns(_BMC_DchgCurrMax_Contns),BMC_DiagErrCode(_BMC_DiagErrCode),BMC_BalExecutionStatus(_BMC_BalExecutionStatus),BMC_DcChgLowTempSt(_BMC_DcChgLowTempSt),BMC_EMER_DutyCycle(_BMC_EMER_DutyCycle),BMC_EMER_Frequency(_BMC_EMER_Frequency),BMC_HVIL_DutyCycle(_BMC_HVIL_DutyCycle),BMC_HVIL_Frequency(_BMC_HVIL_Frequency),BMC_Insl_DetectiongSt(_BMC_Insl_DetectiongSt) {}
	BDCBMC2(const BDCBMC2 &_x){
		BMC_FaultInSpectMod = _x.BMC_FaultInSpectMod;
		BMC_BattCurr = _x.BMC_BattCurr;
		BMC_HvilSt = _x.BMC_HvilSt;
		BMC_BattVolt = _x.BMC_BattVolt;
		BMC_HVBattSt = _x.BMC_HVBattSt;
		BMC_PwrDwnReq = _x.BMC_PwrDwnReq;
		BMC_PrecResOverTemp = _x.BMC_PrecResOverTemp;
		BMC_ThermalRunawayErr = _x.BMC_ThermalRunawayErr;
		BMC_BattSocAct = _x.BMC_BattSocAct;
		BMC_DchgCurrMax_Peak = _x.BMC_DchgCurrMax_Peak;
		BMC_DchgCurrMax_Contns = _x.BMC_DchgCurrMax_Contns;
		BMC_DiagErrCode = _x.BMC_DiagErrCode;
		BMC_BalExecutionStatus = _x.BMC_BalExecutionStatus;
		BMC_DcChgLowTempSt = _x.BMC_DcChgLowTempSt;
		BMC_EMER_DutyCycle = _x.BMC_EMER_DutyCycle;
		BMC_EMER_Frequency = _x.BMC_EMER_Frequency;
		BMC_HVIL_DutyCycle = _x.BMC_HVIL_DutyCycle;
		BMC_HVIL_Frequency = _x.BMC_HVIL_Frequency;
		BMC_Insl_DetectiongSt = _x.BMC_Insl_DetectiongSt;
	}
	BDCBMC2(BDCBMC2 &&_x){
		BMC_FaultInSpectMod = std::move(_x.BMC_FaultInSpectMod);
		BMC_BattCurr = std::move(_x.BMC_BattCurr);
		BMC_HvilSt = std::move(_x.BMC_HvilSt);
		BMC_BattVolt = std::move(_x.BMC_BattVolt);
		BMC_HVBattSt = std::move(_x.BMC_HVBattSt);
		BMC_PwrDwnReq = std::move(_x.BMC_PwrDwnReq);
		BMC_PrecResOverTemp = std::move(_x.BMC_PrecResOverTemp);
		BMC_ThermalRunawayErr = std::move(_x.BMC_ThermalRunawayErr);
		BMC_BattSocAct = std::move(_x.BMC_BattSocAct);
		BMC_DchgCurrMax_Peak = std::move(_x.BMC_DchgCurrMax_Peak);
		BMC_DchgCurrMax_Contns = std::move(_x.BMC_DchgCurrMax_Contns);
		BMC_DiagErrCode = std::move(_x.BMC_DiagErrCode);
		BMC_BalExecutionStatus = std::move(_x.BMC_BalExecutionStatus);
		BMC_DcChgLowTempSt = std::move(_x.BMC_DcChgLowTempSt);
		BMC_EMER_DutyCycle = std::move(_x.BMC_EMER_DutyCycle);
		BMC_EMER_Frequency = std::move(_x.BMC_EMER_Frequency);
		BMC_HVIL_DutyCycle = std::move(_x.BMC_HVIL_DutyCycle);
		BMC_HVIL_Frequency = std::move(_x.BMC_HVIL_Frequency);
		BMC_Insl_DetectiongSt = std::move(_x.BMC_Insl_DetectiongSt);
	}
	BDCBMC2& operator=(const BDCBMC2 &_x){
		BMC_FaultInSpectMod = _x.BMC_FaultInSpectMod;
		BMC_BattCurr = _x.BMC_BattCurr;
		BMC_HvilSt = _x.BMC_HvilSt;
		BMC_BattVolt = _x.BMC_BattVolt;
		BMC_HVBattSt = _x.BMC_HVBattSt;
		BMC_PwrDwnReq = _x.BMC_PwrDwnReq;
		BMC_PrecResOverTemp = _x.BMC_PrecResOverTemp;
		BMC_ThermalRunawayErr = _x.BMC_ThermalRunawayErr;
		BMC_BattSocAct = _x.BMC_BattSocAct;
		BMC_DchgCurrMax_Peak = _x.BMC_DchgCurrMax_Peak;
		BMC_DchgCurrMax_Contns = _x.BMC_DchgCurrMax_Contns;
		BMC_DiagErrCode = _x.BMC_DiagErrCode;
		BMC_BalExecutionStatus = _x.BMC_BalExecutionStatus;
		BMC_DcChgLowTempSt = _x.BMC_DcChgLowTempSt;
		BMC_EMER_DutyCycle = _x.BMC_EMER_DutyCycle;
		BMC_EMER_Frequency = _x.BMC_EMER_Frequency;
		BMC_HVIL_DutyCycle = _x.BMC_HVIL_DutyCycle;
		BMC_HVIL_Frequency = _x.BMC_HVIL_Frequency;
		BMC_Insl_DetectiongSt = _x.BMC_Insl_DetectiongSt;
		return *this;
	}
	BDCBMC2& operator=(BDCBMC2 &&_x){
		BMC_FaultInSpectMod = std::move(_x.BMC_FaultInSpectMod);
		BMC_BattCurr = std::move(_x.BMC_BattCurr);
		BMC_HvilSt = std::move(_x.BMC_HvilSt);
		BMC_BattVolt = std::move(_x.BMC_BattVolt);
		BMC_HVBattSt = std::move(_x.BMC_HVBattSt);
		BMC_PwrDwnReq = std::move(_x.BMC_PwrDwnReq);
		BMC_PrecResOverTemp = std::move(_x.BMC_PrecResOverTemp);
		BMC_ThermalRunawayErr = std::move(_x.BMC_ThermalRunawayErr);
		BMC_BattSocAct = std::move(_x.BMC_BattSocAct);
		BMC_DchgCurrMax_Peak = std::move(_x.BMC_DchgCurrMax_Peak);
		BMC_DchgCurrMax_Contns = std::move(_x.BMC_DchgCurrMax_Contns);
		BMC_DiagErrCode = std::move(_x.BMC_DiagErrCode);
		BMC_BalExecutionStatus = std::move(_x.BMC_BalExecutionStatus);
		BMC_DcChgLowTempSt = std::move(_x.BMC_DcChgLowTempSt);
		BMC_EMER_DutyCycle = std::move(_x.BMC_EMER_DutyCycle);
		BMC_EMER_Frequency = std::move(_x.BMC_EMER_Frequency);
		BMC_HVIL_DutyCycle = std::move(_x.BMC_HVIL_DutyCycle);
		BMC_HVIL_Frequency = std::move(_x.BMC_HVIL_Frequency);
		BMC_Insl_DetectiongSt = std::move(_x.BMC_Insl_DetectiongSt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(BMC_FaultInSpectMod);
		fun(BMC_BattCurr);
		fun(BMC_HvilSt);
		fun(BMC_BattVolt);
		fun(BMC_HVBattSt);
		fun(BMC_PwrDwnReq);
		fun(BMC_PrecResOverTemp);
		fun(BMC_ThermalRunawayErr);
		fun(BMC_BattSocAct);
		fun(BMC_DchgCurrMax_Peak);
		fun(BMC_DchgCurrMax_Contns);
		fun(BMC_DiagErrCode);
		fun(BMC_BalExecutionStatus);
		fun(BMC_DcChgLowTempSt);
		fun(BMC_EMER_DutyCycle);
		fun(BMC_EMER_Frequency);
		fun(BMC_HVIL_DutyCycle);
		fun(BMC_HVIL_Frequency);
		fun(BMC_Insl_DetectiongSt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(BMC_FaultInSpectMod);
		fun(BMC_BattCurr);
		fun(BMC_HvilSt);
		fun(BMC_BattVolt);
		fun(BMC_HVBattSt);
		fun(BMC_PwrDwnReq);
		fun(BMC_PrecResOverTemp);
		fun(BMC_ThermalRunawayErr);
		fun(BMC_BattSocAct);
		fun(BMC_DchgCurrMax_Peak);
		fun(BMC_DchgCurrMax_Contns);
		fun(BMC_DiagErrCode);
		fun(BMC_BalExecutionStatus);
		fun(BMC_DcChgLowTempSt);
		fun(BMC_EMER_DutyCycle);
		fun(BMC_EMER_Frequency);
		fun(BMC_HVIL_DutyCycle);
		fun(BMC_HVIL_Frequency);
		fun(BMC_Insl_DetectiongSt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (BMC_FaultInSpectMod);
		fun << (BMC_BattCurr);
		fun << (BMC_HvilSt);
		fun << (BMC_BattVolt);
		fun << (BMC_HVBattSt);
		fun << (BMC_PwrDwnReq);
		fun << (BMC_PrecResOverTemp);
		fun << (BMC_ThermalRunawayErr);
		fun << (BMC_BattSocAct);
		fun << (BMC_DchgCurrMax_Peak);
		fun << (BMC_DchgCurrMax_Contns);
		fun << (BMC_DiagErrCode);
		fun << (BMC_BalExecutionStatus);
		fun << (BMC_DcChgLowTempSt);
		fun << (BMC_EMER_DutyCycle);
		fun << (BMC_EMER_Frequency);
		fun << (BMC_HVIL_DutyCycle);
		fun << (BMC_HVIL_Frequency);
		fun << (BMC_Insl_DetectiongSt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (BMC_FaultInSpectMod);
		fun >> (BMC_BattCurr);
		fun >> (BMC_HvilSt);
		fun >> (BMC_BattVolt);
		fun >> (BMC_HVBattSt);
		fun >> (BMC_PwrDwnReq);
		fun >> (BMC_PrecResOverTemp);
		fun >> (BMC_ThermalRunawayErr);
		fun >> (BMC_BattSocAct);
		fun >> (BMC_DchgCurrMax_Peak);
		fun >> (BMC_DchgCurrMax_Contns);
		fun >> (BMC_DiagErrCode);
		fun >> (BMC_BalExecutionStatus);
		fun >> (BMC_DcChgLowTempSt);
		fun >> (BMC_EMER_DutyCycle);
		fun >> (BMC_EMER_Frequency);
		fun >> (BMC_HVIL_DutyCycle);
		fun >> (BMC_HVIL_Frequency);
		fun >> (BMC_Insl_DetectiongSt);
	}
};

#endif //____BDCBMC2_H__
