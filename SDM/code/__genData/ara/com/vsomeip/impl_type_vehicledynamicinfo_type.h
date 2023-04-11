#ifndef __ARA_COM_VSOMEIP__VEHICLEDYNAMICINFO_TYPE_H__
#define __ARA_COM_VSOMEIP__VEHICLEDYNAMICINFO_TYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct VehicleDynamicInfo_Type {
public:
	std::uint16_t BCS_VehSpd;
	bool BCS_VehSpdVD;
	bool SRS_YawSnsCalibSt;
	bool SRS_VehLongAccelVD;
	bool SRS_VehLatrlAccelVD;
	bool SRS_YawRateVD;
	std::uint16_t SRS_VehLongAccel;
	std::uint16_t SRS_VehLatrlAccel;
	std::uint16_t SRS_YawRate;
	std::uint8_t GSM_GearShiftLeverPstReq;
	std::uint8_t GSM_DriveMode;
	bool EMS_GVS_FuelCapUnLockReq;
	bool EMS_GVS_FuelCapLockReq;
	std::uint8_t ESP_RecpLevelstResp;
	bool ACSt;
	bool AutoSt;
	bool BMS_FaultLampInd;
	bool BMS_EngMilLampReq;
	bool BMS_TempOvrInd;
	bool DCU_FaultLampInd;
	bool GCU_FaultLampInd;
	bool DCU_EngMilLampReq;
	bool GCU_EngMilLampReq;
	bool VCU_CCUFaultLampInd;
	bool IPS_DCDCFaultLampInd;
	bool IPS_OBCFaultLampInd;
	bool IPS_OBCEngMilLampReq;
	bool DCU_SysTempOvrInd;
	bool GCU_SysTempOvrInd;
	std::uint8_t BMS_HVBattSt;
	std::uint16_t BMS_BattCurr;
	std::uint16_t BMS_BattVolt;
	std::uint8_t BMS_BattTempAvg;
	std::uint16_t BMS_BattSOC;
	std::uint8_t BMS_ErrLvl;
	std::uint8_t BMS_InslSt;
	bool BCS_ABSFaultSt;
	bool EPS_WarnLamp;
	bool BCS_BrakeOverHeat;
	std::uint16_t BCS_typectVehLongAccel;
	std::uint16_t BCS_VehLongAccelOffset;
	std::uint16_t BCS_typectVehLaltrlAccel;
	std::uint16_t BCS_VehLaltrlAccelOffset;
	bool BCS_typectVehLongAccelVD;
	bool BCS_typectVehLaltrlAccelVD;
	std::uint8_t IPS_OBCModeSt;
	bool BCS_typeBSFaultSt;
	bool BCS_RegenModulationAvailable;
	bool BCS_RegenModuleActive;
	std::uint16_t BCS_TargetRecpTorqRq;
	std::uint8_t BCS_TargetRecpTorqRqSt;
