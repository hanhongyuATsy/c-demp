#ifndef ____BDCTESTBMS7_H__
#define ____BDCTESTBMS7_H__


#include "cstdint"






struct BDCTestBMS7 {
public:
	std::uint8_t BMS_SelfHeatPwr2min;
	std::uint8_t BMS_SelfHeatPwr5min;
	std::uint8_t BMS_SelfHeatPwr10min;
	std::uint16_t BMS_TEL_InslRes;
	std::uint8_t VCU_LTWPSpdFreqAct;
	std::uint8_t VCU_LTWPFault;
	std::uint8_t VCU_BMS_SelfHeatSt;
	std::uint8_t VCU_BMS_BattTempCtrlSt;
	std::uint8_t VCU_EngSt;
	std::uint8_t VCU_BMS_CoolantInTemp;
	std::uint8_t VCU_BMS_CoolantOutTemp;
	std::uint8_t VCU_stModAct;
	std::uint8_t VCU_GCU_ModeReq;
	std::uint8_t VCU_CoolFanSpeedReq;
	std::uint16_t VCU_OPC_SpdSet;
	std::uint8_t VCU_HVBatPrioReq;
/*
	BDCTestBMS7() {}
	~BDCTestBMS7() {}
	BDCTestBMS7(const std::uint8_t _BMS_SelfHeatPwr2min,const std::uint8_t _BMS_SelfHeatPwr5min,const std::uint8_t _BMS_SelfHeatPwr10min,const std::uint16_t _BMS_TEL_InslRes,const std::uint8_t _VCU_LTWPSpdFreqAct,const std::uint8_t _VCU_LTWPFault,const std::uint8_t _VCU_BMS_SelfHeatSt,const std::uint8_t _VCU_BMS_BattTempCtrlSt,const std::uint8_t _VCU_EngSt,const std::uint8_t _VCU_BMS_CoolantInTemp,const std::uint8_t _VCU_BMS_CoolantOutTemp,const std::uint8_t _VCU_stModAct,const std::uint8_t _VCU_GCU_ModeReq,const std::uint8_t _VCU_CoolFanSpeedReq,const std::uint16_t _VCU_OPC_SpdSet,const std::uint8_t _VCU_HVBatPrioReq):BMS_SelfHeatPwr2min(_BMS_SelfHeatPwr2min),BMS_SelfHeatPwr5min(_BMS_SelfHeatPwr5min),BMS_SelfHeatPwr10min(_BMS_SelfHeatPwr10min),BMS_TEL_InslRes(_BMS_TEL_InslRes),VCU_LTWPSpdFreqAct(_VCU_LTWPSpdFreqAct),VCU_LTWPFault(_VCU_LTWPFault),VCU_BMS_SelfHeatSt(_VCU_BMS_SelfHeatSt),VCU_BMS_BattTempCtrlSt(_VCU_BMS_BattTempCtrlSt),VCU_EngSt(_VCU_EngSt),VCU_BMS_CoolantInTemp(_VCU_BMS_CoolantInTemp),VCU_BMS_CoolantOutTemp(_VCU_BMS_CoolantOutTemp),VCU_stModAct(_VCU_stModAct),VCU_GCU_ModeReq(_VCU_GCU_ModeReq),VCU_CoolFanSpeedReq(_VCU_CoolFanSpeedReq),VCU_OPC_SpdSet(_VCU_OPC_SpdSet),VCU_HVBatPrioReq(_VCU_HVBatPrioReq) {}
	BDCTestBMS7(const BDCTestBMS7 &_x){
		BMS_SelfHeatPwr2min = _x.BMS_SelfHeatPwr2min;
		BMS_SelfHeatPwr5min = _x.BMS_SelfHeatPwr5min;
		BMS_SelfHeatPwr10min = _x.BMS_SelfHeatPwr10min;
		BMS_TEL_InslRes = _x.BMS_TEL_InslRes;
		VCU_LTWPSpdFreqAct = _x.VCU_LTWPSpdFreqAct;
		VCU_LTWPFault = _x.VCU_LTWPFault;
		VCU_BMS_SelfHeatSt = _x.VCU_BMS_SelfHeatSt;
		VCU_BMS_BattTempCtrlSt = _x.VCU_BMS_BattTempCtrlSt;
		VCU_EngSt = _x.VCU_EngSt;
		VCU_BMS_CoolantInTemp = _x.VCU_BMS_CoolantInTemp;
		VCU_BMS_CoolantOutTemp = _x.VCU_BMS_CoolantOutTemp;
		VCU_stModAct = _x.VCU_stModAct;
		VCU_GCU_ModeReq = _x.VCU_GCU_ModeReq;
		VCU_CoolFanSpeedReq = _x.VCU_CoolFanSpeedReq;
		VCU_OPC_SpdSet = _x.VCU_OPC_SpdSet;
		VCU_HVBatPrioReq = _x.VCU_HVBatPrioReq;
	}
	BDCTestBMS7(BDCTestBMS7 &&_x){
		BMS_SelfHeatPwr2min = std::move(_x.BMS_SelfHeatPwr2min);
		BMS_SelfHeatPwr5min = std::move(_x.BMS_SelfHeatPwr5min);
		BMS_SelfHeatPwr10min = std::move(_x.BMS_SelfHeatPwr10min);
		BMS_TEL_InslRes = std::move(_x.BMS_TEL_InslRes);
		VCU_LTWPSpdFreqAct = std::move(_x.VCU_LTWPSpdFreqAct);
		VCU_LTWPFault = std::move(_x.VCU_LTWPFault);
		VCU_BMS_SelfHeatSt = std::move(_x.VCU_BMS_SelfHeatSt);
		VCU_BMS_BattTempCtrlSt = std::move(_x.VCU_BMS_BattTempCtrlSt);
		VCU_EngSt = std::move(_x.VCU_EngSt);
		VCU_BMS_CoolantInTemp = std::move(_x.VCU_BMS_CoolantInTemp);
		VCU_BMS_CoolantOutTemp = std::move(_x.VCU_BMS_CoolantOutTemp);
		VCU_stModAct = std::move(_x.VCU_stModAct);
		VCU_GCU_ModeReq = std::move(_x.VCU_GCU_ModeReq);
		VCU_CoolFanSpeedReq = std::move(_x.VCU_CoolFanSpeedReq);
		VCU_OPC_SpdSet = std::move(_x.VCU_OPC_SpdSet);
		VCU_HVBatPrioReq = std::move(_x.VCU_HVBatPrioReq);
	}
	BDCTestBMS7& operator=(const BDCTestBMS7 &_x){
		BMS_SelfHeatPwr2min = _x.BMS_SelfHeatPwr2min;
		BMS_SelfHeatPwr5min = _x.BMS_SelfHeatPwr5min;
		BMS_SelfHeatPwr10min = _x.BMS_SelfHeatPwr10min;
		BMS_TEL_InslRes = _x.BMS_TEL_InslRes;
		VCU_LTWPSpdFreqAct = _x.VCU_LTWPSpdFreqAct;
		VCU_LTWPFault = _x.VCU_LTWPFault;
		VCU_BMS_SelfHeatSt = _x.VCU_BMS_SelfHeatSt;
		VCU_BMS_BattTempCtrlSt = _x.VCU_BMS_BattTempCtrlSt;
		VCU_EngSt = _x.VCU_EngSt;
		VCU_BMS_CoolantInTemp = _x.VCU_BMS_CoolantInTemp;
		VCU_BMS_CoolantOutTemp = _x.VCU_BMS_CoolantOutTemp;
		VCU_stModAct = _x.VCU_stModAct;
		VCU_GCU_ModeReq = _x.VCU_GCU_ModeReq;
		VCU_CoolFanSpeedReq = _x.VCU_CoolFanSpeedReq;
		VCU_OPC_SpdSet = _x.VCU_OPC_SpdSet;
		VCU_HVBatPrioReq = _x.VCU_HVBatPrioReq;
		return *this;
	}
	BDCTestBMS7& operator=(BDCTestBMS7 &&_x){
		BMS_SelfHeatPwr2min = std::move(_x.BMS_SelfHeatPwr2min);
		BMS_SelfHeatPwr5min = std::move(_x.BMS_SelfHeatPwr5min);
		BMS_SelfHeatPwr10min = std::move(_x.BMS_SelfHeatPwr10min);
		BMS_TEL_InslRes = std::move(_x.BMS_TEL_InslRes);
		VCU_LTWPSpdFreqAct = std::move(_x.VCU_LTWPSpdFreqAct);
		VCU_LTWPFault = std::move(_x.VCU_LTWPFault);
		VCU_BMS_SelfHeatSt = std::move(_x.VCU_BMS_SelfHeatSt);
		VCU_BMS_BattTempCtrlSt = std::move(_x.VCU_BMS_BattTempCtrlSt);
		VCU_EngSt = std::move(_x.VCU_EngSt);
		VCU_BMS_CoolantInTemp = std::move(_x.VCU_BMS_CoolantInTemp);
		VCU_BMS_CoolantOutTemp = std::move(_x.VCU_BMS_CoolantOutTemp);
		VCU_stModAct = std::move(_x.VCU_stModAct);
		VCU_GCU_ModeReq = std::move(_x.VCU_GCU_ModeReq);
		VCU_CoolFanSpeedReq = std::move(_x.VCU_CoolFanSpeedReq);
		VCU_OPC_SpdSet = std::move(_x.VCU_OPC_SpdSet);
		VCU_HVBatPrioReq = std::move(_x.VCU_HVBatPrioReq);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(BMS_SelfHeatPwr2min);
		fun(BMS_SelfHeatPwr5min);
		fun(BMS_SelfHeatPwr10min);
		fun(BMS_TEL_InslRes);
		fun(VCU_LTWPSpdFreqAct);
		fun(VCU_LTWPFault);
		fun(VCU_BMS_SelfHeatSt);
		fun(VCU_BMS_BattTempCtrlSt);
		fun(VCU_EngSt);
		fun(VCU_BMS_CoolantInTemp);
		fun(VCU_BMS_CoolantOutTemp);
		fun(VCU_stModAct);
		fun(VCU_GCU_ModeReq);
		fun(VCU_CoolFanSpeedReq);
		fun(VCU_OPC_SpdSet);
		fun(VCU_HVBatPrioReq);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(BMS_SelfHeatPwr2min);
		fun(BMS_SelfHeatPwr5min);
		fun(BMS_SelfHeatPwr10min);
		fun(BMS_TEL_InslRes);
		fun(VCU_LTWPSpdFreqAct);
		fun(VCU_LTWPFault);
		fun(VCU_BMS_SelfHeatSt);
		fun(VCU_BMS_BattTempCtrlSt);
		fun(VCU_EngSt);
		fun(VCU_BMS_CoolantInTemp);
		fun(VCU_BMS_CoolantOutTemp);
		fun(VCU_stModAct);
		fun(VCU_GCU_ModeReq);
		fun(VCU_CoolFanSpeedReq);
		fun(VCU_OPC_SpdSet);
		fun(VCU_HVBatPrioReq);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (BMS_SelfHeatPwr2min);
		fun << (BMS_SelfHeatPwr5min);
		fun << (BMS_SelfHeatPwr10min);
		fun << (BMS_TEL_InslRes);
		fun << (VCU_LTWPSpdFreqAct);
		fun << (VCU_LTWPFault);
		fun << (VCU_BMS_SelfHeatSt);
		fun << (VCU_BMS_BattTempCtrlSt);
		fun << (VCU_EngSt);
		fun << (VCU_BMS_CoolantInTemp);
		fun << (VCU_BMS_CoolantOutTemp);
		fun << (VCU_stModAct);
		fun << (VCU_GCU_ModeReq);
		fun << (VCU_CoolFanSpeedReq);
		fun << (VCU_OPC_SpdSet);
		fun << (VCU_HVBatPrioReq);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (BMS_SelfHeatPwr2min);
		fun >> (BMS_SelfHeatPwr5min);
		fun >> (BMS_SelfHeatPwr10min);
		fun >> (BMS_TEL_InslRes);
		fun >> (VCU_LTWPSpdFreqAct);
		fun >> (VCU_LTWPFault);
		fun >> (VCU_BMS_SelfHeatSt);
		fun >> (VCU_BMS_BattTempCtrlSt);
		fun >> (VCU_EngSt);
		fun >> (VCU_BMS_CoolantInTemp);
		fun >> (VCU_BMS_CoolantOutTemp);
		fun >> (VCU_stModAct);
		fun >> (VCU_GCU_ModeReq);
		fun >> (VCU_CoolFanSpeedReq);
		fun >> (VCU_OPC_SpdSet);
		fun >> (VCU_HVBatPrioReq);
	}
};

#endif //____BDCTESTBMS7_H__
