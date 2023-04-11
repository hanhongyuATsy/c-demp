#ifndef ____BDCSSW3_H__
#define ____BDCSSW3_H__


#include "cstdint"






struct BDCSSW3 {
public:
	std::uint8_t ACU_EasyEntryExitFuncCfg;
	std::uint8_t ACU_FREasyEntryExitFuncCfg;
	std::uint8_t ACU_PosSaveRecallCmd;
	std::uint8_t ACU_FLSeatSlidePosCtlReq;
	std::uint8_t ACU_FLSeatHeightPosCtlReq;
	std::uint8_t ACU_FLSeatBackrestPosCtlReq;
	std::uint8_t ACU_FLSeatTiltPosCtlReq;
	std::uint8_t ACU_FLSeatCushionPosCtlReq;
	std::uint8_t ACU_FLSeatOttomanPosCtlReq;
	std::uint8_t ACU_SteeringAnglePosCtlReq;
	std::uint8_t ACU_SteeringExtentPosCtlReq;
	std::uint8_t ACU_FLSeatHeatLevelReq;
	std::uint8_t ACU_FLSeatVentLevelReq;
	std::uint8_t ACU_FRSeatSlidePosCtlReq;
	std::uint8_t ACU_FRSeatHeightPosCtlReq;
	std::uint8_t ACU_FRSeatBackrestPosCtlReq;
	std::uint8_t ACU_FRSeatTiltPosCtlReq;
	std::uint8_t ACU_FRSeatCushionPosCtlReq;
	std::uint8_t ACU_FRSeatOttomanPosCtlReq;
	std::uint8_t ACU_FRSeatHeatLevelReq;
	std::uint8_t ACU_FRSeatVentLevelReq;
	std::uint8_t ACU_FLSeatAutoModeCfgReq;
	std::uint8_t ACU_FRSeatAutoModeCfgReq;
	std::uint8_t ACU_FLLumbarReq;
	std::uint8_t ACU_FRLumbarReq;
	std::uint8_t ACU_FRSeatSaveRecallReq;
	std::uint8_t ACU_FRSeatSaveRecallPstReq;
/*
	BDCSSW3() {}
	~BDCSSW3() {}
	BDCSSW3(const std::uint8_t _ACU_EasyEntryExitFuncCfg,const std::uint8_t _ACU_FREasyEntryExitFuncCfg,const std::uint8_t _ACU_PosSaveRecallCmd,const std::uint8_t _ACU_FLSeatSlidePosCtlReq,const std::uint8_t _ACU_FLSeatHeightPosCtlReq,const std::uint8_t _ACU_FLSeatBackrestPosCtlReq,const std::uint8_t _ACU_FLSeatTiltPosCtlReq,const std::uint8_t _ACU_FLSeatCushionPosCtlReq,const std::uint8_t _ACU_FLSeatOttomanPosCtlReq,const std::uint8_t _ACU_SteeringAnglePosCtlReq,const std::uint8_t _ACU_SteeringExtentPosCtlReq,const std::uint8_t _ACU_FLSeatHeatLevelReq,const std::uint8_t _ACU_FLSeatVentLevelReq,const std::uint8_t _ACU_FRSeatSlidePosCtlReq,const std::uint8_t _ACU_FRSeatHeightPosCtlReq,const std::uint8_t _ACU_FRSeatBackrestPosCtlReq,const std::uint8_t _ACU_FRSeatTiltPosCtlReq,const std::uint8_t _ACU_FRSeatCushionPosCtlReq,const std::uint8_t _ACU_FRSeatOttomanPosCtlReq,const std::uint8_t _ACU_FRSeatHeatLevelReq,const std::uint8_t _ACU_FRSeatVentLevelReq,const std::uint8_t _ACU_FLSeatAutoModeCfgReq,const std::uint8_t _ACU_FRSeatAutoModeCfgReq,const std::uint8_t _ACU_FLLumbarReq,const std::uint8_t _ACU_FRLumbarReq,const std::uint8_t _ACU_FRSeatSaveRecallReq,const std::uint8_t _ACU_FRSeatSaveRecallPstReq):ACU_EasyEntryExitFuncCfg(_ACU_EasyEntryExitFuncCfg),ACU_FREasyEntryExitFuncCfg(_ACU_FREasyEntryExitFuncCfg),ACU_PosSaveRecallCmd(_ACU_PosSaveRecallCmd),ACU_FLSeatSlidePosCtlReq(_ACU_FLSeatSlidePosCtlReq),ACU_FLSeatHeightPosCtlReq(_ACU_FLSeatHeightPosCtlReq),ACU_FLSeatBackrestPosCtlReq(_ACU_FLSeatBackrestPosCtlReq),ACU_FLSeatTiltPosCtlReq(_ACU_FLSeatTiltPosCtlReq),ACU_FLSeatCushionPosCtlReq(_ACU_FLSeatCushionPosCtlReq),ACU_FLSeatOttomanPosCtlReq(_ACU_FLSeatOttomanPosCtlReq),ACU_SteeringAnglePosCtlReq(_ACU_SteeringAnglePosCtlReq),ACU_SteeringExtentPosCtlReq(_ACU_SteeringExtentPosCtlReq),ACU_FLSeatHeatLevelReq(_ACU_FLSeatHeatLevelReq),ACU_FLSeatVentLevelReq(_ACU_FLSeatVentLevelReq),ACU_FRSeatSlidePosCtlReq(_ACU_FRSeatSlidePosCtlReq),ACU_FRSeatHeightPosCtlReq(_ACU_FRSeatHeightPosCtlReq),ACU_FRSeatBackrestPosCtlReq(_ACU_FRSeatBackrestPosCtlReq),ACU_FRSeatTiltPosCtlReq(_ACU_FRSeatTiltPosCtlReq),ACU_FRSeatCushionPosCtlReq(_ACU_FRSeatCushionPosCtlReq),ACU_FRSeatOttomanPosCtlReq(_ACU_FRSeatOttomanPosCtlReq),ACU_FRSeatHeatLevelReq(_ACU_FRSeatHeatLevelReq),ACU_FRSeatVentLevelReq(_ACU_FRSeatVentLevelReq),ACU_FLSeatAutoModeCfgReq(_ACU_FLSeatAutoModeCfgReq),ACU_FRSeatAutoModeCfgReq(_ACU_FRSeatAutoModeCfgReq),ACU_FLLumbarReq(_ACU_FLLumbarReq),ACU_FRLumbarReq(_ACU_FRLumbarReq),ACU_FRSeatSaveRecallReq(_ACU_FRSeatSaveRecallReq),ACU_FRSeatSaveRecallPstReq(_ACU_FRSeatSaveRecallPstReq) {}
	BDCSSW3(const BDCSSW3 &_x){
		ACU_EasyEntryExitFuncCfg = _x.ACU_EasyEntryExitFuncCfg;
		ACU_FREasyEntryExitFuncCfg = _x.ACU_FREasyEntryExitFuncCfg;
		ACU_PosSaveRecallCmd = _x.ACU_PosSaveRecallCmd;
		ACU_FLSeatSlidePosCtlReq = _x.ACU_FLSeatSlidePosCtlReq;
		ACU_FLSeatHeightPosCtlReq = _x.ACU_FLSeatHeightPosCtlReq;
		ACU_FLSeatBackrestPosCtlReq = _x.ACU_FLSeatBackrestPosCtlReq;
		ACU_FLSeatTiltPosCtlReq = _x.ACU_FLSeatTiltPosCtlReq;
		ACU_FLSeatCushionPosCtlReq = _x.ACU_FLSeatCushionPosCtlReq;
		ACU_FLSeatOttomanPosCtlReq = _x.ACU_FLSeatOttomanPosCtlReq;
		ACU_SteeringAnglePosCtlReq = _x.ACU_SteeringAnglePosCtlReq;
		ACU_SteeringExtentPosCtlReq = _x.ACU_SteeringExtentPosCtlReq;
		ACU_FLSeatHeatLevelReq = _x.ACU_FLSeatHeatLevelReq;
		ACU_FLSeatVentLevelReq = _x.ACU_FLSeatVentLevelReq;
		ACU_FRSeatSlidePosCtlReq = _x.ACU_FRSeatSlidePosCtlReq;
		ACU_FRSeatHeightPosCtlReq = _x.ACU_FRSeatHeightPosCtlReq;
		ACU_FRSeatBackrestPosCtlReq = _x.ACU_FRSeatBackrestPosCtlReq;
		ACU_FRSeatTiltPosCtlReq = _x.ACU_FRSeatTiltPosCtlReq;
		ACU_FRSeatCushionPosCtlReq = _x.ACU_FRSeatCushionPosCtlReq;
		ACU_FRSeatOttomanPosCtlReq = _x.ACU_FRSeatOttomanPosCtlReq;
		ACU_FRSeatHeatLevelReq = _x.ACU_FRSeatHeatLevelReq;
		ACU_FRSeatVentLevelReq = _x.ACU_FRSeatVentLevelReq;
		ACU_FLSeatAutoModeCfgReq = _x.ACU_FLSeatAutoModeCfgReq;
		ACU_FRSeatAutoModeCfgReq = _x.ACU_FRSeatAutoModeCfgReq;
		ACU_FLLumbarReq = _x.ACU_FLLumbarReq;
		ACU_FRLumbarReq = _x.ACU_FRLumbarReq;
		ACU_FRSeatSaveRecallReq = _x.ACU_FRSeatSaveRecallReq;
		ACU_FRSeatSaveRecallPstReq = _x.ACU_FRSeatSaveRecallPstReq;
	}
	BDCSSW3(BDCSSW3 &&_x){
		ACU_EasyEntryExitFuncCfg = std::move(_x.ACU_EasyEntryExitFuncCfg);
		ACU_FREasyEntryExitFuncCfg = std::move(_x.ACU_FREasyEntryExitFuncCfg);
		ACU_PosSaveRecallCmd = std::move(_x.ACU_PosSaveRecallCmd);
		ACU_FLSeatSlidePosCtlReq = std::move(_x.ACU_FLSeatSlidePosCtlReq);
		ACU_FLSeatHeightPosCtlReq = std::move(_x.ACU_FLSeatHeightPosCtlReq);
		ACU_FLSeatBackrestPosCtlReq = std::move(_x.ACU_FLSeatBackrestPosCtlReq);
		ACU_FLSeatTiltPosCtlReq = std::move(_x.ACU_FLSeatTiltPosCtlReq);
		ACU_FLSeatCushionPosCtlReq = std::move(_x.ACU_FLSeatCushionPosCtlReq);
		ACU_FLSeatOttomanPosCtlReq = std::move(_x.ACU_FLSeatOttomanPosCtlReq);
		ACU_SteeringAnglePosCtlReq = std::move(_x.ACU_SteeringAnglePosCtlReq);
		ACU_SteeringExtentPosCtlReq = std::move(_x.ACU_SteeringExtentPosCtlReq);
		ACU_FLSeatHeatLevelReq = std::move(_x.ACU_FLSeatHeatLevelReq);
		ACU_FLSeatVentLevelReq = std::move(_x.ACU_FLSeatVentLevelReq);
		ACU_FRSeatSlidePosCtlReq = std::move(_x.ACU_FRSeatSlidePosCtlReq);
		ACU_FRSeatHeightPosCtlReq = std::move(_x.ACU_FRSeatHeightPosCtlReq);
		ACU_FRSeatBackrestPosCtlReq = std::move(_x.ACU_FRSeatBackrestPosCtlReq);
		ACU_FRSeatTiltPosCtlReq = std::move(_x.ACU_FRSeatTiltPosCtlReq);
		ACU_FRSeatCushionPosCtlReq = std::move(_x.ACU_FRSeatCushionPosCtlReq);
		ACU_FRSeatOttomanPosCtlReq = std::move(_x.ACU_FRSeatOttomanPosCtlReq);
		ACU_FRSeatHeatLevelReq = std::move(_x.ACU_FRSeatHeatLevelReq);
		ACU_FRSeatVentLevelReq = std::move(_x.ACU_FRSeatVentLevelReq);
		ACU_FLSeatAutoModeCfgReq = std::move(_x.ACU_FLSeatAutoModeCfgReq);
		ACU_FRSeatAutoModeCfgReq = std::move(_x.ACU_FRSeatAutoModeCfgReq);
		ACU_FLLumbarReq = std::move(_x.ACU_FLLumbarReq);
		ACU_FRLumbarReq = std::move(_x.ACU_FRLumbarReq);
		ACU_FRSeatSaveRecallReq = std::move(_x.ACU_FRSeatSaveRecallReq);
		ACU_FRSeatSaveRecallPstReq = std::move(_x.ACU_FRSeatSaveRecallPstReq);
	}
	BDCSSW3& operator=(const BDCSSW3 &_x){
		ACU_EasyEntryExitFuncCfg = _x.ACU_EasyEntryExitFuncCfg;
		ACU_FREasyEntryExitFuncCfg = _x.ACU_FREasyEntryExitFuncCfg;
		ACU_PosSaveRecallCmd = _x.ACU_PosSaveRecallCmd;
		ACU_FLSeatSlidePosCtlReq = _x.ACU_FLSeatSlidePosCtlReq;
		ACU_FLSeatHeightPosCtlReq = _x.ACU_FLSeatHeightPosCtlReq;
		ACU_FLSeatBackrestPosCtlReq = _x.ACU_FLSeatBackrestPosCtlReq;
		ACU_FLSeatTiltPosCtlReq = _x.ACU_FLSeatTiltPosCtlReq;
		ACU_FLSeatCushionPosCtlReq = _x.ACU_FLSeatCushionPosCtlReq;
		ACU_FLSeatOttomanPosCtlReq = _x.ACU_FLSeatOttomanPosCtlReq;
		ACU_SteeringAnglePosCtlReq = _x.ACU_SteeringAnglePosCtlReq;
		ACU_SteeringExtentPosCtlReq = _x.ACU_SteeringExtentPosCtlReq;
		ACU_FLSeatHeatLevelReq = _x.ACU_FLSeatHeatLevelReq;
		ACU_FLSeatVentLevelReq = _x.ACU_FLSeatVentLevelReq;
		ACU_FRSeatSlidePosCtlReq = _x.ACU_FRSeatSlidePosCtlReq;
		ACU_FRSeatHeightPosCtlReq = _x.ACU_FRSeatHeightPosCtlReq;
		ACU_FRSeatBackrestPosCtlReq = _x.ACU_FRSeatBackrestPosCtlReq;
		ACU_FRSeatTiltPosCtlReq = _x.ACU_FRSeatTiltPosCtlReq;
		ACU_FRSeatCushionPosCtlReq = _x.ACU_FRSeatCushionPosCtlReq;
		ACU_FRSeatOttomanPosCtlReq = _x.ACU_FRSeatOttomanPosCtlReq;
		ACU_FRSeatHeatLevelReq = _x.ACU_FRSeatHeatLevelReq;
		ACU_FRSeatVentLevelReq = _x.ACU_FRSeatVentLevelReq;
		ACU_FLSeatAutoModeCfgReq = _x.ACU_FLSeatAutoModeCfgReq;
		ACU_FRSeatAutoModeCfgReq = _x.ACU_FRSeatAutoModeCfgReq;
		ACU_FLLumbarReq = _x.ACU_FLLumbarReq;
		ACU_FRLumbarReq = _x.ACU_FRLumbarReq;
		ACU_FRSeatSaveRecallReq = _x.ACU_FRSeatSaveRecallReq;
		ACU_FRSeatSaveRecallPstReq = _x.ACU_FRSeatSaveRecallPstReq;
		return *this;
	}
	BDCSSW3& operator=(BDCSSW3 &&_x){
		ACU_EasyEntryExitFuncCfg = std::move(_x.ACU_EasyEntryExitFuncCfg);
		ACU_FREasyEntryExitFuncCfg = std::move(_x.ACU_FREasyEntryExitFuncCfg);
		ACU_PosSaveRecallCmd = std::move(_x.ACU_PosSaveRecallCmd);
		ACU_FLSeatSlidePosCtlReq = std::move(_x.ACU_FLSeatSlidePosCtlReq);
		ACU_FLSeatHeightPosCtlReq = std::move(_x.ACU_FLSeatHeightPosCtlReq);
		ACU_FLSeatBackrestPosCtlReq = std::move(_x.ACU_FLSeatBackrestPosCtlReq);
		ACU_FLSeatTiltPosCtlReq = std::move(_x.ACU_FLSeatTiltPosCtlReq);
		ACU_FLSeatCushionPosCtlReq = std::move(_x.ACU_FLSeatCushionPosCtlReq);
		ACU_FLSeatOttomanPosCtlReq = std::move(_x.ACU_FLSeatOttomanPosCtlReq);
		ACU_SteeringAnglePosCtlReq = std::move(_x.ACU_SteeringAnglePosCtlReq);
		ACU_SteeringExtentPosCtlReq = std::move(_x.ACU_SteeringExtentPosCtlReq);
		ACU_FLSeatHeatLevelReq = std::move(_x.ACU_FLSeatHeatLevelReq);
		ACU_FLSeatVentLevelReq = std::move(_x.ACU_FLSeatVentLevelReq);
		ACU_FRSeatSlidePosCtlReq = std::move(_x.ACU_FRSeatSlidePosCtlReq);
		ACU_FRSeatHeightPosCtlReq = std::move(_x.ACU_FRSeatHeightPosCtlReq);
		ACU_FRSeatBackrestPosCtlReq = std::move(_x.ACU_FRSeatBackrestPosCtlReq);
		ACU_FRSeatTiltPosCtlReq = std::move(_x.ACU_FRSeatTiltPosCtlReq);
		ACU_FRSeatCushionPosCtlReq = std::move(_x.ACU_FRSeatCushionPosCtlReq);
		ACU_FRSeatOttomanPosCtlReq = std::move(_x.ACU_FRSeatOttomanPosCtlReq);
		ACU_FRSeatHeatLevelReq = std::move(_x.ACU_FRSeatHeatLevelReq);
		ACU_FRSeatVentLevelReq = std::move(_x.ACU_FRSeatVentLevelReq);
		ACU_FLSeatAutoModeCfgReq = std::move(_x.ACU_FLSeatAutoModeCfgReq);
		ACU_FRSeatAutoModeCfgReq = std::move(_x.ACU_FRSeatAutoModeCfgReq);
		ACU_FLLumbarReq = std::move(_x.ACU_FLLumbarReq);
		ACU_FRLumbarReq = std::move(_x.ACU_FRLumbarReq);
		ACU_FRSeatSaveRecallReq = std::move(_x.ACU_FRSeatSaveRecallReq);
		ACU_FRSeatSaveRecallPstReq = std::move(_x.ACU_FRSeatSaveRecallPstReq);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(ACU_EasyEntryExitFuncCfg);
		fun(ACU_FREasyEntryExitFuncCfg);
		fun(ACU_PosSaveRecallCmd);
		fun(ACU_FLSeatSlidePosCtlReq);
		fun(ACU_FLSeatHeightPosCtlReq);
		fun(ACU_FLSeatBackrestPosCtlReq);
		fun(ACU_FLSeatTiltPosCtlReq);
		fun(ACU_FLSeatCushionPosCtlReq);
		fun(ACU_FLSeatOttomanPosCtlReq);
		fun(ACU_SteeringAnglePosCtlReq);
		fun(ACU_SteeringExtentPosCtlReq);
		fun(ACU_FLSeatHeatLevelReq);
		fun(ACU_FLSeatVentLevelReq);
		fun(ACU_FRSeatSlidePosCtlReq);
		fun(ACU_FRSeatHeightPosCtlReq);
		fun(ACU_FRSeatBackrestPosCtlReq);
		fun(ACU_FRSeatTiltPosCtlReq);
		fun(ACU_FRSeatCushionPosCtlReq);
		fun(ACU_FRSeatOttomanPosCtlReq);
		fun(ACU_FRSeatHeatLevelReq);
		fun(ACU_FRSeatVentLevelReq);
		fun(ACU_FLSeatAutoModeCfgReq);
		fun(ACU_FRSeatAutoModeCfgReq);
		fun(ACU_FLLumbarReq);
		fun(ACU_FRLumbarReq);
		fun(ACU_FRSeatSaveRecallReq);
		fun(ACU_FRSeatSaveRecallPstReq);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(ACU_EasyEntryExitFuncCfg);
		fun(ACU_FREasyEntryExitFuncCfg);
		fun(ACU_PosSaveRecallCmd);
		fun(ACU_FLSeatSlidePosCtlReq);
		fun(ACU_FLSeatHeightPosCtlReq);
		fun(ACU_FLSeatBackrestPosCtlReq);
		fun(ACU_FLSeatTiltPosCtlReq);
		fun(ACU_FLSeatCushionPosCtlReq);
		fun(ACU_FLSeatOttomanPosCtlReq);
		fun(ACU_SteeringAnglePosCtlReq);
		fun(ACU_SteeringExtentPosCtlReq);
		fun(ACU_FLSeatHeatLevelReq);
		fun(ACU_FLSeatVentLevelReq);
		fun(ACU_FRSeatSlidePosCtlReq);
		fun(ACU_FRSeatHeightPosCtlReq);
		fun(ACU_FRSeatBackrestPosCtlReq);
		fun(ACU_FRSeatTiltPosCtlReq);
		fun(ACU_FRSeatCushionPosCtlReq);
		fun(ACU_FRSeatOttomanPosCtlReq);
		fun(ACU_FRSeatHeatLevelReq);
		fun(ACU_FRSeatVentLevelReq);
		fun(ACU_FLSeatAutoModeCfgReq);
		fun(ACU_FRSeatAutoModeCfgReq);
		fun(ACU_FLLumbarReq);
		fun(ACU_FRLumbarReq);
		fun(ACU_FRSeatSaveRecallReq);
		fun(ACU_FRSeatSaveRecallPstReq);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (ACU_EasyEntryExitFuncCfg);
		fun << (ACU_FREasyEntryExitFuncCfg);
		fun << (ACU_PosSaveRecallCmd);
		fun << (ACU_FLSeatSlidePosCtlReq);
		fun << (ACU_FLSeatHeightPosCtlReq);
		fun << (ACU_FLSeatBackrestPosCtlReq);
		fun << (ACU_FLSeatTiltPosCtlReq);
		fun << (ACU_FLSeatCushionPosCtlReq);
		fun << (ACU_FLSeatOttomanPosCtlReq);
		fun << (ACU_SteeringAnglePosCtlReq);
		fun << (ACU_SteeringExtentPosCtlReq);
		fun << (ACU_FLSeatHeatLevelReq);
		fun << (ACU_FLSeatVentLevelReq);
		fun << (ACU_FRSeatSlidePosCtlReq);
		fun << (ACU_FRSeatHeightPosCtlReq);
		fun << (ACU_FRSeatBackrestPosCtlReq);
		fun << (ACU_FRSeatTiltPosCtlReq);
		fun << (ACU_FRSeatCushionPosCtlReq);
		fun << (ACU_FRSeatOttomanPosCtlReq);
		fun << (ACU_FRSeatHeatLevelReq);
		fun << (ACU_FRSeatVentLevelReq);
		fun << (ACU_FLSeatAutoModeCfgReq);
		fun << (ACU_FRSeatAutoModeCfgReq);
		fun << (ACU_FLLumbarReq);
		fun << (ACU_FRLumbarReq);
		fun << (ACU_FRSeatSaveRecallReq);
		fun << (ACU_FRSeatSaveRecallPstReq);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (ACU_EasyEntryExitFuncCfg);
		fun >> (ACU_FREasyEntryExitFuncCfg);
		fun >> (ACU_PosSaveRecallCmd);
		fun >> (ACU_FLSeatSlidePosCtlReq);
		fun >> (ACU_FLSeatHeightPosCtlReq);
		fun >> (ACU_FLSeatBackrestPosCtlReq);
		fun >> (ACU_FLSeatTiltPosCtlReq);
		fun >> (ACU_FLSeatCushionPosCtlReq);
		fun >> (ACU_FLSeatOttomanPosCtlReq);
		fun >> (ACU_SteeringAnglePosCtlReq);
		fun >> (ACU_SteeringExtentPosCtlReq);
		fun >> (ACU_FLSeatHeatLevelReq);
		fun >> (ACU_FLSeatVentLevelReq);
		fun >> (ACU_FRSeatSlidePosCtlReq);
		fun >> (ACU_FRSeatHeightPosCtlReq);
		fun >> (ACU_FRSeatBackrestPosCtlReq);
		fun >> (ACU_FRSeatTiltPosCtlReq);
		fun >> (ACU_FRSeatCushionPosCtlReq);
		fun >> (ACU_FRSeatOttomanPosCtlReq);
		fun >> (ACU_FRSeatHeatLevelReq);
		fun >> (ACU_FRSeatVentLevelReq);
		fun >> (ACU_FLSeatAutoModeCfgReq);
		fun >> (ACU_FRSeatAutoModeCfgReq);
		fun >> (ACU_FLLumbarReq);
		fun >> (ACU_FRLumbarReq);
		fun >> (ACU_FRSeatSaveRecallReq);
		fun >> (ACU_FRSeatSaveRecallPstReq);
	}
};

#endif //____BDCSSW3_H__
