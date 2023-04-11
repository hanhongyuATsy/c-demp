#ifndef ____BDCBMCBMC2_H__
#define ____BDCBMCBMC2_H__


#include "cstdint"






struct BDCBMCBMC2 {
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
	std::uint8_t BMC_DrivePrecRlySts;
	std::uint8_t BMC_DriveNegRlySts;
	std::uint8_t BMC_DrivePosRlySts;
	std::uint8_t BMC_DriveDCRlySts;
	std::uint16_t BMC_NegVolt;
	std::uint16_t BMC_BusVolt;
	std::uint16_t BMC_DCVolt;
	std::uint8_t BMC_StBcu;
	std::uint8_t BMC_StNM;
	std::uint8_t BMC_LvPwrSysMsgWarn;
	std::uint8_t BMC_PowerFailInfo;
	std::uint8_t BMC_ResetReason;
	std::uint8_t BMC_StNvMSocReadState;
	std::uint8_t BMC_DcChgrErrInfo;
	std::uint8_t BMC_OperationModeSt;
	std::uint8_t BMC_Ins_Step;
	std::uint16_t BMC_Ins_PosVolt;
	std::uint16_t BMC_Ins_NegVolt;
/*
	BDCBMCBMC2() {}
	~BDCBMCBMC2() {}
	BDCBMCBMC2(const std::uint8_t _BMC_FaultInSpectMod,const std::uint16_t _BMC_BattCurr,const std::uint8_t _BMC_HvilSt,const std::uint16_t _BMC_BattVolt,const std::uint8_t _BMC_HVBattSt,const std::uint8_t _BMC_PwrDwnReq,const std::uint8_t _BMC_PrecResOverTemp,const std::uint8_t _BMC_ThermalRunawayErr,const std::uint16_t _BMC_BattSocAct,const std::uint16_t _BMC_DchgCurrMax_Peak,const std::uint16_t _BMC_DchgCurrMax_Contns,const std::uint8_t _BMC_DiagErrCode,const std::uint8_t _BMC_BalExecutionStatus,const std::uint8_t _BMC_DcChgLowTempSt,const std::uint8_t _BMC_EMER_DutyCycle,const std::uint8_t _BMC_EMER_Frequency,const std::uint8_t _BMC_HVIL_DutyCycle,const std::uint8_t _BMC_HVIL_Frequency,const std::uint8_t _BMC_Insl_DetectiongSt,const std::uint8_t _BMC_DrivePrecRlySts,const std::uint8_t _BMC_DriveNegRlySts,const std::uint8_t _BMC_DrivePosRlySts,const std::uint8_t _BMC_DriveDCRlySts,const std::uint16_t _BMC_NegVolt,const std::uint16_t _BMC_BusVolt,const std::uint16_t _BMC_DCVolt,const std::uint8_t _BMC_StBcu,const std::uint8_t _BMC_StNM,const std::uint8_t _BMC_LvPwrSysMsgWarn,const std::uint8_t _BMC_PowerFailInfo,const std::uint8_t _BMC_ResetReason,const std::uint8_t _BMC_StNvMSocReadState,const std::uint8_t _BMC_DcChgrErrInfo,const std::uint8_t _BMC_OperationModeSt,const std::uint8_t _BMC_Ins_Step,const std::uint16_t _BMC_Ins_PosVolt,const std::uint16_t _BMC_Ins_NegVolt):BMC_FaultInSpectMod(_BMC_FaultInSpectMod),BMC_BattCurr(_BMC_BattCurr),BMC_HvilSt(_BMC_HvilSt),BMC_BattVolt(_BMC_BattVolt),BMC_HVBattSt(_BMC_HVBattSt),BMC_PwrDwnReq(_BMC_PwrDwnReq),BMC_PrecResOverTemp(_BMC_PrecResOverTemp),BMC_ThermalRunawayErr(_BMC_ThermalRunawayErr),BMC_BattSocAct(_BMC_BattSocAct),BMC_DchgCurrMax_Peak(_BMC_DchgCurrMax_Peak),BMC_DchgCurrMax_Contns(_BMC_DchgCurrMax_Contns),BMC_DiagErrCode(_BMC_DiagErrCode),BMC_BalExecutionStatus(_BMC_BalExecutionStatus),BMC_DcChgLowTempSt(_BMC_DcChgLowTempSt),BMC_EMER_DutyCycle(_BMC_EMER_DutyCycle),BMC_EMER_Frequency(_BMC_EMER_Frequency),BMC_HVIL_DutyCycle(_BMC_HVIL_DutyCycle),BMC_HVIL_Frequency(_BMC_HVIL_Frequency),BMC_Insl_DetectiongSt(_BMC_Insl_DetectiongSt),BMC_DrivePrecRlySts(_BMC_DrivePrecRlySts),BMC_DriveNegRlySts(_BMC_DriveNegRlySts),BMC_DrivePosRlySts(_BMC_DrivePosRlySts),BMC_DriveDCRlySts(_BMC_DriveDCRlySts),BMC_NegVolt(_BMC_NegVolt),BMC_BusVolt(_BMC_BusVolt),BMC_DCVolt(_BMC_DCVolt),BMC_StBcu(_BMC_StBcu),BMC_StNM(_BMC_StNM),BMC_LvPwrSysMsgWarn(_BMC_LvPwrSysMsgWarn),BMC_PowerFailInfo(_BMC_PowerFailInfo),BMC_ResetReason(_BMC_ResetReason),BMC_StNvMSocReadState(_BMC_StNvMSocReadState),BMC_DcChgrErrInfo(_BMC_DcChgrErrInfo),BMC_OperationModeSt(_BMC_OperationModeSt),BMC_Ins_Step(_BMC_Ins_Step),BMC_Ins_PosVolt(_BMC_Ins_PosVolt),BMC_Ins_NegVolt(_BMC_Ins_NegVolt) {}
	BDCBMCBMC2(const BDCBMCBMC2 &_x){
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
		BMC_DrivePrecRlySts = _x.BMC_DrivePrecRlySts;
		BMC_DriveNegRlySts = _x.BMC_DriveNegRlySts;
		BMC_DrivePosRlySts = _x.BMC_DrivePosRlySts;
		BMC_DriveDCRlySts = _x.BMC_DriveDCRlySts;
		BMC_NegVolt = _x.BMC_NegVolt;
		BMC_BusVolt = _x.BMC_BusVolt;
		BMC_DCVolt = _x.BMC_DCVolt;
		BMC_StBcu = _x.BMC_StBcu;
		BMC_StNM = _x.BMC_StNM;
		BMC_LvPwrSysMsgWarn = _x.BMC_LvPwrSysMsgWarn;
		BMC_PowerFailInfo = _x.BMC_PowerFailInfo;
		BMC_ResetReason = _x.BMC_ResetReason;
		BMC_StNvMSocReadState = _x.BMC_StNvMSocReadState;
		BMC_DcChgrErrInfo = _x.BMC_DcChgrErrInfo;
		BMC_OperationModeSt = _x.BMC_OperationModeSt;
		BMC_Ins_Step = _x.BMC_Ins_Step;
		BMC_Ins_PosVolt = _x.BMC_Ins_PosVolt;
		BMC_Ins_NegVolt = _x.BMC_Ins_NegVolt;
	}
	BDCBMCBMC2(BDCBMCBMC2 &&_x){
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
		BMC_DrivePrecRlySts = std::move(_x.BMC_DrivePrecRlySts);
		BMC_DriveNegRlySts = std::move(_x.BMC_DriveNegRlySts);
		BMC_DrivePosRlySts = std::move(_x.BMC_DrivePosRlySts);
		BMC_DriveDCRlySts = std::move(_x.BMC_DriveDCRlySts);
		BMC_NegVolt = std::move(_x.BMC_NegVolt);
		BMC_BusVolt = std::move(_x.BMC_BusVolt);
		BMC_DCVolt = std::move(_x.BMC_DCVolt);
		BMC_StBcu = std::move(_x.BMC_StBcu);
		BMC_StNM = std::move(_x.BMC_StNM);
		BMC_LvPwrSysMsgWarn = std::move(_x.BMC_LvPwrSysMsgWarn);
		BMC_PowerFailInfo = std::move(_x.BMC_PowerFailInfo);
		BMC_ResetReason = std::move(_x.BMC_ResetReason);
		BMC_StNvMSocReadState = std::move(_x.BMC_StNvMSocReadState);
		BMC_DcChgrErrInfo = std::move(_x.BMC_DcChgrErrInfo);
		BMC_OperationModeSt = std::move(_x.BMC_OperationModeSt);
		BMC_Ins_Step = std::move(_x.BMC_Ins_Step);
		BMC_Ins_PosVolt = std::move(_x.BMC_Ins_PosVolt);
		BMC_Ins_NegVolt = std::move(_x.BMC_Ins_NegVolt);
	}
	BDCBMCBMC2& operator=(const BDCBMCBMC2 &_x){
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
		BMC_DrivePrecRlySts = _x.BMC_DrivePrecRlySts;
		BMC_DriveNegRlySts = _x.BMC_DriveNegRlySts;
		BMC_DrivePosRlySts = _x.BMC_DrivePosRlySts;
		BMC_DriveDCRlySts = _x.BMC_DriveDCRlySts;
		BMC_NegVolt = _x.BMC_NegVolt;
		BMC_BusVolt = _x.BMC_BusVolt;
		BMC_DCVolt = _x.BMC_DCVolt;
		BMC_StBcu = _x.BMC_StBcu;
		BMC_StNM = _x.BMC_StNM;
		BMC_LvPwrSysMsgWarn = _x.BMC_LvPwrSysMsgWarn;
		BMC_PowerFailInfo = _x.BMC_PowerFailInfo;
		BMC_ResetReason = _x.BMC_ResetReason;
		BMC_StNvMSocReadState = _x.BMC_StNvMSocReadState;
		BMC_DcChgrErrInfo = _x.BMC_DcChgrErrInfo;
		BMC_OperationModeSt = _x.BMC_OperationModeSt;
		BMC_Ins_Step = _x.BMC_Ins_Step;
		BMC_Ins_PosVolt = _x.BMC_Ins_PosVolt;
		BMC_Ins_NegVolt = _x.BMC_Ins_NegVolt;
		return *this;
	}
	BDCBMCBMC2& operator=(BDCBMCBMC2 &&_x){
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
		BMC_DrivePrecRlySts = std::move(_x.BMC_DrivePrecRlySts);
		BMC_DriveNegRlySts = std::move(_x.BMC_DriveNegRlySts);
		BMC_DrivePosRlySts = std::move(_x.BMC_DrivePosRlySts);
		BMC_DriveDCRlySts = std::move(_x.BMC_DriveDCRlySts);
		BMC_NegVolt = std::move(_x.BMC_NegVolt);
		BMC_BusVolt = std::move(_x.BMC_BusVolt);
		BMC_DCVolt = std::move(_x.BMC_DCVolt);
		BMC_StBcu = std::move(_x.BMC_StBcu);
		BMC_StNM = std::move(_x.BMC_StNM);
		BMC_LvPwrSysMsgWarn = std::move(_x.BMC_LvPwrSysMsgWarn);
		BMC_PowerFailInfo = std::move(_x.BMC_PowerFailInfo);
		BMC_ResetReason = std::move(_x.BMC_ResetReason);
		BMC_StNvMSocReadState = std::move(_x.BMC_StNvMSocReadState);
		BMC_DcChgrErrInfo = std::move(_x.BMC_DcChgrErrInfo);
		BMC_OperationModeSt = std::move(_x.BMC_OperationModeSt);
		BMC_Ins_Step = std::move(_x.BMC_Ins_Step);
		BMC_Ins_PosVolt = std::move(_x.BMC_Ins_PosVolt);
		BMC_Ins_NegVolt = std::move(_x.BMC_Ins_NegVolt);
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
		fun(BMC_DrivePrecRlySts);
		fun(BMC_DriveNegRlySts);
		fun(BMC_DrivePosRlySts);
		fun(BMC_DriveDCRlySts);
		fun(BMC_NegVolt);
		fun(BMC_BusVolt);
		fun(BMC_DCVolt);
		fun(BMC_StBcu);
		fun(BMC_StNM);
		fun(BMC_LvPwrSysMsgWarn);
		fun(BMC_PowerFailInfo);
		fun(BMC_ResetReason);
		fun(BMC_StNvMSocReadState);
		fun(BMC_DcChgrErrInfo);
		fun(BMC_OperationModeSt);
		fun(BMC_Ins_Step);
		fun(BMC_Ins_PosVolt);
		fun(BMC_Ins_NegVolt);
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
		fun(BMC_DrivePrecRlySts);
		fun(BMC_DriveNegRlySts);
		fun(BMC_DrivePosRlySts);
		fun(BMC_DriveDCRlySts);
		fun(BMC_NegVolt);
		fun(BMC_BusVolt);
		fun(BMC_DCVolt);
		fun(BMC_StBcu);
		fun(BMC_StNM);
		fun(BMC_LvPwrSysMsgWarn);
		fun(BMC_PowerFailInfo);
		fun(BMC_ResetReason);
		fun(BMC_StNvMSocReadState);
		fun(BMC_DcChgrErrInfo);
		fun(BMC_OperationModeSt);
		fun(BMC_Ins_Step);
		fun(BMC_Ins_PosVolt);
		fun(BMC_Ins_NegVolt);
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
		fun << (BMC_DrivePrecRlySts);
		fun << (BMC_DriveNegRlySts);
		fun << (BMC_DrivePosRlySts);
		fun << (BMC_DriveDCRlySts);
		fun << (BMC_NegVolt);
		fun << (BMC_BusVolt);
		fun << (BMC_DCVolt);
		fun << (BMC_StBcu);
		fun << (BMC_StNM);
		fun << (BMC_LvPwrSysMsgWarn);
		fun << (BMC_PowerFailInfo);
		fun << (BMC_ResetReason);
		fun << (BMC_StNvMSocReadState);
		fun << (BMC_DcChgrErrInfo);
		fun << (BMC_OperationModeSt);
		fun << (BMC_Ins_Step);
		fun << (BMC_Ins_PosVolt);
		fun << (BMC_Ins_NegVolt);
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
		fun >> (BMC_DrivePrecRlySts);
		fun >> (BMC_DriveNegRlySts);
		fun >> (BMC_DrivePosRlySts);
		fun >> (BMC_DriveDCRlySts);
		fun >> (BMC_NegVolt);
		fun >> (BMC_BusVolt);
		fun >> (BMC_DCVolt);
		fun >> (BMC_StBcu);
		fun >> (BMC_StNM);
		fun >> (BMC_LvPwrSysMsgWarn);
		fun >> (BMC_PowerFailInfo);
		fun >> (BMC_ResetReason);
		fun >> (BMC_StNvMSocReadState);
		fun >> (BMC_DcChgrErrInfo);
		fun >> (BMC_OperationModeSt);
		fun >> (BMC_Ins_Step);
		fun >> (BMC_Ins_PosVolt);
		fun >> (BMC_Ins_NegVolt);
	}
};

#endif //____BDCBMCBMC2_H__
