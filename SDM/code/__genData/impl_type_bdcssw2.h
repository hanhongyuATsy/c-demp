#ifndef ____BDCSSW2_H__
#define ____BDCSSW2_H__


#include "cstdint"






struct BDCSSW2 {
public:
	std::uint8_t SSW_FLSeatHeatTempValue;
	std::uint8_t SSW_FLSeatVentSt;
	std::uint8_t SSW_FLSeatHeatingSt;
	std::uint8_t SSW_SteerHeatSt;
	std::uint8_t SSW_FLSeatHeatTempVD;
	std::uint8_t SSW_FRSeatEasyEntrySt;
	std::uint8_t SSW_FRSeatEasyEntryActSt;
	std::uint8_t SSW_FRSeatHeatTempValue;
	std::uint8_t SSW_FRSeatVentSt;
	std::uint8_t SSW_FRSeatHeatingSt;
	std::uint8_t SSW_FRSeatHeatTempVD;
	std::uint8_t SSW_FLSeatSlideFaultSt;
	std::uint8_t SSW_FLSeatHeightFaultSt;
	std::uint8_t SSW_FLSeatBackrestFaultSt;
	std::uint8_t SSW_FLSeatTiltFaultSt;
	std::uint8_t SSW_FLSeatCushionFaultSt;
	std::uint8_t SSW_FLSeatOttomanFaultSt;
	std::uint8_t SSW_SteeringAngleFaultSt;
	std::uint8_t SSW_SteeringExtentFaultSt;
	std::uint8_t SSW_FLSeatHeatFaultSt;
	std::uint8_t SSW_FLSeatVentFaultSt;
	std::uint8_t SSW_SteerHeatFaultSt;
	std::uint8_t SSW_FLLumbarFaultSt;
	std::uint8_t SSW_FLLumbarOpeSt;
	std::uint8_t SSW_FRSeatSlideFaultSt;
	std::uint8_t SSW_FRSeatHeightFaultSt;
	std::uint8_t SSW_FRSeatBackrestFaultSt;
	std::uint8_t SSW_FRSeatTiltFaultSt;
	std::uint8_t SSW_FRSeatCushionFaultSt;
	std::uint8_t SSW_FRSeatOttomanFaultSt;
	std::uint8_t SSW_FRSeatHeatFaultSt;
	std::uint8_t SSW_FRSeatVentFaultSt;
	std::uint8_t SSW_FLSeatSlideOpeCmd;
	std::uint8_t SSW_FLSeatHeightOpeCmd;
	std::uint8_t SSW_FLSeatBackrestOpeCmd;
	std::uint8_t SSW_FLSeatTiltOpeCmd;
	std::uint8_t SSW_FLSeatCushionOpeCmd;
	std::uint8_t SSW_FLSeatOttomanOpeCmd;
	std::uint8_t SSW_SteeringAngleOpeCmd;
	std::uint8_t SSW_SteeringExtentOpeCmd;
	std::uint8_t SSW_FLSeatSlideTargetPos;
	std::uint8_t SSW_FLSeatHeightTargetPos;
	std::uint8_t SSW_FLSeatBackrestTargetPos;
	std::uint8_t SSW_FLSeatTiltTargetPos;
	std::uint8_t SSW_FLSeatCushionTargetPos;
	std::uint8_t SSW_FLSeatOttomanTargetPos;
	std::uint8_t SSW_SteeringAngleTargetPos;
	std::uint8_t SSW_SteeringExtentTargetPos;
	std::uint8_t SSW_FRSeatSlideOpeCmd;
	std::uint8_t SSW_FRSeatHeightOpeCmd;
	std::uint8_t SSW_FRSeatBackrestOpeCmd;
	std::uint8_t SSW_FRSeatTiltOpeCmd;
	std::uint8_t SSW_FRSeatCushionOpeCmd;
	std::uint8_t SSW_FRSeatOttomanOpeCmd;
	std::uint8_t SSW_FRSeatSlideTargetPos;
	std::uint8_t SSW_FRSeatHeightTargetPos;
	std::uint8_t SSW_FRSeatBackrestTargetPos;
	std::uint8_t SSW_FRSeatTiltTargetPos;
	std::uint8_t SSW_FRSeatCushionTargetPos;
	std::uint8_t SSW_FRSeatOttomanTargetPos;
	std::uint8_t SSW_FLSeatHeatLevelCtr;
	std::uint8_t SSW_FLSeatEasyEntryCtr;
	std::uint8_t SSW_FLSeatVentLevelCtr;
	std::uint8_t SSW_SteeringHeatCtr;
	std::uint8_t SSW_FLLumbarOpeCmd;
	std::uint8_t SSW_FLSeatAdjForbidSt;
	std::uint8_t SSW_FRSeatHeatLevelCtr;
	std::uint8_t SSW_FRSeatEasyEntryCtr;
	std::uint8_t SSW_FRSeatVentLevelCtr;
	std::uint8_t SSW_FRLumbarOpeCmd;
	std::uint8_t SSW_FRSeatAdjForbidSt;
	std::uint8_t SSW_EasyEntryExitFuncCfgSt;
	std::uint8_t SSW_FREasyEntryExitFuncCfgSt;
	std::uint8_t SSW_FRSeatSaveRecallPopReq;
	std::uint8_t SSW_PSCSOpeSt;
	std::uint8_t SSW_FRSCSOpeSt;
	std::uint8_t SSW_FRSeatAutoModeCfgSt;
	std::uint8_t SSW_FLSeatAutoModeCfgSt;
/*
	BDCSSW2() {}
	~BDCSSW2() {}
	BDCSSW2(const std::uint8_t _SSW_FLSeatHeatTempValue,const std::uint8_t _SSW_FLSeatVentSt,const std::uint8_t _SSW_FLSeatHeatingSt,const std::uint8_t _SSW_SteerHeatSt,const std::uint8_t _SSW_FLSeatHeatTempVD,const std::uint8_t _SSW_FRSeatEasyEntrySt,const std::uint8_t _SSW_FRSeatEasyEntryActSt,const std::uint8_t _SSW_FRSeatHeatTempValue,const std::uint8_t _SSW_FRSeatVentSt,const std::uint8_t _SSW_FRSeatHeatingSt,const std::uint8_t _SSW_FRSeatHeatTempVD,const std::uint8_t _SSW_FLSeatSlideFaultSt,const std::uint8_t _SSW_FLSeatHeightFaultSt,const std::uint8_t _SSW_FLSeatBackrestFaultSt,const std::uint8_t _SSW_FLSeatTiltFaultSt,const std::uint8_t _SSW_FLSeatCushionFaultSt,const std::uint8_t _SSW_FLSeatOttomanFaultSt,const std::uint8_t _SSW_SteeringAngleFaultSt,const std::uint8_t _SSW_SteeringExtentFaultSt,const std::uint8_t _SSW_FLSeatHeatFaultSt,const std::uint8_t _SSW_FLSeatVentFaultSt,const std::uint8_t _SSW_SteerHeatFaultSt,const std::uint8_t _SSW_FLLumbarFaultSt,const std::uint8_t _SSW_FLLumbarOpeSt,const std::uint8_t _SSW_FRSeatSlideFaultSt,const std::uint8_t _SSW_FRSeatHeightFaultSt,const std::uint8_t _SSW_FRSeatBackrestFaultSt,const std::uint8_t _SSW_FRSeatTiltFaultSt,const std::uint8_t _SSW_FRSeatCushionFaultSt,const std::uint8_t _SSW_FRSeatOttomanFaultSt,const std::uint8_t _SSW_FRSeatHeatFaultSt,const std::uint8_t _SSW_FRSeatVentFaultSt,const std::uint8_t _SSW_FLSeatSlideOpeCmd,const std::uint8_t _SSW_FLSeatHeightOpeCmd,const std::uint8_t _SSW_FLSeatBackrestOpeCmd,const std::uint8_t _SSW_FLSeatTiltOpeCmd,const std::uint8_t _SSW_FLSeatCushionOpeCmd,const std::uint8_t _SSW_FLSeatOttomanOpeCmd,const std::uint8_t _SSW_SteeringAngleOpeCmd,const std::uint8_t _SSW_SteeringExtentOpeCmd,const std::uint8_t _SSW_FLSeatSlideTargetPos,const std::uint8_t _SSW_FLSeatHeightTargetPos,const std::uint8_t _SSW_FLSeatBackrestTargetPos,const std::uint8_t _SSW_FLSeatTiltTargetPos,const std::uint8_t _SSW_FLSeatCushionTargetPos,const std::uint8_t _SSW_FLSeatOttomanTargetPos,const std::uint8_t _SSW_SteeringAngleTargetPos,const std::uint8_t _SSW_SteeringExtentTargetPos,const std::uint8_t _SSW_FRSeatSlideOpeCmd,const std::uint8_t _SSW_FRSeatHeightOpeCmd,const std::uint8_t _SSW_FRSeatBackrestOpeCmd,const std::uint8_t _SSW_FRSeatTiltOpeCmd,const std::uint8_t _SSW_FRSeatCushionOpeCmd,const std::uint8_t _SSW_FRSeatOttomanOpeCmd,const std::uint8_t _SSW_FRSeatSlideTargetPos,const std::uint8_t _SSW_FRSeatHeightTargetPos,const std::uint8_t _SSW_FRSeatBackrestTargetPos,const std::uint8_t _SSW_FRSeatTiltTargetPos,const std::uint8_t _SSW_FRSeatCushionTargetPos,const std::uint8_t _SSW_FRSeatOttomanTargetPos,const std::uint8_t _SSW_FLSeatHeatLevelCtr,const std::uint8_t _SSW_FLSeatEasyEntryCtr,const std::uint8_t _SSW_FLSeatVentLevelCtr,const std::uint8_t _SSW_SteeringHeatCtr,const std::uint8_t _SSW_FLLumbarOpeCmd,const std::uint8_t _SSW_FLSeatAdjForbidSt,const std::uint8_t _SSW_FRSeatHeatLevelCtr,const std::uint8_t _SSW_FRSeatEasyEntryCtr,const std::uint8_t _SSW_FRSeatVentLevelCtr,const std::uint8_t _SSW_FRLumbarOpeCmd,const std::uint8_t _SSW_FRSeatAdjForbidSt,const std::uint8_t _SSW_EasyEntryExitFuncCfgSt,const std::uint8_t _SSW_FREasyEntryExitFuncCfgSt,const std::uint8_t _SSW_FRSeatSaveRecallPopReq,const std::uint8_t _SSW_PSCSOpeSt,const std::uint8_t _SSW_FRSCSOpeSt,const std::uint8_t _SSW_FRSeatAutoModeCfgSt,const std::uint8_t _SSW_FLSeatAutoModeCfgSt):SSW_FLSeatHeatTempValue(_SSW_FLSeatHeatTempValue),SSW_FLSeatVentSt(_SSW_FLSeatVentSt),SSW_FLSeatHeatingSt(_SSW_FLSeatHeatingSt),SSW_SteerHeatSt(_SSW_SteerHeatSt),SSW_FLSeatHeatTempVD(_SSW_FLSeatHeatTempVD),SSW_FRSeatEasyEntrySt(_SSW_FRSeatEasyEntrySt),SSW_FRSeatEasyEntryActSt(_SSW_FRSeatEasyEntryActSt),SSW_FRSeatHeatTempValue(_SSW_FRSeatHeatTempValue),SSW_FRSeatVentSt(_SSW_FRSeatVentSt),SSW_FRSeatHeatingSt(_SSW_FRSeatHeatingSt),SSW_FRSeatHeatTempVD(_SSW_FRSeatHeatTempVD),SSW_FLSeatSlideFaultSt(_SSW_FLSeatSlideFaultSt),SSW_FLSeatHeightFaultSt(_SSW_FLSeatHeightFaultSt),SSW_FLSeatBackrestFaultSt(_SSW_FLSeatBackrestFaultSt),SSW_FLSeatTiltFaultSt(_SSW_FLSeatTiltFaultSt),SSW_FLSeatCushionFaultSt(_SSW_FLSeatCushionFaultSt),SSW_FLSeatOttomanFaultSt(_SSW_FLSeatOttomanFaultSt),SSW_SteeringAngleFaultSt(_SSW_SteeringAngleFaultSt),SSW_SteeringExtentFaultSt(_SSW_SteeringExtentFaultSt),SSW_FLSeatHeatFaultSt(_SSW_FLSeatHeatFaultSt),SSW_FLSeatVentFaultSt(_SSW_FLSeatVentFaultSt),SSW_SteerHeatFaultSt(_SSW_SteerHeatFaultSt),SSW_FLLumbarFaultSt(_SSW_FLLumbarFaultSt),SSW_FLLumbarOpeSt(_SSW_FLLumbarOpeSt),SSW_FRSeatSlideFaultSt(_SSW_FRSeatSlideFaultSt),SSW_FRSeatHeightFaultSt(_SSW_FRSeatHeightFaultSt),SSW_FRSeatBackrestFaultSt(_SSW_FRSeatBackrestFaultSt),SSW_FRSeatTiltFaultSt(_SSW_FRSeatTiltFaultSt),SSW_FRSeatCushionFaultSt(_SSW_FRSeatCushionFaultSt),SSW_FRSeatOttomanFaultSt(_SSW_FRSeatOttomanFaultSt),SSW_FRSeatHeatFaultSt(_SSW_FRSeatHeatFaultSt),SSW_FRSeatVentFaultSt(_SSW_FRSeatVentFaultSt),SSW_FLSeatSlideOpeCmd(_SSW_FLSeatSlideOpeCmd),SSW_FLSeatHeightOpeCmd(_SSW_FLSeatHeightOpeCmd),SSW_FLSeatBackrestOpeCmd(_SSW_FLSeatBackrestOpeCmd),SSW_FLSeatTiltOpeCmd(_SSW_FLSeatTiltOpeCmd),SSW_FLSeatCushionOpeCmd(_SSW_FLSeatCushionOpeCmd),SSW_FLSeatOttomanOpeCmd(_SSW_FLSeatOttomanOpeCmd),SSW_SteeringAngleOpeCmd(_SSW_SteeringAngleOpeCmd),SSW_SteeringExtentOpeCmd(_SSW_SteeringExtentOpeCmd),SSW_FLSeatSlideTargetPos(_SSW_FLSeatSlideTargetPos),SSW_FLSeatHeightTargetPos(_SSW_FLSeatHeightTargetPos),SSW_FLSeatBackrestTargetPos(_SSW_FLSeatBackrestTargetPos),SSW_FLSeatTiltTargetPos(_SSW_FLSeatTiltTargetPos),SSW_FLSeatCushionTargetPos(_SSW_FLSeatCushionTargetPos),SSW_FLSeatOttomanTargetPos(_SSW_FLSeatOttomanTargetPos),SSW_SteeringAngleTargetPos(_SSW_SteeringAngleTargetPos),SSW_SteeringExtentTargetPos(_SSW_SteeringExtentTargetPos),SSW_FRSeatSlideOpeCmd(_SSW_FRSeatSlideOpeCmd),SSW_FRSeatHeightOpeCmd(_SSW_FRSeatHeightOpeCmd),SSW_FRSeatBackrestOpeCmd(_SSW_FRSeatBackrestOpeCmd),SSW_FRSeatTiltOpeCmd(_SSW_FRSeatTiltOpeCmd),SSW_FRSeatCushionOpeCmd(_SSW_FRSeatCushionOpeCmd),SSW_FRSeatOttomanOpeCmd(_SSW_FRSeatOttomanOpeCmd),SSW_FRSeatSlideTargetPos(_SSW_FRSeatSlideTargetPos),SSW_FRSeatHeightTargetPos(_SSW_FRSeatHeightTargetPos),SSW_FRSeatBackrestTargetPos(_SSW_FRSeatBackrestTargetPos),SSW_FRSeatTiltTargetPos(_SSW_FRSeatTiltTargetPos),SSW_FRSeatCushionTargetPos(_SSW_FRSeatCushionTargetPos),SSW_FRSeatOttomanTargetPos(_SSW_FRSeatOttomanTargetPos),SSW_FLSeatHeatLevelCtr(_SSW_FLSeatHeatLevelCtr),SSW_FLSeatEasyEntryCtr(_SSW_FLSeatEasyEntryCtr),SSW_FLSeatVentLevelCtr(_SSW_FLSeatVentLevelCtr),SSW_SteeringHeatCtr(_SSW_SteeringHeatCtr),SSW_FLLumbarOpeCmd(_SSW_FLLumbarOpeCmd),SSW_FLSeatAdjForbidSt(_SSW_FLSeatAdjForbidSt),SSW_FRSeatHeatLevelCtr(_SSW_FRSeatHeatLevelCtr),SSW_FRSeatEasyEntryCtr(_SSW_FRSeatEasyEntryCtr),SSW_FRSeatVentLevelCtr(_SSW_FRSeatVentLevelCtr),SSW_FRLumbarOpeCmd(_SSW_FRLumbarOpeCmd),SSW_FRSeatAdjForbidSt(_SSW_FRSeatAdjForbidSt),SSW_EasyEntryExitFuncCfgSt(_SSW_EasyEntryExitFuncCfgSt),SSW_FREasyEntryExitFuncCfgSt(_SSW_FREasyEntryExitFuncCfgSt),SSW_FRSeatSaveRecallPopReq(_SSW_FRSeatSaveRecallPopReq),SSW_PSCSOpeSt(_SSW_PSCSOpeSt),SSW_FRSCSOpeSt(_SSW_FRSCSOpeSt),SSW_FRSeatAutoModeCfgSt(_SSW_FRSeatAutoModeCfgSt),SSW_FLSeatAutoModeCfgSt(_SSW_FLSeatAutoModeCfgSt) {}
	BDCSSW2(const BDCSSW2 &_x){
		SSW_FLSeatHeatTempValue = _x.SSW_FLSeatHeatTempValue;
		SSW_FLSeatVentSt = _x.SSW_FLSeatVentSt;
		SSW_FLSeatHeatingSt = _x.SSW_FLSeatHeatingSt;
		SSW_SteerHeatSt = _x.SSW_SteerHeatSt;
		SSW_FLSeatHeatTempVD = _x.SSW_FLSeatHeatTempVD;
		SSW_FRSeatEasyEntrySt = _x.SSW_FRSeatEasyEntrySt;
		SSW_FRSeatEasyEntryActSt = _x.SSW_FRSeatEasyEntryActSt;
		SSW_FRSeatHeatTempValue = _x.SSW_FRSeatHeatTempValue;
		SSW_FRSeatVentSt = _x.SSW_FRSeatVentSt;
		SSW_FRSeatHeatingSt = _x.SSW_FRSeatHeatingSt;
		SSW_FRSeatHeatTempVD = _x.SSW_FRSeatHeatTempVD;
		SSW_FLSeatSlideFaultSt = _x.SSW_FLSeatSlideFaultSt;
		SSW_FLSeatHeightFaultSt = _x.SSW_FLSeatHeightFaultSt;
		SSW_FLSeatBackrestFaultSt = _x.SSW_FLSeatBackrestFaultSt;
		SSW_FLSeatTiltFaultSt = _x.SSW_FLSeatTiltFaultSt;
		SSW_FLSeatCushionFaultSt = _x.SSW_FLSeatCushionFaultSt;
		SSW_FLSeatOttomanFaultSt = _x.SSW_FLSeatOttomanFaultSt;
		SSW_SteeringAngleFaultSt = _x.SSW_SteeringAngleFaultSt;
		SSW_SteeringExtentFaultSt = _x.SSW_SteeringExtentFaultSt;
		SSW_FLSeatHeatFaultSt = _x.SSW_FLSeatHeatFaultSt;
		SSW_FLSeatVentFaultSt = _x.SSW_FLSeatVentFaultSt;
		SSW_SteerHeatFaultSt = _x.SSW_SteerHeatFaultSt;
		SSW_FLLumbarFaultSt = _x.SSW_FLLumbarFaultSt;
		SSW_FLLumbarOpeSt = _x.SSW_FLLumbarOpeSt;
		SSW_FRSeatSlideFaultSt = _x.SSW_FRSeatSlideFaultSt;
		SSW_FRSeatHeightFaultSt = _x.SSW_FRSeatHeightFaultSt;
		SSW_FRSeatBackrestFaultSt = _x.SSW_FRSeatBackrestFaultSt;
		SSW_FRSeatTiltFaultSt = _x.SSW_FRSeatTiltFaultSt;
		SSW_FRSeatCushionFaultSt = _x.SSW_FRSeatCushionFaultSt;
		SSW_FRSeatOttomanFaultSt = _x.SSW_FRSeatOttomanFaultSt;
		SSW_FRSeatHeatFaultSt = _x.SSW_FRSeatHeatFaultSt;
		SSW_FRSeatVentFaultSt = _x.SSW_FRSeatVentFaultSt;
		SSW_FLSeatSlideOpeCmd = _x.SSW_FLSeatSlideOpeCmd;
		SSW_FLSeatHeightOpeCmd = _x.SSW_FLSeatHeightOpeCmd;
		SSW_FLSeatBackrestOpeCmd = _x.SSW_FLSeatBackrestOpeCmd;
		SSW_FLSeatTiltOpeCmd = _x.SSW_FLSeatTiltOpeCmd;
		SSW_FLSeatCushionOpeCmd = _x.SSW_FLSeatCushionOpeCmd;
		SSW_FLSeatOttomanOpeCmd = _x.SSW_FLSeatOttomanOpeCmd;
		SSW_SteeringAngleOpeCmd = _x.SSW_SteeringAngleOpeCmd;
		SSW_SteeringExtentOpeCmd = _x.SSW_SteeringExtentOpeCmd;
		SSW_FLSeatSlideTargetPos = _x.SSW_FLSeatSlideTargetPos;
		SSW_FLSeatHeightTargetPos = _x.SSW_FLSeatHeightTargetPos;
		SSW_FLSeatBackrestTargetPos = _x.SSW_FLSeatBackrestTargetPos;
		SSW_FLSeatTiltTargetPos = _x.SSW_FLSeatTiltTargetPos;
		SSW_FLSeatCushionTargetPos = _x.SSW_FLSeatCushionTargetPos;
		SSW_FLSeatOttomanTargetPos = _x.SSW_FLSeatOttomanTargetPos;
		SSW_SteeringAngleTargetPos = _x.SSW_SteeringAngleTargetPos;
		SSW_SteeringExtentTargetPos = _x.SSW_SteeringExtentTargetPos;
		SSW_FRSeatSlideOpeCmd = _x.SSW_FRSeatSlideOpeCmd;
		SSW_FRSeatHeightOpeCmd = _x.SSW_FRSeatHeightOpeCmd;
		SSW_FRSeatBackrestOpeCmd = _x.SSW_FRSeatBackrestOpeCmd;
		SSW_FRSeatTiltOpeCmd = _x.SSW_FRSeatTiltOpeCmd;
		SSW_FRSeatCushionOpeCmd = _x.SSW_FRSeatCushionOpeCmd;
		SSW_FRSeatOttomanOpeCmd = _x.SSW_FRSeatOttomanOpeCmd;
		SSW_FRSeatSlideTargetPos = _x.SSW_FRSeatSlideTargetPos;
		SSW_FRSeatHeightTargetPos = _x.SSW_FRSeatHeightTargetPos;
		SSW_FRSeatBackrestTargetPos = _x.SSW_FRSeatBackrestTargetPos;
		SSW_FRSeatTiltTargetPos = _x.SSW_FRSeatTiltTargetPos;
		SSW_FRSeatCushionTargetPos = _x.SSW_FRSeatCushionTargetPos;
		SSW_FRSeatOttomanTargetPos = _x.SSW_FRSeatOttomanTargetPos;
		SSW_FLSeatHeatLevelCtr = _x.SSW_FLSeatHeatLevelCtr;
		SSW_FLSeatEasyEntryCtr = _x.SSW_FLSeatEasyEntryCtr;
		SSW_FLSeatVentLevelCtr = _x.SSW_FLSeatVentLevelCtr;
		SSW_SteeringHeatCtr = _x.SSW_SteeringHeatCtr;
		SSW_FLLumbarOpeCmd = _x.SSW_FLLumbarOpeCmd;
		SSW_FLSeatAdjForbidSt = _x.SSW_FLSeatAdjForbidSt;
		SSW_FRSeatHeatLevelCtr = _x.SSW_FRSeatHeatLevelCtr;
		SSW_FRSeatEasyEntryCtr = _x.SSW_FRSeatEasyEntryCtr;
		SSW_FRSeatVentLevelCtr = _x.SSW_FRSeatVentLevelCtr;
		SSW_FRLumbarOpeCmd = _x.SSW_FRLumbarOpeCmd;
		SSW_FRSeatAdjForbidSt = _x.SSW_FRSeatAdjForbidSt;
		SSW_EasyEntryExitFuncCfgSt = _x.SSW_EasyEntryExitFuncCfgSt;
		SSW_FREasyEntryExitFuncCfgSt = _x.SSW_FREasyEntryExitFuncCfgSt;
		SSW_FRSeatSaveRecallPopReq = _x.SSW_FRSeatSaveRecallPopReq;
		SSW_PSCSOpeSt = _x.SSW_PSCSOpeSt;
		SSW_FRSCSOpeSt = _x.SSW_FRSCSOpeSt;
		SSW_FRSeatAutoModeCfgSt = _x.SSW_FRSeatAutoModeCfgSt;
		SSW_FLSeatAutoModeCfgSt = _x.SSW_FLSeatAutoModeCfgSt;
	}
	BDCSSW2(BDCSSW2 &&_x){
		SSW_FLSeatHeatTempValue = std::move(_x.SSW_FLSeatHeatTempValue);
		SSW_FLSeatVentSt = std::move(_x.SSW_FLSeatVentSt);
		SSW_FLSeatHeatingSt = std::move(_x.SSW_FLSeatHeatingSt);
		SSW_SteerHeatSt = std::move(_x.SSW_SteerHeatSt);
		SSW_FLSeatHeatTempVD = std::move(_x.SSW_FLSeatHeatTempVD);
		SSW_FRSeatEasyEntrySt = std::move(_x.SSW_FRSeatEasyEntrySt);
		SSW_FRSeatEasyEntryActSt = std::move(_x.SSW_FRSeatEasyEntryActSt);
		SSW_FRSeatHeatTempValue = std::move(_x.SSW_FRSeatHeatTempValue);
		SSW_FRSeatVentSt = std::move(_x.SSW_FRSeatVentSt);
		SSW_FRSeatHeatingSt = std::move(_x.SSW_FRSeatHeatingSt);
		SSW_FRSeatHeatTempVD = std::move(_x.SSW_FRSeatHeatTempVD);
		SSW_FLSeatSlideFaultSt = std::move(_x.SSW_FLSeatSlideFaultSt);
		SSW_FLSeatHeightFaultSt = std::move(_x.SSW_FLSeatHeightFaultSt);
		SSW_FLSeatBackrestFaultSt = std::move(_x.SSW_FLSeatBackrestFaultSt);
		SSW_FLSeatTiltFaultSt = std::move(_x.SSW_FLSeatTiltFaultSt);
		SSW_FLSeatCushionFaultSt = std::move(_x.SSW_FLSeatCushionFaultSt);
		SSW_FLSeatOttomanFaultSt = std::move(_x.SSW_FLSeatOttomanFaultSt);
		SSW_SteeringAngleFaultSt = std::move(_x.SSW_SteeringAngleFaultSt);
		SSW_SteeringExtentFaultSt = std::move(_x.SSW_SteeringExtentFaultSt);
		SSW_FLSeatHeatFaultSt = std::move(_x.SSW_FLSeatHeatFaultSt);
		SSW_FLSeatVentFaultSt = std::move(_x.SSW_FLSeatVentFaultSt);
		SSW_SteerHeatFaultSt = std::move(_x.SSW_SteerHeatFaultSt);
		SSW_FLLumbarFaultSt = std::move(_x.SSW_FLLumbarFaultSt);
		SSW_FLLumbarOpeSt = std::move(_x.SSW_FLLumbarOpeSt);
		SSW_FRSeatSlideFaultSt = std::move(_x.SSW_FRSeatSlideFaultSt);
		SSW_FRSeatHeightFaultSt = std::move(_x.SSW_FRSeatHeightFaultSt);
		SSW_FRSeatBackrestFaultSt = std::move(_x.SSW_FRSeatBackrestFaultSt);
		SSW_FRSeatTiltFaultSt = std::move(_x.SSW_FRSeatTiltFaultSt);
		SSW_FRSeatCushionFaultSt = std::move(_x.SSW_FRSeatCushionFaultSt);
		SSW_FRSeatOttomanFaultSt = std::move(_x.SSW_FRSeatOttomanFaultSt);
		SSW_FRSeatHeatFaultSt = std::move(_x.SSW_FRSeatHeatFaultSt);
		SSW_FRSeatVentFaultSt = std::move(_x.SSW_FRSeatVentFaultSt);
		SSW_FLSeatSlideOpeCmd = std::move(_x.SSW_FLSeatSlideOpeCmd);
		SSW_FLSeatHeightOpeCmd = std::move(_x.SSW_FLSeatHeightOpeCmd);
		SSW_FLSeatBackrestOpeCmd = std::move(_x.SSW_FLSeatBackrestOpeCmd);
		SSW_FLSeatTiltOpeCmd = std::move(_x.SSW_FLSeatTiltOpeCmd);
		SSW_FLSeatCushionOpeCmd = std::move(_x.SSW_FLSeatCushionOpeCmd);
		SSW_FLSeatOttomanOpeCmd = std::move(_x.SSW_FLSeatOttomanOpeCmd);
		SSW_SteeringAngleOpeCmd = std::move(_x.SSW_SteeringAngleOpeCmd);
		SSW_SteeringExtentOpeCmd = std::move(_x.SSW_SteeringExtentOpeCmd);
		SSW_FLSeatSlideTargetPos = std::move(_x.SSW_FLSeatSlideTargetPos);
		SSW_FLSeatHeightTargetPos = std::move(_x.SSW_FLSeatHeightTargetPos);
		SSW_FLSeatBackrestTargetPos = std::move(_x.SSW_FLSeatBackrestTargetPos);
		SSW_FLSeatTiltTargetPos = std::move(_x.SSW_FLSeatTiltTargetPos);
		SSW_FLSeatCushionTargetPos = std::move(_x.SSW_FLSeatCushionTargetPos);
		SSW_FLSeatOttomanTargetPos = std::move(_x.SSW_FLSeatOttomanTargetPos);
		SSW_SteeringAngleTargetPos = std::move(_x.SSW_SteeringAngleTargetPos);
		SSW_SteeringExtentTargetPos = std::move(_x.SSW_SteeringExtentTargetPos);
		SSW_FRSeatSlideOpeCmd = std::move(_x.SSW_FRSeatSlideOpeCmd);
		SSW_FRSeatHeightOpeCmd = std::move(_x.SSW_FRSeatHeightOpeCmd);
		SSW_FRSeatBackrestOpeCmd = std::move(_x.SSW_FRSeatBackrestOpeCmd);
		SSW_FRSeatTiltOpeCmd = std::move(_x.SSW_FRSeatTiltOpeCmd);
		SSW_FRSeatCushionOpeCmd = std::move(_x.SSW_FRSeatCushionOpeCmd);
		SSW_FRSeatOttomanOpeCmd = std::move(_x.SSW_FRSeatOttomanOpeCmd);
		SSW_FRSeatSlideTargetPos = std::move(_x.SSW_FRSeatSlideTargetPos);
		SSW_FRSeatHeightTargetPos = std::move(_x.SSW_FRSeatHeightTargetPos);
		SSW_FRSeatBackrestTargetPos = std::move(_x.SSW_FRSeatBackrestTargetPos);
		SSW_FRSeatTiltTargetPos = std::move(_x.SSW_FRSeatTiltTargetPos);
		SSW_FRSeatCushionTargetPos = std::move(_x.SSW_FRSeatCushionTargetPos);
		SSW_FRSeatOttomanTargetPos = std::move(_x.SSW_FRSeatOttomanTargetPos);
		SSW_FLSeatHeatLevelCtr = std::move(_x.SSW_FLSeatHeatLevelCtr);
		SSW_FLSeatEasyEntryCtr = std::move(_x.SSW_FLSeatEasyEntryCtr);
		SSW_FLSeatVentLevelCtr = std::move(_x.SSW_FLSeatVentLevelCtr);
		SSW_SteeringHeatCtr = std::move(_x.SSW_SteeringHeatCtr);
		SSW_FLLumbarOpeCmd = std::move(_x.SSW_FLLumbarOpeCmd);
		SSW_FLSeatAdjForbidSt = std::move(_x.SSW_FLSeatAdjForbidSt);
		SSW_FRSeatHeatLevelCtr = std::move(_x.SSW_FRSeatHeatLevelCtr);
		SSW_FRSeatEasyEntryCtr = std::move(_x.SSW_FRSeatEasyEntryCtr);
		SSW_FRSeatVentLevelCtr = std::move(_x.SSW_FRSeatVentLevelCtr);
		SSW_FRLumbarOpeCmd = std::move(_x.SSW_FRLumbarOpeCmd);
		SSW_FRSeatAdjForbidSt = std::move(_x.SSW_FRSeatAdjForbidSt);
		SSW_EasyEntryExitFuncCfgSt = std::move(_x.SSW_EasyEntryExitFuncCfgSt);
		SSW_FREasyEntryExitFuncCfgSt = std::move(_x.SSW_FREasyEntryExitFuncCfgSt);
		SSW_FRSeatSaveRecallPopReq = std::move(_x.SSW_FRSeatSaveRecallPopReq);
		SSW_PSCSOpeSt = std::move(_x.SSW_PSCSOpeSt);
		SSW_FRSCSOpeSt = std::move(_x.SSW_FRSCSOpeSt);
		SSW_FRSeatAutoModeCfgSt = std::move(_x.SSW_FRSeatAutoModeCfgSt);
		SSW_FLSeatAutoModeCfgSt = std::move(_x.SSW_FLSeatAutoModeCfgSt);
	}
	BDCSSW2& operator=(const BDCSSW2 &_x){
		SSW_FLSeatHeatTempValue = _x.SSW_FLSeatHeatTempValue;
		SSW_FLSeatVentSt = _x.SSW_FLSeatVentSt;
		SSW_FLSeatHeatingSt = _x.SSW_FLSeatHeatingSt;
		SSW_SteerHeatSt = _x.SSW_SteerHeatSt;
		SSW_FLSeatHeatTempVD = _x.SSW_FLSeatHeatTempVD;
		SSW_FRSeatEasyEntrySt = _x.SSW_FRSeatEasyEntrySt;
		SSW_FRSeatEasyEntryActSt = _x.SSW_FRSeatEasyEntryActSt;
		SSW_FRSeatHeatTempValue = _x.SSW_FRSeatHeatTempValue;
		SSW_FRSeatVentSt = _x.SSW_FRSeatVentSt;
		SSW_FRSeatHeatingSt = _x.SSW_FRSeatHeatingSt;
		SSW_FRSeatHeatTempVD = _x.SSW_FRSeatHeatTempVD;
		SSW_FLSeatSlideFaultSt = _x.SSW_FLSeatSlideFaultSt;
		SSW_FLSeatHeightFaultSt = _x.SSW_FLSeatHeightFaultSt;
		SSW_FLSeatBackrestFaultSt = _x.SSW_FLSeatBackrestFaultSt;
		SSW_FLSeatTiltFaultSt = _x.SSW_FLSeatTiltFaultSt;
		SSW_FLSeatCushionFaultSt = _x.SSW_FLSeatCushionFaultSt;
		SSW_FLSeatOttomanFaultSt = _x.SSW_FLSeatOttomanFaultSt;
		SSW_SteeringAngleFaultSt = _x.SSW_SteeringAngleFaultSt;
		SSW_SteeringExtentFaultSt = _x.SSW_SteeringExtentFaultSt;
		SSW_FLSeatHeatFaultSt = _x.SSW_FLSeatHeatFaultSt;
		SSW_FLSeatVentFaultSt = _x.SSW_FLSeatVentFaultSt;
		SSW_SteerHeatFaultSt = _x.SSW_SteerHeatFaultSt;
		SSW_FLLumbarFaultSt = _x.SSW_FLLumbarFaultSt;
		SSW_FLLumbarOpeSt = _x.SSW_FLLumbarOpeSt;
		SSW_FRSeatSlideFaultSt = _x.SSW_FRSeatSlideFaultSt;
		SSW_FRSeatHeightFaultSt = _x.SSW_FRSeatHeightFaultSt;
		SSW_FRSeatBackrestFaultSt = _x.SSW_FRSeatBackrestFaultSt;
		SSW_FRSeatTiltFaultSt = _x.SSW_FRSeatTiltFaultSt;
		SSW_FRSeatCushionFaultSt = _x.SSW_FRSeatCushionFaultSt;
		SSW_FRSeatOttomanFaultSt = _x.SSW_FRSeatOttomanFaultSt;
		SSW_FRSeatHeatFaultSt = _x.SSW_FRSeatHeatFaultSt;
		SSW_FRSeatVentFaultSt = _x.SSW_FRSeatVentFaultSt;
		SSW_FLSeatSlideOpeCmd = _x.SSW_FLSeatSlideOpeCmd;
		SSW_FLSeatHeightOpeCmd = _x.SSW_FLSeatHeightOpeCmd;
		SSW_FLSeatBackrestOpeCmd = _x.SSW_FLSeatBackrestOpeCmd;
		SSW_FLSeatTiltOpeCmd = _x.SSW_FLSeatTiltOpeCmd;
		SSW_FLSeatCushionOpeCmd = _x.SSW_FLSeatCushionOpeCmd;
		SSW_FLSeatOttomanOpeCmd = _x.SSW_FLSeatOttomanOpeCmd;
		SSW_SteeringAngleOpeCmd = _x.SSW_SteeringAngleOpeCmd;
		SSW_SteeringExtentOpeCmd = _x.SSW_SteeringExtentOpeCmd;
		SSW_FLSeatSlideTargetPos = _x.SSW_FLSeatSlideTargetPos;
		SSW_FLSeatHeightTargetPos = _x.SSW_FLSeatHeightTargetPos;
		SSW_FLSeatBackrestTargetPos = _x.SSW_FLSeatBackrestTargetPos;
		SSW_FLSeatTiltTargetPos = _x.SSW_FLSeatTiltTargetPos;
		SSW_FLSeatCushionTargetPos = _x.SSW_FLSeatCushionTargetPos;
		SSW_FLSeatOttomanTargetPos = _x.SSW_FLSeatOttomanTargetPos;
		SSW_SteeringAngleTargetPos = _x.SSW_SteeringAngleTargetPos;
		SSW_SteeringExtentTargetPos = _x.SSW_SteeringExtentTargetPos;
		SSW_FRSeatSlideOpeCmd = _x.SSW_FRSeatSlideOpeCmd;
		SSW_FRSeatHeightOpeCmd = _x.SSW_FRSeatHeightOpeCmd;
		SSW_FRSeatBackrestOpeCmd = _x.SSW_FRSeatBackrestOpeCmd;
		SSW_FRSeatTiltOpeCmd = _x.SSW_FRSeatTiltOpeCmd;
		SSW_FRSeatCushionOpeCmd = _x.SSW_FRSeatCushionOpeCmd;
		SSW_FRSeatOttomanOpeCmd = _x.SSW_FRSeatOttomanOpeCmd;
		SSW_FRSeatSlideTargetPos = _x.SSW_FRSeatSlideTargetPos;
		SSW_FRSeatHeightTargetPos = _x.SSW_FRSeatHeightTargetPos;
		SSW_FRSeatBackrestTargetPos = _x.SSW_FRSeatBackrestTargetPos;
		SSW_FRSeatTiltTargetPos = _x.SSW_FRSeatTiltTargetPos;
		SSW_FRSeatCushionTargetPos = _x.SSW_FRSeatCushionTargetPos;
		SSW_FRSeatOttomanTargetPos = _x.SSW_FRSeatOttomanTargetPos;
		SSW_FLSeatHeatLevelCtr = _x.SSW_FLSeatHeatLevelCtr;
		SSW_FLSeatEasyEntryCtr = _x.SSW_FLSeatEasyEntryCtr;
		SSW_FLSeatVentLevelCtr = _x.SSW_FLSeatVentLevelCtr;
		SSW_SteeringHeatCtr = _x.SSW_SteeringHeatCtr;
		SSW_FLLumbarOpeCmd = _x.SSW_FLLumbarOpeCmd;
		SSW_FLSeatAdjForbidSt = _x.SSW_FLSeatAdjForbidSt;
		SSW_FRSeatHeatLevelCtr = _x.SSW_FRSeatHeatLevelCtr;
		SSW_FRSeatEasyEntryCtr = _x.SSW_FRSeatEasyEntryCtr;
		SSW_FRSeatVentLevelCtr = _x.SSW_FRSeatVentLevelCtr;
		SSW_FRLumbarOpeCmd = _x.SSW_FRLumbarOpeCmd;
		SSW_FRSeatAdjForbidSt = _x.SSW_FRSeatAdjForbidSt;
		SSW_EasyEntryExitFuncCfgSt = _x.SSW_EasyEntryExitFuncCfgSt;
		SSW_FREasyEntryExitFuncCfgSt = _x.SSW_FREasyEntryExitFuncCfgSt;
		SSW_FRSeatSaveRecallPopReq = _x.SSW_FRSeatSaveRecallPopReq;
		SSW_PSCSOpeSt = _x.SSW_PSCSOpeSt;
		SSW_FRSCSOpeSt = _x.SSW_FRSCSOpeSt;
		SSW_FRSeatAutoModeCfgSt = _x.SSW_FRSeatAutoModeCfgSt;
		SSW_FLSeatAutoModeCfgSt = _x.SSW_FLSeatAutoModeCfgSt;
		return *this;
	}
	BDCSSW2& operator=(BDCSSW2 &&_x){
		SSW_FLSeatHeatTempValue = std::move(_x.SSW_FLSeatHeatTempValue);
		SSW_FLSeatVentSt = std::move(_x.SSW_FLSeatVentSt);
		SSW_FLSeatHeatingSt = std::move(_x.SSW_FLSeatHeatingSt);
		SSW_SteerHeatSt = std::move(_x.SSW_SteerHeatSt);
		SSW_FLSeatHeatTempVD = std::move(_x.SSW_FLSeatHeatTempVD);
		SSW_FRSeatEasyEntrySt = std::move(_x.SSW_FRSeatEasyEntrySt);
		SSW_FRSeatEasyEntryActSt = std::move(_x.SSW_FRSeatEasyEntryActSt);
		SSW_FRSeatHeatTempValue = std::move(_x.SSW_FRSeatHeatTempValue);
		SSW_FRSeatVentSt = std::move(_x.SSW_FRSeatVentSt);
		SSW_FRSeatHeatingSt = std::move(_x.SSW_FRSeatHeatingSt);
		SSW_FRSeatHeatTempVD = std::move(_x.SSW_FRSeatHeatTempVD);
		SSW_FLSeatSlideFaultSt = std::move(_x.SSW_FLSeatSlideFaultSt);
		SSW_FLSeatHeightFaultSt = std::move(_x.SSW_FLSeatHeightFaultSt);
		SSW_FLSeatBackrestFaultSt = std::move(_x.SSW_FLSeatBackrestFaultSt);
		SSW_FLSeatTiltFaultSt = std::move(_x.SSW_FLSeatTiltFaultSt);
		SSW_FLSeatCushionFaultSt = std::move(_x.SSW_FLSeatCushionFaultSt);
		SSW_FLSeatOttomanFaultSt = std::move(_x.SSW_FLSeatOttomanFaultSt);
		SSW_SteeringAngleFaultSt = std::move(_x.SSW_SteeringAngleFaultSt);
		SSW_SteeringExtentFaultSt = std::move(_x.SSW_SteeringExtentFaultSt);
		SSW_FLSeatHeatFaultSt = std::move(_x.SSW_FLSeatHeatFaultSt);
		SSW_FLSeatVentFaultSt = std::move(_x.SSW_FLSeatVentFaultSt);
		SSW_SteerHeatFaultSt = std::move(_x.SSW_SteerHeatFaultSt);
		SSW_FLLumbarFaultSt = std::move(_x.SSW_FLLumbarFaultSt);
		SSW_FLLumbarOpeSt = std::move(_x.SSW_FLLumbarOpeSt);
		SSW_FRSeatSlideFaultSt = std::move(_x.SSW_FRSeatSlideFaultSt);
		SSW_FRSeatHeightFaultSt = std::move(_x.SSW_FRSeatHeightFaultSt);
		SSW_FRSeatBackrestFaultSt = std::move(_x.SSW_FRSeatBackrestFaultSt);
		SSW_FRSeatTiltFaultSt = std::move(_x.SSW_FRSeatTiltFaultSt);
		SSW_FRSeatCushionFaultSt = std::move(_x.SSW_FRSeatCushionFaultSt);
		SSW_FRSeatOttomanFaultSt = std::move(_x.SSW_FRSeatOttomanFaultSt);
		SSW_FRSeatHeatFaultSt = std::move(_x.SSW_FRSeatHeatFaultSt);
		SSW_FRSeatVentFaultSt = std::move(_x.SSW_FRSeatVentFaultSt);
		SSW_FLSeatSlideOpeCmd = std::move(_x.SSW_FLSeatSlideOpeCmd);
		SSW_FLSeatHeightOpeCmd = std::move(_x.SSW_FLSeatHeightOpeCmd);
		SSW_FLSeatBackrestOpeCmd = std::move(_x.SSW_FLSeatBackrestOpeCmd);
		SSW_FLSeatTiltOpeCmd = std::move(_x.SSW_FLSeatTiltOpeCmd);
		SSW_FLSeatCushionOpeCmd = std::move(_x.SSW_FLSeatCushionOpeCmd);
		SSW_FLSeatOttomanOpeCmd = std::move(_x.SSW_FLSeatOttomanOpeCmd);
		SSW_SteeringAngleOpeCmd = std::move(_x.SSW_SteeringAngleOpeCmd);
		SSW_SteeringExtentOpeCmd = std::move(_x.SSW_SteeringExtentOpeCmd);
		SSW_FLSeatSlideTargetPos = std::move(_x.SSW_FLSeatSlideTargetPos);
		SSW_FLSeatHeightTargetPos = std::move(_x.SSW_FLSeatHeightTargetPos);
		SSW_FLSeatBackrestTargetPos = std::move(_x.SSW_FLSeatBackrestTargetPos);
		SSW_FLSeatTiltTargetPos = std::move(_x.SSW_FLSeatTiltTargetPos);
		SSW_FLSeatCushionTargetPos = std::move(_x.SSW_FLSeatCushionTargetPos);
		SSW_FLSeatOttomanTargetPos = std::move(_x.SSW_FLSeatOttomanTargetPos);
		SSW_SteeringAngleTargetPos = std::move(_x.SSW_SteeringAngleTargetPos);
		SSW_SteeringExtentTargetPos = std::move(_x.SSW_SteeringExtentTargetPos);
		SSW_FRSeatSlideOpeCmd = std::move(_x.SSW_FRSeatSlideOpeCmd);
		SSW_FRSeatHeightOpeCmd = std::move(_x.SSW_FRSeatHeightOpeCmd);
		SSW_FRSeatBackrestOpeCmd = std::move(_x.SSW_FRSeatBackrestOpeCmd);
		SSW_FRSeatTiltOpeCmd = std::move(_x.SSW_FRSeatTiltOpeCmd);
		SSW_FRSeatCushionOpeCmd = std::move(_x.SSW_FRSeatCushionOpeCmd);
		SSW_FRSeatOttomanOpeCmd = std::move(_x.SSW_FRSeatOttomanOpeCmd);
		SSW_FRSeatSlideTargetPos = std::move(_x.SSW_FRSeatSlideTargetPos);
		SSW_FRSeatHeightTargetPos = std::move(_x.SSW_FRSeatHeightTargetPos);
		SSW_FRSeatBackrestTargetPos = std::move(_x.SSW_FRSeatBackrestTargetPos);
		SSW_FRSeatTiltTargetPos = std::move(_x.SSW_FRSeatTiltTargetPos);
		SSW_FRSeatCushionTargetPos = std::move(_x.SSW_FRSeatCushionTargetPos);
		SSW_FRSeatOttomanTargetPos = std::move(_x.SSW_FRSeatOttomanTargetPos);
		SSW_FLSeatHeatLevelCtr = std::move(_x.SSW_FLSeatHeatLevelCtr);
		SSW_FLSeatEasyEntryCtr = std::move(_x.SSW_FLSeatEasyEntryCtr);
		SSW_FLSeatVentLevelCtr = std::move(_x.SSW_FLSeatVentLevelCtr);
		SSW_SteeringHeatCtr = std::move(_x.SSW_SteeringHeatCtr);
		SSW_FLLumbarOpeCmd = std::move(_x.SSW_FLLumbarOpeCmd);
		SSW_FLSeatAdjForbidSt = std::move(_x.SSW_FLSeatAdjForbidSt);
		SSW_FRSeatHeatLevelCtr = std::move(_x.SSW_FRSeatHeatLevelCtr);
		SSW_FRSeatEasyEntryCtr = std::move(_x.SSW_FRSeatEasyEntryCtr);
		SSW_FRSeatVentLevelCtr = std::move(_x.SSW_FRSeatVentLevelCtr);
		SSW_FRLumbarOpeCmd = std::move(_x.SSW_FRLumbarOpeCmd);
		SSW_FRSeatAdjForbidSt = std::move(_x.SSW_FRSeatAdjForbidSt);
		SSW_EasyEntryExitFuncCfgSt = std::move(_x.SSW_EasyEntryExitFuncCfgSt);
		SSW_FREasyEntryExitFuncCfgSt = std::move(_x.SSW_FREasyEntryExitFuncCfgSt);
		SSW_FRSeatSaveRecallPopReq = std::move(_x.SSW_FRSeatSaveRecallPopReq);
		SSW_PSCSOpeSt = std::move(_x.SSW_PSCSOpeSt);
		SSW_FRSCSOpeSt = std::move(_x.SSW_FRSCSOpeSt);
		SSW_FRSeatAutoModeCfgSt = std::move(_x.SSW_FRSeatAutoModeCfgSt);
		SSW_FLSeatAutoModeCfgSt = std::move(_x.SSW_FLSeatAutoModeCfgSt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(SSW_FLSeatHeatTempValue);
		fun(SSW_FLSeatVentSt);
		fun(SSW_FLSeatHeatingSt);
		fun(SSW_SteerHeatSt);
		fun(SSW_FLSeatHeatTempVD);
		fun(SSW_FRSeatEasyEntrySt);
		fun(SSW_FRSeatEasyEntryActSt);
		fun(SSW_FRSeatHeatTempValue);
		fun(SSW_FRSeatVentSt);
		fun(SSW_FRSeatHeatingSt);
		fun(SSW_FRSeatHeatTempVD);
		fun(SSW_FLSeatSlideFaultSt);
		fun(SSW_FLSeatHeightFaultSt);
		fun(SSW_FLSeatBackrestFaultSt);
		fun(SSW_FLSeatTiltFaultSt);
		fun(SSW_FLSeatCushionFaultSt);
		fun(SSW_FLSeatOttomanFaultSt);
		fun(SSW_SteeringAngleFaultSt);
		fun(SSW_SteeringExtentFaultSt);
		fun(SSW_FLSeatHeatFaultSt);
		fun(SSW_FLSeatVentFaultSt);
		fun(SSW_SteerHeatFaultSt);
		fun(SSW_FLLumbarFaultSt);
		fun(SSW_FLLumbarOpeSt);
		fun(SSW_FRSeatSlideFaultSt);
		fun(SSW_FRSeatHeightFaultSt);
		fun(SSW_FRSeatBackrestFaultSt);
		fun(SSW_FRSeatTiltFaultSt);
		fun(SSW_FRSeatCushionFaultSt);
		fun(SSW_FRSeatOttomanFaultSt);
		fun(SSW_FRSeatHeatFaultSt);
		fun(SSW_FRSeatVentFaultSt);
		fun(SSW_FLSeatSlideOpeCmd);
		fun(SSW_FLSeatHeightOpeCmd);
		fun(SSW_FLSeatBackrestOpeCmd);
		fun(SSW_FLSeatTiltOpeCmd);
		fun(SSW_FLSeatCushionOpeCmd);
		fun(SSW_FLSeatOttomanOpeCmd);
		fun(SSW_SteeringAngleOpeCmd);
		fun(SSW_SteeringExtentOpeCmd);
		fun(SSW_FLSeatSlideTargetPos);
		fun(SSW_FLSeatHeightTargetPos);
		fun(SSW_FLSeatBackrestTargetPos);
		fun(SSW_FLSeatTiltTargetPos);
		fun(SSW_FLSeatCushionTargetPos);
		fun(SSW_FLSeatOttomanTargetPos);
		fun(SSW_SteeringAngleTargetPos);
		fun(SSW_SteeringExtentTargetPos);
		fun(SSW_FRSeatSlideOpeCmd);
		fun(SSW_FRSeatHeightOpeCmd);
		fun(SSW_FRSeatBackrestOpeCmd);
		fun(SSW_FRSeatTiltOpeCmd);
		fun(SSW_FRSeatCushionOpeCmd);
		fun(SSW_FRSeatOttomanOpeCmd);
		fun(SSW_FRSeatSlideTargetPos);
		fun(SSW_FRSeatHeightTargetPos);
		fun(SSW_FRSeatBackrestTargetPos);
		fun(SSW_FRSeatTiltTargetPos);
		fun(SSW_FRSeatCushionTargetPos);
		fun(SSW_FRSeatOttomanTargetPos);
		fun(SSW_FLSeatHeatLevelCtr);
		fun(SSW_FLSeatEasyEntryCtr);
		fun(SSW_FLSeatVentLevelCtr);
		fun(SSW_SteeringHeatCtr);
		fun(SSW_FLLumbarOpeCmd);
		fun(SSW_FLSeatAdjForbidSt);
		fun(SSW_FRSeatHeatLevelCtr);
		fun(SSW_FRSeatEasyEntryCtr);
		fun(SSW_FRSeatVentLevelCtr);
		fun(SSW_FRLumbarOpeCmd);
		fun(SSW_FRSeatAdjForbidSt);
		fun(SSW_EasyEntryExitFuncCfgSt);
		fun(SSW_FREasyEntryExitFuncCfgSt);
		fun(SSW_FRSeatSaveRecallPopReq);
		fun(SSW_PSCSOpeSt);
		fun(SSW_FRSCSOpeSt);
		fun(SSW_FRSeatAutoModeCfgSt);
		fun(SSW_FLSeatAutoModeCfgSt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(SSW_FLSeatHeatTempValue);
		fun(SSW_FLSeatVentSt);
		fun(SSW_FLSeatHeatingSt);
		fun(SSW_SteerHeatSt);
		fun(SSW_FLSeatHeatTempVD);
		fun(SSW_FRSeatEasyEntrySt);
		fun(SSW_FRSeatEasyEntryActSt);
		fun(SSW_FRSeatHeatTempValue);
		fun(SSW_FRSeatVentSt);
		fun(SSW_FRSeatHeatingSt);
		fun(SSW_FRSeatHeatTempVD);
		fun(SSW_FLSeatSlideFaultSt);
		fun(SSW_FLSeatHeightFaultSt);
		fun(SSW_FLSeatBackrestFaultSt);
		fun(SSW_FLSeatTiltFaultSt);
		fun(SSW_FLSeatCushionFaultSt);
		fun(SSW_FLSeatOttomanFaultSt);
		fun(SSW_SteeringAngleFaultSt);
		fun(SSW_SteeringExtentFaultSt);
		fun(SSW_FLSeatHeatFaultSt);
		fun(SSW_FLSeatVentFaultSt);
		fun(SSW_SteerHeatFaultSt);
		fun(SSW_FLLumbarFaultSt);
		fun(SSW_FLLumbarOpeSt);
		fun(SSW_FRSeatSlideFaultSt);
		fun(SSW_FRSeatHeightFaultSt);
		fun(SSW_FRSeatBackrestFaultSt);
		fun(SSW_FRSeatTiltFaultSt);
		fun(SSW_FRSeatCushionFaultSt);
		fun(SSW_FRSeatOttomanFaultSt);
		fun(SSW_FRSeatHeatFaultSt);
		fun(SSW_FRSeatVentFaultSt);
		fun(SSW_FLSeatSlideOpeCmd);
		fun(SSW_FLSeatHeightOpeCmd);
		fun(SSW_FLSeatBackrestOpeCmd);
		fun(SSW_FLSeatTiltOpeCmd);
		fun(SSW_FLSeatCushionOpeCmd);
		fun(SSW_FLSeatOttomanOpeCmd);
		fun(SSW_SteeringAngleOpeCmd);
		fun(SSW_SteeringExtentOpeCmd);
		fun(SSW_FLSeatSlideTargetPos);
		fun(SSW_FLSeatHeightTargetPos);
		fun(SSW_FLSeatBackrestTargetPos);
		fun(SSW_FLSeatTiltTargetPos);
		fun(SSW_FLSeatCushionTargetPos);
		fun(SSW_FLSeatOttomanTargetPos);
		fun(SSW_SteeringAngleTargetPos);
		fun(SSW_SteeringExtentTargetPos);
		fun(SSW_FRSeatSlideOpeCmd);
		fun(SSW_FRSeatHeightOpeCmd);
		fun(SSW_FRSeatBackrestOpeCmd);
		fun(SSW_FRSeatTiltOpeCmd);
		fun(SSW_FRSeatCushionOpeCmd);
		fun(SSW_FRSeatOttomanOpeCmd);
		fun(SSW_FRSeatSlideTargetPos);
		fun(SSW_FRSeatHeightTargetPos);
		fun(SSW_FRSeatBackrestTargetPos);
		fun(SSW_FRSeatTiltTargetPos);
		fun(SSW_FRSeatCushionTargetPos);
		fun(SSW_FRSeatOttomanTargetPos);
		fun(SSW_FLSeatHeatLevelCtr);
		fun(SSW_FLSeatEasyEntryCtr);
		fun(SSW_FLSeatVentLevelCtr);
		fun(SSW_SteeringHeatCtr);
		fun(SSW_FLLumbarOpeCmd);
		fun(SSW_FLSeatAdjForbidSt);
		fun(SSW_FRSeatHeatLevelCtr);
		fun(SSW_FRSeatEasyEntryCtr);
		fun(SSW_FRSeatVentLevelCtr);
		fun(SSW_FRLumbarOpeCmd);
		fun(SSW_FRSeatAdjForbidSt);
		fun(SSW_EasyEntryExitFuncCfgSt);
		fun(SSW_FREasyEntryExitFuncCfgSt);
		fun(SSW_FRSeatSaveRecallPopReq);
		fun(SSW_PSCSOpeSt);
		fun(SSW_FRSCSOpeSt);
		fun(SSW_FRSeatAutoModeCfgSt);
		fun(SSW_FLSeatAutoModeCfgSt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (SSW_FLSeatHeatTempValue);
		fun << (SSW_FLSeatVentSt);
		fun << (SSW_FLSeatHeatingSt);
		fun << (SSW_SteerHeatSt);
		fun << (SSW_FLSeatHeatTempVD);
		fun << (SSW_FRSeatEasyEntrySt);
		fun << (SSW_FRSeatEasyEntryActSt);
		fun << (SSW_FRSeatHeatTempValue);
		fun << (SSW_FRSeatVentSt);
		fun << (SSW_FRSeatHeatingSt);
		fun << (SSW_FRSeatHeatTempVD);
		fun << (SSW_FLSeatSlideFaultSt);
		fun << (SSW_FLSeatHeightFaultSt);
		fun << (SSW_FLSeatBackrestFaultSt);
		fun << (SSW_FLSeatTiltFaultSt);
		fun << (SSW_FLSeatCushionFaultSt);
		fun << (SSW_FLSeatOttomanFaultSt);
		fun << (SSW_SteeringAngleFaultSt);
		fun << (SSW_SteeringExtentFaultSt);
		fun << (SSW_FLSeatHeatFaultSt);
		fun << (SSW_FLSeatVentFaultSt);
		fun << (SSW_SteerHeatFaultSt);
		fun << (SSW_FLLumbarFaultSt);
		fun << (SSW_FLLumbarOpeSt);
		fun << (SSW_FRSeatSlideFaultSt);
		fun << (SSW_FRSeatHeightFaultSt);
		fun << (SSW_FRSeatBackrestFaultSt);
		fun << (SSW_FRSeatTiltFaultSt);
		fun << (SSW_FRSeatCushionFaultSt);
		fun << (SSW_FRSeatOttomanFaultSt);
		fun << (SSW_FRSeatHeatFaultSt);
		fun << (SSW_FRSeatVentFaultSt);
		fun << (SSW_FLSeatSlideOpeCmd);
		fun << (SSW_FLSeatHeightOpeCmd);
		fun << (SSW_FLSeatBackrestOpeCmd);
		fun << (SSW_FLSeatTiltOpeCmd);
		fun << (SSW_FLSeatCushionOpeCmd);
		fun << (SSW_FLSeatOttomanOpeCmd);
		fun << (SSW_SteeringAngleOpeCmd);
		fun << (SSW_SteeringExtentOpeCmd);
		fun << (SSW_FLSeatSlideTargetPos);
		fun << (SSW_FLSeatHeightTargetPos);
		fun << (SSW_FLSeatBackrestTargetPos);
		fun << (SSW_FLSeatTiltTargetPos);
		fun << (SSW_FLSeatCushionTargetPos);
		fun << (SSW_FLSeatOttomanTargetPos);
		fun << (SSW_SteeringAngleTargetPos);
		fun << (SSW_SteeringExtentTargetPos);
		fun << (SSW_FRSeatSlideOpeCmd);
		fun << (SSW_FRSeatHeightOpeCmd);
		fun << (SSW_FRSeatBackrestOpeCmd);
		fun << (SSW_FRSeatTiltOpeCmd);
		fun << (SSW_FRSeatCushionOpeCmd);
		fun << (SSW_FRSeatOttomanOpeCmd);
		fun << (SSW_FRSeatSlideTargetPos);
		fun << (SSW_FRSeatHeightTargetPos);
		fun << (SSW_FRSeatBackrestTargetPos);
		fun << (SSW_FRSeatTiltTargetPos);
		fun << (SSW_FRSeatCushionTargetPos);
		fun << (SSW_FRSeatOttomanTargetPos);
		fun << (SSW_FLSeatHeatLevelCtr);
		fun << (SSW_FLSeatEasyEntryCtr);
		fun << (SSW_FLSeatVentLevelCtr);
		fun << (SSW_SteeringHeatCtr);
		fun << (SSW_FLLumbarOpeCmd);
		fun << (SSW_FLSeatAdjForbidSt);
		fun << (SSW_FRSeatHeatLevelCtr);
		fun << (SSW_FRSeatEasyEntryCtr);
		fun << (SSW_FRSeatVentLevelCtr);
		fun << (SSW_FRLumbarOpeCmd);
		fun << (SSW_FRSeatAdjForbidSt);
		fun << (SSW_EasyEntryExitFuncCfgSt);
		fun << (SSW_FREasyEntryExitFuncCfgSt);
		fun << (SSW_FRSeatSaveRecallPopReq);
		fun << (SSW_PSCSOpeSt);
		fun << (SSW_FRSCSOpeSt);
		fun << (SSW_FRSeatAutoModeCfgSt);
		fun << (SSW_FLSeatAutoModeCfgSt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (SSW_FLSeatHeatTempValue);
		fun >> (SSW_FLSeatVentSt);
		fun >> (SSW_FLSeatHeatingSt);
		fun >> (SSW_SteerHeatSt);
		fun >> (SSW_FLSeatHeatTempVD);
		fun >> (SSW_FRSeatEasyEntrySt);
		fun >> (SSW_FRSeatEasyEntryActSt);
		fun >> (SSW_FRSeatHeatTempValue);
		fun >> (SSW_FRSeatVentSt);
		fun >> (SSW_FRSeatHeatingSt);
		fun >> (SSW_FRSeatHeatTempVD);
		fun >> (SSW_FLSeatSlideFaultSt);
		fun >> (SSW_FLSeatHeightFaultSt);
		fun >> (SSW_FLSeatBackrestFaultSt);
		fun >> (SSW_FLSeatTiltFaultSt);
		fun >> (SSW_FLSeatCushionFaultSt);
		fun >> (SSW_FLSeatOttomanFaultSt);
		fun >> (SSW_SteeringAngleFaultSt);
		fun >> (SSW_SteeringExtentFaultSt);
		fun >> (SSW_FLSeatHeatFaultSt);
		fun >> (SSW_FLSeatVentFaultSt);
		fun >> (SSW_SteerHeatFaultSt);
		fun >> (SSW_FLLumbarFaultSt);
		fun >> (SSW_FLLumbarOpeSt);
		fun >> (SSW_FRSeatSlideFaultSt);
		fun >> (SSW_FRSeatHeightFaultSt);
		fun >> (SSW_FRSeatBackrestFaultSt);
		fun >> (SSW_FRSeatTiltFaultSt);
		fun >> (SSW_FRSeatCushionFaultSt);
		fun >> (SSW_FRSeatOttomanFaultSt);
		fun >> (SSW_FRSeatHeatFaultSt);
		fun >> (SSW_FRSeatVentFaultSt);
		fun >> (SSW_FLSeatSlideOpeCmd);
		fun >> (SSW_FLSeatHeightOpeCmd);
		fun >> (SSW_FLSeatBackrestOpeCmd);
		fun >> (SSW_FLSeatTiltOpeCmd);
		fun >> (SSW_FLSeatCushionOpeCmd);
		fun >> (SSW_FLSeatOttomanOpeCmd);
		fun >> (SSW_SteeringAngleOpeCmd);
		fun >> (SSW_SteeringExtentOpeCmd);
		fun >> (SSW_FLSeatSlideTargetPos);
		fun >> (SSW_FLSeatHeightTargetPos);
		fun >> (SSW_FLSeatBackrestTargetPos);
		fun >> (SSW_FLSeatTiltTargetPos);
		fun >> (SSW_FLSeatCushionTargetPos);
		fun >> (SSW_FLSeatOttomanTargetPos);
		fun >> (SSW_SteeringAngleTargetPos);
		fun >> (SSW_SteeringExtentTargetPos);
		fun >> (SSW_FRSeatSlideOpeCmd);
		fun >> (SSW_FRSeatHeightOpeCmd);
		fun >> (SSW_FRSeatBackrestOpeCmd);
		fun >> (SSW_FRSeatTiltOpeCmd);
		fun >> (SSW_FRSeatCushionOpeCmd);
		fun >> (SSW_FRSeatOttomanOpeCmd);
		fun >> (SSW_FRSeatSlideTargetPos);
		fun >> (SSW_FRSeatHeightTargetPos);
		fun >> (SSW_FRSeatBackrestTargetPos);
		fun >> (SSW_FRSeatTiltTargetPos);
		fun >> (SSW_FRSeatCushionTargetPos);
		fun >> (SSW_FRSeatOttomanTargetPos);
		fun >> (SSW_FLSeatHeatLevelCtr);
		fun >> (SSW_FLSeatEasyEntryCtr);
		fun >> (SSW_FLSeatVentLevelCtr);
		fun >> (SSW_SteeringHeatCtr);
		fun >> (SSW_FLLumbarOpeCmd);
		fun >> (SSW_FLSeatAdjForbidSt);
		fun >> (SSW_FRSeatHeatLevelCtr);
		fun >> (SSW_FRSeatEasyEntryCtr);
		fun >> (SSW_FRSeatVentLevelCtr);
		fun >> (SSW_FRLumbarOpeCmd);
		fun >> (SSW_FRSeatAdjForbidSt);
		fun >> (SSW_EasyEntryExitFuncCfgSt);
		fun >> (SSW_FREasyEntryExitFuncCfgSt);
		fun >> (SSW_FRSeatSaveRecallPopReq);
		fun >> (SSW_PSCSOpeSt);
		fun >> (SSW_FRSCSOpeSt);
		fun >> (SSW_FRSeatAutoModeCfgSt);
		fun >> (SSW_FLSeatAutoModeCfgSt);
	}
};

#endif //____BDCSSW2_H__
