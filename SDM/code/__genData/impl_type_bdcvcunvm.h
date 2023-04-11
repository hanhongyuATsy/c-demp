#ifndef ____BDCVCUNVM_H__
#define ____BDCVCUNVM_H__


#include "cstdint"






struct BDCVCUNVM {
public:
	std::uint64_t MID_NVM_Data_VCU_bCrashErr;
	std::uint64_t MID_NVM_InitReadData_VCU_bCrashErr;
	std::uint64_t MID_NVM_Data_VCU_dstVeh;
	std::uint64_t MID_NVM_InitReadData_VCU_dstVeh;
	std::uint64_t MID_NVM_Data_VCU_accumEleConsump;
	std::uint64_t MID_NVM_InitReadData_VCU_accumEleConsump;
	std::uint64_t MID_NVM_Data_VCU_stRecpLevel;
	std::uint64_t MID_NVM_InitReadData_VCU_stRecpLevel;
	std::uint64_t MID_NVM_Data_VCU_stIpedalCreep;
	std::uint64_t MID_NVM_InitReadData_VCU_stIpedalCreep;
	std::uint64_t MID_NVM_Data_VCU_tiWarmTime;
	std::uint64_t MID_NVM_InitReadData_VCU_tiWarmTime;
	std::uint64_t MID_NVM_Data_VCU_stRecpLevel4Ipedal;
	std::uint64_t MID_NVM_InitReadData_VCU_stRecpLevel4Ipedal;
	std::uint64_t MID_NVM_Data_VCU_stRecpLevel4ENS;
	std::uint64_t MID_NVM_InitReadData_VCU_stRecpLevel4ENS;
	std::uint64_t MID_NVM_Data_VCU_stDriveMode4ENS;
	std::uint64_t MID_NVM_InitReadData_VCU_stDriveMode4ENS;
	std::uint64_t MID_NVM_Data_VCU_stDriveMode;
	std::uint64_t MID_NVM_InitReadData_VCU_stDriveMode;
	std::uint64_t MID_NVM_Data_VCU_percDischgSoc;
	std::uint64_t MID_NVM_InitReadData_VCU_percDischgSoc;
	std::uint64_t MID_NVM_Data_VCU_wElcConspEnergy;
	std::uint64_t MID_NVM_InitReadData_VCU_wElcConspEnergy;
	std::uint64_t MID_NVM_Data_VCU_bVacSigStuck;
	std::uint64_t MID_NVM_InitReadData_VCU_bVacSigStuck;
	std::uint64_t MID_NVM_Data_VCU_bCfgCheckErr;
	std::uint64_t MID_NVM_InitReadData_VCU_bCfgCheckErr;
	std::uint64_t MID_NVM_Data_VCU_stChgPlugRel;
	std::uint64_t MID_NVM_InitReadData_VCU_stChgPlugRel;
	std::uint64_t MID_NVM_Data_VCU_nvmReserved;
	std::uint64_t MID_NVM_InitReadData_VCU_nvmReserved;
/*
	BDCVCUNVM() {}
	~BDCVCUNVM() {}
	BDCVCUNVM(const std::uint64_t _MID_NVM_Data_VCU_bCrashErr,const std::uint64_t _MID_NVM_InitReadData_VCU_bCrashErr,const std::uint64_t _MID_NVM_Data_VCU_dstVeh,const std::uint64_t _MID_NVM_InitReadData_VCU_dstVeh,const std::uint64_t _MID_NVM_Data_VCU_accumEleConsump,const std::uint64_t _MID_NVM_InitReadData_VCU_accumEleConsump,const std::uint64_t _MID_NVM_Data_VCU_stRecpLevel,const std::uint64_t _MID_NVM_InitReadData_VCU_stRecpLevel,const std::uint64_t _MID_NVM_Data_VCU_stIpedalCreep,const std::uint64_t _MID_NVM_InitReadData_VCU_stIpedalCreep,const std::uint64_t _MID_NVM_Data_VCU_tiWarmTime,const std::uint64_t _MID_NVM_InitReadData_VCU_tiWarmTime,const std::uint64_t _MID_NVM_Data_VCU_stRecpLevel4Ipedal,const std::uint64_t _MID_NVM_InitReadData_VCU_stRecpLevel4Ipedal,const std::uint64_t _MID_NVM_Data_VCU_stRecpLevel4ENS,const std::uint64_t _MID_NVM_InitReadData_VCU_stRecpLevel4ENS,const std::uint64_t _MID_NVM_Data_VCU_stDriveMode4ENS,const std::uint64_t _MID_NVM_InitReadData_VCU_stDriveMode4ENS,const std::uint64_t _MID_NVM_Data_VCU_stDriveMode,const std::uint64_t _MID_NVM_InitReadData_VCU_stDriveMode,const std::uint64_t _MID_NVM_Data_VCU_percDischgSoc,const std::uint64_t _MID_NVM_InitReadData_VCU_percDischgSoc,const std::uint64_t _MID_NVM_Data_VCU_wElcConspEnergy,const std::uint64_t _MID_NVM_InitReadData_VCU_wElcConspEnergy,const std::uint64_t _MID_NVM_Data_VCU_bVacSigStuck,const std::uint64_t _MID_NVM_InitReadData_VCU_bVacSigStuck,const std::uint64_t _MID_NVM_Data_VCU_bCfgCheckErr,const std::uint64_t _MID_NVM_InitReadData_VCU_bCfgCheckErr,const std::uint64_t _MID_NVM_Data_VCU_stChgPlugRel,const std::uint64_t _MID_NVM_InitReadData_VCU_stChgPlugRel,const std::uint64_t _MID_NVM_Data_VCU_nvmReserved,const std::uint64_t _MID_NVM_InitReadData_VCU_nvmReserved):MID_NVM_Data_VCU_bCrashErr(_MID_NVM_Data_VCU_bCrashErr),MID_NVM_InitReadData_VCU_bCrashErr(_MID_NVM_InitReadData_VCU_bCrashErr),MID_NVM_Data_VCU_dstVeh(_MID_NVM_Data_VCU_dstVeh),MID_NVM_InitReadData_VCU_dstVeh(_MID_NVM_InitReadData_VCU_dstVeh),MID_NVM_Data_VCU_accumEleConsump(_MID_NVM_Data_VCU_accumEleConsump),MID_NVM_InitReadData_VCU_accumEleConsump(_MID_NVM_InitReadData_VCU_accumEleConsump),MID_NVM_Data_VCU_stRecpLevel(_MID_NVM_Data_VCU_stRecpLevel),MID_NVM_InitReadData_VCU_stRecpLevel(_MID_NVM_InitReadData_VCU_stRecpLevel),MID_NVM_Data_VCU_stIpedalCreep(_MID_NVM_Data_VCU_stIpedalCreep),MID_NVM_InitReadData_VCU_stIpedalCreep(_MID_NVM_InitReadData_VCU_stIpedalCreep),MID_NVM_Data_VCU_tiWarmTime(_MID_NVM_Data_VCU_tiWarmTime),MID_NVM_InitReadData_VCU_tiWarmTime(_MID_NVM_InitReadData_VCU_tiWarmTime),MID_NVM_Data_VCU_stRecpLevel4Ipedal(_MID_NVM_Data_VCU_stRecpLevel4Ipedal),MID_NVM_InitReadData_VCU_stRecpLevel4Ipedal(_MID_NVM_InitReadData_VCU_stRecpLevel4Ipedal),MID_NVM_Data_VCU_stRecpLevel4ENS(_MID_NVM_Data_VCU_stRecpLevel4ENS),MID_NVM_InitReadData_VCU_stRecpLevel4ENS(_MID_NVM_InitReadData_VCU_stRecpLevel4ENS),MID_NVM_Data_VCU_stDriveMode4ENS(_MID_NVM_Data_VCU_stDriveMode4ENS),MID_NVM_InitReadData_VCU_stDriveMode4ENS(_MID_NVM_InitReadData_VCU_stDriveMode4ENS),MID_NVM_Data_VCU_stDriveMode(_MID_NVM_Data_VCU_stDriveMode),MID_NVM_InitReadData_VCU_stDriveMode(_MID_NVM_InitReadData_VCU_stDriveMode),MID_NVM_Data_VCU_percDischgSoc(_MID_NVM_Data_VCU_percDischgSoc),MID_NVM_InitReadData_VCU_percDischgSoc(_MID_NVM_InitReadData_VCU_percDischgSoc),MID_NVM_Data_VCU_wElcConspEnergy(_MID_NVM_Data_VCU_wElcConspEnergy),MID_NVM_InitReadData_VCU_wElcConspEnergy(_MID_NVM_InitReadData_VCU_wElcConspEnergy),MID_NVM_Data_VCU_bVacSigStuck(_MID_NVM_Data_VCU_bVacSigStuck),MID_NVM_InitReadData_VCU_bVacSigStuck(_MID_NVM_InitReadData_VCU_bVacSigStuck),MID_NVM_Data_VCU_bCfgCheckErr(_MID_NVM_Data_VCU_bCfgCheckErr),MID_NVM_InitReadData_VCU_bCfgCheckErr(_MID_NVM_InitReadData_VCU_bCfgCheckErr),MID_NVM_Data_VCU_stChgPlugRel(_MID_NVM_Data_VCU_stChgPlugRel),MID_NVM_InitReadData_VCU_stChgPlugRel(_MID_NVM_InitReadData_VCU_stChgPlugRel),MID_NVM_Data_VCU_nvmReserved(_MID_NVM_Data_VCU_nvmReserved),MID_NVM_InitReadData_VCU_nvmReserved(_MID_NVM_InitReadData_VCU_nvmReserved) {}
	BDCVCUNVM(const BDCVCUNVM &_x){
		MID_NVM_Data_VCU_bCrashErr = _x.MID_NVM_Data_VCU_bCrashErr;
		MID_NVM_InitReadData_VCU_bCrashErr = _x.MID_NVM_InitReadData_VCU_bCrashErr;
		MID_NVM_Data_VCU_dstVeh = _x.MID_NVM_Data_VCU_dstVeh;
		MID_NVM_InitReadData_VCU_dstVeh = _x.MID_NVM_InitReadData_VCU_dstVeh;
		MID_NVM_Data_VCU_accumEleConsump = _x.MID_NVM_Data_VCU_accumEleConsump;
		MID_NVM_InitReadData_VCU_accumEleConsump = _x.MID_NVM_InitReadData_VCU_accumEleConsump;
		MID_NVM_Data_VCU_stRecpLevel = _x.MID_NVM_Data_VCU_stRecpLevel;
		MID_NVM_InitReadData_VCU_stRecpLevel = _x.MID_NVM_InitReadData_VCU_stRecpLevel;
		MID_NVM_Data_VCU_stIpedalCreep = _x.MID_NVM_Data_VCU_stIpedalCreep;
		MID_NVM_InitReadData_VCU_stIpedalCreep = _x.MID_NVM_InitReadData_VCU_stIpedalCreep;
		MID_NVM_Data_VCU_tiWarmTime = _x.MID_NVM_Data_VCU_tiWarmTime;
		MID_NVM_InitReadData_VCU_tiWarmTime = _x.MID_NVM_InitReadData_VCU_tiWarmTime;
		MID_NVM_Data_VCU_stRecpLevel4Ipedal = _x.MID_NVM_Data_VCU_stRecpLevel4Ipedal;
		MID_NVM_InitReadData_VCU_stRecpLevel4Ipedal = _x.MID_NVM_InitReadData_VCU_stRecpLevel4Ipedal;
		MID_NVM_Data_VCU_stRecpLevel4ENS = _x.MID_NVM_Data_VCU_stRecpLevel4ENS;
		MID_NVM_InitReadData_VCU_stRecpLevel4ENS = _x.MID_NVM_InitReadData_VCU_stRecpLevel4ENS;
		MID_NVM_Data_VCU_stDriveMode4ENS = _x.MID_NVM_Data_VCU_stDriveMode4ENS;
		MID_NVM_InitReadData_VCU_stDriveMode4ENS = _x.MID_NVM_InitReadData_VCU_stDriveMode4ENS;
		MID_NVM_Data_VCU_stDriveMode = _x.MID_NVM_Data_VCU_stDriveMode;
		MID_NVM_InitReadData_VCU_stDriveMode = _x.MID_NVM_InitReadData_VCU_stDriveMode;
		MID_NVM_Data_VCU_percDischgSoc = _x.MID_NVM_Data_VCU_percDischgSoc;
		MID_NVM_InitReadData_VCU_percDischgSoc = _x.MID_NVM_InitReadData_VCU_percDischgSoc;
		MID_NVM_Data_VCU_wElcConspEnergy = _x.MID_NVM_Data_VCU_wElcConspEnergy;
		MID_NVM_InitReadData_VCU_wElcConspEnergy = _x.MID_NVM_InitReadData_VCU_wElcConspEnergy;
		MID_NVM_Data_VCU_bVacSigStuck = _x.MID_NVM_Data_VCU_bVacSigStuck;
		MID_NVM_InitReadData_VCU_bVacSigStuck = _x.MID_NVM_InitReadData_VCU_bVacSigStuck;
		MID_NVM_Data_VCU_bCfgCheckErr = _x.MID_NVM_Data_VCU_bCfgCheckErr;
		MID_NVM_InitReadData_VCU_bCfgCheckErr = _x.MID_NVM_InitReadData_VCU_bCfgCheckErr;
		MID_NVM_Data_VCU_stChgPlugRel = _x.MID_NVM_Data_VCU_stChgPlugRel;
		MID_NVM_InitReadData_VCU_stChgPlugRel = _x.MID_NVM_InitReadData_VCU_stChgPlugRel;
		MID_NVM_Data_VCU_nvmReserved = _x.MID_NVM_Data_VCU_nvmReserved;
		MID_NVM_InitReadData_VCU_nvmReserved = _x.MID_NVM_InitReadData_VCU_nvmReserved;
	}
	BDCVCUNVM(BDCVCUNVM &&_x){
		MID_NVM_Data_VCU_bCrashErr = std::move(_x.MID_NVM_Data_VCU_bCrashErr);
		MID_NVM_InitReadData_VCU_bCrashErr = std::move(_x.MID_NVM_InitReadData_VCU_bCrashErr);
		MID_NVM_Data_VCU_dstVeh = std::move(_x.MID_NVM_Data_VCU_dstVeh);
		MID_NVM_InitReadData_VCU_dstVeh = std::move(_x.MID_NVM_InitReadData_VCU_dstVeh);
		MID_NVM_Data_VCU_accumEleConsump = std::move(_x.MID_NVM_Data_VCU_accumEleConsump);
		MID_NVM_InitReadData_VCU_accumEleConsump = std::move(_x.MID_NVM_InitReadData_VCU_accumEleConsump);
		MID_NVM_Data_VCU_stRecpLevel = std::move(_x.MID_NVM_Data_VCU_stRecpLevel);
		MID_NVM_InitReadData_VCU_stRecpLevel = std::move(_x.MID_NVM_InitReadData_VCU_stRecpLevel);
		MID_NVM_Data_VCU_stIpedalCreep = std::move(_x.MID_NVM_Data_VCU_stIpedalCreep);
		MID_NVM_InitReadData_VCU_stIpedalCreep = std::move(_x.MID_NVM_InitReadData_VCU_stIpedalCreep);
		MID_NVM_Data_VCU_tiWarmTime = std::move(_x.MID_NVM_Data_VCU_tiWarmTime);
		MID_NVM_InitReadData_VCU_tiWarmTime = std::move(_x.MID_NVM_InitReadData_VCU_tiWarmTime);
		MID_NVM_Data_VCU_stRecpLevel4Ipedal = std::move(_x.MID_NVM_Data_VCU_stRecpLevel4Ipedal);
		MID_NVM_InitReadData_VCU_stRecpLevel4Ipedal = std::move(_x.MID_NVM_InitReadData_VCU_stRecpLevel4Ipedal);
		MID_NVM_Data_VCU_stRecpLevel4ENS = std::move(_x.MID_NVM_Data_VCU_stRecpLevel4ENS);
		MID_NVM_InitReadData_VCU_stRecpLevel4ENS = std::move(_x.MID_NVM_InitReadData_VCU_stRecpLevel4ENS);
		MID_NVM_Data_VCU_stDriveMode4ENS = std::move(_x.MID_NVM_Data_VCU_stDriveMode4ENS);
		MID_NVM_InitReadData_VCU_stDriveMode4ENS = std::move(_x.MID_NVM_InitReadData_VCU_stDriveMode4ENS);
		MID_NVM_Data_VCU_stDriveMode = std::move(_x.MID_NVM_Data_VCU_stDriveMode);
		MID_NVM_InitReadData_VCU_stDriveMode = std::move(_x.MID_NVM_InitReadData_VCU_stDriveMode);
		MID_NVM_Data_VCU_percDischgSoc = std::move(_x.MID_NVM_Data_VCU_percDischgSoc);
		MID_NVM_InitReadData_VCU_percDischgSoc = std::move(_x.MID_NVM_InitReadData_VCU_percDischgSoc);
		MID_NVM_Data_VCU_wElcConspEnergy = std::move(_x.MID_NVM_Data_VCU_wElcConspEnergy);
		MID_NVM_InitReadData_VCU_wElcConspEnergy = std::move(_x.MID_NVM_InitReadData_VCU_wElcConspEnergy);
		MID_NVM_Data_VCU_bVacSigStuck = std::move(_x.MID_NVM_Data_VCU_bVacSigStuck);
		MID_NVM_InitReadData_VCU_bVacSigStuck = std::move(_x.MID_NVM_InitReadData_VCU_bVacSigStuck);
		MID_NVM_Data_VCU_bCfgCheckErr = std::move(_x.MID_NVM_Data_VCU_bCfgCheckErr);
		MID_NVM_InitReadData_VCU_bCfgCheckErr = std::move(_x.MID_NVM_InitReadData_VCU_bCfgCheckErr);
		MID_NVM_Data_VCU_stChgPlugRel = std::move(_x.MID_NVM_Data_VCU_stChgPlugRel);
		MID_NVM_InitReadData_VCU_stChgPlugRel = std::move(_x.MID_NVM_InitReadData_VCU_stChgPlugRel);
		MID_NVM_Data_VCU_nvmReserved = std::move(_x.MID_NVM_Data_VCU_nvmReserved);
		MID_NVM_InitReadData_VCU_nvmReserved = std::move(_x.MID_NVM_InitReadData_VCU_nvmReserved);
	}
	BDCVCUNVM& operator=(const BDCVCUNVM &_x){
		MID_NVM_Data_VCU_bCrashErr = _x.MID_NVM_Data_VCU_bCrashErr;
		MID_NVM_InitReadData_VCU_bCrashErr = _x.MID_NVM_InitReadData_VCU_bCrashErr;
		MID_NVM_Data_VCU_dstVeh = _x.MID_NVM_Data_VCU_dstVeh;
		MID_NVM_InitReadData_VCU_dstVeh = _x.MID_NVM_InitReadData_VCU_dstVeh;
		MID_NVM_Data_VCU_accumEleConsump = _x.MID_NVM_Data_VCU_accumEleConsump;
		MID_NVM_InitReadData_VCU_accumEleConsump = _x.MID_NVM_InitReadData_VCU_accumEleConsump;
		MID_NVM_Data_VCU_stRecpLevel = _x.MID_NVM_Data_VCU_stRecpLevel;
		MID_NVM_InitReadData_VCU_stRecpLevel = _x.MID_NVM_InitReadData_VCU_stRecpLevel;
		MID_NVM_Data_VCU_stIpedalCreep = _x.MID_NVM_Data_VCU_stIpedalCreep;
		MID_NVM_InitReadData_VCU_stIpedalCreep = _x.MID_NVM_InitReadData_VCU_stIpedalCreep;
		MID_NVM_Data_VCU_tiWarmTime = _x.MID_NVM_Data_VCU_tiWarmTime;
		MID_NVM_InitReadData_VCU_tiWarmTime = _x.MID_NVM_InitReadData_VCU_tiWarmTime;
		MID_NVM_Data_VCU_stRecpLevel4Ipedal = _x.MID_NVM_Data_VCU_stRecpLevel4Ipedal;
		MID_NVM_InitReadData_VCU_stRecpLevel4Ipedal = _x.MID_NVM_InitReadData_VCU_stRecpLevel4Ipedal;
		MID_NVM_Data_VCU_stRecpLevel4ENS = _x.MID_NVM_Data_VCU_stRecpLevel4ENS;
		MID_NVM_InitReadData_VCU_stRecpLevel4ENS = _x.MID_NVM_InitReadData_VCU_stRecpLevel4ENS;
		MID_NVM_Data_VCU_stDriveMode4ENS = _x.MID_NVM_Data_VCU_stDriveMode4ENS;
		MID_NVM_InitReadData_VCU_stDriveMode4ENS = _x.MID_NVM_InitReadData_VCU_stDriveMode4ENS;
		MID_NVM_Data_VCU_stDriveMode = _x.MID_NVM_Data_VCU_stDriveMode;
		MID_NVM_InitReadData_VCU_stDriveMode = _x.MID_NVM_InitReadData_VCU_stDriveMode;
		MID_NVM_Data_VCU_percDischgSoc = _x.MID_NVM_Data_VCU_percDischgSoc;
		MID_NVM_InitReadData_VCU_percDischgSoc = _x.MID_NVM_InitReadData_VCU_percDischgSoc;
		MID_NVM_Data_VCU_wElcConspEnergy = _x.MID_NVM_Data_VCU_wElcConspEnergy;
		MID_NVM_InitReadData_VCU_wElcConspEnergy = _x.MID_NVM_InitReadData_VCU_wElcConspEnergy;
		MID_NVM_Data_VCU_bVacSigStuck = _x.MID_NVM_Data_VCU_bVacSigStuck;
		MID_NVM_InitReadData_VCU_bVacSigStuck = _x.MID_NVM_InitReadData_VCU_bVacSigStuck;
		MID_NVM_Data_VCU_bCfgCheckErr = _x.MID_NVM_Data_VCU_bCfgCheckErr;
		MID_NVM_InitReadData_VCU_bCfgCheckErr = _x.MID_NVM_InitReadData_VCU_bCfgCheckErr;
		MID_NVM_Data_VCU_stChgPlugRel = _x.MID_NVM_Data_VCU_stChgPlugRel;
		MID_NVM_InitReadData_VCU_stChgPlugRel = _x.MID_NVM_InitReadData_VCU_stChgPlugRel;
		MID_NVM_Data_VCU_nvmReserved = _x.MID_NVM_Data_VCU_nvmReserved;
		MID_NVM_InitReadData_VCU_nvmReserved = _x.MID_NVM_InitReadData_VCU_nvmReserved;
		return *this;
	}
	BDCVCUNVM& operator=(BDCVCUNVM &&_x){
		MID_NVM_Data_VCU_bCrashErr = std::move(_x.MID_NVM_Data_VCU_bCrashErr);
		MID_NVM_InitReadData_VCU_bCrashErr = std::move(_x.MID_NVM_InitReadData_VCU_bCrashErr);
		MID_NVM_Data_VCU_dstVeh = std::move(_x.MID_NVM_Data_VCU_dstVeh);
		MID_NVM_InitReadData_VCU_dstVeh = std::move(_x.MID_NVM_InitReadData_VCU_dstVeh);
		MID_NVM_Data_VCU_accumEleConsump = std::move(_x.MID_NVM_Data_VCU_accumEleConsump);
		MID_NVM_InitReadData_VCU_accumEleConsump = std::move(_x.MID_NVM_InitReadData_VCU_accumEleConsump);
		MID_NVM_Data_VCU_stRecpLevel = std::move(_x.MID_NVM_Data_VCU_stRecpLevel);
		MID_NVM_InitReadData_VCU_stRecpLevel = std::move(_x.MID_NVM_InitReadData_VCU_stRecpLevel);
		MID_NVM_Data_VCU_stIpedalCreep = std::move(_x.MID_NVM_Data_VCU_stIpedalCreep);
		MID_NVM_InitReadData_VCU_stIpedalCreep = std::move(_x.MID_NVM_InitReadData_VCU_stIpedalCreep);
		MID_NVM_Data_VCU_tiWarmTime = std::move(_x.MID_NVM_Data_VCU_tiWarmTime);
		MID_NVM_InitReadData_VCU_tiWarmTime = std::move(_x.MID_NVM_InitReadData_VCU_tiWarmTime);
		MID_NVM_Data_VCU_stRecpLevel4Ipedal = std::move(_x.MID_NVM_Data_VCU_stRecpLevel4Ipedal);
		MID_NVM_InitReadData_VCU_stRecpLevel4Ipedal = std::move(_x.MID_NVM_InitReadData_VCU_stRecpLevel4Ipedal);
		MID_NVM_Data_VCU_stRecpLevel4ENS = std::move(_x.MID_NVM_Data_VCU_stRecpLevel4ENS);
		MID_NVM_InitReadData_VCU_stRecpLevel4ENS = std::move(_x.MID_NVM_InitReadData_VCU_stRecpLevel4ENS);
		MID_NVM_Data_VCU_stDriveMode4ENS = std::move(_x.MID_NVM_Data_VCU_stDriveMode4ENS);
		MID_NVM_InitReadData_VCU_stDriveMode4ENS = std::move(_x.MID_NVM_InitReadData_VCU_stDriveMode4ENS);
		MID_NVM_Data_VCU_stDriveMode = std::move(_x.MID_NVM_Data_VCU_stDriveMode);
		MID_NVM_InitReadData_VCU_stDriveMode = std::move(_x.MID_NVM_InitReadData_VCU_stDriveMode);
		MID_NVM_Data_VCU_percDischgSoc = std::move(_x.MID_NVM_Data_VCU_percDischgSoc);
		MID_NVM_InitReadData_VCU_percDischgSoc = std::move(_x.MID_NVM_InitReadData_VCU_percDischgSoc);
		MID_NVM_Data_VCU_wElcConspEnergy = std::move(_x.MID_NVM_Data_VCU_wElcConspEnergy);
		MID_NVM_InitReadData_VCU_wElcConspEnergy = std::move(_x.MID_NVM_InitReadData_VCU_wElcConspEnergy);
		MID_NVM_Data_VCU_bVacSigStuck = std::move(_x.MID_NVM_Data_VCU_bVacSigStuck);
		MID_NVM_InitReadData_VCU_bVacSigStuck = std::move(_x.MID_NVM_InitReadData_VCU_bVacSigStuck);
		MID_NVM_Data_VCU_bCfgCheckErr = std::move(_x.MID_NVM_Data_VCU_bCfgCheckErr);
		MID_NVM_InitReadData_VCU_bCfgCheckErr = std::move(_x.MID_NVM_InitReadData_VCU_bCfgCheckErr);
		MID_NVM_Data_VCU_stChgPlugRel = std::move(_x.MID_NVM_Data_VCU_stChgPlugRel);
		MID_NVM_InitReadData_VCU_stChgPlugRel = std::move(_x.MID_NVM_InitReadData_VCU_stChgPlugRel);
		MID_NVM_Data_VCU_nvmReserved = std::move(_x.MID_NVM_Data_VCU_nvmReserved);
		MID_NVM_InitReadData_VCU_nvmReserved = std::move(_x.MID_NVM_InitReadData_VCU_nvmReserved);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(MID_NVM_Data_VCU_bCrashErr);
		fun(MID_NVM_InitReadData_VCU_bCrashErr);
		fun(MID_NVM_Data_VCU_dstVeh);
		fun(MID_NVM_InitReadData_VCU_dstVeh);
		fun(MID_NVM_Data_VCU_accumEleConsump);
		fun(MID_NVM_InitReadData_VCU_accumEleConsump);
		fun(MID_NVM_Data_VCU_stRecpLevel);
		fun(MID_NVM_InitReadData_VCU_stRecpLevel);
		fun(MID_NVM_Data_VCU_stIpedalCreep);
		fun(MID_NVM_InitReadData_VCU_stIpedalCreep);
		fun(MID_NVM_Data_VCU_tiWarmTime);
		fun(MID_NVM_InitReadData_VCU_tiWarmTime);
		fun(MID_NVM_Data_VCU_stRecpLevel4Ipedal);
		fun(MID_NVM_InitReadData_VCU_stRecpLevel4Ipedal);
		fun(MID_NVM_Data_VCU_stRecpLevel4ENS);
		fun(MID_NVM_InitReadData_VCU_stRecpLevel4ENS);
		fun(MID_NVM_Data_VCU_stDriveMode4ENS);
		fun(MID_NVM_InitReadData_VCU_stDriveMode4ENS);
		fun(MID_NVM_Data_VCU_stDriveMode);
		fun(MID_NVM_InitReadData_VCU_stDriveMode);
		fun(MID_NVM_Data_VCU_percDischgSoc);
		fun(MID_NVM_InitReadData_VCU_percDischgSoc);
		fun(MID_NVM_Data_VCU_wElcConspEnergy);
		fun(MID_NVM_InitReadData_VCU_wElcConspEnergy);
		fun(MID_NVM_Data_VCU_bVacSigStuck);
		fun(MID_NVM_InitReadData_VCU_bVacSigStuck);
		fun(MID_NVM_Data_VCU_bCfgCheckErr);
		fun(MID_NVM_InitReadData_VCU_bCfgCheckErr);
		fun(MID_NVM_Data_VCU_stChgPlugRel);
		fun(MID_NVM_InitReadData_VCU_stChgPlugRel);
		fun(MID_NVM_Data_VCU_nvmReserved);
		fun(MID_NVM_InitReadData_VCU_nvmReserved);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(MID_NVM_Data_VCU_bCrashErr);
		fun(MID_NVM_InitReadData_VCU_bCrashErr);
		fun(MID_NVM_Data_VCU_dstVeh);
		fun(MID_NVM_InitReadData_VCU_dstVeh);
		fun(MID_NVM_Data_VCU_accumEleConsump);
		fun(MID_NVM_InitReadData_VCU_accumEleConsump);
		fun(MID_NVM_Data_VCU_stRecpLevel);
		fun(MID_NVM_InitReadData_VCU_stRecpLevel);
		fun(MID_NVM_Data_VCU_stIpedalCreep);
		fun(MID_NVM_InitReadData_VCU_stIpedalCreep);
		fun(MID_NVM_Data_VCU_tiWarmTime);
		fun(MID_NVM_InitReadData_VCU_tiWarmTime);
		fun(MID_NVM_Data_VCU_stRecpLevel4Ipedal);
		fun(MID_NVM_InitReadData_VCU_stRecpLevel4Ipedal);
		fun(MID_NVM_Data_VCU_stRecpLevel4ENS);
		fun(MID_NVM_InitReadData_VCU_stRecpLevel4ENS);
		fun(MID_NVM_Data_VCU_stDriveMode4ENS);
		fun(MID_NVM_InitReadData_VCU_stDriveMode4ENS);
		fun(MID_NVM_Data_VCU_stDriveMode);
		fun(MID_NVM_InitReadData_VCU_stDriveMode);
		fun(MID_NVM_Data_VCU_percDischgSoc);
		fun(MID_NVM_InitReadData_VCU_percDischgSoc);
		fun(MID_NVM_Data_VCU_wElcConspEnergy);
		fun(MID_NVM_InitReadData_VCU_wElcConspEnergy);
		fun(MID_NVM_Data_VCU_bVacSigStuck);
		fun(MID_NVM_InitReadData_VCU_bVacSigStuck);
		fun(MID_NVM_Data_VCU_bCfgCheckErr);
		fun(MID_NVM_InitReadData_VCU_bCfgCheckErr);
		fun(MID_NVM_Data_VCU_stChgPlugRel);
		fun(MID_NVM_InitReadData_VCU_stChgPlugRel);
		fun(MID_NVM_Data_VCU_nvmReserved);
		fun(MID_NVM_InitReadData_VCU_nvmReserved);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (MID_NVM_Data_VCU_bCrashErr);
		fun << (MID_NVM_InitReadData_VCU_bCrashErr);
		fun << (MID_NVM_Data_VCU_dstVeh);
		fun << (MID_NVM_InitReadData_VCU_dstVeh);
		fun << (MID_NVM_Data_VCU_accumEleConsump);
		fun << (MID_NVM_InitReadData_VCU_accumEleConsump);
		fun << (MID_NVM_Data_VCU_stRecpLevel);
		fun << (MID_NVM_InitReadData_VCU_stRecpLevel);
		fun << (MID_NVM_Data_VCU_stIpedalCreep);
		fun << (MID_NVM_InitReadData_VCU_stIpedalCreep);
		fun << (MID_NVM_Data_VCU_tiWarmTime);
		fun << (MID_NVM_InitReadData_VCU_tiWarmTime);
		fun << (MID_NVM_Data_VCU_stRecpLevel4Ipedal);
		fun << (MID_NVM_InitReadData_VCU_stRecpLevel4Ipedal);
		fun << (MID_NVM_Data_VCU_stRecpLevel4ENS);
		fun << (MID_NVM_InitReadData_VCU_stRecpLevel4ENS);
		fun << (MID_NVM_Data_VCU_stDriveMode4ENS);
		fun << (MID_NVM_InitReadData_VCU_stDriveMode4ENS);
		fun << (MID_NVM_Data_VCU_stDriveMode);
		fun << (MID_NVM_InitReadData_VCU_stDriveMode);
		fun << (MID_NVM_Data_VCU_percDischgSoc);
		fun << (MID_NVM_InitReadData_VCU_percDischgSoc);
		fun << (MID_NVM_Data_VCU_wElcConspEnergy);
		fun << (MID_NVM_InitReadData_VCU_wElcConspEnergy);
		fun << (MID_NVM_Data_VCU_bVacSigStuck);
		fun << (MID_NVM_InitReadData_VCU_bVacSigStuck);
		fun << (MID_NVM_Data_VCU_bCfgCheckErr);
		fun << (MID_NVM_InitReadData_VCU_bCfgCheckErr);
		fun << (MID_NVM_Data_VCU_stChgPlugRel);
		fun << (MID_NVM_InitReadData_VCU_stChgPlugRel);
		fun << (MID_NVM_Data_VCU_nvmReserved);
		fun << (MID_NVM_InitReadData_VCU_nvmReserved);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (MID_NVM_Data_VCU_bCrashErr);
		fun >> (MID_NVM_InitReadData_VCU_bCrashErr);
		fun >> (MID_NVM_Data_VCU_dstVeh);
		fun >> (MID_NVM_InitReadData_VCU_dstVeh);
		fun >> (MID_NVM_Data_VCU_accumEleConsump);
		fun >> (MID_NVM_InitReadData_VCU_accumEleConsump);
		fun >> (MID_NVM_Data_VCU_stRecpLevel);
		fun >> (MID_NVM_InitReadData_VCU_stRecpLevel);
		fun >> (MID_NVM_Data_VCU_stIpedalCreep);
		fun >> (MID_NVM_InitReadData_VCU_stIpedalCreep);
		fun >> (MID_NVM_Data_VCU_tiWarmTime);
		fun >> (MID_NVM_InitReadData_VCU_tiWarmTime);
		fun >> (MID_NVM_Data_VCU_stRecpLevel4Ipedal);
		fun >> (MID_NVM_InitReadData_VCU_stRecpLevel4Ipedal);
		fun >> (MID_NVM_Data_VCU_stRecpLevel4ENS);
		fun >> (MID_NVM_InitReadData_VCU_stRecpLevel4ENS);
		fun >> (MID_NVM_Data_VCU_stDriveMode4ENS);
		fun >> (MID_NVM_InitReadData_VCU_stDriveMode4ENS);
		fun >> (MID_NVM_Data_VCU_stDriveMode);
		fun >> (MID_NVM_InitReadData_VCU_stDriveMode);
		fun >> (MID_NVM_Data_VCU_percDischgSoc);
		fun >> (MID_NVM_InitReadData_VCU_percDischgSoc);
		fun >> (MID_NVM_Data_VCU_wElcConspEnergy);
		fun >> (MID_NVM_InitReadData_VCU_wElcConspEnergy);
		fun >> (MID_NVM_Data_VCU_bVacSigStuck);
		fun >> (MID_NVM_InitReadData_VCU_bVacSigStuck);
		fun >> (MID_NVM_Data_VCU_bCfgCheckErr);
		fun >> (MID_NVM_InitReadData_VCU_bCfgCheckErr);
		fun >> (MID_NVM_Data_VCU_stChgPlugRel);
		fun >> (MID_NVM_InitReadData_VCU_stChgPlugRel);
		fun >> (MID_NVM_Data_VCU_nvmReserved);
		fun >> (MID_NVM_InitReadData_VCU_nvmReserved);
	}
};

#endif //____BDCVCUNVM_H__
