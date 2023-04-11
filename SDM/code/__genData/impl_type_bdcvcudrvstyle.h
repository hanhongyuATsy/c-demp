#ifndef ____BDCVCUDRVSTYLE_H__
#define ____BDCVCUDRVSTYLE_H__


#include "cstdint"






struct BDCVCUDrvStyle {
public:
	std::uint16_t VCU_DCU_TorqSet;
	std::uint8_t VCU_DCU_MinTorqDampgCtl;
	std::uint8_t VCU_BMS_BoostChgMode;
	std::uint16_t VCU_DCU_IdcMax;
	std::uint16_t VCU_DCU_IdcMin;
	std::uint16_t VCU_DCU_UdcMin;
	std::uint16_t VCU_DCU_UdcMax;
	std::uint16_t VCU_DCU_TorqMin;
	std::uint16_t VCU_DCU_MaxTorqGradient;
	std::uint16_t VCU_DCU_TorqMax;
	std::uint8_t VCU_DCU_MaxTorqDampgCtl;
	std::uint16_t VCU_DCU_SpdLmt;
	std::uint16_t VCU_DCU_SpdSet;
	std::uint8_t VCU_DCU_SurgeDamperStReq;
	std::uint8_t VCU_DCU_SurgeDamperFactor;
	std::uint8_t VCU_DCU_ModeReq;
	std::uint16_t VCU_IPS_OBCDsChDCCurrLim;
	std::uint16_t VCU_IPS_DCDCVoltLvSet;
	std::uint16_t VCU_IPS_DCDCLvCurrLim;
	std::uint8_t VCU_AccButtInfo;
	std::uint8_t VCU_LateralAssistBtnInfo;
	std::uint8_t VCU_APAGasPedalIntv;
	std::uint8_t VCU_APAAvailable;
	std::uint16_t VCU_APAWheelTorqDriverReq;
	std::uint8_t VCU_ACCMaxRecpDecel;
	std::uint8_t VCU_FullBattBrkReq;
	std::uint8_t VCU_ACCLimitOperatingSt;
	std::uint8_t VCU_APA_Resp;
	std::uint8_t VCU_APAGearIntervern;
	std::uint8_t VCU_RegenModulationReq;
	std::uint16_t VCU_ActVehWheelTorq;
	std::uint16_t VCU_VehWheelTorqMax;
	std::uint8_t VCU_EspDrvModReq;
	std::uint16_t VCU_MaxRecpTorq;
	std::uint16_t VCU_RecpTorq;
	std::uint8_t VCU_ElecUnlockDrvReq;
	std::uint8_t VCU_BrkLightOn;
	std::uint8_t VCU_BCMhazardLampOn;
	std::uint16_t VCU_TargetRecpTorq;
	std::uint8_t VCU_TorqDriverReq;
	std::uint8_t VCU_VehActDrvTorq;
	std::uint8_t VCU_AccSpareCanError;
	std::uint8_t VCU_ACCStResp;
	std::uint8_t VCU_AccTMCFail;
	std::uint8_t VCU_AccElecECFail;
	std::uint8_t VCU_IFCFailureSt;
	std::uint16_t VCU_VehElcConspInst;
	std::uint8_t VCU_ENSModeAvail;
	std::uint8_t VCU_CreepAvail;
	std::uint8_t VCU_RecpLevelAvail;
	std::uint8_t VCU_SOCDynamicDspSt;
	std::uint8_t VCU_ARBSt;
	std::uint8_t VCU_RemoteDiagCode;
	std::uint8_t VCU_HvBatPrecdng;
	std::uint8_t VCU_HealChekSt;
	std::uint8_t VCU_HVPowerSt;
	std::uint16_t VCU_HvLoadCurr;
	std::uint16_t VCU_DCDCLvCurrLim;
	std::uint16_t VCU_DCDCVoltLvSet;
	std::uint8_t VCU_bWakeUpBD;
	std::uint8_t VCU_stDhcBD;
	std::uint8_t VCU_StACCBD;
	std::uint8_t VCU_StAPABD;
	std::uint8_t VCU_stChcBD;
	std::uint8_t VCU_ErhStBD;
	std::uint8_t VCU_EdvStBD;
	std::uint8_t VCU_Acplugeleclocklightreq;
	std::uint8_t VCU_Acdischgswitchlampreq;
	std::uint8_t VCU_SolenoidDrvCmd;
	std::uint8_t VCU_Chglamplightreq;
	std::uint8_t VCU_Chglampflashreq;
/*
	BDCVCUDrvStyle() {}
	~BDCVCUDrvStyle() {}
	BDCVCUDrvStyle(const std::uint16_t _VCU_DCU_TorqSet,const std::uint8_t _VCU_DCU_MinTorqDampgCtl,const std::uint8_t _VCU_BMS_BoostChgMode,const std::uint16_t _VCU_DCU_IdcMax,const std::uint16_t _VCU_DCU_IdcMin,const std::uint16_t _VCU_DCU_UdcMin,const std::uint16_t _VCU_DCU_UdcMax,const std::uint16_t _VCU_DCU_TorqMin,const std::uint16_t _VCU_DCU_MaxTorqGradient,const std::uint16_t _VCU_DCU_TorqMax,const std::uint8_t _VCU_DCU_MaxTorqDampgCtl,const std::uint16_t _VCU_DCU_SpdLmt,const std::uint16_t _VCU_DCU_SpdSet,const std::uint8_t _VCU_DCU_SurgeDamperStReq,const std::uint8_t _VCU_DCU_SurgeDamperFactor,const std::uint8_t _VCU_DCU_ModeReq,const std::uint16_t _VCU_IPS_OBCDsChDCCurrLim,const std::uint16_t _VCU_IPS_DCDCVoltLvSet,const std::uint16_t _VCU_IPS_DCDCLvCurrLim,const std::uint8_t _VCU_AccButtInfo,const std::uint8_t _VCU_LateralAssistBtnInfo,const std::uint8_t _VCU_APAGasPedalIntv,const std::uint8_t _VCU_APAAvailable,const std::uint16_t _VCU_APAWheelTorqDriverReq,const std::uint8_t _VCU_ACCMaxRecpDecel,const std::uint8_t _VCU_FullBattBrkReq,const std::uint8_t _VCU_ACCLimitOperatingSt,const std::uint8_t _VCU_APA_Resp,const std::uint8_t _VCU_APAGearIntervern,const std::uint8_t _VCU_RegenModulationReq,const std::uint16_t _VCU_ActVehWheelTorq,const std::uint16_t _VCU_VehWheelTorqMax,const std::uint8_t _VCU_EspDrvModReq,const std::uint16_t _VCU_MaxRecpTorq,const std::uint16_t _VCU_RecpTorq,const std::uint8_t _VCU_ElecUnlockDrvReq,const std::uint8_t _VCU_BrkLightOn,const std::uint8_t _VCU_BCMhazardLampOn,const std::uint16_t _VCU_TargetRecpTorq,const std::uint8_t _VCU_TorqDriverReq,const std::uint8_t _VCU_VehActDrvTorq,const std::uint8_t _VCU_AccSpareCanError,const std::uint8_t _VCU_ACCStResp,const std::uint8_t _VCU_AccTMCFail,const std::uint8_t _VCU_AccElecECFail,const std::uint8_t _VCU_IFCFailureSt,const std::uint16_t _VCU_VehElcConspInst,const std::uint8_t _VCU_ENSModeAvail,const std::uint8_t _VCU_CreepAvail,const std::uint8_t _VCU_RecpLevelAvail,const std::uint8_t _VCU_SOCDynamicDspSt,const std::uint8_t _VCU_ARBSt,const std::uint8_t _VCU_RemoteDiagCode,const std::uint8_t _VCU_HvBatPrecdng,const std::uint8_t _VCU_HealChekSt,const std::uint8_t _VCU_HVPowerSt,const std::uint16_t _VCU_HvLoadCurr,const std::uint16_t _VCU_DCDCLvCurrLim,const std::uint16_t _VCU_DCDCVoltLvSet,const std::uint8_t _VCU_bWakeUpBD,const std::uint8_t _VCU_stDhcBD,const std::uint8_t _VCU_StACCBD,const std::uint8_t _VCU_StAPABD,const std::uint8_t _VCU_stChcBD,const std::uint8_t _VCU_ErhStBD,const std::uint8_t _VCU_EdvStBD,const std::uint8_t _VCU_Acplugeleclocklightreq,const std::uint8_t _VCU_Acdischgswitchlampreq,const std::uint8_t _VCU_SolenoidDrvCmd,const std::uint8_t _VCU_Chglamplightreq,const std::uint8_t _VCU_Chglampflashreq):VCU_DCU_TorqSet(_VCU_DCU_TorqSet),VCU_DCU_MinTorqDampgCtl(_VCU_DCU_MinTorqDampgCtl),VCU_BMS_BoostChgMode(_VCU_BMS_BoostChgMode),VCU_DCU_IdcMax(_VCU_DCU_IdcMax),VCU_DCU_IdcMin(_VCU_DCU_IdcMin),VCU_DCU_UdcMin(_VCU_DCU_UdcMin),VCU_DCU_UdcMax(_VCU_DCU_UdcMax),VCU_DCU_TorqMin(_VCU_DCU_TorqMin),VCU_DCU_MaxTorqGradient(_VCU_DCU_MaxTorqGradient),VCU_DCU_TorqMax(_VCU_DCU_TorqMax),VCU_DCU_MaxTorqDampgCtl(_VCU_DCU_MaxTorqDampgCtl),VCU_DCU_SpdLmt(_VCU_DCU_SpdLmt),VCU_DCU_SpdSet(_VCU_DCU_SpdSet),VCU_DCU_SurgeDamperStReq(_VCU_DCU_SurgeDamperStReq),VCU_DCU_SurgeDamperFactor(_VCU_DCU_SurgeDamperFactor),VCU_DCU_ModeReq(_VCU_DCU_ModeReq),VCU_IPS_OBCDsChDCCurrLim(_VCU_IPS_OBCDsChDCCurrLim),VCU_IPS_DCDCVoltLvSet(_VCU_IPS_DCDCVoltLvSet),VCU_IPS_DCDCLvCurrLim(_VCU_IPS_DCDCLvCurrLim),VCU_AccButtInfo(_VCU_AccButtInfo),VCU_LateralAssistBtnInfo(_VCU_LateralAssistBtnInfo),VCU_APAGasPedalIntv(_VCU_APAGasPedalIntv),VCU_APAAvailable(_VCU_APAAvailable),VCU_APAWheelTorqDriverReq(_VCU_APAWheelTorqDriverReq),VCU_ACCMaxRecpDecel(_VCU_ACCMaxRecpDecel),VCU_FullBattBrkReq(_VCU_FullBattBrkReq),VCU_ACCLimitOperatingSt(_VCU_ACCLimitOperatingSt),VCU_APA_Resp(_VCU_APA_Resp),VCU_APAGearIntervern(_VCU_APAGearIntervern),VCU_RegenModulationReq(_VCU_RegenModulationReq),VCU_ActVehWheelTorq(_VCU_ActVehWheelTorq),VCU_VehWheelTorqMax(_VCU_VehWheelTorqMax),VCU_EspDrvModReq(_VCU_EspDrvModReq),VCU_MaxRecpTorq(_VCU_MaxRecpTorq),VCU_RecpTorq(_VCU_RecpTorq),VCU_ElecUnlockDrvReq(_VCU_ElecUnlockDrvReq),VCU_BrkLightOn(_VCU_BrkLightOn),VCU_BCMhazardLampOn(_VCU_BCMhazardLampOn),VCU_TargetRecpTorq(_VCU_TargetRecpTorq),VCU_TorqDriverReq(_VCU_TorqDriverReq),VCU_VehActDrvTorq(_VCU_VehActDrvTorq),VCU_AccSpareCanError(_VCU_AccSpareCanError),VCU_ACCStResp(_VCU_ACCStResp),VCU_AccTMCFail(_VCU_AccTMCFail),VCU_AccElecECFail(_VCU_AccElecECFail),VCU_IFCFailureSt(_VCU_IFCFailureSt),VCU_VehElcConspInst(_VCU_VehElcConspInst),VCU_ENSModeAvail(_VCU_ENSModeAvail),VCU_CreepAvail(_VCU_CreepAvail),VCU_RecpLevelAvail(_VCU_RecpLevelAvail),VCU_SOCDynamicDspSt(_VCU_SOCDynamicDspSt),VCU_ARBSt(_VCU_ARBSt),VCU_RemoteDiagCode(_VCU_RemoteDiagCode),VCU_HvBatPrecdng(_VCU_HvBatPrecdng),VCU_HealChekSt(_VCU_HealChekSt),VCU_HVPowerSt(_VCU_HVPowerSt),VCU_HvLoadCurr(_VCU_HvLoadCurr),VCU_DCDCLvCurrLim(_VCU_DCDCLvCurrLim),VCU_DCDCVoltLvSet(_VCU_DCDCVoltLvSet),VCU_bWakeUpBD(_VCU_bWakeUpBD),VCU_stDhcBD(_VCU_stDhcBD),VCU_StACCBD(_VCU_StACCBD),VCU_StAPABD(_VCU_StAPABD),VCU_stChcBD(_VCU_stChcBD),VCU_ErhStBD(_VCU_ErhStBD),VCU_EdvStBD(_VCU_EdvStBD),VCU_Acplugeleclocklightreq(_VCU_Acplugeleclocklightreq),VCU_Acdischgswitchlampreq(_VCU_Acdischgswitchlampreq),VCU_SolenoidDrvCmd(_VCU_SolenoidDrvCmd),VCU_Chglamplightreq(_VCU_Chglamplightreq),VCU_Chglampflashreq(_VCU_Chglampflashreq) {}
	BDCVCUDrvStyle(const BDCVCUDrvStyle &_x){
		VCU_DCU_TorqSet = _x.VCU_DCU_TorqSet;
		VCU_DCU_MinTorqDampgCtl = _x.VCU_DCU_MinTorqDampgCtl;
		VCU_BMS_BoostChgMode = _x.VCU_BMS_BoostChgMode;
		VCU_DCU_IdcMax = _x.VCU_DCU_IdcMax;
		VCU_DCU_IdcMin = _x.VCU_DCU_IdcMin;
		VCU_DCU_UdcMin = _x.VCU_DCU_UdcMin;
		VCU_DCU_UdcMax = _x.VCU_DCU_UdcMax;
		VCU_DCU_TorqMin = _x.VCU_DCU_TorqMin;
		VCU_DCU_MaxTorqGradient = _x.VCU_DCU_MaxTorqGradient;
		VCU_DCU_TorqMax = _x.VCU_DCU_TorqMax;
		VCU_DCU_MaxTorqDampgCtl = _x.VCU_DCU_MaxTorqDampgCtl;
		VCU_DCU_SpdLmt = _x.VCU_DCU_SpdLmt;
		VCU_DCU_SpdSet = _x.VCU_DCU_SpdSet;
		VCU_DCU_SurgeDamperStReq = _x.VCU_DCU_SurgeDamperStReq;
		VCU_DCU_SurgeDamperFactor = _x.VCU_DCU_SurgeDamperFactor;
		VCU_DCU_ModeReq = _x.VCU_DCU_ModeReq;
		VCU_IPS_OBCDsChDCCurrLim = _x.VCU_IPS_OBCDsChDCCurrLim;
		VCU_IPS_DCDCVoltLvSet = _x.VCU_IPS_DCDCVoltLvSet;
		VCU_IPS_DCDCLvCurrLim = _x.VCU_IPS_DCDCLvCurrLim;
		VCU_AccButtInfo = _x.VCU_AccButtInfo;
		VCU_LateralAssistBtnInfo = _x.VCU_LateralAssistBtnInfo;
		VCU_APAGasPedalIntv = _x.VCU_APAGasPedalIntv;
		VCU_APAAvailable = _x.VCU_APAAvailable;
		VCU_APAWheelTorqDriverReq = _x.VCU_APAWheelTorqDriverReq;
		VCU_ACCMaxRecpDecel = _x.VCU_ACCMaxRecpDecel;
		VCU_FullBattBrkReq = _x.VCU_FullBattBrkReq;
		VCU_ACCLimitOperatingSt = _x.VCU_ACCLimitOperatingSt;
		VCU_APA_Resp = _x.VCU_APA_Resp;
		VCU_APAGearIntervern = _x.VCU_APAGearIntervern;
		VCU_RegenModulationReq = _x.VCU_RegenModulationReq;
		VCU_ActVehWheelTorq = _x.VCU_ActVehWheelTorq;
		VCU_VehWheelTorqMax = _x.VCU_VehWheelTorqMax;
		VCU_EspDrvModReq = _x.VCU_EspDrvModReq;
		VCU_MaxRecpTorq = _x.VCU_MaxRecpTorq;
		VCU_RecpTorq = _x.VCU_RecpTorq;
		VCU_ElecUnlockDrvReq = _x.VCU_ElecUnlockDrvReq;
		VCU_BrkLightOn = _x.VCU_BrkLightOn;
		VCU_BCMhazardLampOn = _x.VCU_BCMhazardLampOn;
		VCU_TargetRecpTorq = _x.VCU_TargetRecpTorq;
		VCU_TorqDriverReq = _x.VCU_TorqDriverReq;
		VCU_VehActDrvTorq = _x.VCU_VehActDrvTorq;
		VCU_AccSpareCanError = _x.VCU_AccSpareCanError;
		VCU_ACCStResp = _x.VCU_ACCStResp;
		VCU_AccTMCFail = _x.VCU_AccTMCFail;
		VCU_AccElecECFail = _x.VCU_AccElecECFail;
		VCU_IFCFailureSt = _x.VCU_IFCFailureSt;
		VCU_VehElcConspInst = _x.VCU_VehElcConspInst;
		VCU_ENSModeAvail = _x.VCU_ENSModeAvail;
		VCU_CreepAvail = _x.VCU_CreepAvail;
		VCU_RecpLevelAvail = _x.VCU_RecpLevelAvail;
		VCU_SOCDynamicDspSt = _x.VCU_SOCDynamicDspSt;
		VCU_ARBSt = _x.VCU_ARBSt;
		VCU_RemoteDiagCode = _x.VCU_RemoteDiagCode;
		VCU_HvBatPrecdng = _x.VCU_HvBatPrecdng;
		VCU_HealChekSt = _x.VCU_HealChekSt;
		VCU_HVPowerSt = _x.VCU_HVPowerSt;
		VCU_HvLoadCurr = _x.VCU_HvLoadCurr;
		VCU_DCDCLvCurrLim = _x.VCU_DCDCLvCurrLim;
		VCU_DCDCVoltLvSet = _x.VCU_DCDCVoltLvSet;
		VCU_bWakeUpBD = _x.VCU_bWakeUpBD;
		VCU_stDhcBD = _x.VCU_stDhcBD;
		VCU_StACCBD = _x.VCU_StACCBD;
		VCU_StAPABD = _x.VCU_StAPABD;
		VCU_stChcBD = _x.VCU_stChcBD;
		VCU_ErhStBD = _x.VCU_ErhStBD;
		VCU_EdvStBD = _x.VCU_EdvStBD;
		VCU_Acplugeleclocklightreq = _x.VCU_Acplugeleclocklightreq;
		VCU_Acdischgswitchlampreq = _x.VCU_Acdischgswitchlampreq;
		VCU_SolenoidDrvCmd = _x.VCU_SolenoidDrvCmd;
		VCU_Chglamplightreq = _x.VCU_Chglamplightreq;
		VCU_Chglampflashreq = _x.VCU_Chglampflashreq;
	}
	BDCVCUDrvStyle(BDCVCUDrvStyle &&_x){
		VCU_DCU_TorqSet = std::move(_x.VCU_DCU_TorqSet);
		VCU_DCU_MinTorqDampgCtl = std::move(_x.VCU_DCU_MinTorqDampgCtl);
		VCU_BMS_BoostChgMode = std::move(_x.VCU_BMS_BoostChgMode);
		VCU_DCU_IdcMax = std::move(_x.VCU_DCU_IdcMax);
		VCU_DCU_IdcMin = std::move(_x.VCU_DCU_IdcMin);
		VCU_DCU_UdcMin = std::move(_x.VCU_DCU_UdcMin);
		VCU_DCU_UdcMax = std::move(_x.VCU_DCU_UdcMax);
		VCU_DCU_TorqMin = std::move(_x.VCU_DCU_TorqMin);
		VCU_DCU_MaxTorqGradient = std::move(_x.VCU_DCU_MaxTorqGradient);
		VCU_DCU_TorqMax = std::move(_x.VCU_DCU_TorqMax);
		VCU_DCU_MaxTorqDampgCtl = std::move(_x.VCU_DCU_MaxTorqDampgCtl);
		VCU_DCU_SpdLmt = std::move(_x.VCU_DCU_SpdLmt);
		VCU_DCU_SpdSet = std::move(_x.VCU_DCU_SpdSet);
		VCU_DCU_SurgeDamperStReq = std::move(_x.VCU_DCU_SurgeDamperStReq);
		VCU_DCU_SurgeDamperFactor = std::move(_x.VCU_DCU_SurgeDamperFactor);
		VCU_DCU_ModeReq = std::move(_x.VCU_DCU_ModeReq);
		VCU_IPS_OBCDsChDCCurrLim = std::move(_x.VCU_IPS_OBCDsChDCCurrLim);
		VCU_IPS_DCDCVoltLvSet = std::move(_x.VCU_IPS_DCDCVoltLvSet);
		VCU_IPS_DCDCLvCurrLim = std::move(_x.VCU_IPS_DCDCLvCurrLim);
		VCU_AccButtInfo = std::move(_x.VCU_AccButtInfo);
		VCU_LateralAssistBtnInfo = std::move(_x.VCU_LateralAssistBtnInfo);
		VCU_APAGasPedalIntv = std::move(_x.VCU_APAGasPedalIntv);
		VCU_APAAvailable = std::move(_x.VCU_APAAvailable);
		VCU_APAWheelTorqDriverReq = std::move(_x.VCU_APAWheelTorqDriverReq);
		VCU_ACCMaxRecpDecel = std::move(_x.VCU_ACCMaxRecpDecel);
		VCU_FullBattBrkReq = std::move(_x.VCU_FullBattBrkReq);
		VCU_ACCLimitOperatingSt = std::move(_x.VCU_ACCLimitOperatingSt);
		VCU_APA_Resp = std::move(_x.VCU_APA_Resp);
		VCU_APAGearIntervern = std::move(_x.VCU_APAGearIntervern);
		VCU_RegenModulationReq = std::move(_x.VCU_RegenModulationReq);
		VCU_ActVehWheelTorq = std::move(_x.VCU_ActVehWheelTorq);
		VCU_VehWheelTorqMax = std::move(_x.VCU_VehWheelTorqMax);
		VCU_EspDrvModReq = std::move(_x.VCU_EspDrvModReq);
		VCU_MaxRecpTorq = std::move(_x.VCU_MaxRecpTorq);
		VCU_RecpTorq = std::move(_x.VCU_RecpTorq);
		VCU_ElecUnlockDrvReq = std::move(_x.VCU_ElecUnlockDrvReq);
		VCU_BrkLightOn = std::move(_x.VCU_BrkLightOn);
		VCU_BCMhazardLampOn = std::move(_x.VCU_BCMhazardLampOn);
		VCU_TargetRecpTorq = std::move(_x.VCU_TargetRecpTorq);
		VCU_TorqDriverReq = std::move(_x.VCU_TorqDriverReq);
		VCU_VehActDrvTorq = std::move(_x.VCU_VehActDrvTorq);
		VCU_AccSpareCanError = std::move(_x.VCU_AccSpareCanError);
		VCU_ACCStResp = std::move(_x.VCU_ACCStResp);
		VCU_AccTMCFail = std::move(_x.VCU_AccTMCFail);
		VCU_AccElecECFail = std::move(_x.VCU_AccElecECFail);
		VCU_IFCFailureSt = std::move(_x.VCU_IFCFailureSt);
		VCU_VehElcConspInst = std::move(_x.VCU_VehElcConspInst);
		VCU_ENSModeAvail = std::move(_x.VCU_ENSModeAvail);
		VCU_CreepAvail = std::move(_x.VCU_CreepAvail);
		VCU_RecpLevelAvail = std::move(_x.VCU_RecpLevelAvail);
		VCU_SOCDynamicDspSt = std::move(_x.VCU_SOCDynamicDspSt);
		VCU_ARBSt = std::move(_x.VCU_ARBSt);
		VCU_RemoteDiagCode = std::move(_x.VCU_RemoteDiagCode);
		VCU_HvBatPrecdng = std::move(_x.VCU_HvBatPrecdng);
		VCU_HealChekSt = std::move(_x.VCU_HealChekSt);
		VCU_HVPowerSt = std::move(_x.VCU_HVPowerSt);
		VCU_HvLoadCurr = std::move(_x.VCU_HvLoadCurr);
		VCU_DCDCLvCurrLim = std::move(_x.VCU_DCDCLvCurrLim);
		VCU_DCDCVoltLvSet = std::move(_x.VCU_DCDCVoltLvSet);
		VCU_bWakeUpBD = std::move(_x.VCU_bWakeUpBD);
		VCU_stDhcBD = std::move(_x.VCU_stDhcBD);
		VCU_StACCBD = std::move(_x.VCU_StACCBD);
		VCU_StAPABD = std::move(_x.VCU_StAPABD);
		VCU_stChcBD = std::move(_x.VCU_stChcBD);
		VCU_ErhStBD = std::move(_x.VCU_ErhStBD);
		VCU_EdvStBD = std::move(_x.VCU_EdvStBD);
		VCU_Acplugeleclocklightreq = std::move(_x.VCU_Acplugeleclocklightreq);
		VCU_Acdischgswitchlampreq = std::move(_x.VCU_Acdischgswitchlampreq);
		VCU_SolenoidDrvCmd = std::move(_x.VCU_SolenoidDrvCmd);
		VCU_Chglamplightreq = std::move(_x.VCU_Chglamplightreq);
		VCU_Chglampflashreq = std::move(_x.VCU_Chglampflashreq);
	}
	BDCVCUDrvStyle& operator=(const BDCVCUDrvStyle &_x){
		VCU_DCU_TorqSet = _x.VCU_DCU_TorqSet;
		VCU_DCU_MinTorqDampgCtl = _x.VCU_DCU_MinTorqDampgCtl;
		VCU_BMS_BoostChgMode = _x.VCU_BMS_BoostChgMode;
		VCU_DCU_IdcMax = _x.VCU_DCU_IdcMax;
		VCU_DCU_IdcMin = _x.VCU_DCU_IdcMin;
		VCU_DCU_UdcMin = _x.VCU_DCU_UdcMin;
		VCU_DCU_UdcMax = _x.VCU_DCU_UdcMax;
		VCU_DCU_TorqMin = _x.VCU_DCU_TorqMin;
		VCU_DCU_MaxTorqGradient = _x.VCU_DCU_MaxTorqGradient;
		VCU_DCU_TorqMax = _x.VCU_DCU_TorqMax;
		VCU_DCU_MaxTorqDampgCtl = _x.VCU_DCU_MaxTorqDampgCtl;
		VCU_DCU_SpdLmt = _x.VCU_DCU_SpdLmt;
		VCU_DCU_SpdSet = _x.VCU_DCU_SpdSet;
		VCU_DCU_SurgeDamperStReq = _x.VCU_DCU_SurgeDamperStReq;
		VCU_DCU_SurgeDamperFactor = _x.VCU_DCU_SurgeDamperFactor;
		VCU_DCU_ModeReq = _x.VCU_DCU_ModeReq;
		VCU_IPS_OBCDsChDCCurrLim = _x.VCU_IPS_OBCDsChDCCurrLim;
		VCU_IPS_DCDCVoltLvSet = _x.VCU_IPS_DCDCVoltLvSet;
		VCU_IPS_DCDCLvCurrLim = _x.VCU_IPS_DCDCLvCurrLim;
		VCU_AccButtInfo = _x.VCU_AccButtInfo;
		VCU_LateralAssistBtnInfo = _x.VCU_LateralAssistBtnInfo;
		VCU_APAGasPedalIntv = _x.VCU_APAGasPedalIntv;
		VCU_APAAvailable = _x.VCU_APAAvailable;
		VCU_APAWheelTorqDriverReq = _x.VCU_APAWheelTorqDriverReq;
		VCU_ACCMaxRecpDecel = _x.VCU_ACCMaxRecpDecel;
		VCU_FullBattBrkReq = _x.VCU_FullBattBrkReq;
		VCU_ACCLimitOperatingSt = _x.VCU_ACCLimitOperatingSt;
		VCU_APA_Resp = _x.VCU_APA_Resp;
		VCU_APAGearIntervern = _x.VCU_APAGearIntervern;
		VCU_RegenModulationReq = _x.VCU_RegenModulationReq;
		VCU_ActVehWheelTorq = _x.VCU_ActVehWheelTorq;
		VCU_VehWheelTorqMax = _x.VCU_VehWheelTorqMax;
		VCU_EspDrvModReq = _x.VCU_EspDrvModReq;
		VCU_MaxRecpTorq = _x.VCU_MaxRecpTorq;
		VCU_RecpTorq = _x.VCU_RecpTorq;
		VCU_ElecUnlockDrvReq = _x.VCU_ElecUnlockDrvReq;
		VCU_BrkLightOn = _x.VCU_BrkLightOn;
		VCU_BCMhazardLampOn = _x.VCU_BCMhazardLampOn;
		VCU_TargetRecpTorq = _x.VCU_TargetRecpTorq;
		VCU_TorqDriverReq = _x.VCU_TorqDriverReq;
		VCU_VehActDrvTorq = _x.VCU_VehActDrvTorq;
		VCU_AccSpareCanError = _x.VCU_AccSpareCanError;
		VCU_ACCStResp = _x.VCU_ACCStResp;
		VCU_AccTMCFail = _x.VCU_AccTMCFail;
		VCU_AccElecECFail = _x.VCU_AccElecECFail;
		VCU_IFCFailureSt = _x.VCU_IFCFailureSt;
		VCU_VehElcConspInst = _x.VCU_VehElcConspInst;
		VCU_ENSModeAvail = _x.VCU_ENSModeAvail;
		VCU_CreepAvail = _x.VCU_CreepAvail;
		VCU_RecpLevelAvail = _x.VCU_RecpLevelAvail;
		VCU_SOCDynamicDspSt = _x.VCU_SOCDynamicDspSt;
		VCU_ARBSt = _x.VCU_ARBSt;
		VCU_RemoteDiagCode = _x.VCU_RemoteDiagCode;
		VCU_HvBatPrecdng = _x.VCU_HvBatPrecdng;
		VCU_HealChekSt = _x.VCU_HealChekSt;
		VCU_HVPowerSt = _x.VCU_HVPowerSt;
		VCU_HvLoadCurr = _x.VCU_HvLoadCurr;
		VCU_DCDCLvCurrLim = _x.VCU_DCDCLvCurrLim;
		VCU_DCDCVoltLvSet = _x.VCU_DCDCVoltLvSet;
		VCU_bWakeUpBD = _x.VCU_bWakeUpBD;
		VCU_stDhcBD = _x.VCU_stDhcBD;
		VCU_StACCBD = _x.VCU_StACCBD;
		VCU_StAPABD = _x.VCU_StAPABD;
		VCU_stChcBD = _x.VCU_stChcBD;
		VCU_ErhStBD = _x.VCU_ErhStBD;
		VCU_EdvStBD = _x.VCU_EdvStBD;
		VCU_Acplugeleclocklightreq = _x.VCU_Acplugeleclocklightreq;
		VCU_Acdischgswitchlampreq = _x.VCU_Acdischgswitchlampreq;
		VCU_SolenoidDrvCmd = _x.VCU_SolenoidDrvCmd;
		VCU_Chglamplightreq = _x.VCU_Chglamplightreq;
		VCU_Chglampflashreq = _x.VCU_Chglampflashreq;
		return *this;
	}
	BDCVCUDrvStyle& operator=(BDCVCUDrvStyle &&_x){
		VCU_DCU_TorqSet = std::move(_x.VCU_DCU_TorqSet);
		VCU_DCU_MinTorqDampgCtl = std::move(_x.VCU_DCU_MinTorqDampgCtl);
		VCU_BMS_BoostChgMode = std::move(_x.VCU_BMS_BoostChgMode);
		VCU_DCU_IdcMax = std::move(_x.VCU_DCU_IdcMax);
		VCU_DCU_IdcMin = std::move(_x.VCU_DCU_IdcMin);
		VCU_DCU_UdcMin = std::move(_x.VCU_DCU_UdcMin);
		VCU_DCU_UdcMax = std::move(_x.VCU_DCU_UdcMax);
		VCU_DCU_TorqMin = std::move(_x.VCU_DCU_TorqMin);
		VCU_DCU_MaxTorqGradient = std::move(_x.VCU_DCU_MaxTorqGradient);
		VCU_DCU_TorqMax = std::move(_x.VCU_DCU_TorqMax);
		VCU_DCU_MaxTorqDampgCtl = std::move(_x.VCU_DCU_MaxTorqDampgCtl);
		VCU_DCU_SpdLmt = std::move(_x.VCU_DCU_SpdLmt);
		VCU_DCU_SpdSet = std::move(_x.VCU_DCU_SpdSet);
		VCU_DCU_SurgeDamperStReq = std::move(_x.VCU_DCU_SurgeDamperStReq);
		VCU_DCU_SurgeDamperFactor = std::move(_x.VCU_DCU_SurgeDamperFactor);
		VCU_DCU_ModeReq = std::move(_x.VCU_DCU_ModeReq);
		VCU_IPS_OBCDsChDCCurrLim = std::move(_x.VCU_IPS_OBCDsChDCCurrLim);
		VCU_IPS_DCDCVoltLvSet = std::move(_x.VCU_IPS_DCDCVoltLvSet);
		VCU_IPS_DCDCLvCurrLim = std::move(_x.VCU_IPS_DCDCLvCurrLim);
		VCU_AccButtInfo = std::move(_x.VCU_AccButtInfo);
		VCU_LateralAssistBtnInfo = std::move(_x.VCU_LateralAssistBtnInfo);
		VCU_APAGasPedalIntv = std::move(_x.VCU_APAGasPedalIntv);
		VCU_APAAvailable = std::move(_x.VCU_APAAvailable);
		VCU_APAWheelTorqDriverReq = std::move(_x.VCU_APAWheelTorqDriverReq);
		VCU_ACCMaxRecpDecel = std::move(_x.VCU_ACCMaxRecpDecel);
		VCU_FullBattBrkReq = std::move(_x.VCU_FullBattBrkReq);
		VCU_ACCLimitOperatingSt = std::move(_x.VCU_ACCLimitOperatingSt);
		VCU_APA_Resp = std::move(_x.VCU_APA_Resp);
		VCU_APAGearIntervern = std::move(_x.VCU_APAGearIntervern);
		VCU_RegenModulationReq = std::move(_x.VCU_RegenModulationReq);
		VCU_ActVehWheelTorq = std::move(_x.VCU_ActVehWheelTorq);
		VCU_VehWheelTorqMax = std::move(_x.VCU_VehWheelTorqMax);
		VCU_EspDrvModReq = std::move(_x.VCU_EspDrvModReq);
		VCU_MaxRecpTorq = std::move(_x.VCU_MaxRecpTorq);
		VCU_RecpTorq = std::move(_x.VCU_RecpTorq);
		VCU_ElecUnlockDrvReq = std::move(_x.VCU_ElecUnlockDrvReq);
		VCU_BrkLightOn = std::move(_x.VCU_BrkLightOn);
		VCU_BCMhazardLampOn = std::move(_x.VCU_BCMhazardLampOn);
		VCU_TargetRecpTorq = std::move(_x.VCU_TargetRecpTorq);
		VCU_TorqDriverReq = std::move(_x.VCU_TorqDriverReq);
		VCU_VehActDrvTorq = std::move(_x.VCU_VehActDrvTorq);
		VCU_AccSpareCanError = std::move(_x.VCU_AccSpareCanError);
		VCU_ACCStResp = std::move(_x.VCU_ACCStResp);
		VCU_AccTMCFail = std::move(_x.VCU_AccTMCFail);
		VCU_AccElecECFail = std::move(_x.VCU_AccElecECFail);
		VCU_IFCFailureSt = std::move(_x.VCU_IFCFailureSt);
		VCU_VehElcConspInst = std::move(_x.VCU_VehElcConspInst);
		VCU_ENSModeAvail = std::move(_x.VCU_ENSModeAvail);
		VCU_CreepAvail = std::move(_x.VCU_CreepAvail);
		VCU_RecpLevelAvail = std::move(_x.VCU_RecpLevelAvail);
		VCU_SOCDynamicDspSt = std::move(_x.VCU_SOCDynamicDspSt);
		VCU_ARBSt = std::move(_x.VCU_ARBSt);
		VCU_RemoteDiagCode = std::move(_x.VCU_RemoteDiagCode);
		VCU_HvBatPrecdng = std::move(_x.VCU_HvBatPrecdng);
		VCU_HealChekSt = std::move(_x.VCU_HealChekSt);
		VCU_HVPowerSt = std::move(_x.VCU_HVPowerSt);
		VCU_HvLoadCurr = std::move(_x.VCU_HvLoadCurr);
		VCU_DCDCLvCurrLim = std::move(_x.VCU_DCDCLvCurrLim);
		VCU_DCDCVoltLvSet = std::move(_x.VCU_DCDCVoltLvSet);
		VCU_bWakeUpBD = std::move(_x.VCU_bWakeUpBD);
		VCU_stDhcBD = std::move(_x.VCU_stDhcBD);
		VCU_StACCBD = std::move(_x.VCU_StACCBD);
		VCU_StAPABD = std::move(_x.VCU_StAPABD);
		VCU_stChcBD = std::move(_x.VCU_stChcBD);
		VCU_ErhStBD = std::move(_x.VCU_ErhStBD);
		VCU_EdvStBD = std::move(_x.VCU_EdvStBD);
		VCU_Acplugeleclocklightreq = std::move(_x.VCU_Acplugeleclocklightreq);
		VCU_Acdischgswitchlampreq = std::move(_x.VCU_Acdischgswitchlampreq);
		VCU_SolenoidDrvCmd = std::move(_x.VCU_SolenoidDrvCmd);
		VCU_Chglamplightreq = std::move(_x.VCU_Chglamplightreq);
		VCU_Chglampflashreq = std::move(_x.VCU_Chglampflashreq);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(VCU_DCU_TorqSet);
		fun(VCU_DCU_MinTorqDampgCtl);
		fun(VCU_BMS_BoostChgMode);
		fun(VCU_DCU_IdcMax);
		fun(VCU_DCU_IdcMin);
		fun(VCU_DCU_UdcMin);
		fun(VCU_DCU_UdcMax);
		fun(VCU_DCU_TorqMin);
		fun(VCU_DCU_MaxTorqGradient);
		fun(VCU_DCU_TorqMax);
		fun(VCU_DCU_MaxTorqDampgCtl);
		fun(VCU_DCU_SpdLmt);
		fun(VCU_DCU_SpdSet);
		fun(VCU_DCU_SurgeDamperStReq);
		fun(VCU_DCU_SurgeDamperFactor);
		fun(VCU_DCU_ModeReq);
		fun(VCU_IPS_OBCDsChDCCurrLim);
		fun(VCU_IPS_DCDCVoltLvSet);
		fun(VCU_IPS_DCDCLvCurrLim);
		fun(VCU_AccButtInfo);
		fun(VCU_LateralAssistBtnInfo);
		fun(VCU_APAGasPedalIntv);
		fun(VCU_APAAvailable);
		fun(VCU_APAWheelTorqDriverReq);
		fun(VCU_ACCMaxRecpDecel);
		fun(VCU_FullBattBrkReq);
		fun(VCU_ACCLimitOperatingSt);
		fun(VCU_APA_Resp);
		fun(VCU_APAGearIntervern);
		fun(VCU_RegenModulationReq);
		fun(VCU_ActVehWheelTorq);
		fun(VCU_VehWheelTorqMax);
		fun(VCU_EspDrvModReq);
		fun(VCU_MaxRecpTorq);
		fun(VCU_RecpTorq);
		fun(VCU_ElecUnlockDrvReq);
		fun(VCU_BrkLightOn);
		fun(VCU_BCMhazardLampOn);
		fun(VCU_TargetRecpTorq);
		fun(VCU_TorqDriverReq);
		fun(VCU_VehActDrvTorq);
		fun(VCU_AccSpareCanError);
		fun(VCU_ACCStResp);
		fun(VCU_AccTMCFail);
		fun(VCU_AccElecECFail);
		fun(VCU_IFCFailureSt);
		fun(VCU_VehElcConspInst);
		fun(VCU_ENSModeAvail);
		fun(VCU_CreepAvail);
		fun(VCU_RecpLevelAvail);
		fun(VCU_SOCDynamicDspSt);
		fun(VCU_ARBSt);
		fun(VCU_RemoteDiagCode);
		fun(VCU_HvBatPrecdng);
		fun(VCU_HealChekSt);
		fun(VCU_HVPowerSt);
		fun(VCU_HvLoadCurr);
		fun(VCU_DCDCLvCurrLim);
		fun(VCU_DCDCVoltLvSet);
		fun(VCU_bWakeUpBD);
		fun(VCU_stDhcBD);
		fun(VCU_StACCBD);
		fun(VCU_StAPABD);
		fun(VCU_stChcBD);
		fun(VCU_ErhStBD);
		fun(VCU_EdvStBD);
		fun(VCU_Acplugeleclocklightreq);
		fun(VCU_Acdischgswitchlampreq);
		fun(VCU_SolenoidDrvCmd);
		fun(VCU_Chglamplightreq);
		fun(VCU_Chglampflashreq);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(VCU_DCU_TorqSet);
		fun(VCU_DCU_MinTorqDampgCtl);
		fun(VCU_BMS_BoostChgMode);
		fun(VCU_DCU_IdcMax);
		fun(VCU_DCU_IdcMin);
		fun(VCU_DCU_UdcMin);
		fun(VCU_DCU_UdcMax);
		fun(VCU_DCU_TorqMin);
		fun(VCU_DCU_MaxTorqGradient);
		fun(VCU_DCU_TorqMax);
		fun(VCU_DCU_MaxTorqDampgCtl);
		fun(VCU_DCU_SpdLmt);
		fun(VCU_DCU_SpdSet);
		fun(VCU_DCU_SurgeDamperStReq);
		fun(VCU_DCU_SurgeDamperFactor);
		fun(VCU_DCU_ModeReq);
		fun(VCU_IPS_OBCDsChDCCurrLim);
		fun(VCU_IPS_DCDCVoltLvSet);
		fun(VCU_IPS_DCDCLvCurrLim);
		fun(VCU_AccButtInfo);
		fun(VCU_LateralAssistBtnInfo);
		fun(VCU_APAGasPedalIntv);
		fun(VCU_APAAvailable);
		fun(VCU_APAWheelTorqDriverReq);
		fun(VCU_ACCMaxRecpDecel);
		fun(VCU_FullBattBrkReq);
		fun(VCU_ACCLimitOperatingSt);
		fun(VCU_APA_Resp);
		fun(VCU_APAGearIntervern);
		fun(VCU_RegenModulationReq);
		fun(VCU_ActVehWheelTorq);
		fun(VCU_VehWheelTorqMax);
		fun(VCU_EspDrvModReq);
		fun(VCU_MaxRecpTorq);
		fun(VCU_RecpTorq);
		fun(VCU_ElecUnlockDrvReq);
		fun(VCU_BrkLightOn);
		fun(VCU_BCMhazardLampOn);
		fun(VCU_TargetRecpTorq);
		fun(VCU_TorqDriverReq);
		fun(VCU_VehActDrvTorq);
		fun(VCU_AccSpareCanError);
		fun(VCU_ACCStResp);
		fun(VCU_AccTMCFail);
		fun(VCU_AccElecECFail);
		fun(VCU_IFCFailureSt);
		fun(VCU_VehElcConspInst);
		fun(VCU_ENSModeAvail);
		fun(VCU_CreepAvail);
		fun(VCU_RecpLevelAvail);
		fun(VCU_SOCDynamicDspSt);
		fun(VCU_ARBSt);
		fun(VCU_RemoteDiagCode);
		fun(VCU_HvBatPrecdng);
		fun(VCU_HealChekSt);
		fun(VCU_HVPowerSt);
		fun(VCU_HvLoadCurr);
		fun(VCU_DCDCLvCurrLim);
		fun(VCU_DCDCVoltLvSet);
		fun(VCU_bWakeUpBD);
		fun(VCU_stDhcBD);
		fun(VCU_StACCBD);
		fun(VCU_StAPABD);
		fun(VCU_stChcBD);
		fun(VCU_ErhStBD);
		fun(VCU_EdvStBD);
		fun(VCU_Acplugeleclocklightreq);
		fun(VCU_Acdischgswitchlampreq);
		fun(VCU_SolenoidDrvCmd);
		fun(VCU_Chglamplightreq);
		fun(VCU_Chglampflashreq);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (VCU_DCU_TorqSet);
		fun << (VCU_DCU_MinTorqDampgCtl);
		fun << (VCU_BMS_BoostChgMode);
		fun << (VCU_DCU_IdcMax);
		fun << (VCU_DCU_IdcMin);
		fun << (VCU_DCU_UdcMin);
		fun << (VCU_DCU_UdcMax);
		fun << (VCU_DCU_TorqMin);
		fun << (VCU_DCU_MaxTorqGradient);
		fun << (VCU_DCU_TorqMax);
		fun << (VCU_DCU_MaxTorqDampgCtl);
		fun << (VCU_DCU_SpdLmt);
		fun << (VCU_DCU_SpdSet);
		fun << (VCU_DCU_SurgeDamperStReq);
		fun << (VCU_DCU_SurgeDamperFactor);
		fun << (VCU_DCU_ModeReq);
		fun << (VCU_IPS_OBCDsChDCCurrLim);
		fun << (VCU_IPS_DCDCVoltLvSet);
		fun << (VCU_IPS_DCDCLvCurrLim);
		fun << (VCU_AccButtInfo);
		fun << (VCU_LateralAssistBtnInfo);
		fun << (VCU_APAGasPedalIntv);
		fun << (VCU_APAAvailable);
		fun << (VCU_APAWheelTorqDriverReq);
		fun << (VCU_ACCMaxRecpDecel);
		fun << (VCU_FullBattBrkReq);
		fun << (VCU_ACCLimitOperatingSt);
		fun << (VCU_APA_Resp);
		fun << (VCU_APAGearIntervern);
		fun << (VCU_RegenModulationReq);
		fun << (VCU_ActVehWheelTorq);
		fun << (VCU_VehWheelTorqMax);
		fun << (VCU_EspDrvModReq);
		fun << (VCU_MaxRecpTorq);
		fun << (VCU_RecpTorq);
		fun << (VCU_ElecUnlockDrvReq);
		fun << (VCU_BrkLightOn);
		fun << (VCU_BCMhazardLampOn);
		fun << (VCU_TargetRecpTorq);
		fun << (VCU_TorqDriverReq);
		fun << (VCU_VehActDrvTorq);
		fun << (VCU_AccSpareCanError);
		fun << (VCU_ACCStResp);
		fun << (VCU_AccTMCFail);
		fun << (VCU_AccElecECFail);
		fun << (VCU_IFCFailureSt);
		fun << (VCU_VehElcConspInst);
		fun << (VCU_ENSModeAvail);
		fun << (VCU_CreepAvail);
		fun << (VCU_RecpLevelAvail);
		fun << (VCU_SOCDynamicDspSt);
		fun << (VCU_ARBSt);
		fun << (VCU_RemoteDiagCode);
		fun << (VCU_HvBatPrecdng);
		fun << (VCU_HealChekSt);
		fun << (VCU_HVPowerSt);
		fun << (VCU_HvLoadCurr);
		fun << (VCU_DCDCLvCurrLim);
		fun << (VCU_DCDCVoltLvSet);
		fun << (VCU_bWakeUpBD);
		fun << (VCU_stDhcBD);
		fun << (VCU_StACCBD);
		fun << (VCU_StAPABD);
		fun << (VCU_stChcBD);
		fun << (VCU_ErhStBD);
		fun << (VCU_EdvStBD);
		fun << (VCU_Acplugeleclocklightreq);
		fun << (VCU_Acdischgswitchlampreq);
		fun << (VCU_SolenoidDrvCmd);
		fun << (VCU_Chglamplightreq);
		fun << (VCU_Chglampflashreq);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (VCU_DCU_TorqSet);
		fun >> (VCU_DCU_MinTorqDampgCtl);
		fun >> (VCU_BMS_BoostChgMode);
		fun >> (VCU_DCU_IdcMax);
		fun >> (VCU_DCU_IdcMin);
		fun >> (VCU_DCU_UdcMin);
		fun >> (VCU_DCU_UdcMax);
		fun >> (VCU_DCU_TorqMin);
		fun >> (VCU_DCU_MaxTorqGradient);
		fun >> (VCU_DCU_TorqMax);
		fun >> (VCU_DCU_MaxTorqDampgCtl);
		fun >> (VCU_DCU_SpdLmt);
		fun >> (VCU_DCU_SpdSet);
		fun >> (VCU_DCU_SurgeDamperStReq);
		fun >> (VCU_DCU_SurgeDamperFactor);
		fun >> (VCU_DCU_ModeReq);
		fun >> (VCU_IPS_OBCDsChDCCurrLim);
		fun >> (VCU_IPS_DCDCVoltLvSet);
		fun >> (VCU_IPS_DCDCLvCurrLim);
		fun >> (VCU_AccButtInfo);
		fun >> (VCU_LateralAssistBtnInfo);
		fun >> (VCU_APAGasPedalIntv);
		fun >> (VCU_APAAvailable);
		fun >> (VCU_APAWheelTorqDriverReq);
		fun >> (VCU_ACCMaxRecpDecel);
		fun >> (VCU_FullBattBrkReq);
		fun >> (VCU_ACCLimitOperatingSt);
		fun >> (VCU_APA_Resp);
		fun >> (VCU_APAGearIntervern);
		fun >> (VCU_RegenModulationReq);
		fun >> (VCU_ActVehWheelTorq);
		fun >> (VCU_VehWheelTorqMax);
		fun >> (VCU_EspDrvModReq);
		fun >> (VCU_MaxRecpTorq);
		fun >> (VCU_RecpTorq);
		fun >> (VCU_ElecUnlockDrvReq);
		fun >> (VCU_BrkLightOn);
		fun >> (VCU_BCMhazardLampOn);
		fun >> (VCU_TargetRecpTorq);
		fun >> (VCU_TorqDriverReq);
		fun >> (VCU_VehActDrvTorq);
		fun >> (VCU_AccSpareCanError);
		fun >> (VCU_ACCStResp);
		fun >> (VCU_AccTMCFail);
		fun >> (VCU_AccElecECFail);
		fun >> (VCU_IFCFailureSt);
		fun >> (VCU_VehElcConspInst);
		fun >> (VCU_ENSModeAvail);
		fun >> (VCU_CreepAvail);
		fun >> (VCU_RecpLevelAvail);
		fun >> (VCU_SOCDynamicDspSt);
		fun >> (VCU_ARBSt);
		fun >> (VCU_RemoteDiagCode);
		fun >> (VCU_HvBatPrecdng);
		fun >> (VCU_HealChekSt);
		fun >> (VCU_HVPowerSt);
		fun >> (VCU_HvLoadCurr);
		fun >> (VCU_DCDCLvCurrLim);
		fun >> (VCU_DCDCVoltLvSet);
		fun >> (VCU_bWakeUpBD);
		fun >> (VCU_stDhcBD);
		fun >> (VCU_StACCBD);
		fun >> (VCU_StAPABD);
		fun >> (VCU_stChcBD);
		fun >> (VCU_ErhStBD);
		fun >> (VCU_EdvStBD);
		fun >> (VCU_Acplugeleclocklightreq);
		fun >> (VCU_Acdischgswitchlampreq);
		fun >> (VCU_SolenoidDrvCmd);
		fun >> (VCU_Chglamplightreq);
		fun >> (VCU_Chglampflashreq);
	}
};

#endif //____BDCVCUDRVSTYLE_H__