/*
	VehicleDynamicInfo_Type() {}
	~VehicleDynamicInfo_Type() {}
	VehicleDynamicInfo_Type(const std::uint16_t _BCS_VehSpd,const bool _BCS_VehSpdVD,const bool _SRS_YawSnsCalibSt,const bool _SRS_VehLongAccelVD,const bool _SRS_VehLatrlAccelVD,const bool _SRS_YawRateVD,const std::uint16_t _SRS_VehLongAccel,const std::uint16_t _SRS_VehLatrlAccel,const std::uint16_t _SRS_YawRate,const std::uint8_t _GSM_GearShiftLeverPstReq,const std::uint8_t _GSM_DriveMode,const bool _EMS_GVS_FuelCapUnLockReq,const bool _EMS_GVS_FuelCapLockReq,const std::uint8_t _ESP_RecpLevelstResp,const bool _ACSt,const bool _AutoSt,const bool _BMS_FaultLampInd,const bool _BMS_EngMilLampReq,const bool _BMS_TempOvrInd,const bool _DCU_FaultLampInd,const bool _GCU_FaultLampInd,const bool _DCU_EngMilLampReq,const bool _GCU_EngMilLampReq,const bool _VCU_CCUFaultLampInd,const bool _IPS_DCDCFaultLampInd,const bool _IPS_OBCFaultLampInd,const bool _IPS_OBCEngMilLampReq,const bool _DCU_SysTempOvrInd,const bool _GCU_SysTempOvrInd,const std::uint8_t _BMS_HVBattSt,const std::uint16_t _BMS_BattCurr,const std::uint16_t _BMS_BattVolt,const std::uint8_t _BMS_BattTempAvg,const std::uint16_t _BMS_BattSOC,const std::uint8_t _BMS_ErrLvl,const std::uint8_t _BMS_InslSt,const bool _BCS_ABSFaultSt,const bool _EPS_WarnLamp,const bool _BCS_BrakeOverHeat,const std::uint16_t _BCS_typectVehLongAccel,const std::uint16_t _BCS_VehLongAccelOffset,const std::uint16_t _BCS_typectVehLaltrlAccel,const std::uint16_t _BCS_VehLaltrlAccelOffset,const bool _BCS_typectVehLongAccelVD,const bool _BCS_typectVehLaltrlAccelVD,const std::uint8_t _IPS_OBCModeSt,const bool _BCS_typeBSFaultSt,const bool _BCS_RegenModulationAvailable,const bool _BCS_RegenModuleActive,const std::uint16_t _BCS_TargetRecpTorqRq,const std::uint8_t _BCS_TargetRecpTorqRqSt):BCS_VehSpd(_BCS_VehSpd),BCS_VehSpdVD(_BCS_VehSpdVD),SRS_YawSnsCalibSt(_SRS_YawSnsCalibSt),SRS_VehLongAccelVD(_SRS_VehLongAccelVD),SRS_VehLatrlAccelVD(_SRS_VehLatrlAccelVD),SRS_YawRateVD(_SRS_YawRateVD),SRS_VehLongAccel(_SRS_VehLongAccel),SRS_VehLatrlAccel(_SRS_VehLatrlAccel),SRS_YawRate(_SRS_YawRate),GSM_GearShiftLeverPstReq(_GSM_GearShiftLeverPstReq),GSM_DriveMode(_GSM_DriveMode),EMS_GVS_FuelCapUnLockReq(_EMS_GVS_FuelCapUnLockReq),EMS_GVS_FuelCapLockReq(_EMS_GVS_FuelCapLockReq),ESP_RecpLevelstResp(_ESP_RecpLevelstResp),ACSt(_ACSt),AutoSt(_AutoSt),BMS_FaultLampInd(_BMS_FaultLampInd),BMS_EngMilLampReq(_BMS_EngMilLampReq),BMS_TempOvrInd(_BMS_TempOvrInd),DCU_FaultLampInd(_DCU_FaultLampInd),GCU_FaultLampInd(_GCU_FaultLampInd),DCU_EngMilLampReq(_DCU_EngMilLampReq),GCU_EngMilLampReq(_GCU_EngMilLampReq),VCU_CCUFaultLampInd(_VCU_CCUFaultLampInd),IPS_DCDCFaultLampInd(_IPS_DCDCFaultLampInd),IPS_OBCFaultLampInd(_IPS_OBCFaultLampInd),IPS_OBCEngMilLampReq(_IPS_OBCEngMilLampReq),DCU_SysTempOvrInd(_DCU_SysTempOvrInd),GCU_SysTempOvrInd(_GCU_SysTempOvrInd),BMS_HVBattSt(_BMS_HVBattSt),BMS_BattCurr(_BMS_BattCurr),BMS_BattVolt(_BMS_BattVolt),BMS_BattTempAvg(_BMS_BattTempAvg),BMS_BattSOC(_BMS_BattSOC),BMS_ErrLvl(_BMS_ErrLvl),BMS_InslSt(_BMS_InslSt),BCS_ABSFaultSt(_BCS_ABSFaultSt),EPS_WarnLamp(_EPS_WarnLamp),BCS_BrakeOverHeat(_BCS_BrakeOverHeat),BCS_typectVehLongAccel(_BCS_typectVehLongAccel),BCS_VehLongAccelOffset(_BCS_VehLongAccelOffset),BCS_typectVehLaltrlAccel(_BCS_typectVehLaltrlAccel),BCS_VehLaltrlAccelOffset(_BCS_VehLaltrlAccelOffset),BCS_typectVehLongAccelVD(_BCS_typectVehLongAccelVD),BCS_typectVehLaltrlAccelVD(_BCS_typectVehLaltrlAccelVD),IPS_OBCModeSt(_IPS_OBCModeSt),BCS_typeBSFaultSt(_BCS_typeBSFaultSt),BCS_RegenModulationAvailable(_BCS_RegenModulationAvailable),BCS_RegenModuleActive(_BCS_RegenModuleActive),BCS_TargetRecpTorqRq(_BCS_TargetRecpTorqRq),BCS_TargetRecpTorqRqSt(_BCS_TargetRecpTorqRqSt) {}
	VehicleDynamicInfo_Type(const VehicleDynamicInfo_Type &_x){
		BCS_VehSpd = _x.BCS_VehSpd;
		BCS_VehSpdVD = _x.BCS_VehSpdVD;
		SRS_YawSnsCalibSt = _x.SRS_YawSnsCalibSt;
		SRS_VehLongAccelVD = _x.SRS_VehLongAccelVD;
		SRS_VehLatrlAccelVD = _x.SRS_VehLatrlAccelVD;
		SRS_YawRateVD = _x.SRS_YawRateVD;
		SRS_VehLongAccel = _x.SRS_VehLongAccel;
		SRS_VehLatrlAccel = _x.SRS_VehLatrlAccel;
		SRS_YawRate = _x.SRS_YawRate;
		GSM_GearShiftLeverPstReq = _x.GSM_GearShiftLeverPstReq;
		GSM_DriveMode = _x.GSM_DriveMode;
		EMS_GVS_FuelCapUnLockReq = _x.EMS_GVS_FuelCapUnLockReq;
		EMS_GVS_FuelCapLockReq = _x.EMS_GVS_FuelCapLockReq;
		ESP_RecpLevelstResp = _x.ESP_RecpLevelstResp;
		ACSt = _x.ACSt;
		AutoSt = _x.AutoSt;
		BMS_FaultLampInd = _x.BMS_FaultLampInd;
		BMS_EngMilLampReq = _x.BMS_EngMilLampReq;
		BMS_TempOvrInd = _x.BMS_TempOvrInd;
		DCU_FaultLampInd = _x.DCU_FaultLampInd;
		GCU_FaultLampInd = _x.GCU_FaultLampInd;
		DCU_EngMilLampReq = _x.DCU_EngMilLampReq;
		GCU_EngMilLampReq = _x.GCU_EngMilLampReq;
		VCU_CCUFaultLampInd = _x.VCU_CCUFaultLampInd;
		IPS_DCDCFaultLampInd = _x.IPS_DCDCFaultLampInd;
		IPS_OBCFaultLampInd = _x.IPS_OBCFaultLampInd;
		IPS_OBCEngMilLampReq = _x.IPS_OBCEngMilLampReq;
		DCU_SysTempOvrInd = _x.DCU_SysTempOvrInd;
		GCU_SysTempOvrInd = _x.GCU_SysTempOvrInd;
		BMS_HVBattSt = _x.BMS_HVBattSt;
		BMS_BattCurr = _x.BMS_BattCurr;
		BMS_BattVolt = _x.BMS_BattVolt;
		BMS_BattTempAvg = _x.BMS_BattTempAvg;
		BMS_BattSOC = _x.BMS_BattSOC;
		BMS_ErrLvl = _x.BMS_ErrLvl;
		BMS_InslSt = _x.BMS_InslSt;
		BCS_ABSFaultSt = _x.BCS_ABSFaultSt;
		EPS_WarnLamp = _x.EPS_WarnLamp;
		BCS_BrakeOverHeat = _x.BCS_BrakeOverHeat;
		BCS_typectVehLongAccel = _x.BCS_typectVehLongAccel;
		BCS_VehLongAccelOffset = _x.BCS_VehLongAccelOffset;
		BCS_typectVehLaltrlAccel = _x.BCS_typectVehLaltrlAccel;
		BCS_VehLaltrlAccelOffset = _x.BCS_VehLaltrlAccelOffset;
		BCS_typectVehLongAccelVD = _x.BCS_typectVehLongAccelVD;
		BCS_typectVehLaltrlAccelVD = _x.BCS_typectVehLaltrlAccelVD;
		IPS_OBCModeSt = _x.IPS_OBCModeSt;
		BCS_typeBSFaultSt = _x.BCS_typeBSFaultSt;
		BCS_RegenModulationAvailable = _x.BCS_RegenModulationAvailable;
		BCS_RegenModuleActive = _x.BCS_RegenModuleActive;
		BCS_TargetRecpTorqRq = _x.BCS_TargetRecpTorqRq;
		BCS_TargetRecpTorqRqSt = _x.BCS_TargetRecpTorqRqSt;
	}
	VehicleDynamicInfo_Type(VehicleDynamicInfo_Type &&_x){
		BCS_VehSpd = std::move(_x.BCS_VehSpd);
		BCS_VehSpdVD = std::move(_x.BCS_VehSpdVD);
		SRS_YawSnsCalibSt = std::move(_x.SRS_YawSnsCalibSt);
		SRS_VehLongAccelVD = std::move(_x.SRS_VehLongAccelVD);
		SRS_VehLatrlAccelVD = std::move(_x.SRS_VehLatrlAccelVD);
		SRS_YawRateVD = std::move(_x.SRS_YawRateVD);
		SRS_VehLongAccel = std::move(_x.SRS_VehLongAccel);
		SRS_VehLatrlAccel = std::move(_x.SRS_VehLatrlAccel);
		SRS_YawRate = std::move(_x.SRS_YawRate);
		GSM_GearShiftLeverPstReq = std::move(_x.GSM_GearShiftLeverPstReq);
		GSM_DriveMode = std::move(_x.GSM_DriveMode);
		EMS_GVS_FuelCapUnLockReq = std::move(_x.EMS_GVS_FuelCapUnLockReq);
		EMS_GVS_FuelCapLockReq = std::move(_x.EMS_GVS_FuelCapLockReq);
		ESP_RecpLevelstResp = std::move(_x.ESP_RecpLevelstResp);
		ACSt = std::move(_x.ACSt);
		AutoSt = std::move(_x.AutoSt);
		BMS_FaultLampInd = std::move(_x.BMS_FaultLampInd);
		BMS_EngMilLampReq = std::move(_x.BMS_EngMilLampReq);
		BMS_TempOvrInd = std::move(_x.BMS_TempOvrInd);
		DCU_FaultLampInd = std::move(_x.DCU_FaultLampInd);
		GCU_FaultLampInd = std::move(_x.GCU_FaultLampInd);
		DCU_EngMilLampReq = std::move(_x.DCU_EngMilLampReq);
		GCU_EngMilLampReq = std::move(_x.GCU_EngMilLampReq);
		VCU_CCUFaultLampInd = std::move(_x.VCU_CCUFaultLampInd);
		IPS_DCDCFaultLampInd = std::move(_x.IPS_DCDCFaultLampInd);
		IPS_OBCFaultLampInd = std::move(_x.IPS_OBCFaultLampInd);
		IPS_OBCEngMilLampReq = std::move(_x.IPS_OBCEngMilLampReq);
		DCU_SysTempOvrInd = std::move(_x.DCU_SysTempOvrInd);
		GCU_SysTempOvrInd = std::move(_x.GCU_SysTempOvrInd);
		BMS_HVBattSt = std::move(_x.BMS_HVBattSt);
		BMS_BattCurr = std::move(_x.BMS_BattCurr);
		BMS_BattVolt = std::move(_x.BMS_BattVolt);
		BMS_BattTempAvg = std::move(_x.BMS_BattTempAvg);
		BMS_BattSOC = std::move(_x.BMS_BattSOC);
		BMS_ErrLvl = std::move(_x.BMS_ErrLvl);
		BMS_InslSt = std::move(_x.BMS_InslSt);
		BCS_ABSFaultSt = std::move(_x.BCS_ABSFaultSt);
		EPS_WarnLamp = std::move(_x.EPS_WarnLamp);
		BCS_BrakeOverHeat = std::move(_x.BCS_BrakeOverHeat);
		BCS_typectVehLongAccel = std::move(_x.BCS_typectVehLongAccel);
		BCS_VehLongAccelOffset = std::move(_x.BCS_VehLongAccelOffset);
		BCS_typectVehLaltrlAccel = std::move(_x.BCS_typectVehLaltrlAccel);
		BCS_VehLaltrlAccelOffset = std::move(_x.BCS_VehLaltrlAccelOffset);
		BCS_typectVehLongAccelVD = std::move(_x.BCS_typectVehLongAccelVD);
		BCS_typectVehLaltrlAccelVD = std::move(_x.BCS_typectVehLaltrlAccelVD);
		IPS_OBCModeSt = std::move(_x.IPS_OBCModeSt);
		BCS_typeBSFaultSt = std::move(_x.BCS_typeBSFaultSt);
		BCS_RegenModulationAvailable = std::move(_x.BCS_RegenModulationAvailable);
		BCS_RegenModuleActive = std::move(_x.BCS_RegenModuleActive);
		BCS_TargetRecpTorqRq = std::move(_x.BCS_TargetRecpTorqRq);
		BCS_TargetRecpTorqRqSt = std::move(_x.BCS_TargetRecpTorqRqSt);
	}
	VehicleDynamicInfo_Type& operator=(const VehicleDynamicInfo_Type &_x){
		BCS_VehSpd = _x.BCS_VehSpd;
		BCS_VehSpdVD = _x.BCS_VehSpdVD;
		SRS_YawSnsCalibSt = _x.SRS_YawSnsCalibSt;
		SRS_VehLongAccelVD = _x.SRS_VehLongAccelVD;
		SRS_VehLatrlAccelVD = _x.SRS_VehLatrlAccelVD;
		SRS_YawRateVD = _x.SRS_YawRateVD;
		SRS_VehLongAccel = _x.SRS_VehLongAccel;
		SRS_VehLatrlAccel = _x.SRS_VehLatrlAccel;
		SRS_YawRate = _x.SRS_YawRate;
		GSM_GearShiftLeverPstReq = _x.GSM_GearShiftLeverPstReq;
		GSM_DriveMode = _x.GSM_DriveMode;
		EMS_GVS_FuelCapUnLockReq = _x.EMS_GVS_FuelCapUnLockReq;
		EMS_GVS_FuelCapLockReq = _x.EMS_GVS_FuelCapLockReq;
		ESP_RecpLevelstResp = _x.ESP_RecpLevelstResp;
		ACSt = _x.ACSt;
		AutoSt = _x.AutoSt;
		BMS_FaultLampInd = _x.BMS_FaultLampInd;
		BMS_EngMilLampReq = _x.BMS_EngMilLampReq;
		BMS_TempOvrInd = _x.BMS_TempOvrInd;
		DCU_FaultLampInd = _x.DCU_FaultLampInd;
		GCU_FaultLampInd = _x.GCU_FaultLampInd;
		DCU_EngMilLampReq = _x.DCU_EngMilLampReq;
		GCU_EngMilLampReq = _x.GCU_EngMilLampReq;
		VCU_CCUFaultLampInd = _x.VCU_CCUFaultLampInd;
		IPS_DCDCFaultLampInd = _x.IPS_DCDCFaultLampInd;
		IPS_OBCFaultLampInd = _x.IPS_OBCFaultLampInd;
		IPS_OBCEngMilLampReq = _x.IPS_OBCEngMilLampReq;
		DCU_SysTempOvrInd = _x.DCU_SysTempOvrInd;
		GCU_SysTempOvrInd = _x.GCU_SysTempOvrInd;
		BMS_HVBattSt = _x.BMS_HVBattSt;
		BMS_BattCurr = _x.BMS_BattCurr;
		BMS_BattVolt = _x.BMS_BattVolt;
		BMS_BattTempAvg = _x.BMS_BattTempAvg;
		BMS_BattSOC = _x.BMS_BattSOC;
		BMS_ErrLvl = _x.BMS_ErrLvl;
		BMS_InslSt = _x.BMS_InslSt;
		BCS_ABSFaultSt = _x.BCS_ABSFaultSt;
		EPS_WarnLamp = _x.EPS_WarnLamp;
		BCS_BrakeOverHeat = _x.BCS_BrakeOverHeat;
		BCS_typectVehLongAccel = _x.BCS_typectVehLongAccel;
		BCS_VehLongAccelOffset = _x.BCS_VehLongAccelOffset;
		BCS_typectVehLaltrlAccel = _x.BCS_typectVehLaltrlAccel;
		BCS_VehLaltrlAccelOffset = _x.BCS_VehLaltrlAccelOffset;
		BCS_typectVehLongAccelVD = _x.BCS_typectVehLongAccelVD;
		BCS_typectVehLaltrlAccelVD = _x.BCS_typectVehLaltrlAccelVD;
		IPS_OBCModeSt = _x.IPS_OBCModeSt;
		BCS_typeBSFaultSt = _x.BCS_typeBSFaultSt;
		BCS_RegenModulationAvailable = _x.BCS_RegenModulationAvailable;
		BCS_RegenModuleActive = _x.BCS_RegenModuleActive;
		BCS_TargetRecpTorqRq = _x.BCS_TargetRecpTorqRq;
		BCS_TargetRecpTorqRqSt = _x.BCS_TargetRecpTorqRqSt;
		return *this;
	}
	VehicleDynamicInfo_Type& operator=(VehicleDynamicInfo_Type &&_x){
		BCS_VehSpd = std::move(_x.BCS_VehSpd);
		BCS_VehSpdVD = std::move(_x.BCS_VehSpdVD);
		SRS_YawSnsCalibSt = std::move(_x.SRS_YawSnsCalibSt);
		SRS_VehLongAccelVD = std::move(_x.SRS_VehLongAccelVD);
		SRS_VehLatrlAccelVD = std::move(_x.SRS_VehLatrlAccelVD);
		SRS_YawRateVD = std::move(_x.SRS_YawRateVD);
		SRS_VehLongAccel = std::move(_x.SRS_VehLongAccel);
		SRS_VehLatrlAccel = std::move(_x.SRS_VehLatrlAccel);
		SRS_YawRate = std::move(_x.SRS_YawRate);
		GSM_GearShiftLeverPstReq = std::move(_x.GSM_GearShiftLeverPstReq);
		GSM_DriveMode = std::move(_x.GSM_DriveMode);
		EMS_GVS_FuelCapUnLockReq = std::move(_x.EMS_GVS_FuelCapUnLockReq);
		EMS_GVS_FuelCapLockReq = std::move(_x.EMS_GVS_FuelCapLockReq);
		ESP_RecpLevelstResp = std::move(_x.ESP_RecpLevelstResp);
		ACSt = std::move(_x.ACSt);
		AutoSt = std::move(_x.AutoSt);
		BMS_FaultLampInd = std::move(_x.BMS_FaultLampInd);
		BMS_EngMilLampReq = std::move(_x.BMS_EngMilLampReq);
		BMS_TempOvrInd = std::move(_x.BMS_TempOvrInd);
		DCU_FaultLampInd = std::move(_x.DCU_FaultLampInd);
		GCU_FaultLampInd = std::move(_x.GCU_FaultLampInd);
		DCU_EngMilLampReq = std::move(_x.DCU_EngMilLampReq);
		GCU_EngMilLampReq = std::move(_x.GCU_EngMilLampReq);
		VCU_CCUFaultLampInd = std::move(_x.VCU_CCUFaultLampInd);
		IPS_DCDCFaultLampInd = std::move(_x.IPS_DCDCFaultLampInd);
		IPS_OBCFaultLampInd = std::move(_x.IPS_OBCFaultLampInd);
		IPS_OBCEngMilLampReq = std::move(_x.IPS_OBCEngMilLampReq);
		DCU_SysTempOvrInd = std::move(_x.DCU_SysTempOvrInd);
		GCU_SysTempOvrInd = std::move(_x.GCU_SysTempOvrInd);
		BMS_HVBattSt = std::move(_x.BMS_HVBattSt);
		BMS_BattCurr = std::move(_x.BMS_BattCurr);
		BMS_BattVolt = std::move(_x.BMS_BattVolt);
		BMS_BattTempAvg = std::move(_x.BMS_BattTempAvg);
		BMS_BattSOC = std::move(_x.BMS_BattSOC);
		BMS_ErrLvl = std::move(_x.BMS_ErrLvl);
		BMS_InslSt = std::move(_x.BMS_InslSt);
		BCS_ABSFaultSt = std::move(_x.BCS_ABSFaultSt);
		EPS_WarnLamp = std::move(_x.EPS_WarnLamp);
		BCS_BrakeOverHeat = std::move(_x.BCS_BrakeOverHeat);
		BCS_typectVehLongAccel = std::move(_x.BCS_typectVehLongAccel);
		BCS_VehLongAccelOffset = std::move(_x.BCS_VehLongAccelOffset);
		BCS_typectVehLaltrlAccel = std::move(_x.BCS_typectVehLaltrlAccel);
		BCS_VehLaltrlAccelOffset = std::move(_x.BCS_VehLaltrlAccelOffset);
		BCS_typectVehLongAccelVD = std::move(_x.BCS_typectVehLongAccelVD);
		BCS_typectVehLaltrlAccelVD = std::move(_x.BCS_typectVehLaltrlAccelVD);
		IPS_OBCModeSt = std::move(_x.IPS_OBCModeSt);
		BCS_typeBSFaultSt = std::move(_x.BCS_typeBSFaultSt);
		BCS_RegenModulationAvailable = std::move(_x.BCS_RegenModulationAvailable);
		BCS_RegenModuleActive = std::move(_x.BCS_RegenModuleActive);
		BCS_TargetRecpTorqRq = std::move(_x.BCS_TargetRecpTorqRq);
		BCS_TargetRecpTorqRqSt = std::move(_x.BCS_TargetRecpTorqRqSt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(BCS_VehSpd);
		fun(BCS_VehSpdVD);
		fun(SRS_YawSnsCalibSt);
		fun(SRS_VehLongAccelVD);
		fun(SRS_VehLatrlAccelVD);
		fun(SRS_YawRateVD);
		fun(SRS_VehLongAccel);
		fun(SRS_VehLatrlAccel);
		fun(SRS_YawRate);
		fun(GSM_GearShiftLeverPstReq);
		fun(GSM_DriveMode);
		fun(EMS_GVS_FuelCapUnLockReq);
		fun(EMS_GVS_FuelCapLockReq);
		fun(ESP_RecpLevelstResp);
		fun(ACSt);
		fun(AutoSt);
		fun(BMS_FaultLampInd);
		fun(BMS_EngMilLampReq);
		fun(BMS_TempOvrInd);
		fun(DCU_FaultLampInd);
		fun(GCU_FaultLampInd);
		fun(DCU_EngMilLampReq);
		fun(GCU_EngMilLampReq);
		fun(VCU_CCUFaultLampInd);
		fun(IPS_DCDCFaultLampInd);
		fun(IPS_OBCFaultLampInd);
		fun(IPS_OBCEngMilLampReq);
		fun(DCU_SysTempOvrInd);
		fun(GCU_SysTempOvrInd);
		fun(BMS_HVBattSt);
		fun(BMS_BattCurr);
		fun(BMS_BattVolt);
		fun(BMS_BattTempAvg);
		fun(BMS_BattSOC);
		fun(BMS_ErrLvl);
		fun(BMS_InslSt);
		fun(BCS_ABSFaultSt);
		fun(EPS_WarnLamp);
		fun(BCS_BrakeOverHeat);
		fun(BCS_typectVehLongAccel);
		fun(BCS_VehLongAccelOffset);
		fun(BCS_typectVehLaltrlAccel);
		fun(BCS_VehLaltrlAccelOffset);
		fun(BCS_typectVehLongAccelVD);
		fun(BCS_typectVehLaltrlAccelVD);
		fun(IPS_OBCModeSt);
		fun(BCS_typeBSFaultSt);
		fun(BCS_RegenModulationAvailable);
		fun(BCS_RegenModuleActive);
		fun(BCS_TargetRecpTorqRq);
		fun(BCS_TargetRecpTorqRqSt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(BCS_VehSpd);
		fun(BCS_VehSpdVD);
		fun(SRS_YawSnsCalibSt);
		fun(SRS_VehLongAccelVD);
		fun(SRS_VehLatrlAccelVD);
		fun(SRS_YawRateVD);
		fun(SRS_VehLongAccel);
		fun(SRS_VehLatrlAccel);
		fun(SRS_YawRate);
		fun(GSM_GearShiftLeverPstReq);
		fun(GSM_DriveMode);
		fun(EMS_GVS_FuelCapUnLockReq);
		fun(EMS_GVS_FuelCapLockReq);
		fun(ESP_RecpLevelstResp);
		fun(ACSt);
		fun(AutoSt);
		fun(BMS_FaultLampInd);
		fun(BMS_EngMilLampReq);
		fun(BMS_TempOvrInd);
		fun(DCU_FaultLampInd);
		fun(GCU_FaultLampInd);
		fun(DCU_EngMilLampReq);
		fun(GCU_EngMilLampReq);
		fun(VCU_CCUFaultLampInd);
		fun(IPS_DCDCFaultLampInd);
		fun(IPS_OBCFaultLampInd);
		fun(IPS_OBCEngMilLampReq);
		fun(DCU_SysTempOvrInd);
		fun(GCU_SysTempOvrInd);
		fun(BMS_HVBattSt);
		fun(BMS_BattCurr);
		fun(BMS_BattVolt);
		fun(BMS_BattTempAvg);
		fun(BMS_BattSOC);
		fun(BMS_ErrLvl);
		fun(BMS_InslSt);
		fun(BCS_ABSFaultSt);
		fun(EPS_WarnLamp);
		fun(BCS_BrakeOverHeat);
		fun(BCS_typectVehLongAccel);
		fun(BCS_VehLongAccelOffset);
		fun(BCS_typectVehLaltrlAccel);
		fun(BCS_VehLaltrlAccelOffset);
		fun(BCS_typectVehLongAccelVD);
		fun(BCS_typectVehLaltrlAccelVD);
		fun(IPS_OBCModeSt);
		fun(BCS_typeBSFaultSt);
		fun(BCS_RegenModulationAvailable);
		fun(BCS_RegenModuleActive);
		fun(BCS_TargetRecpTorqRq);
		fun(BCS_TargetRecpTorqRqSt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (BCS_VehSpd);
		fun << (BCS_VehSpdVD);
		fun << (SRS_YawSnsCalibSt);
		fun << (SRS_VehLongAccelVD);
		fun << (SRS_VehLatrlAccelVD);
		fun << (SRS_YawRateVD);
		fun << (SRS_VehLongAccel);
		fun << (SRS_VehLatrlAccel);
		fun << (SRS_YawRate);
		fun << (GSM_GearShiftLeverPstReq);
		fun << (GSM_DriveMode);
		fun << (EMS_GVS_FuelCapUnLockReq);
		fun << (EMS_GVS_FuelCapLockReq);
		fun << (ESP_RecpLevelstResp);
		fun << (ACSt);
		fun << (AutoSt);
		fun << (BMS_FaultLampInd);
		fun << (BMS_EngMilLampReq);
		fun << (BMS_TempOvrInd);
		fun << (DCU_FaultLampInd);
		fun << (GCU_FaultLampInd);
		fun << (DCU_EngMilLampReq);
		fun << (GCU_EngMilLampReq);
		fun << (VCU_CCUFaultLampInd);
		fun << (IPS_DCDCFaultLampInd);
		fun << (IPS_OBCFaultLampInd);
		fun << (IPS_OBCEngMilLampReq);
		fun << (DCU_SysTempOvrInd);
		fun << (GCU_SysTempOvrInd);
		fun << (BMS_HVBattSt);
		fun << (BMS_BattCurr);
		fun << (BMS_BattVolt);
		fun << (BMS_BattTempAvg);
		fun << (BMS_BattSOC);
		fun << (BMS_ErrLvl);
		fun << (BMS_InslSt);
		fun << (BCS_ABSFaultSt);
		fun << (EPS_WarnLamp);
		fun << (BCS_BrakeOverHeat);
		fun << (BCS_typectVehLongAccel);
		fun << (BCS_VehLongAccelOffset);
		fun << (BCS_typectVehLaltrlAccel);
		fun << (BCS_VehLaltrlAccelOffset);
		fun << (BCS_typectVehLongAccelVD);
		fun << (BCS_typectVehLaltrlAccelVD);
		fun << (IPS_OBCModeSt);
		fun << (BCS_typeBSFaultSt);
		fun << (BCS_RegenModulationAvailable);
		fun << (BCS_RegenModuleActive);
		fun << (BCS_TargetRecpTorqRq);
		fun << (BCS_TargetRecpTorqRqSt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (BCS_VehSpd);
		fun >> (BCS_VehSpdVD);
		fun >> (SRS_YawSnsCalibSt);
		fun >> (SRS_VehLongAccelVD);
		fun >> (SRS_VehLatrlAccelVD);
		fun >> (SRS_YawRateVD);
		fun >> (SRS_VehLongAccel);
		fun >> (SRS_VehLatrlAccel);
		fun >> (SRS_YawRate);
		fun >> (GSM_GearShiftLeverPstReq);
		fun >> (GSM_DriveMode);
		fun >> (EMS_GVS_FuelCapUnLockReq);
		fun >> (EMS_GVS_FuelCapLockReq);
		fun >> (ESP_RecpLevelstResp);
		fun >> (ACSt);
		fun >> (AutoSt);
		fun >> (BMS_FaultLampInd);
		fun >> (BMS_EngMilLampReq);
		fun >> (BMS_TempOvrInd);
		fun >> (DCU_FaultLampInd);
		fun >> (GCU_FaultLampInd);
		fun >> (DCU_EngMilLampReq);
		fun >> (GCU_EngMilLampReq);
		fun >> (VCU_CCUFaultLampInd);
		fun >> (IPS_DCDCFaultLampInd);
		fun >> (IPS_OBCFaultLampInd);
		fun >> (IPS_OBCEngMilLampReq);
		fun >> (DCU_SysTempOvrInd);
		fun >> (GCU_SysTempOvrInd);
		fun >> (BMS_HVBattSt);
		fun >> (BMS_BattCurr);
		fun >> (BMS_BattVolt);
		fun >> (BMS_BattTempAvg);
		fun >> (BMS_BattSOC);
		fun >> (BMS_ErrLvl);
		fun >> (BMS_InslSt);
		fun >> (BCS_ABSFaultSt);
		fun >> (EPS_WarnLamp);
		fun >> (BCS_BrakeOverHeat);
		fun >> (BCS_typectVehLongAccel);
		fun >> (BCS_VehLongAccelOffset);
		fun >> (BCS_typectVehLaltrlAccel);
		fun >> (BCS_VehLaltrlAccelOffset);
		fun >> (BCS_typectVehLongAccelVD);
		fun >> (BCS_typectVehLaltrlAccelVD);
		fun >> (IPS_OBCModeSt);
		fun >> (BCS_typeBSFaultSt);
		fun >> (BCS_RegenModulationAvailable);
		fun >> (BCS_RegenModuleActive);
		fun >> (BCS_TargetRecpTorqRq);
		fun >> (BCS_TargetRecpTorqRqSt);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__VEHICLEDYNAMICINFO_TYPE_H__
