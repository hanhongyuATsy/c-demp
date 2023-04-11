#ifndef __ARA_COM_VSOMEIP__POWERTRAINSTATEINFO_TYPE_H__
#define __ARA_COM_VSOMEIP__POWERTRAINSTATEINFO_TYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct PowerTrainStateInfo_Type {
public:
	std::uint8_t VCU_VehActTorq;
	bool VCU_VehActTorqVD;
	std::uint16_t DCU_TorqAct;
	std::uint16_t DCU_RotSpdAct;
	std::uint16_t GCU_TorqAct;
	std::uint16_t GCU_RotSpdAct;
	std::uint16_t BMS_TotalAh;
	std::uint16_t BMS_BattSOH;
	std::uint16_t BMS_BattSOC;
	std::uint16_t BMS_BattActPwr;
	std::uint8_t BMS_DeltaSohFixed;
	std::uint8_t BMS_DeltaSohDynamic;
	std::uint16_t GCU_InvtTemp;
	std::uint16_t GCU_RotTemp;
	std::uint16_t GCU_StatTemp;
	std::uint16_t EMS_GVS_EngSpd10ms;
	bool EMS_EngSt;
	std::uint16_t EMS_FuelPulse;
	std::uint8_t EMS_EngRunningTime;
	std::uint8_t TCU_ShiftType;
	std::uint8_t TCU_DriveMode;
	std::uint8_t EMS_GVS_EnvTemp;
	std::uint8_t EMS_EngStForPHEV;
	std::uint16_t EMS_EngSpd;
	bool EMS_EngSpdVD;
	std::uint8_t EMS_FuelLevel;
