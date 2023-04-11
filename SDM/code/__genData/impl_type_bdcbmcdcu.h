#ifndef ____BDCBMCDCU_H__
#define ____BDCBMCDCU_H__


#include "cstdint"






struct BDCBMCDCU {
public:
	std::uint16_t DCU_RotSpdAct;
	std::uint16_t DCU_TorqAct;
	std::uint16_t DCU_IdcAct;
	std::uint16_t DCU_UdcAct;
	std::uint8_t DCU_ModeSt;
	std::uint8_t DCU_GateDrvSt;
	std::uint8_t DCU_DiagErrCode;
	std::uint16_t DCU_TorqMin;
	std::uint16_t DCU_TorqMax;
	std::uint8_t DCU_HvilSt;
	std::uint16_t DCU_EOP_SpdSet;
	std::uint8_t DCU_RemoteDiagCode;
	std::uint8_t DCU_InvtTemp;
	std::uint16_t DCU_StatTemp;
	std::uint8_t DCU_TempCoolant;
	std::uint8_t DCU_VoltageT30;
	std::uint8_t DCU_FaultLampInd;
	std::uint8_t DCU_SysTempOvrInd;
	std::uint16_t DCU_TrefFinal;
	std::uint16_t DCU_iCurqRef;
	std::uint16_t DCU_iCurdRef;
	std::uint16_t DCU_Id;
	std::uint16_t DCU_Iq;
	std::uint16_t DCU_Fault1;
	std::uint16_t DCU_Fault2;
	std::uint16_t DCU_Fault3;
	std::uint16_t DCU_Fault4;
	std::uint32_t DCU_Fault5;
	std::uint32_t DCU_Fault6;
	std::uint16_t DCU_RotTemp;
	std::uint8_t DCU_CooltReq;
/*
	BDCBMCDCU() {}
	~BDCBMCDCU() {}
	BDCBMCDCU(const std::uint16_t _DCU_RotSpdAct,const std::uint16_t _DCU_TorqAct,const std::uint16_t _DCU_IdcAct,const std::uint16_t _DCU_UdcAct,const std::uint8_t _DCU_ModeSt,const std::uint8_t _DCU_GateDrvSt,const std::uint8_t _DCU_DiagErrCode,const std::uint16_t _DCU_TorqMin,const std::uint16_t _DCU_TorqMax,const std::uint8_t _DCU_HvilSt,const std::uint16_t _DCU_EOP_SpdSet,const std::uint8_t _DCU_RemoteDiagCode,const std::uint8_t _DCU_InvtTemp,const std::uint16_t _DCU_StatTemp,const std::uint8_t _DCU_TempCoolant,const std::uint8_t _DCU_VoltageT30,const std::uint8_t _DCU_FaultLampInd,const std::uint8_t _DCU_SysTempOvrInd,const std::uint16_t _DCU_TrefFinal,const std::uint16_t _DCU_iCurqRef,const std::uint16_t _DCU_iCurdRef,const std::uint16_t _DCU_Id,const std::uint16_t _DCU_Iq,const std::uint16_t _DCU_Fault1,const std::uint16_t _DCU_Fault2,const std::uint16_t _DCU_Fault3,const std::uint16_t _DCU_Fault4,const std::uint32_t _DCU_Fault5,const std::uint32_t _DCU_Fault6,const std::uint16_t _DCU_RotTemp,const std::uint8_t _DCU_CooltReq):DCU_RotSpdAct(_DCU_RotSpdAct),DCU_TorqAct(_DCU_TorqAct),DCU_IdcAct(_DCU_IdcAct),DCU_UdcAct(_DCU_UdcAct),DCU_ModeSt(_DCU_ModeSt),DCU_GateDrvSt(_DCU_GateDrvSt),DCU_DiagErrCode(_DCU_DiagErrCode),DCU_TorqMin(_DCU_TorqMin),DCU_TorqMax(_DCU_TorqMax),DCU_HvilSt(_DCU_HvilSt),DCU_EOP_SpdSet(_DCU_EOP_SpdSet),DCU_RemoteDiagCode(_DCU_RemoteDiagCode),DCU_InvtTemp(_DCU_InvtTemp),DCU_StatTemp(_DCU_StatTemp),DCU_TempCoolant(_DCU_TempCoolant),DCU_VoltageT30(_DCU_VoltageT30),DCU_FaultLampInd(_DCU_FaultLampInd),DCU_SysTempOvrInd(_DCU_SysTempOvrInd),DCU_TrefFinal(_DCU_TrefFinal),DCU_iCurqRef(_DCU_iCurqRef),DCU_iCurdRef(_DCU_iCurdRef),DCU_Id(_DCU_Id),DCU_Iq(_DCU_Iq),DCU_Fault1(_DCU_Fault1),DCU_Fault2(_DCU_Fault2),DCU_Fault3(_DCU_Fault3),DCU_Fault4(_DCU_Fault4),DCU_Fault5(_DCU_Fault5),DCU_Fault6(_DCU_Fault6),DCU_RotTemp(_DCU_RotTemp),DCU_CooltReq(_DCU_CooltReq) {}
	BDCBMCDCU(const BDCBMCDCU &_x){
		DCU_RotSpdAct = _x.DCU_RotSpdAct;
		DCU_TorqAct = _x.DCU_TorqAct;
		DCU_IdcAct = _x.DCU_IdcAct;
		DCU_UdcAct = _x.DCU_UdcAct;
		DCU_ModeSt = _x.DCU_ModeSt;
		DCU_GateDrvSt = _x.DCU_GateDrvSt;
		DCU_DiagErrCode = _x.DCU_DiagErrCode;
		DCU_TorqMin = _x.DCU_TorqMin;
		DCU_TorqMax = _x.DCU_TorqMax;
		DCU_HvilSt = _x.DCU_HvilSt;
		DCU_EOP_SpdSet = _x.DCU_EOP_SpdSet;
		DCU_RemoteDiagCode = _x.DCU_RemoteDiagCode;
		DCU_InvtTemp = _x.DCU_InvtTemp;
		DCU_StatTemp = _x.DCU_StatTemp;
		DCU_TempCoolant = _x.DCU_TempCoolant;
		DCU_VoltageT30 = _x.DCU_VoltageT30;
		DCU_FaultLampInd = _x.DCU_FaultLampInd;
		DCU_SysTempOvrInd = _x.DCU_SysTempOvrInd;
		DCU_TrefFinal = _x.DCU_TrefFinal;
		DCU_iCurqRef = _x.DCU_iCurqRef;
		DCU_iCurdRef = _x.DCU_iCurdRef;
		DCU_Id = _x.DCU_Id;
		DCU_Iq = _x.DCU_Iq;
		DCU_Fault1 = _x.DCU_Fault1;
		DCU_Fault2 = _x.DCU_Fault2;
		DCU_Fault3 = _x.DCU_Fault3;
		DCU_Fault4 = _x.DCU_Fault4;
		DCU_Fault5 = _x.DCU_Fault5;
		DCU_Fault6 = _x.DCU_Fault6;
		DCU_RotTemp = _x.DCU_RotTemp;
		DCU_CooltReq = _x.DCU_CooltReq;
	}
	BDCBMCDCU(BDCBMCDCU &&_x){
		DCU_RotSpdAct = std::move(_x.DCU_RotSpdAct);
		DCU_TorqAct = std::move(_x.DCU_TorqAct);
		DCU_IdcAct = std::move(_x.DCU_IdcAct);
		DCU_UdcAct = std::move(_x.DCU_UdcAct);
		DCU_ModeSt = std::move(_x.DCU_ModeSt);
		DCU_GateDrvSt = std::move(_x.DCU_GateDrvSt);
		DCU_DiagErrCode = std::move(_x.DCU_DiagErrCode);
		DCU_TorqMin = std::move(_x.DCU_TorqMin);
		DCU_TorqMax = std::move(_x.DCU_TorqMax);
		DCU_HvilSt = std::move(_x.DCU_HvilSt);
		DCU_EOP_SpdSet = std::move(_x.DCU_EOP_SpdSet);
		DCU_RemoteDiagCode = std::move(_x.DCU_RemoteDiagCode);
		DCU_InvtTemp = std::move(_x.DCU_InvtTemp);
		DCU_StatTemp = std::move(_x.DCU_StatTemp);
		DCU_TempCoolant = std::move(_x.DCU_TempCoolant);
		DCU_VoltageT30 = std::move(_x.DCU_VoltageT30);
		DCU_FaultLampInd = std::move(_x.DCU_FaultLampInd);
		DCU_SysTempOvrInd = std::move(_x.DCU_SysTempOvrInd);
		DCU_TrefFinal = std::move(_x.DCU_TrefFinal);
		DCU_iCurqRef = std::move(_x.DCU_iCurqRef);
		DCU_iCurdRef = std::move(_x.DCU_iCurdRef);
		DCU_Id = std::move(_x.DCU_Id);
		DCU_Iq = std::move(_x.DCU_Iq);
		DCU_Fault1 = std::move(_x.DCU_Fault1);
		DCU_Fault2 = std::move(_x.DCU_Fault2);
		DCU_Fault3 = std::move(_x.DCU_Fault3);
		DCU_Fault4 = std::move(_x.DCU_Fault4);
		DCU_Fault5 = std::move(_x.DCU_Fault5);
		DCU_Fault6 = std::move(_x.DCU_Fault6);
		DCU_RotTemp = std::move(_x.DCU_RotTemp);
		DCU_CooltReq = std::move(_x.DCU_CooltReq);
	}
	BDCBMCDCU& operator=(const BDCBMCDCU &_x){
		DCU_RotSpdAct = _x.DCU_RotSpdAct;
		DCU_TorqAct = _x.DCU_TorqAct;
		DCU_IdcAct = _x.DCU_IdcAct;
		DCU_UdcAct = _x.DCU_UdcAct;
		DCU_ModeSt = _x.DCU_ModeSt;
		DCU_GateDrvSt = _x.DCU_GateDrvSt;
		DCU_DiagErrCode = _x.DCU_DiagErrCode;
		DCU_TorqMin = _x.DCU_TorqMin;
		DCU_TorqMax = _x.DCU_TorqMax;
		DCU_HvilSt = _x.DCU_HvilSt;
		DCU_EOP_SpdSet = _x.DCU_EOP_SpdSet;
		DCU_RemoteDiagCode = _x.DCU_RemoteDiagCode;
		DCU_InvtTemp = _x.DCU_InvtTemp;
		DCU_StatTemp = _x.DCU_StatTemp;
		DCU_TempCoolant = _x.DCU_TempCoolant;
		DCU_VoltageT30 = _x.DCU_VoltageT30;
		DCU_FaultLampInd = _x.DCU_FaultLampInd;
		DCU_SysTempOvrInd = _x.DCU_SysTempOvrInd;
		DCU_TrefFinal = _x.DCU_TrefFinal;
		DCU_iCurqRef = _x.DCU_iCurqRef;
		DCU_iCurdRef = _x.DCU_iCurdRef;
		DCU_Id = _x.DCU_Id;
		DCU_Iq = _x.DCU_Iq;
		DCU_Fault1 = _x.DCU_Fault1;
		DCU_Fault2 = _x.DCU_Fault2;
		DCU_Fault3 = _x.DCU_Fault3;
		DCU_Fault4 = _x.DCU_Fault4;
		DCU_Fault5 = _x.DCU_Fault5;
		DCU_Fault6 = _x.DCU_Fault6;
		DCU_RotTemp = _x.DCU_RotTemp;
		DCU_CooltReq = _x.DCU_CooltReq;
		return *this;
	}
	BDCBMCDCU& operator=(BDCBMCDCU &&_x){
		DCU_RotSpdAct = std::move(_x.DCU_RotSpdAct);
		DCU_TorqAct = std::move(_x.DCU_TorqAct);
		DCU_IdcAct = std::move(_x.DCU_IdcAct);
		DCU_UdcAct = std::move(_x.DCU_UdcAct);
		DCU_ModeSt = std::move(_x.DCU_ModeSt);
		DCU_GateDrvSt = std::move(_x.DCU_GateDrvSt);
		DCU_DiagErrCode = std::move(_x.DCU_DiagErrCode);
		DCU_TorqMin = std::move(_x.DCU_TorqMin);
		DCU_TorqMax = std::move(_x.DCU_TorqMax);
		DCU_HvilSt = std::move(_x.DCU_HvilSt);
		DCU_EOP_SpdSet = std::move(_x.DCU_EOP_SpdSet);
		DCU_RemoteDiagCode = std::move(_x.DCU_RemoteDiagCode);
		DCU_InvtTemp = std::move(_x.DCU_InvtTemp);
		DCU_StatTemp = std::move(_x.DCU_StatTemp);
		DCU_TempCoolant = std::move(_x.DCU_TempCoolant);
		DCU_VoltageT30 = std::move(_x.DCU_VoltageT30);
		DCU_FaultLampInd = std::move(_x.DCU_FaultLampInd);
		DCU_SysTempOvrInd = std::move(_x.DCU_SysTempOvrInd);
		DCU_TrefFinal = std::move(_x.DCU_TrefFinal);
		DCU_iCurqRef = std::move(_x.DCU_iCurqRef);
		DCU_iCurdRef = std::move(_x.DCU_iCurdRef);
		DCU_Id = std::move(_x.DCU_Id);
		DCU_Iq = std::move(_x.DCU_Iq);
		DCU_Fault1 = std::move(_x.DCU_Fault1);
		DCU_Fault2 = std::move(_x.DCU_Fault2);
		DCU_Fault3 = std::move(_x.DCU_Fault3);
		DCU_Fault4 = std::move(_x.DCU_Fault4);
		DCU_Fault5 = std::move(_x.DCU_Fault5);
		DCU_Fault6 = std::move(_x.DCU_Fault6);
		DCU_RotTemp = std::move(_x.DCU_RotTemp);
		DCU_CooltReq = std::move(_x.DCU_CooltReq);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(DCU_RotSpdAct);
		fun(DCU_TorqAct);
		fun(DCU_IdcAct);
		fun(DCU_UdcAct);
		fun(DCU_ModeSt);
		fun(DCU_GateDrvSt);
		fun(DCU_DiagErrCode);
		fun(DCU_TorqMin);
		fun(DCU_TorqMax);
		fun(DCU_HvilSt);
		fun(DCU_EOP_SpdSet);
		fun(DCU_RemoteDiagCode);
		fun(DCU_InvtTemp);
		fun(DCU_StatTemp);
		fun(DCU_TempCoolant);
		fun(DCU_VoltageT30);
		fun(DCU_FaultLampInd);
		fun(DCU_SysTempOvrInd);
		fun(DCU_TrefFinal);
		fun(DCU_iCurqRef);
		fun(DCU_iCurdRef);
		fun(DCU_Id);
		fun(DCU_Iq);
		fun(DCU_Fault1);
		fun(DCU_Fault2);
		fun(DCU_Fault3);
		fun(DCU_Fault4);
		fun(DCU_Fault5);
		fun(DCU_Fault6);
		fun(DCU_RotTemp);
		fun(DCU_CooltReq);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(DCU_RotSpdAct);
		fun(DCU_TorqAct);
		fun(DCU_IdcAct);
		fun(DCU_UdcAct);
		fun(DCU_ModeSt);
		fun(DCU_GateDrvSt);
		fun(DCU_DiagErrCode);
		fun(DCU_TorqMin);
		fun(DCU_TorqMax);
		fun(DCU_HvilSt);
		fun(DCU_EOP_SpdSet);
		fun(DCU_RemoteDiagCode);
		fun(DCU_InvtTemp);
		fun(DCU_StatTemp);
		fun(DCU_TempCoolant);
		fun(DCU_VoltageT30);
		fun(DCU_FaultLampInd);
		fun(DCU_SysTempOvrInd);
		fun(DCU_TrefFinal);
		fun(DCU_iCurqRef);
		fun(DCU_iCurdRef);
		fun(DCU_Id);
		fun(DCU_Iq);
		fun(DCU_Fault1);
		fun(DCU_Fault2);
		fun(DCU_Fault3);
		fun(DCU_Fault4);
		fun(DCU_Fault5);
		fun(DCU_Fault6);
		fun(DCU_RotTemp);
		fun(DCU_CooltReq);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (DCU_RotSpdAct);
		fun << (DCU_TorqAct);
		fun << (DCU_IdcAct);
		fun << (DCU_UdcAct);
		fun << (DCU_ModeSt);
		fun << (DCU_GateDrvSt);
		fun << (DCU_DiagErrCode);
		fun << (DCU_TorqMin);
		fun << (DCU_TorqMax);
		fun << (DCU_HvilSt);
		fun << (DCU_EOP_SpdSet);
		fun << (DCU_RemoteDiagCode);
		fun << (DCU_InvtTemp);
		fun << (DCU_StatTemp);
		fun << (DCU_TempCoolant);
		fun << (DCU_VoltageT30);
		fun << (DCU_FaultLampInd);
		fun << (DCU_SysTempOvrInd);
		fun << (DCU_TrefFinal);
		fun << (DCU_iCurqRef);
		fun << (DCU_iCurdRef);
		fun << (DCU_Id);
		fun << (DCU_Iq);
		fun << (DCU_Fault1);
		fun << (DCU_Fault2);
		fun << (DCU_Fault3);
		fun << (DCU_Fault4);
		fun << (DCU_Fault5);
		fun << (DCU_Fault6);
		fun << (DCU_RotTemp);
		fun << (DCU_CooltReq);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (DCU_RotSpdAct);
		fun >> (DCU_TorqAct);
		fun >> (DCU_IdcAct);
		fun >> (DCU_UdcAct);
		fun >> (DCU_ModeSt);
		fun >> (DCU_GateDrvSt);
		fun >> (DCU_DiagErrCode);
		fun >> (DCU_TorqMin);
		fun >> (DCU_TorqMax);
		fun >> (DCU_HvilSt);
		fun >> (DCU_EOP_SpdSet);
		fun >> (DCU_RemoteDiagCode);
		fun >> (DCU_InvtTemp);
		fun >> (DCU_StatTemp);
		fun >> (DCU_TempCoolant);
		fun >> (DCU_VoltageT30);
		fun >> (DCU_FaultLampInd);
		fun >> (DCU_SysTempOvrInd);
		fun >> (DCU_TrefFinal);
		fun >> (DCU_iCurqRef);
		fun >> (DCU_iCurdRef);
		fun >> (DCU_Id);
		fun >> (DCU_Iq);
		fun >> (DCU_Fault1);
		fun >> (DCU_Fault2);
		fun >> (DCU_Fault3);
		fun >> (DCU_Fault4);
		fun >> (DCU_Fault5);
		fun >> (DCU_Fault6);
		fun >> (DCU_RotTemp);
		fun >> (DCU_CooltReq);
	}
};

#endif //____BDCBMCDCU_H__
