#ifndef ____BDCTESTOPC_H__
#define ____BDCTESTOPC_H__


#include "cstdint"






struct BDCTestOPC {
public:
	std::uint8_t VCU_APAResp;
	std::uint8_t VCU_TorqReqForICE;
	std::uint8_t VCU_SysFaultLvl;
	std::uint16_t VCU_VehElcConspAvg;
	std::uint16_t OPC_SpdAct;
	std::uint8_t OPC_IdcAct;
	std::uint8_t OPC_CANCommunicationFailure;
	std::uint8_t OPC_SensorFailure;
	std::uint8_t OPC_DriverCircuitFailure;
	std::uint8_t OPC_OverTemperature;
	std::uint8_t OPC_OverVoltage;
	std::uint8_t OPC_LowVoltage;
	std::uint8_t OPC_OverCurrent;
	std::uint8_t OPC_MotorStallingFailure;
	std::uint8_t OPC_LimitCurrentFlag;
	std::uint8_t OPC_SelfCheckSt;
	std::uint16_t OPC_UdcAct;
	std::uint8_t OPC_ErrLvl;
	std::uint8_t OPC_HighTempDePwrFlag;
	std::uint8_t DCU_EngMilLampReq;
	std::uint8_t VCU_TorqReqForICEf;
	std::uint8_t VCU_TorqReqForICEfvd;
	std::uint8_t VCU_EngStaOrd;
	std::uint8_t VCU_EngStaMod;
	std::uint8_t VCU_StainjInhib;
	std::uint8_t VCU_EngFuelCutOffReq;
	std::uint8_t VCU_EIMTorqSet;
	std::uint8_t VCU_EffMaxPermEngTorq;
	std::uint8_t VCU_TorqReqForICE2;
	std::uint8_t VCU_EIMTorqSetVD;
	std::uint8_t VCU_EMS_EGRDisableFlag;
	std::uint8_t VCU_CrankingEng;
	std::uint8_t VCU_StopReq;
	std::uint8_t VCU_IdleSpdReq;
	std::uint8_t VCU_CoolingFanCtrlPwm;
	std::uint8_t VCU_CoolingFanCtrlPwmSt;
	std::uint8_t VCU_IdleCtrlReq;
	std::uint8_t VCU_HTMSMTCoolantTemp;
/*
	BDCTestOPC() {}
	~BDCTestOPC() {}
	BDCTestOPC(const std::uint8_t _VCU_APAResp,const std::uint8_t _VCU_TorqReqForICE,const std::uint8_t _VCU_SysFaultLvl,const std::uint16_t _VCU_VehElcConspAvg,const std::uint16_t _OPC_SpdAct,const std::uint8_t _OPC_IdcAct,const std::uint8_t _OPC_CANCommunicationFailure,const std::uint8_t _OPC_SensorFailure,const std::uint8_t _OPC_DriverCircuitFailure,const std::uint8_t _OPC_OverTemperature,const std::uint8_t _OPC_OverVoltage,const std::uint8_t _OPC_LowVoltage,const std::uint8_t _OPC_OverCurrent,const std::uint8_t _OPC_MotorStallingFailure,const std::uint8_t _OPC_LimitCurrentFlag,const std::uint8_t _OPC_SelfCheckSt,const std::uint16_t _OPC_UdcAct,const std::uint8_t _OPC_ErrLvl,const std::uint8_t _OPC_HighTempDePwrFlag,const std::uint8_t _DCU_EngMilLampReq,const std::uint8_t _VCU_TorqReqForICEf,const std::uint8_t _VCU_TorqReqForICEfvd,const std::uint8_t _VCU_EngStaOrd,const std::uint8_t _VCU_EngStaMod,const std::uint8_t _VCU_StainjInhib,const std::uint8_t _VCU_EngFuelCutOffReq,const std::uint8_t _VCU_EIMTorqSet,const std::uint8_t _VCU_EffMaxPermEngTorq,const std::uint8_t _VCU_TorqReqForICE2,const std::uint8_t _VCU_EIMTorqSetVD,const std::uint8_t _VCU_EMS_EGRDisableFlag,const std::uint8_t _VCU_CrankingEng,const std::uint8_t _VCU_StopReq,const std::uint8_t _VCU_IdleSpdReq,const std::uint8_t _VCU_CoolingFanCtrlPwm,const std::uint8_t _VCU_CoolingFanCtrlPwmSt,const std::uint8_t _VCU_IdleCtrlReq,const std::uint8_t _VCU_HTMSMTCoolantTemp):VCU_APAResp(_VCU_APAResp),VCU_TorqReqForICE(_VCU_TorqReqForICE),VCU_SysFaultLvl(_VCU_SysFaultLvl),VCU_VehElcConspAvg(_VCU_VehElcConspAvg),OPC_SpdAct(_OPC_SpdAct),OPC_IdcAct(_OPC_IdcAct),OPC_CANCommunicationFailure(_OPC_CANCommunicationFailure),OPC_SensorFailure(_OPC_SensorFailure),OPC_DriverCircuitFailure(_OPC_DriverCircuitFailure),OPC_OverTemperature(_OPC_OverTemperature),OPC_OverVoltage(_OPC_OverVoltage),OPC_LowVoltage(_OPC_LowVoltage),OPC_OverCurrent(_OPC_OverCurrent),OPC_MotorStallingFailure(_OPC_MotorStallingFailure),OPC_LimitCurrentFlag(_OPC_LimitCurrentFlag),OPC_SelfCheckSt(_OPC_SelfCheckSt),OPC_UdcAct(_OPC_UdcAct),OPC_ErrLvl(_OPC_ErrLvl),OPC_HighTempDePwrFlag(_OPC_HighTempDePwrFlag),DCU_EngMilLampReq(_DCU_EngMilLampReq),VCU_TorqReqForICEf(_VCU_TorqReqForICEf),VCU_TorqReqForICEfvd(_VCU_TorqReqForICEfvd),VCU_EngStaOrd(_VCU_EngStaOrd),VCU_EngStaMod(_VCU_EngStaMod),VCU_StainjInhib(_VCU_StainjInhib),VCU_EngFuelCutOffReq(_VCU_EngFuelCutOffReq),VCU_EIMTorqSet(_VCU_EIMTorqSet),VCU_EffMaxPermEngTorq(_VCU_EffMaxPermEngTorq),VCU_TorqReqForICE2(_VCU_TorqReqForICE2),VCU_EIMTorqSetVD(_VCU_EIMTorqSetVD),VCU_EMS_EGRDisableFlag(_VCU_EMS_EGRDisableFlag),VCU_CrankingEng(_VCU_CrankingEng),VCU_StopReq(_VCU_StopReq),VCU_IdleSpdReq(_VCU_IdleSpdReq),VCU_CoolingFanCtrlPwm(_VCU_CoolingFanCtrlPwm),VCU_CoolingFanCtrlPwmSt(_VCU_CoolingFanCtrlPwmSt),VCU_IdleCtrlReq(_VCU_IdleCtrlReq),VCU_HTMSMTCoolantTemp(_VCU_HTMSMTCoolantTemp) {}
	BDCTestOPC(const BDCTestOPC &_x){
		VCU_APAResp = _x.VCU_APAResp;
		VCU_TorqReqForICE = _x.VCU_TorqReqForICE;
		VCU_SysFaultLvl = _x.VCU_SysFaultLvl;
		VCU_VehElcConspAvg = _x.VCU_VehElcConspAvg;
		OPC_SpdAct = _x.OPC_SpdAct;
		OPC_IdcAct = _x.OPC_IdcAct;
		OPC_CANCommunicationFailure = _x.OPC_CANCommunicationFailure;
		OPC_SensorFailure = _x.OPC_SensorFailure;
		OPC_DriverCircuitFailure = _x.OPC_DriverCircuitFailure;
		OPC_OverTemperature = _x.OPC_OverTemperature;
		OPC_OverVoltage = _x.OPC_OverVoltage;
		OPC_LowVoltage = _x.OPC_LowVoltage;
		OPC_OverCurrent = _x.OPC_OverCurrent;
		OPC_MotorStallingFailure = _x.OPC_MotorStallingFailure;
		OPC_LimitCurrentFlag = _x.OPC_LimitCurrentFlag;
		OPC_SelfCheckSt = _x.OPC_SelfCheckSt;
		OPC_UdcAct = _x.OPC_UdcAct;
		OPC_ErrLvl = _x.OPC_ErrLvl;
		OPC_HighTempDePwrFlag = _x.OPC_HighTempDePwrFlag;
		DCU_EngMilLampReq = _x.DCU_EngMilLampReq;
		VCU_TorqReqForICEf = _x.VCU_TorqReqForICEf;
		VCU_TorqReqForICEfvd = _x.VCU_TorqReqForICEfvd;
		VCU_EngStaOrd = _x.VCU_EngStaOrd;
		VCU_EngStaMod = _x.VCU_EngStaMod;
		VCU_StainjInhib = _x.VCU_StainjInhib;
		VCU_EngFuelCutOffReq = _x.VCU_EngFuelCutOffReq;
		VCU_EIMTorqSet = _x.VCU_EIMTorqSet;
		VCU_EffMaxPermEngTorq = _x.VCU_EffMaxPermEngTorq;
		VCU_TorqReqForICE2 = _x.VCU_TorqReqForICE2;
		VCU_EIMTorqSetVD = _x.VCU_EIMTorqSetVD;
		VCU_EMS_EGRDisableFlag = _x.VCU_EMS_EGRDisableFlag;
		VCU_CrankingEng = _x.VCU_CrankingEng;
		VCU_StopReq = _x.VCU_StopReq;
		VCU_IdleSpdReq = _x.VCU_IdleSpdReq;
		VCU_CoolingFanCtrlPwm = _x.VCU_CoolingFanCtrlPwm;
		VCU_CoolingFanCtrlPwmSt = _x.VCU_CoolingFanCtrlPwmSt;
		VCU_IdleCtrlReq = _x.VCU_IdleCtrlReq;
		VCU_HTMSMTCoolantTemp = _x.VCU_HTMSMTCoolantTemp;
	}
	BDCTestOPC(BDCTestOPC &&_x){
		VCU_APAResp = std::move(_x.VCU_APAResp);
		VCU_TorqReqForICE = std::move(_x.VCU_TorqReqForICE);
		VCU_SysFaultLvl = std::move(_x.VCU_SysFaultLvl);
		VCU_VehElcConspAvg = std::move(_x.VCU_VehElcConspAvg);
		OPC_SpdAct = std::move(_x.OPC_SpdAct);
		OPC_IdcAct = std::move(_x.OPC_IdcAct);
		OPC_CANCommunicationFailure = std::move(_x.OPC_CANCommunicationFailure);
		OPC_SensorFailure = std::move(_x.OPC_SensorFailure);
		OPC_DriverCircuitFailure = std::move(_x.OPC_DriverCircuitFailure);
		OPC_OverTemperature = std::move(_x.OPC_OverTemperature);
		OPC_OverVoltage = std::move(_x.OPC_OverVoltage);
		OPC_LowVoltage = std::move(_x.OPC_LowVoltage);
		OPC_OverCurrent = std::move(_x.OPC_OverCurrent);
		OPC_MotorStallingFailure = std::move(_x.OPC_MotorStallingFailure);
		OPC_LimitCurrentFlag = std::move(_x.OPC_LimitCurrentFlag);
		OPC_SelfCheckSt = std::move(_x.OPC_SelfCheckSt);
		OPC_UdcAct = std::move(_x.OPC_UdcAct);
		OPC_ErrLvl = std::move(_x.OPC_ErrLvl);
		OPC_HighTempDePwrFlag = std::move(_x.OPC_HighTempDePwrFlag);
		DCU_EngMilLampReq = std::move(_x.DCU_EngMilLampReq);
		VCU_TorqReqForICEf = std::move(_x.VCU_TorqReqForICEf);
		VCU_TorqReqForICEfvd = std::move(_x.VCU_TorqReqForICEfvd);
		VCU_EngStaOrd = std::move(_x.VCU_EngStaOrd);
		VCU_EngStaMod = std::move(_x.VCU_EngStaMod);
		VCU_StainjInhib = std::move(_x.VCU_StainjInhib);
		VCU_EngFuelCutOffReq = std::move(_x.VCU_EngFuelCutOffReq);
		VCU_EIMTorqSet = std::move(_x.VCU_EIMTorqSet);
		VCU_EffMaxPermEngTorq = std::move(_x.VCU_EffMaxPermEngTorq);
		VCU_TorqReqForICE2 = std::move(_x.VCU_TorqReqForICE2);
		VCU_EIMTorqSetVD = std::move(_x.VCU_EIMTorqSetVD);
		VCU_EMS_EGRDisableFlag = std::move(_x.VCU_EMS_EGRDisableFlag);
		VCU_CrankingEng = std::move(_x.VCU_CrankingEng);
		VCU_StopReq = std::move(_x.VCU_StopReq);
		VCU_IdleSpdReq = std::move(_x.VCU_IdleSpdReq);
		VCU_CoolingFanCtrlPwm = std::move(_x.VCU_CoolingFanCtrlPwm);
		VCU_CoolingFanCtrlPwmSt = std::move(_x.VCU_CoolingFanCtrlPwmSt);
		VCU_IdleCtrlReq = std::move(_x.VCU_IdleCtrlReq);
		VCU_HTMSMTCoolantTemp = std::move(_x.VCU_HTMSMTCoolantTemp);
	}
	BDCTestOPC& operator=(const BDCTestOPC &_x){
		VCU_APAResp = _x.VCU_APAResp;
		VCU_TorqReqForICE = _x.VCU_TorqReqForICE;
		VCU_SysFaultLvl = _x.VCU_SysFaultLvl;
		VCU_VehElcConspAvg = _x.VCU_VehElcConspAvg;
		OPC_SpdAct = _x.OPC_SpdAct;
		OPC_IdcAct = _x.OPC_IdcAct;
		OPC_CANCommunicationFailure = _x.OPC_CANCommunicationFailure;
		OPC_SensorFailure = _x.OPC_SensorFailure;
		OPC_DriverCircuitFailure = _x.OPC_DriverCircuitFailure;
		OPC_OverTemperature = _x.OPC_OverTemperature;
		OPC_OverVoltage = _x.OPC_OverVoltage;
		OPC_LowVoltage = _x.OPC_LowVoltage;
		OPC_OverCurrent = _x.OPC_OverCurrent;
		OPC_MotorStallingFailure = _x.OPC_MotorStallingFailure;
		OPC_LimitCurrentFlag = _x.OPC_LimitCurrentFlag;
		OPC_SelfCheckSt = _x.OPC_SelfCheckSt;
		OPC_UdcAct = _x.OPC_UdcAct;
		OPC_ErrLvl = _x.OPC_ErrLvl;
		OPC_HighTempDePwrFlag = _x.OPC_HighTempDePwrFlag;
		DCU_EngMilLampReq = _x.DCU_EngMilLampReq;
		VCU_TorqReqForICEf = _x.VCU_TorqReqForICEf;
		VCU_TorqReqForICEfvd = _x.VCU_TorqReqForICEfvd;
		VCU_EngStaOrd = _x.VCU_EngStaOrd;
		VCU_EngStaMod = _x.VCU_EngStaMod;
		VCU_StainjInhib = _x.VCU_StainjInhib;
		VCU_EngFuelCutOffReq = _x.VCU_EngFuelCutOffReq;
		VCU_EIMTorqSet = _x.VCU_EIMTorqSet;
		VCU_EffMaxPermEngTorq = _x.VCU_EffMaxPermEngTorq;
		VCU_TorqReqForICE2 = _x.VCU_TorqReqForICE2;
		VCU_EIMTorqSetVD = _x.VCU_EIMTorqSetVD;
		VCU_EMS_EGRDisableFlag = _x.VCU_EMS_EGRDisableFlag;
		VCU_CrankingEng = _x.VCU_CrankingEng;
		VCU_StopReq = _x.VCU_StopReq;
		VCU_IdleSpdReq = _x.VCU_IdleSpdReq;
		VCU_CoolingFanCtrlPwm = _x.VCU_CoolingFanCtrlPwm;
		VCU_CoolingFanCtrlPwmSt = _x.VCU_CoolingFanCtrlPwmSt;
		VCU_IdleCtrlReq = _x.VCU_IdleCtrlReq;
		VCU_HTMSMTCoolantTemp = _x.VCU_HTMSMTCoolantTemp;
		return *this;
	}
	BDCTestOPC& operator=(BDCTestOPC &&_x){
		VCU_APAResp = std::move(_x.VCU_APAResp);
		VCU_TorqReqForICE = std::move(_x.VCU_TorqReqForICE);
		VCU_SysFaultLvl = std::move(_x.VCU_SysFaultLvl);
		VCU_VehElcConspAvg = std::move(_x.VCU_VehElcConspAvg);
		OPC_SpdAct = std::move(_x.OPC_SpdAct);
		OPC_IdcAct = std::move(_x.OPC_IdcAct);
		OPC_CANCommunicationFailure = std::move(_x.OPC_CANCommunicationFailure);
		OPC_SensorFailure = std::move(_x.OPC_SensorFailure);
		OPC_DriverCircuitFailure = std::move(_x.OPC_DriverCircuitFailure);
		OPC_OverTemperature = std::move(_x.OPC_OverTemperature);
		OPC_OverVoltage = std::move(_x.OPC_OverVoltage);
		OPC_LowVoltage = std::move(_x.OPC_LowVoltage);
		OPC_OverCurrent = std::move(_x.OPC_OverCurrent);
		OPC_MotorStallingFailure = std::move(_x.OPC_MotorStallingFailure);
		OPC_LimitCurrentFlag = std::move(_x.OPC_LimitCurrentFlag);
		OPC_SelfCheckSt = std::move(_x.OPC_SelfCheckSt);
		OPC_UdcAct = std::move(_x.OPC_UdcAct);
		OPC_ErrLvl = std::move(_x.OPC_ErrLvl);
		OPC_HighTempDePwrFlag = std::move(_x.OPC_HighTempDePwrFlag);
		DCU_EngMilLampReq = std::move(_x.DCU_EngMilLampReq);
		VCU_TorqReqForICEf = std::move(_x.VCU_TorqReqForICEf);
		VCU_TorqReqForICEfvd = std::move(_x.VCU_TorqReqForICEfvd);
		VCU_EngStaOrd = std::move(_x.VCU_EngStaOrd);
		VCU_EngStaMod = std::move(_x.VCU_EngStaMod);
		VCU_StainjInhib = std::move(_x.VCU_StainjInhib);
		VCU_EngFuelCutOffReq = std::move(_x.VCU_EngFuelCutOffReq);
		VCU_EIMTorqSet = std::move(_x.VCU_EIMTorqSet);
		VCU_EffMaxPermEngTorq = std::move(_x.VCU_EffMaxPermEngTorq);
		VCU_TorqReqForICE2 = std::move(_x.VCU_TorqReqForICE2);
		VCU_EIMTorqSetVD = std::move(_x.VCU_EIMTorqSetVD);
		VCU_EMS_EGRDisableFlag = std::move(_x.VCU_EMS_EGRDisableFlag);
		VCU_CrankingEng = std::move(_x.VCU_CrankingEng);
		VCU_StopReq = std::move(_x.VCU_StopReq);
		VCU_IdleSpdReq = std::move(_x.VCU_IdleSpdReq);
		VCU_CoolingFanCtrlPwm = std::move(_x.VCU_CoolingFanCtrlPwm);
		VCU_CoolingFanCtrlPwmSt = std::move(_x.VCU_CoolingFanCtrlPwmSt);
		VCU_IdleCtrlReq = std::move(_x.VCU_IdleCtrlReq);
		VCU_HTMSMTCoolantTemp = std::move(_x.VCU_HTMSMTCoolantTemp);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(VCU_APAResp);
		fun(VCU_TorqReqForICE);
		fun(VCU_SysFaultLvl);
		fun(VCU_VehElcConspAvg);
		fun(OPC_SpdAct);
		fun(OPC_IdcAct);
		fun(OPC_CANCommunicationFailure);
		fun(OPC_SensorFailure);
		fun(OPC_DriverCircuitFailure);
		fun(OPC_OverTemperature);
		fun(OPC_OverVoltage);
		fun(OPC_LowVoltage);
		fun(OPC_OverCurrent);
		fun(OPC_MotorStallingFailure);
		fun(OPC_LimitCurrentFlag);
		fun(OPC_SelfCheckSt);
		fun(OPC_UdcAct);
		fun(OPC_ErrLvl);
		fun(OPC_HighTempDePwrFlag);
		fun(DCU_EngMilLampReq);
		fun(VCU_TorqReqForICEf);
		fun(VCU_TorqReqForICEfvd);
		fun(VCU_EngStaOrd);
		fun(VCU_EngStaMod);
		fun(VCU_StainjInhib);
		fun(VCU_EngFuelCutOffReq);
		fun(VCU_EIMTorqSet);
		fun(VCU_EffMaxPermEngTorq);
		fun(VCU_TorqReqForICE2);
		fun(VCU_EIMTorqSetVD);
		fun(VCU_EMS_EGRDisableFlag);
		fun(VCU_CrankingEng);
		fun(VCU_StopReq);
		fun(VCU_IdleSpdReq);
		fun(VCU_CoolingFanCtrlPwm);
		fun(VCU_CoolingFanCtrlPwmSt);
		fun(VCU_IdleCtrlReq);
		fun(VCU_HTMSMTCoolantTemp);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(VCU_APAResp);
		fun(VCU_TorqReqForICE);
		fun(VCU_SysFaultLvl);
		fun(VCU_VehElcConspAvg);
		fun(OPC_SpdAct);
		fun(OPC_IdcAct);
		fun(OPC_CANCommunicationFailure);
		fun(OPC_SensorFailure);
		fun(OPC_DriverCircuitFailure);
		fun(OPC_OverTemperature);
		fun(OPC_OverVoltage);
		fun(OPC_LowVoltage);
		fun(OPC_OverCurrent);
		fun(OPC_MotorStallingFailure);
		fun(OPC_LimitCurrentFlag);
		fun(OPC_SelfCheckSt);
		fun(OPC_UdcAct);
		fun(OPC_ErrLvl);
		fun(OPC_HighTempDePwrFlag);
		fun(DCU_EngMilLampReq);
		fun(VCU_TorqReqForICEf);
		fun(VCU_TorqReqForICEfvd);
		fun(VCU_EngStaOrd);
		fun(VCU_EngStaMod);
		fun(VCU_StainjInhib);
		fun(VCU_EngFuelCutOffReq);
		fun(VCU_EIMTorqSet);
		fun(VCU_EffMaxPermEngTorq);
		fun(VCU_TorqReqForICE2);
		fun(VCU_EIMTorqSetVD);
		fun(VCU_EMS_EGRDisableFlag);
		fun(VCU_CrankingEng);
		fun(VCU_StopReq);
		fun(VCU_IdleSpdReq);
		fun(VCU_CoolingFanCtrlPwm);
		fun(VCU_CoolingFanCtrlPwmSt);
		fun(VCU_IdleCtrlReq);
		fun(VCU_HTMSMTCoolantTemp);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (VCU_APAResp);
		fun << (VCU_TorqReqForICE);
		fun << (VCU_SysFaultLvl);
		fun << (VCU_VehElcConspAvg);
		fun << (OPC_SpdAct);
		fun << (OPC_IdcAct);
		fun << (OPC_CANCommunicationFailure);
		fun << (OPC_SensorFailure);
		fun << (OPC_DriverCircuitFailure);
		fun << (OPC_OverTemperature);
		fun << (OPC_OverVoltage);
		fun << (OPC_LowVoltage);
		fun << (OPC_OverCurrent);
		fun << (OPC_MotorStallingFailure);
		fun << (OPC_LimitCurrentFlag);
		fun << (OPC_SelfCheckSt);
		fun << (OPC_UdcAct);
		fun << (OPC_ErrLvl);
		fun << (OPC_HighTempDePwrFlag);
		fun << (DCU_EngMilLampReq);
		fun << (VCU_TorqReqForICEf);
		fun << (VCU_TorqReqForICEfvd);
		fun << (VCU_EngStaOrd);
		fun << (VCU_EngStaMod);
		fun << (VCU_StainjInhib);
		fun << (VCU_EngFuelCutOffReq);
		fun << (VCU_EIMTorqSet);
		fun << (VCU_EffMaxPermEngTorq);
		fun << (VCU_TorqReqForICE2);
		fun << (VCU_EIMTorqSetVD);
		fun << (VCU_EMS_EGRDisableFlag);
		fun << (VCU_CrankingEng);
		fun << (VCU_StopReq);
		fun << (VCU_IdleSpdReq);
		fun << (VCU_CoolingFanCtrlPwm);
		fun << (VCU_CoolingFanCtrlPwmSt);
		fun << (VCU_IdleCtrlReq);
		fun << (VCU_HTMSMTCoolantTemp);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (VCU_APAResp);
		fun >> (VCU_TorqReqForICE);
		fun >> (VCU_SysFaultLvl);
		fun >> (VCU_VehElcConspAvg);
		fun >> (OPC_SpdAct);
		fun >> (OPC_IdcAct);
		fun >> (OPC_CANCommunicationFailure);
		fun >> (OPC_SensorFailure);
		fun >> (OPC_DriverCircuitFailure);
		fun >> (OPC_OverTemperature);
		fun >> (OPC_OverVoltage);
		fun >> (OPC_LowVoltage);
		fun >> (OPC_OverCurrent);
		fun >> (OPC_MotorStallingFailure);
		fun >> (OPC_LimitCurrentFlag);
		fun >> (OPC_SelfCheckSt);
		fun >> (OPC_UdcAct);
		fun >> (OPC_ErrLvl);
		fun >> (OPC_HighTempDePwrFlag);
		fun >> (DCU_EngMilLampReq);
		fun >> (VCU_TorqReqForICEf);
		fun >> (VCU_TorqReqForICEfvd);
		fun >> (VCU_EngStaOrd);
		fun >> (VCU_EngStaMod);
		fun >> (VCU_StainjInhib);
		fun >> (VCU_EngFuelCutOffReq);
		fun >> (VCU_EIMTorqSet);
		fun >> (VCU_EffMaxPermEngTorq);
		fun >> (VCU_TorqReqForICE2);
		fun >> (VCU_EIMTorqSetVD);
		fun >> (VCU_EMS_EGRDisableFlag);
		fun >> (VCU_CrankingEng);
		fun >> (VCU_StopReq);
		fun >> (VCU_IdleSpdReq);
		fun >> (VCU_CoolingFanCtrlPwm);
		fun >> (VCU_CoolingFanCtrlPwmSt);
		fun >> (VCU_IdleCtrlReq);
		fun >> (VCU_HTMSMTCoolantTemp);
	}
};

#endif //____BDCTESTOPC_H__