/*
	PowerTrainStateInfo_Type() {}
	~PowerTrainStateInfo_Type() {}
	PowerTrainStateInfo_Type(const std::uint8_t _VCU_VehActTorq,const bool _VCU_VehActTorqVD,const std::uint16_t _DCU_TorqAct,const std::uint16_t _DCU_RotSpdAct,const std::uint16_t _GCU_TorqAct,const std::uint16_t _GCU_RotSpdAct,const std::uint16_t _BMS_TotalAh,const std::uint16_t _BMS_BattSOH,const std::uint16_t _BMS_BattSOC,const std::uint16_t _BMS_BattActPwr,const std::uint8_t _BMS_DeltaSohFixed,const std::uint8_t _BMS_DeltaSohDynamic,const std::uint16_t _GCU_InvtTemp,const std::uint16_t _GCU_RotTemp,const std::uint16_t _GCU_StatTemp,const std::uint16_t _EMS_GVS_EngSpd10ms,const bool _EMS_EngSt,const std::uint16_t _EMS_FuelPulse,const std::uint8_t _EMS_EngRunningTime,const std::uint8_t _TCU_ShiftType,const std::uint8_t _TCU_DriveMode,const std::uint8_t _EMS_GVS_EnvTemp,const std::uint8_t _EMS_EngStForPHEV,const std::uint16_t _EMS_EngSpd,const bool _EMS_EngSpdVD,const std::uint8_t _EMS_FuelLevel):VCU_VehActTorq(_VCU_VehActTorq),VCU_VehActTorqVD(_VCU_VehActTorqVD),DCU_TorqAct(_DCU_TorqAct),DCU_RotSpdAct(_DCU_RotSpdAct),GCU_TorqAct(_GCU_TorqAct),GCU_RotSpdAct(_GCU_RotSpdAct),BMS_TotalAh(_BMS_TotalAh),BMS_BattSOH(_BMS_BattSOH),BMS_BattSOC(_BMS_BattSOC),BMS_BattActPwr(_BMS_BattActPwr),BMS_DeltaSohFixed(_BMS_DeltaSohFixed),BMS_DeltaSohDynamic(_BMS_DeltaSohDynamic),GCU_InvtTemp(_GCU_InvtTemp),GCU_RotTemp(_GCU_RotTemp),GCU_StatTemp(_GCU_StatTemp),EMS_GVS_EngSpd10ms(_EMS_GVS_EngSpd10ms),EMS_EngSt(_EMS_EngSt),EMS_FuelPulse(_EMS_FuelPulse),EMS_EngRunningTime(_EMS_EngRunningTime),TCU_ShiftType(_TCU_ShiftType),TCU_DriveMode(_TCU_DriveMode),EMS_GVS_EnvTemp(_EMS_GVS_EnvTemp),EMS_EngStForPHEV(_EMS_EngStForPHEV),EMS_EngSpd(_EMS_EngSpd),EMS_EngSpdVD(_EMS_EngSpdVD),EMS_FuelLevel(_EMS_FuelLevel) {}
	PowerTrainStateInfo_Type(const PowerTrainStateInfo_Type &_x){
		VCU_VehActTorq = _x.VCU_VehActTorq;
		VCU_VehActTorqVD = _x.VCU_VehActTorqVD;
		DCU_TorqAct = _x.DCU_TorqAct;
		DCU_RotSpdAct = _x.DCU_RotSpdAct;
		GCU_TorqAct = _x.GCU_TorqAct;
		GCU_RotSpdAct = _x.GCU_RotSpdAct;
		BMS_TotalAh = _x.BMS_TotalAh;
		BMS_BattSOH = _x.BMS_BattSOH;
		BMS_BattSOC = _x.BMS_BattSOC;
		BMS_BattActPwr = _x.BMS_BattActPwr;
		BMS_DeltaSohFixed = _x.BMS_DeltaSohFixed;
		BMS_DeltaSohDynamic = _x.BMS_DeltaSohDynamic;
		GCU_InvtTemp = _x.GCU_InvtTemp;
		GCU_RotTemp = _x.GCU_RotTemp;
		GCU_StatTemp = _x.GCU_StatTemp;
		EMS_GVS_EngSpd10ms = _x.EMS_GVS_EngSpd10ms;
		EMS_EngSt = _x.EMS_EngSt;
		EMS_FuelPulse = _x.EMS_FuelPulse;
		EMS_EngRunningTime = _x.EMS_EngRunningTime;
		TCU_ShiftType = _x.TCU_ShiftType;
		TCU_DriveMode = _x.TCU_DriveMode;
		EMS_GVS_EnvTemp = _x.EMS_GVS_EnvTemp;
		EMS_EngStForPHEV = _x.EMS_EngStForPHEV;
		EMS_EngSpd = _x.EMS_EngSpd;
		EMS_EngSpdVD = _x.EMS_EngSpdVD;
		EMS_FuelLevel = _x.EMS_FuelLevel;
	}
	PowerTrainStateInfo_Type(PowerTrainStateInfo_Type &&_x){
		VCU_VehActTorq = std::move(_x.VCU_VehActTorq);
		VCU_VehActTorqVD = std::move(_x.VCU_VehActTorqVD);
		DCU_TorqAct = std::move(_x.DCU_TorqAct);
		DCU_RotSpdAct = std::move(_x.DCU_RotSpdAct);
		GCU_TorqAct = std::move(_x.GCU_TorqAct);
		GCU_RotSpdAct = std::move(_x.GCU_RotSpdAct);
		BMS_TotalAh = std::move(_x.BMS_TotalAh);
		BMS_BattSOH = std::move(_x.BMS_BattSOH);
		BMS_BattSOC = std::move(_x.BMS_BattSOC);
		BMS_BattActPwr = std::move(_x.BMS_BattActPwr);
		BMS_DeltaSohFixed = std::move(_x.BMS_DeltaSohFixed);
		BMS_DeltaSohDynamic = std::move(_x.BMS_DeltaSohDynamic);
		GCU_InvtTemp = std::move(_x.GCU_InvtTemp);
		GCU_RotTemp = std::move(_x.GCU_RotTemp);
		GCU_StatTemp = std::move(_x.GCU_StatTemp);
		EMS_GVS_EngSpd10ms = std::move(_x.EMS_GVS_EngSpd10ms);
		EMS_EngSt = std::move(_x.EMS_EngSt);
		EMS_FuelPulse = std::move(_x.EMS_FuelPulse);
		EMS_EngRunningTime = std::move(_x.EMS_EngRunningTime);
		TCU_ShiftType = std::move(_x.TCU_ShiftType);
		TCU_DriveMode = std::move(_x.TCU_DriveMode);
		EMS_GVS_EnvTemp = std::move(_x.EMS_GVS_EnvTemp);
		EMS_EngStForPHEV = std::move(_x.EMS_EngStForPHEV);
		EMS_EngSpd = std::move(_x.EMS_EngSpd);
		EMS_EngSpdVD = std::move(_x.EMS_EngSpdVD);
		EMS_FuelLevel = std::move(_x.EMS_FuelLevel);
	}
	PowerTrainStateInfo_Type& operator=(const PowerTrainStateInfo_Type &_x){
		VCU_VehActTorq = _x.VCU_VehActTorq;
		VCU_VehActTorqVD = _x.VCU_VehActTorqVD;
		DCU_TorqAct = _x.DCU_TorqAct;
		DCU_RotSpdAct = _x.DCU_RotSpdAct;
		GCU_TorqAct = _x.GCU_TorqAct;
		GCU_RotSpdAct = _x.GCU_RotSpdAct;
		BMS_TotalAh = _x.BMS_TotalAh;
		BMS_BattSOH = _x.BMS_BattSOH;
		BMS_BattSOC = _x.BMS_BattSOC;
		BMS_BattActPwr = _x.BMS_BattActPwr;
		BMS_DeltaSohFixed = _x.BMS_DeltaSohFixed;
		BMS_DeltaSohDynamic = _x.BMS_DeltaSohDynamic;
		GCU_InvtTemp = _x.GCU_InvtTemp;
		GCU_RotTemp = _x.GCU_RotTemp;
		GCU_StatTemp = _x.GCU_StatTemp;
		EMS_GVS_EngSpd10ms = _x.EMS_GVS_EngSpd10ms;
		EMS_EngSt = _x.EMS_EngSt;
		EMS_FuelPulse = _x.EMS_FuelPulse;
		EMS_EngRunningTime = _x.EMS_EngRunningTime;
		TCU_ShiftType = _x.TCU_ShiftType;
		TCU_DriveMode = _x.TCU_DriveMode;
		EMS_GVS_EnvTemp = _x.EMS_GVS_EnvTemp;
		EMS_EngStForPHEV = _x.EMS_EngStForPHEV;
		EMS_EngSpd = _x.EMS_EngSpd;
		EMS_EngSpdVD = _x.EMS_EngSpdVD;
		EMS_FuelLevel = _x.EMS_FuelLevel;
		return *this;
	}
	PowerTrainStateInfo_Type& operator=(PowerTrainStateInfo_Type &&_x){
		VCU_VehActTorq = std::move(_x.VCU_VehActTorq);
		VCU_VehActTorqVD = std::move(_x.VCU_VehActTorqVD);
		DCU_TorqAct = std::move(_x.DCU_TorqAct);
		DCU_RotSpdAct = std::move(_x.DCU_RotSpdAct);
		GCU_TorqAct = std::move(_x.GCU_TorqAct);
		GCU_RotSpdAct = std::move(_x.GCU_RotSpdAct);
		BMS_TotalAh = std::move(_x.BMS_TotalAh);
		BMS_BattSOH = std::move(_x.BMS_BattSOH);
		BMS_BattSOC = std::move(_x.BMS_BattSOC);
		BMS_BattActPwr = std::move(_x.BMS_BattActPwr);
		BMS_DeltaSohFixed = std::move(_x.BMS_DeltaSohFixed);
		BMS_DeltaSohDynamic = std::move(_x.BMS_DeltaSohDynamic);
		GCU_InvtTemp = std::move(_x.GCU_InvtTemp);
		GCU_RotTemp = std::move(_x.GCU_RotTemp);
		GCU_StatTemp = std::move(_x.GCU_StatTemp);
		EMS_GVS_EngSpd10ms = std::move(_x.EMS_GVS_EngSpd10ms);
		EMS_EngSt = std::move(_x.EMS_EngSt);
		EMS_FuelPulse = std::move(_x.EMS_FuelPulse);
		EMS_EngRunningTime = std::move(_x.EMS_EngRunningTime);
		TCU_ShiftType = std::move(_x.TCU_ShiftType);
		TCU_DriveMode = std::move(_x.TCU_DriveMode);
		EMS_GVS_EnvTemp = std::move(_x.EMS_GVS_EnvTemp);
		EMS_EngStForPHEV = std::move(_x.EMS_EngStForPHEV);
		EMS_EngSpd = std::move(_x.EMS_EngSpd);
		EMS_EngSpdVD = std::move(_x.EMS_EngSpdVD);
		EMS_FuelLevel = std::move(_x.EMS_FuelLevel);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(VCU_VehActTorq);
		fun(VCU_VehActTorqVD);
		fun(DCU_TorqAct);
		fun(DCU_RotSpdAct);
		fun(GCU_TorqAct);
		fun(GCU_RotSpdAct);
		fun(BMS_TotalAh);
		fun(BMS_BattSOH);
		fun(BMS_BattSOC);
		fun(BMS_BattActPwr);
		fun(BMS_DeltaSohFixed);
		fun(BMS_DeltaSohDynamic);
		fun(GCU_InvtTemp);
		fun(GCU_RotTemp);
		fun(GCU_StatTemp);
		fun(EMS_GVS_EngSpd10ms);
		fun(EMS_EngSt);
		fun(EMS_FuelPulse);
		fun(EMS_EngRunningTime);
		fun(TCU_ShiftType);
		fun(TCU_DriveMode);
		fun(EMS_GVS_EnvTemp);
		fun(EMS_EngStForPHEV);
		fun(EMS_EngSpd);
		fun(EMS_EngSpdVD);
		fun(EMS_FuelLevel);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(VCU_VehActTorq);
		fun(VCU_VehActTorqVD);
		fun(DCU_TorqAct);
		fun(DCU_RotSpdAct);
		fun(GCU_TorqAct);
		fun(GCU_RotSpdAct);
		fun(BMS_TotalAh);
		fun(BMS_BattSOH);
		fun(BMS_BattSOC);
		fun(BMS_BattActPwr);
		fun(BMS_DeltaSohFixed);
		fun(BMS_DeltaSohDynamic);
		fun(GCU_InvtTemp);
		fun(GCU_RotTemp);
		fun(GCU_StatTemp);
		fun(EMS_GVS_EngSpd10ms);
		fun(EMS_EngSt);
		fun(EMS_FuelPulse);
		fun(EMS_EngRunningTime);
		fun(TCU_ShiftType);
		fun(TCU_DriveMode);
		fun(EMS_GVS_EnvTemp);
		fun(EMS_EngStForPHEV);
		fun(EMS_EngSpd);
		fun(EMS_EngSpdVD);
		fun(EMS_FuelLevel);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (VCU_VehActTorq);
		fun << (VCU_VehActTorqVD);
		fun << (DCU_TorqAct);
		fun << (DCU_RotSpdAct);
		fun << (GCU_TorqAct);
		fun << (GCU_RotSpdAct);
		fun << (BMS_TotalAh);
		fun << (BMS_BattSOH);
		fun << (BMS_BattSOC);
		fun << (BMS_BattActPwr);
		fun << (BMS_DeltaSohFixed);
		fun << (BMS_DeltaSohDynamic);
		fun << (GCU_InvtTemp);
		fun << (GCU_RotTemp);
		fun << (GCU_StatTemp);
		fun << (EMS_GVS_EngSpd10ms);
		fun << (EMS_EngSt);
		fun << (EMS_FuelPulse);
		fun << (EMS_EngRunningTime);
		fun << (TCU_ShiftType);
		fun << (TCU_DriveMode);
		fun << (EMS_GVS_EnvTemp);
		fun << (EMS_EngStForPHEV);
		fun << (EMS_EngSpd);
		fun << (EMS_EngSpdVD);
		fun << (EMS_FuelLevel);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (VCU_VehActTorq);
		fun >> (VCU_VehActTorqVD);
		fun >> (DCU_TorqAct);
		fun >> (DCU_RotSpdAct);
		fun >> (GCU_TorqAct);
		fun >> (GCU_RotSpdAct);
		fun >> (BMS_TotalAh);
		fun >> (BMS_BattSOH);
		fun >> (BMS_BattSOC);
		fun >> (BMS_BattActPwr);
		fun >> (BMS_DeltaSohFixed);
		fun >> (BMS_DeltaSohDynamic);
		fun >> (GCU_InvtTemp);
		fun >> (GCU_RotTemp);
		fun >> (GCU_StatTemp);
		fun >> (EMS_GVS_EngSpd10ms);
		fun >> (EMS_EngSt);
		fun >> (EMS_FuelPulse);
		fun >> (EMS_EngRunningTime);
		fun >> (TCU_ShiftType);
		fun >> (TCU_DriveMode);
		fun >> (EMS_GVS_EnvTemp);
		fun >> (EMS_EngStForPHEV);
		fun >> (EMS_EngSpd);
		fun >> (EMS_EngSpdVD);
		fun >> (EMS_FuelLevel);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__POWERTRAINSTATEINFO_TYPE_H__
