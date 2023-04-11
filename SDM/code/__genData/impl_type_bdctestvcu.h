#ifndef ____BDCTESTVCU_H__
#define ____BDCTESTVCU_H__


#include "cstdint"






struct BDCTestVCU {
public:
	std::uint8_t VCU_BMS_BattModeReq;
	std::uint8_t VCU_BMS_ColdStartCrank;
	std::uint16_t VCU_GCU_SpdSet;
	std::uint16_t VCU_GCU_TorqSet;
	std::uint8_t VCU_VehCrusTgtSpd;
	std::uint8_t VCU_SysFaultLampInd;
	std::uint8_t VCU_EngMilLampReq;
	std::uint8_t VCU_OPC_OilPresAct;
	std::uint8_t VCU_OPC_OilTempAct;
	std::uint16_t VCU_OPC_SpdSet;
	std::uint8_t VCU_GPFSrvRgnPrms;
	std::uint8_t VCU_HTMSMTWaterPumpFault;
	std::uint8_t VCU_AGS_FaultSt;
	std::uint8_t VCU_EMS_SteadyHybridModeAct;
	std::uint8_t VCU_EngHeatVlvFault;
	std::uint8_t VCU_EngHeatVlvSt;
	std::uint8_t VCU_EngHeatVlvStVD;
/*
	BDCTestVCU() {}
	~BDCTestVCU() {}
	BDCTestVCU(const std::uint8_t _VCU_BMS_BattModeReq,const std::uint8_t _VCU_BMS_ColdStartCrank,const std::uint16_t _VCU_GCU_SpdSet,const std::uint16_t _VCU_GCU_TorqSet,const std::uint8_t _VCU_VehCrusTgtSpd,const std::uint8_t _VCU_SysFaultLampInd,const std::uint8_t _VCU_EngMilLampReq,const std::uint8_t _VCU_OPC_OilPresAct,const std::uint8_t _VCU_OPC_OilTempAct,const std::uint16_t _VCU_OPC_SpdSet,const std::uint8_t _VCU_GPFSrvRgnPrms,const std::uint8_t _VCU_HTMSMTWaterPumpFault,const std::uint8_t _VCU_AGS_FaultSt,const std::uint8_t _VCU_EMS_SteadyHybridModeAct,const std::uint8_t _VCU_EngHeatVlvFault,const std::uint8_t _VCU_EngHeatVlvSt,const std::uint8_t _VCU_EngHeatVlvStVD):VCU_BMS_BattModeReq(_VCU_BMS_BattModeReq),VCU_BMS_ColdStartCrank(_VCU_BMS_ColdStartCrank),VCU_GCU_SpdSet(_VCU_GCU_SpdSet),VCU_GCU_TorqSet(_VCU_GCU_TorqSet),VCU_VehCrusTgtSpd(_VCU_VehCrusTgtSpd),VCU_SysFaultLampInd(_VCU_SysFaultLampInd),VCU_EngMilLampReq(_VCU_EngMilLampReq),VCU_OPC_OilPresAct(_VCU_OPC_OilPresAct),VCU_OPC_OilTempAct(_VCU_OPC_OilTempAct),VCU_OPC_SpdSet(_VCU_OPC_SpdSet),VCU_GPFSrvRgnPrms(_VCU_GPFSrvRgnPrms),VCU_HTMSMTWaterPumpFault(_VCU_HTMSMTWaterPumpFault),VCU_AGS_FaultSt(_VCU_AGS_FaultSt),VCU_EMS_SteadyHybridModeAct(_VCU_EMS_SteadyHybridModeAct),VCU_EngHeatVlvFault(_VCU_EngHeatVlvFault),VCU_EngHeatVlvSt(_VCU_EngHeatVlvSt),VCU_EngHeatVlvStVD(_VCU_EngHeatVlvStVD) {}
	BDCTestVCU(const BDCTestVCU &_x){
		VCU_BMS_BattModeReq = _x.VCU_BMS_BattModeReq;
		VCU_BMS_ColdStartCrank = _x.VCU_BMS_ColdStartCrank;
		VCU_GCU_SpdSet = _x.VCU_GCU_SpdSet;
		VCU_GCU_TorqSet = _x.VCU_GCU_TorqSet;
		VCU_VehCrusTgtSpd = _x.VCU_VehCrusTgtSpd;
		VCU_SysFaultLampInd = _x.VCU_SysFaultLampInd;
		VCU_EngMilLampReq = _x.VCU_EngMilLampReq;
		VCU_OPC_OilPresAct = _x.VCU_OPC_OilPresAct;
		VCU_OPC_OilTempAct = _x.VCU_OPC_OilTempAct;
		VCU_OPC_SpdSet = _x.VCU_OPC_SpdSet;
		VCU_GPFSrvRgnPrms = _x.VCU_GPFSrvRgnPrms;
		VCU_HTMSMTWaterPumpFault = _x.VCU_HTMSMTWaterPumpFault;
		VCU_AGS_FaultSt = _x.VCU_AGS_FaultSt;
		VCU_EMS_SteadyHybridModeAct = _x.VCU_EMS_SteadyHybridModeAct;
		VCU_EngHeatVlvFault = _x.VCU_EngHeatVlvFault;
		VCU_EngHeatVlvSt = _x.VCU_EngHeatVlvSt;
		VCU_EngHeatVlvStVD = _x.VCU_EngHeatVlvStVD;
	}
	BDCTestVCU(BDCTestVCU &&_x){
		VCU_BMS_BattModeReq = std::move(_x.VCU_BMS_BattModeReq);
		VCU_BMS_ColdStartCrank = std::move(_x.VCU_BMS_ColdStartCrank);
		VCU_GCU_SpdSet = std::move(_x.VCU_GCU_SpdSet);
		VCU_GCU_TorqSet = std::move(_x.VCU_GCU_TorqSet);
		VCU_VehCrusTgtSpd = std::move(_x.VCU_VehCrusTgtSpd);
		VCU_SysFaultLampInd = std::move(_x.VCU_SysFaultLampInd);
		VCU_EngMilLampReq = std::move(_x.VCU_EngMilLampReq);
		VCU_OPC_OilPresAct = std::move(_x.VCU_OPC_OilPresAct);
		VCU_OPC_OilTempAct = std::move(_x.VCU_OPC_OilTempAct);
		VCU_OPC_SpdSet = std::move(_x.VCU_OPC_SpdSet);
		VCU_GPFSrvRgnPrms = std::move(_x.VCU_GPFSrvRgnPrms);
		VCU_HTMSMTWaterPumpFault = std::move(_x.VCU_HTMSMTWaterPumpFault);
		VCU_AGS_FaultSt = std::move(_x.VCU_AGS_FaultSt);
		VCU_EMS_SteadyHybridModeAct = std::move(_x.VCU_EMS_SteadyHybridModeAct);
		VCU_EngHeatVlvFault = std::move(_x.VCU_EngHeatVlvFault);
		VCU_EngHeatVlvSt = std::move(_x.VCU_EngHeatVlvSt);
		VCU_EngHeatVlvStVD = std::move(_x.VCU_EngHeatVlvStVD);
	}
	BDCTestVCU& operator=(const BDCTestVCU &_x){
		VCU_BMS_BattModeReq = _x.VCU_BMS_BattModeReq;
		VCU_BMS_ColdStartCrank = _x.VCU_BMS_ColdStartCrank;
		VCU_GCU_SpdSet = _x.VCU_GCU_SpdSet;
		VCU_GCU_TorqSet = _x.VCU_GCU_TorqSet;
		VCU_VehCrusTgtSpd = _x.VCU_VehCrusTgtSpd;
		VCU_SysFaultLampInd = _x.VCU_SysFaultLampInd;
		VCU_EngMilLampReq = _x.VCU_EngMilLampReq;
		VCU_OPC_OilPresAct = _x.VCU_OPC_OilPresAct;
		VCU_OPC_OilTempAct = _x.VCU_OPC_OilTempAct;
		VCU_OPC_SpdSet = _x.VCU_OPC_SpdSet;
		VCU_GPFSrvRgnPrms = _x.VCU_GPFSrvRgnPrms;
		VCU_HTMSMTWaterPumpFault = _x.VCU_HTMSMTWaterPumpFault;
		VCU_AGS_FaultSt = _x.VCU_AGS_FaultSt;
		VCU_EMS_SteadyHybridModeAct = _x.VCU_EMS_SteadyHybridModeAct;
		VCU_EngHeatVlvFault = _x.VCU_EngHeatVlvFault;
		VCU_EngHeatVlvSt = _x.VCU_EngHeatVlvSt;
		VCU_EngHeatVlvStVD = _x.VCU_EngHeatVlvStVD;
		return *this;
	}
	BDCTestVCU& operator=(BDCTestVCU &&_x){
		VCU_BMS_BattModeReq = std::move(_x.VCU_BMS_BattModeReq);
		VCU_BMS_ColdStartCrank = std::move(_x.VCU_BMS_ColdStartCrank);
		VCU_GCU_SpdSet = std::move(_x.VCU_GCU_SpdSet);
		VCU_GCU_TorqSet = std::move(_x.VCU_GCU_TorqSet);
		VCU_VehCrusTgtSpd = std::move(_x.VCU_VehCrusTgtSpd);
		VCU_SysFaultLampInd = std::move(_x.VCU_SysFaultLampInd);
		VCU_EngMilLampReq = std::move(_x.VCU_EngMilLampReq);
		VCU_OPC_OilPresAct = std::move(_x.VCU_OPC_OilPresAct);
		VCU_OPC_OilTempAct = std::move(_x.VCU_OPC_OilTempAct);
		VCU_OPC_SpdSet = std::move(_x.VCU_OPC_SpdSet);
		VCU_GPFSrvRgnPrms = std::move(_x.VCU_GPFSrvRgnPrms);
		VCU_HTMSMTWaterPumpFault = std::move(_x.VCU_HTMSMTWaterPumpFault);
		VCU_AGS_FaultSt = std::move(_x.VCU_AGS_FaultSt);
		VCU_EMS_SteadyHybridModeAct = std::move(_x.VCU_EMS_SteadyHybridModeAct);
		VCU_EngHeatVlvFault = std::move(_x.VCU_EngHeatVlvFault);
		VCU_EngHeatVlvSt = std::move(_x.VCU_EngHeatVlvSt);
		VCU_EngHeatVlvStVD = std::move(_x.VCU_EngHeatVlvStVD);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(VCU_BMS_BattModeReq);
		fun(VCU_BMS_ColdStartCrank);
		fun(VCU_GCU_SpdSet);
		fun(VCU_GCU_TorqSet);
		fun(VCU_VehCrusTgtSpd);
		fun(VCU_SysFaultLampInd);
		fun(VCU_EngMilLampReq);
		fun(VCU_OPC_OilPresAct);
		fun(VCU_OPC_OilTempAct);
		fun(VCU_OPC_SpdSet);
		fun(VCU_GPFSrvRgnPrms);
		fun(VCU_HTMSMTWaterPumpFault);
		fun(VCU_AGS_FaultSt);
		fun(VCU_EMS_SteadyHybridModeAct);
		fun(VCU_EngHeatVlvFault);
		fun(VCU_EngHeatVlvSt);
		fun(VCU_EngHeatVlvStVD);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(VCU_BMS_BattModeReq);
		fun(VCU_BMS_ColdStartCrank);
		fun(VCU_GCU_SpdSet);
		fun(VCU_GCU_TorqSet);
		fun(VCU_VehCrusTgtSpd);
		fun(VCU_SysFaultLampInd);
		fun(VCU_EngMilLampReq);
		fun(VCU_OPC_OilPresAct);
		fun(VCU_OPC_OilTempAct);
		fun(VCU_OPC_SpdSet);
		fun(VCU_GPFSrvRgnPrms);
		fun(VCU_HTMSMTWaterPumpFault);
		fun(VCU_AGS_FaultSt);
		fun(VCU_EMS_SteadyHybridModeAct);
		fun(VCU_EngHeatVlvFault);
		fun(VCU_EngHeatVlvSt);
		fun(VCU_EngHeatVlvStVD);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (VCU_BMS_BattModeReq);
		fun << (VCU_BMS_ColdStartCrank);
		fun << (VCU_GCU_SpdSet);
		fun << (VCU_GCU_TorqSet);
		fun << (VCU_VehCrusTgtSpd);
		fun << (VCU_SysFaultLampInd);
		fun << (VCU_EngMilLampReq);
		fun << (VCU_OPC_OilPresAct);
		fun << (VCU_OPC_OilTempAct);
		fun << (VCU_OPC_SpdSet);
		fun << (VCU_GPFSrvRgnPrms);
		fun << (VCU_HTMSMTWaterPumpFault);
		fun << (VCU_AGS_FaultSt);
		fun << (VCU_EMS_SteadyHybridModeAct);
		fun << (VCU_EngHeatVlvFault);
		fun << (VCU_EngHeatVlvSt);
		fun << (VCU_EngHeatVlvStVD);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (VCU_BMS_BattModeReq);
		fun >> (VCU_BMS_ColdStartCrank);
		fun >> (VCU_GCU_SpdSet);
		fun >> (VCU_GCU_TorqSet);
		fun >> (VCU_VehCrusTgtSpd);
		fun >> (VCU_SysFaultLampInd);
		fun >> (VCU_EngMilLampReq);
		fun >> (VCU_OPC_OilPresAct);
		fun >> (VCU_OPC_OilTempAct);
		fun >> (VCU_OPC_SpdSet);
		fun >> (VCU_GPFSrvRgnPrms);
		fun >> (VCU_HTMSMTWaterPumpFault);
		fun >> (VCU_AGS_FaultSt);
		fun >> (VCU_EMS_SteadyHybridModeAct);
		fun >> (VCU_EngHeatVlvFault);
		fun >> (VCU_EngHeatVlvSt);
		fun >> (VCU_EngHeatVlvStVD);
	}
};

#endif //____BDCTESTVCU_H__
