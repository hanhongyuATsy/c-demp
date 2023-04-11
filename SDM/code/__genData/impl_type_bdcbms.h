#ifndef ____BDCBMS_H__
#define ____BDCBMS_H__


#include "cstdint"






struct BDCBMS {
public:
	std::uint8_t BMS_DcChargerSt;
	std::uint8_t BMS_DcChgSt;
	std::uint8_t BMS_DcChgErrLvl;
	std::uint8_t BMS_DcChgConfigSt;
	std::uint8_t BMS_DcChgInfoSt;
	std::uint8_t BMS_DiagErrCode;
	std::uint8_t BMS_DcChgrErrInfo;
	std::uint16_t BMS_DcChgVoltMax;
	std::uint16_t BMS_DcChgCurrMax;
	std::uint16_t BMS_DcChgrCurrCap;
	std::uint16_t BMS_DcChgrVoltCap;
	std::uint8_t BMS_ChgSOCResp;
	std::uint8_t BMS_ChgSOCRespAvail;
	std::uint16_t BMS_BattSocDisp;
	std::uint8_t BMS_ChgComplRemHour;
	std::uint8_t BMS_ChgComplRemMinute;
	std::uint16_t BMS_AcChgVoltMax;
	std::uint16_t BMS_AcChgCurrMax;
	std::uint8_t BMS_BattChgErr;
	std::uint8_t BMS_BattChgSt;
	std::uint16_t BMS_SVBD;
	std::uint8_t BMS_HvBattCoolErrSt;
	std::uint8_t BMS_CoolantTargTemp;
	std::uint8_t BMS_CoolantFlowReq;
	std::uint8_t BMS_ThermalReq;
	std::uint8_t BMS_ThermalPrioReq;
	std::uint8_t HVAC_PTCHeatingReq;
	std::uint16_t BMC_BattCurr;
	std::uint8_t BMC_SupDcChgSt;
/*
	BDCBMS() {}
	~BDCBMS() {}
	BDCBMS(const std::uint8_t _BMS_DcChargerSt,const std::uint8_t _BMS_DcChgSt,const std::uint8_t _BMS_DcChgErrLvl,const std::uint8_t _BMS_DcChgConfigSt,const std::uint8_t _BMS_DcChgInfoSt,const std::uint8_t _BMS_DiagErrCode,const std::uint8_t _BMS_DcChgrErrInfo,const std::uint16_t _BMS_DcChgVoltMax,const std::uint16_t _BMS_DcChgCurrMax,const std::uint16_t _BMS_DcChgrCurrCap,const std::uint16_t _BMS_DcChgrVoltCap,const std::uint8_t _BMS_ChgSOCResp,const std::uint8_t _BMS_ChgSOCRespAvail,const std::uint16_t _BMS_BattSocDisp,const std::uint8_t _BMS_ChgComplRemHour,const std::uint8_t _BMS_ChgComplRemMinute,const std::uint16_t _BMS_AcChgVoltMax,const std::uint16_t _BMS_AcChgCurrMax,const std::uint8_t _BMS_BattChgErr,const std::uint8_t _BMS_BattChgSt,const std::uint16_t _BMS_SVBD,const std::uint8_t _BMS_HvBattCoolErrSt,const std::uint8_t _BMS_CoolantTargTemp,const std::uint8_t _BMS_CoolantFlowReq,const std::uint8_t _BMS_ThermalReq,const std::uint8_t _BMS_ThermalPrioReq,const std::uint8_t _HVAC_PTCHeatingReq,const std::uint16_t _BMC_BattCurr,const std::uint8_t _BMC_SupDcChgSt):BMS_DcChargerSt(_BMS_DcChargerSt),BMS_DcChgSt(_BMS_DcChgSt),BMS_DcChgErrLvl(_BMS_DcChgErrLvl),BMS_DcChgConfigSt(_BMS_DcChgConfigSt),BMS_DcChgInfoSt(_BMS_DcChgInfoSt),BMS_DiagErrCode(_BMS_DiagErrCode),BMS_DcChgrErrInfo(_BMS_DcChgrErrInfo),BMS_DcChgVoltMax(_BMS_DcChgVoltMax),BMS_DcChgCurrMax(_BMS_DcChgCurrMax),BMS_DcChgrCurrCap(_BMS_DcChgrCurrCap),BMS_DcChgrVoltCap(_BMS_DcChgrVoltCap),BMS_ChgSOCResp(_BMS_ChgSOCResp),BMS_ChgSOCRespAvail(_BMS_ChgSOCRespAvail),BMS_BattSocDisp(_BMS_BattSocDisp),BMS_ChgComplRemHour(_BMS_ChgComplRemHour),BMS_ChgComplRemMinute(_BMS_ChgComplRemMinute),BMS_AcChgVoltMax(_BMS_AcChgVoltMax),BMS_AcChgCurrMax(_BMS_AcChgCurrMax),BMS_BattChgErr(_BMS_BattChgErr),BMS_BattChgSt(_BMS_BattChgSt),BMS_SVBD(_BMS_SVBD),BMS_HvBattCoolErrSt(_BMS_HvBattCoolErrSt),BMS_CoolantTargTemp(_BMS_CoolantTargTemp),BMS_CoolantFlowReq(_BMS_CoolantFlowReq),BMS_ThermalReq(_BMS_ThermalReq),BMS_ThermalPrioReq(_BMS_ThermalPrioReq),HVAC_PTCHeatingReq(_HVAC_PTCHeatingReq),BMC_BattCurr(_BMC_BattCurr),BMC_SupDcChgSt(_BMC_SupDcChgSt) {}
	BDCBMS(const BDCBMS &_x){
		BMS_DcChargerSt = _x.BMS_DcChargerSt;
		BMS_DcChgSt = _x.BMS_DcChgSt;
		BMS_DcChgErrLvl = _x.BMS_DcChgErrLvl;
		BMS_DcChgConfigSt = _x.BMS_DcChgConfigSt;
		BMS_DcChgInfoSt = _x.BMS_DcChgInfoSt;
		BMS_DiagErrCode = _x.BMS_DiagErrCode;
		BMS_DcChgrErrInfo = _x.BMS_DcChgrErrInfo;
		BMS_DcChgVoltMax = _x.BMS_DcChgVoltMax;
		BMS_DcChgCurrMax = _x.BMS_DcChgCurrMax;
		BMS_DcChgrCurrCap = _x.BMS_DcChgrCurrCap;
		BMS_DcChgrVoltCap = _x.BMS_DcChgrVoltCap;
		BMS_ChgSOCResp = _x.BMS_ChgSOCResp;
		BMS_ChgSOCRespAvail = _x.BMS_ChgSOCRespAvail;
		BMS_BattSocDisp = _x.BMS_BattSocDisp;
		BMS_ChgComplRemHour = _x.BMS_ChgComplRemHour;
		BMS_ChgComplRemMinute = _x.BMS_ChgComplRemMinute;
		BMS_AcChgVoltMax = _x.BMS_AcChgVoltMax;
		BMS_AcChgCurrMax = _x.BMS_AcChgCurrMax;
		BMS_BattChgErr = _x.BMS_BattChgErr;
		BMS_BattChgSt = _x.BMS_BattChgSt;
		BMS_SVBD = _x.BMS_SVBD;
		BMS_HvBattCoolErrSt = _x.BMS_HvBattCoolErrSt;
		BMS_CoolantTargTemp = _x.BMS_CoolantTargTemp;
		BMS_CoolantFlowReq = _x.BMS_CoolantFlowReq;
		BMS_ThermalReq = _x.BMS_ThermalReq;
		BMS_ThermalPrioReq = _x.BMS_ThermalPrioReq;
		HVAC_PTCHeatingReq = _x.HVAC_PTCHeatingReq;
		BMC_BattCurr = _x.BMC_BattCurr;
		BMC_SupDcChgSt = _x.BMC_SupDcChgSt;
	}
	BDCBMS(BDCBMS &&_x){
		BMS_DcChargerSt = std::move(_x.BMS_DcChargerSt);
		BMS_DcChgSt = std::move(_x.BMS_DcChgSt);
		BMS_DcChgErrLvl = std::move(_x.BMS_DcChgErrLvl);
		BMS_DcChgConfigSt = std::move(_x.BMS_DcChgConfigSt);
		BMS_DcChgInfoSt = std::move(_x.BMS_DcChgInfoSt);
		BMS_DiagErrCode = std::move(_x.BMS_DiagErrCode);
		BMS_DcChgrErrInfo = std::move(_x.BMS_DcChgrErrInfo);
		BMS_DcChgVoltMax = std::move(_x.BMS_DcChgVoltMax);
		BMS_DcChgCurrMax = std::move(_x.BMS_DcChgCurrMax);
		BMS_DcChgrCurrCap = std::move(_x.BMS_DcChgrCurrCap);
		BMS_DcChgrVoltCap = std::move(_x.BMS_DcChgrVoltCap);
		BMS_ChgSOCResp = std::move(_x.BMS_ChgSOCResp);
		BMS_ChgSOCRespAvail = std::move(_x.BMS_ChgSOCRespAvail);
		BMS_BattSocDisp = std::move(_x.BMS_BattSocDisp);
		BMS_ChgComplRemHour = std::move(_x.BMS_ChgComplRemHour);
		BMS_ChgComplRemMinute = std::move(_x.BMS_ChgComplRemMinute);
		BMS_AcChgVoltMax = std::move(_x.BMS_AcChgVoltMax);
		BMS_AcChgCurrMax = std::move(_x.BMS_AcChgCurrMax);
		BMS_BattChgErr = std::move(_x.BMS_BattChgErr);
		BMS_BattChgSt = std::move(_x.BMS_BattChgSt);
		BMS_SVBD = std::move(_x.BMS_SVBD);
		BMS_HvBattCoolErrSt = std::move(_x.BMS_HvBattCoolErrSt);
		BMS_CoolantTargTemp = std::move(_x.BMS_CoolantTargTemp);
		BMS_CoolantFlowReq = std::move(_x.BMS_CoolantFlowReq);
		BMS_ThermalReq = std::move(_x.BMS_ThermalReq);
		BMS_ThermalPrioReq = std::move(_x.BMS_ThermalPrioReq);
		HVAC_PTCHeatingReq = std::move(_x.HVAC_PTCHeatingReq);
		BMC_BattCurr = std::move(_x.BMC_BattCurr);
		BMC_SupDcChgSt = std::move(_x.BMC_SupDcChgSt);
	}
	BDCBMS& operator=(const BDCBMS &_x){
		BMS_DcChargerSt = _x.BMS_DcChargerSt;
		BMS_DcChgSt = _x.BMS_DcChgSt;
		BMS_DcChgErrLvl = _x.BMS_DcChgErrLvl;
		BMS_DcChgConfigSt = _x.BMS_DcChgConfigSt;
		BMS_DcChgInfoSt = _x.BMS_DcChgInfoSt;
		BMS_DiagErrCode = _x.BMS_DiagErrCode;
		BMS_DcChgrErrInfo = _x.BMS_DcChgrErrInfo;
		BMS_DcChgVoltMax = _x.BMS_DcChgVoltMax;
		BMS_DcChgCurrMax = _x.BMS_DcChgCurrMax;
		BMS_DcChgrCurrCap = _x.BMS_DcChgrCurrCap;
		BMS_DcChgrVoltCap = _x.BMS_DcChgrVoltCap;
		BMS_ChgSOCResp = _x.BMS_ChgSOCResp;
		BMS_ChgSOCRespAvail = _x.BMS_ChgSOCRespAvail;
		BMS_BattSocDisp = _x.BMS_BattSocDisp;
		BMS_ChgComplRemHour = _x.BMS_ChgComplRemHour;
		BMS_ChgComplRemMinute = _x.BMS_ChgComplRemMinute;
		BMS_AcChgVoltMax = _x.BMS_AcChgVoltMax;
		BMS_AcChgCurrMax = _x.BMS_AcChgCurrMax;
		BMS_BattChgErr = _x.BMS_BattChgErr;
		BMS_BattChgSt = _x.BMS_BattChgSt;
		BMS_SVBD = _x.BMS_SVBD;
		BMS_HvBattCoolErrSt = _x.BMS_HvBattCoolErrSt;
		BMS_CoolantTargTemp = _x.BMS_CoolantTargTemp;
		BMS_CoolantFlowReq = _x.BMS_CoolantFlowReq;
		BMS_ThermalReq = _x.BMS_ThermalReq;
		BMS_ThermalPrioReq = _x.BMS_ThermalPrioReq;
		HVAC_PTCHeatingReq = _x.HVAC_PTCHeatingReq;
		BMC_BattCurr = _x.BMC_BattCurr;
		BMC_SupDcChgSt = _x.BMC_SupDcChgSt;
		return *this;
	}
	BDCBMS& operator=(BDCBMS &&_x){
		BMS_DcChargerSt = std::move(_x.BMS_DcChargerSt);
		BMS_DcChgSt = std::move(_x.BMS_DcChgSt);
		BMS_DcChgErrLvl = std::move(_x.BMS_DcChgErrLvl);
		BMS_DcChgConfigSt = std::move(_x.BMS_DcChgConfigSt);
		BMS_DcChgInfoSt = std::move(_x.BMS_DcChgInfoSt);
		BMS_DiagErrCode = std::move(_x.BMS_DiagErrCode);
		BMS_DcChgrErrInfo = std::move(_x.BMS_DcChgrErrInfo);
		BMS_DcChgVoltMax = std::move(_x.BMS_DcChgVoltMax);
		BMS_DcChgCurrMax = std::move(_x.BMS_DcChgCurrMax);
		BMS_DcChgrCurrCap = std::move(_x.BMS_DcChgrCurrCap);
		BMS_DcChgrVoltCap = std::move(_x.BMS_DcChgrVoltCap);
		BMS_ChgSOCResp = std::move(_x.BMS_ChgSOCResp);
		BMS_ChgSOCRespAvail = std::move(_x.BMS_ChgSOCRespAvail);
		BMS_BattSocDisp = std::move(_x.BMS_BattSocDisp);
		BMS_ChgComplRemHour = std::move(_x.BMS_ChgComplRemHour);
		BMS_ChgComplRemMinute = std::move(_x.BMS_ChgComplRemMinute);
		BMS_AcChgVoltMax = std::move(_x.BMS_AcChgVoltMax);
		BMS_AcChgCurrMax = std::move(_x.BMS_AcChgCurrMax);
		BMS_BattChgErr = std::move(_x.BMS_BattChgErr);
		BMS_BattChgSt = std::move(_x.BMS_BattChgSt);
		BMS_SVBD = std::move(_x.BMS_SVBD);
		BMS_HvBattCoolErrSt = std::move(_x.BMS_HvBattCoolErrSt);
		BMS_CoolantTargTemp = std::move(_x.BMS_CoolantTargTemp);
		BMS_CoolantFlowReq = std::move(_x.BMS_CoolantFlowReq);
		BMS_ThermalReq = std::move(_x.BMS_ThermalReq);
		BMS_ThermalPrioReq = std::move(_x.BMS_ThermalPrioReq);
		HVAC_PTCHeatingReq = std::move(_x.HVAC_PTCHeatingReq);
		BMC_BattCurr = std::move(_x.BMC_BattCurr);
		BMC_SupDcChgSt = std::move(_x.BMC_SupDcChgSt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(BMS_DcChargerSt);
		fun(BMS_DcChgSt);
		fun(BMS_DcChgErrLvl);
		fun(BMS_DcChgConfigSt);
		fun(BMS_DcChgInfoSt);
		fun(BMS_DiagErrCode);
		fun(BMS_DcChgrErrInfo);
		fun(BMS_DcChgVoltMax);
		fun(BMS_DcChgCurrMax);
		fun(BMS_DcChgrCurrCap);
		fun(BMS_DcChgrVoltCap);
		fun(BMS_ChgSOCResp);
		fun(BMS_ChgSOCRespAvail);
		fun(BMS_BattSocDisp);
		fun(BMS_ChgComplRemHour);
		fun(BMS_ChgComplRemMinute);
		fun(BMS_AcChgVoltMax);
		fun(BMS_AcChgCurrMax);
		fun(BMS_BattChgErr);
		fun(BMS_BattChgSt);
		fun(BMS_SVBD);
		fun(BMS_HvBattCoolErrSt);
		fun(BMS_CoolantTargTemp);
		fun(BMS_CoolantFlowReq);
		fun(BMS_ThermalReq);
		fun(BMS_ThermalPrioReq);
		fun(HVAC_PTCHeatingReq);
		fun(BMC_BattCurr);
		fun(BMC_SupDcChgSt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(BMS_DcChargerSt);
		fun(BMS_DcChgSt);
		fun(BMS_DcChgErrLvl);
		fun(BMS_DcChgConfigSt);
		fun(BMS_DcChgInfoSt);
		fun(BMS_DiagErrCode);
		fun(BMS_DcChgrErrInfo);
		fun(BMS_DcChgVoltMax);
		fun(BMS_DcChgCurrMax);
		fun(BMS_DcChgrCurrCap);
		fun(BMS_DcChgrVoltCap);
		fun(BMS_ChgSOCResp);
		fun(BMS_ChgSOCRespAvail);
		fun(BMS_BattSocDisp);
		fun(BMS_ChgComplRemHour);
		fun(BMS_ChgComplRemMinute);
		fun(BMS_AcChgVoltMax);
		fun(BMS_AcChgCurrMax);
		fun(BMS_BattChgErr);
		fun(BMS_BattChgSt);
		fun(BMS_SVBD);
		fun(BMS_HvBattCoolErrSt);
		fun(BMS_CoolantTargTemp);
		fun(BMS_CoolantFlowReq);
		fun(BMS_ThermalReq);
		fun(BMS_ThermalPrioReq);
		fun(HVAC_PTCHeatingReq);
		fun(BMC_BattCurr);
		fun(BMC_SupDcChgSt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (BMS_DcChargerSt);
		fun << (BMS_DcChgSt);
		fun << (BMS_DcChgErrLvl);
		fun << (BMS_DcChgConfigSt);
		fun << (BMS_DcChgInfoSt);
		fun << (BMS_DiagErrCode);
		fun << (BMS_DcChgrErrInfo);
		fun << (BMS_DcChgVoltMax);
		fun << (BMS_DcChgCurrMax);
		fun << (BMS_DcChgrCurrCap);
		fun << (BMS_DcChgrVoltCap);
		fun << (BMS_ChgSOCResp);
		fun << (BMS_ChgSOCRespAvail);
		fun << (BMS_BattSocDisp);
		fun << (BMS_ChgComplRemHour);
		fun << (BMS_ChgComplRemMinute);
		fun << (BMS_AcChgVoltMax);
		fun << (BMS_AcChgCurrMax);
		fun << (BMS_BattChgErr);
		fun << (BMS_BattChgSt);
		fun << (BMS_SVBD);
		fun << (BMS_HvBattCoolErrSt);
		fun << (BMS_CoolantTargTemp);
		fun << (BMS_CoolantFlowReq);
		fun << (BMS_ThermalReq);
		fun << (BMS_ThermalPrioReq);
		fun << (HVAC_PTCHeatingReq);
		fun << (BMC_BattCurr);
		fun << (BMC_SupDcChgSt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (BMS_DcChargerSt);
		fun >> (BMS_DcChgSt);
		fun >> (BMS_DcChgErrLvl);
		fun >> (BMS_DcChgConfigSt);
		fun >> (BMS_DcChgInfoSt);
		fun >> (BMS_DiagErrCode);
		fun >> (BMS_DcChgrErrInfo);
		fun >> (BMS_DcChgVoltMax);
		fun >> (BMS_DcChgCurrMax);
		fun >> (BMS_DcChgrCurrCap);
		fun >> (BMS_DcChgrVoltCap);
		fun >> (BMS_ChgSOCResp);
		fun >> (BMS_ChgSOCRespAvail);
		fun >> (BMS_BattSocDisp);
		fun >> (BMS_ChgComplRemHour);
		fun >> (BMS_ChgComplRemMinute);
		fun >> (BMS_AcChgVoltMax);
		fun >> (BMS_AcChgCurrMax);
		fun >> (BMS_BattChgErr);
		fun >> (BMS_BattChgSt);
		fun >> (BMS_SVBD);
		fun >> (BMS_HvBattCoolErrSt);
		fun >> (BMS_CoolantTargTemp);
		fun >> (BMS_CoolantFlowReq);
		fun >> (BMS_ThermalReq);
		fun >> (BMS_ThermalPrioReq);
		fun >> (HVAC_PTCHeatingReq);
		fun >> (BMC_BattCurr);
		fun >> (BMC_SupDcChgSt);
	}
};

#endif //____BDCBMS_H__
