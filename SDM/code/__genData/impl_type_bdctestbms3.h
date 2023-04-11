#ifndef ____BDCTESTBMS3_H__
#define ____BDCTESTBMS3_H__


#include "cstdint"






struct BDCTestBMS3 {
public:
	std::uint8_t BMS_ThermalRunawayErr;
	std::uint8_t BMS_FaultLampInd;
	std::uint8_t BMS_BattTempAvg;
	std::uint8_t BMS_ThermalReq;
	std::uint8_t BMS_LvPwrSysMsgWarn;
	std::uint8_t BMS_EngMilLampReq;
	std::uint16_t BMS_PCBTempMax;
	std::uint8_t BMS_BTEDBTInvld;
	std::uint8_t BMS_BTEDBUInvld;
	std::uint8_t BMS_BTEDBMaxTempErr;
	std::uint8_t BMS_BTEDBMinVoltErr;
	std::uint8_t BMS_BTEDBRateTempErr;
	std::uint8_t BMS_BTEDBRateVoltErr;
	std::uint8_t BMS_BTEDBTempDiffErr;
	std::uint8_t BMS_BTEDTMdulMaxFild;
	std::uint16_t BMS_BTEDUCellMinFild;
	std::uint8_t BMS_ACChgFullSt;
	std::uint8_t BMS_BattACChgErr;
	std::uint16_t BMS_BattSOE;
	std::uint8_t BMS_ThermalMsgWarn;
/*
	BDCTestBMS3() {}
	~BDCTestBMS3() {}
	BDCTestBMS3(const std::uint8_t _BMS_ThermalRunawayErr,const std::uint8_t _BMS_FaultLampInd,const std::uint8_t _BMS_BattTempAvg,const std::uint8_t _BMS_ThermalReq,const std::uint8_t _BMS_LvPwrSysMsgWarn,const std::uint8_t _BMS_EngMilLampReq,const std::uint16_t _BMS_PCBTempMax,const std::uint8_t _BMS_BTEDBTInvld,const std::uint8_t _BMS_BTEDBUInvld,const std::uint8_t _BMS_BTEDBMaxTempErr,const std::uint8_t _BMS_BTEDBMinVoltErr,const std::uint8_t _BMS_BTEDBRateTempErr,const std::uint8_t _BMS_BTEDBRateVoltErr,const std::uint8_t _BMS_BTEDBTempDiffErr,const std::uint8_t _BMS_BTEDTMdulMaxFild,const std::uint16_t _BMS_BTEDUCellMinFild,const std::uint8_t _BMS_ACChgFullSt,const std::uint8_t _BMS_BattACChgErr,const std::uint16_t _BMS_BattSOE,const std::uint8_t _BMS_ThermalMsgWarn):BMS_ThermalRunawayErr(_BMS_ThermalRunawayErr),BMS_FaultLampInd(_BMS_FaultLampInd),BMS_BattTempAvg(_BMS_BattTempAvg),BMS_ThermalReq(_BMS_ThermalReq),BMS_LvPwrSysMsgWarn(_BMS_LvPwrSysMsgWarn),BMS_EngMilLampReq(_BMS_EngMilLampReq),BMS_PCBTempMax(_BMS_PCBTempMax),BMS_BTEDBTInvld(_BMS_BTEDBTInvld),BMS_BTEDBUInvld(_BMS_BTEDBUInvld),BMS_BTEDBMaxTempErr(_BMS_BTEDBMaxTempErr),BMS_BTEDBMinVoltErr(_BMS_BTEDBMinVoltErr),BMS_BTEDBRateTempErr(_BMS_BTEDBRateTempErr),BMS_BTEDBRateVoltErr(_BMS_BTEDBRateVoltErr),BMS_BTEDBTempDiffErr(_BMS_BTEDBTempDiffErr),BMS_BTEDTMdulMaxFild(_BMS_BTEDTMdulMaxFild),BMS_BTEDUCellMinFild(_BMS_BTEDUCellMinFild),BMS_ACChgFullSt(_BMS_ACChgFullSt),BMS_BattACChgErr(_BMS_BattACChgErr),BMS_BattSOE(_BMS_BattSOE),BMS_ThermalMsgWarn(_BMS_ThermalMsgWarn) {}
	BDCTestBMS3(const BDCTestBMS3 &_x){
		BMS_ThermalRunawayErr = _x.BMS_ThermalRunawayErr;
		BMS_FaultLampInd = _x.BMS_FaultLampInd;
		BMS_BattTempAvg = _x.BMS_BattTempAvg;
		BMS_ThermalReq = _x.BMS_ThermalReq;
		BMS_LvPwrSysMsgWarn = _x.BMS_LvPwrSysMsgWarn;
		BMS_EngMilLampReq = _x.BMS_EngMilLampReq;
		BMS_PCBTempMax = _x.BMS_PCBTempMax;
		BMS_BTEDBTInvld = _x.BMS_BTEDBTInvld;
		BMS_BTEDBUInvld = _x.BMS_BTEDBUInvld;
		BMS_BTEDBMaxTempErr = _x.BMS_BTEDBMaxTempErr;
		BMS_BTEDBMinVoltErr = _x.BMS_BTEDBMinVoltErr;
		BMS_BTEDBRateTempErr = _x.BMS_BTEDBRateTempErr;
		BMS_BTEDBRateVoltErr = _x.BMS_BTEDBRateVoltErr;
		BMS_BTEDBTempDiffErr = _x.BMS_BTEDBTempDiffErr;
		BMS_BTEDTMdulMaxFild = _x.BMS_BTEDTMdulMaxFild;
		BMS_BTEDUCellMinFild = _x.BMS_BTEDUCellMinFild;
		BMS_ACChgFullSt = _x.BMS_ACChgFullSt;
		BMS_BattACChgErr = _x.BMS_BattACChgErr;
		BMS_BattSOE = _x.BMS_BattSOE;
		BMS_ThermalMsgWarn = _x.BMS_ThermalMsgWarn;
	}
	BDCTestBMS3(BDCTestBMS3 &&_x){
		BMS_ThermalRunawayErr = std::move(_x.BMS_ThermalRunawayErr);
		BMS_FaultLampInd = std::move(_x.BMS_FaultLampInd);
		BMS_BattTempAvg = std::move(_x.BMS_BattTempAvg);
		BMS_ThermalReq = std::move(_x.BMS_ThermalReq);
		BMS_LvPwrSysMsgWarn = std::move(_x.BMS_LvPwrSysMsgWarn);
		BMS_EngMilLampReq = std::move(_x.BMS_EngMilLampReq);
		BMS_PCBTempMax = std::move(_x.BMS_PCBTempMax);
		BMS_BTEDBTInvld = std::move(_x.BMS_BTEDBTInvld);
		BMS_BTEDBUInvld = std::move(_x.BMS_BTEDBUInvld);
		BMS_BTEDBMaxTempErr = std::move(_x.BMS_BTEDBMaxTempErr);
		BMS_BTEDBMinVoltErr = std::move(_x.BMS_BTEDBMinVoltErr);
		BMS_BTEDBRateTempErr = std::move(_x.BMS_BTEDBRateTempErr);
		BMS_BTEDBRateVoltErr = std::move(_x.BMS_BTEDBRateVoltErr);
		BMS_BTEDBTempDiffErr = std::move(_x.BMS_BTEDBTempDiffErr);
		BMS_BTEDTMdulMaxFild = std::move(_x.BMS_BTEDTMdulMaxFild);
		BMS_BTEDUCellMinFild = std::move(_x.BMS_BTEDUCellMinFild);
		BMS_ACChgFullSt = std::move(_x.BMS_ACChgFullSt);
		BMS_BattACChgErr = std::move(_x.BMS_BattACChgErr);
		BMS_BattSOE = std::move(_x.BMS_BattSOE);
		BMS_ThermalMsgWarn = std::move(_x.BMS_ThermalMsgWarn);
	}
	BDCTestBMS3& operator=(const BDCTestBMS3 &_x){
		BMS_ThermalRunawayErr = _x.BMS_ThermalRunawayErr;
		BMS_FaultLampInd = _x.BMS_FaultLampInd;
		BMS_BattTempAvg = _x.BMS_BattTempAvg;
		BMS_ThermalReq = _x.BMS_ThermalReq;
		BMS_LvPwrSysMsgWarn = _x.BMS_LvPwrSysMsgWarn;
		BMS_EngMilLampReq = _x.BMS_EngMilLampReq;
		BMS_PCBTempMax = _x.BMS_PCBTempMax;
		BMS_BTEDBTInvld = _x.BMS_BTEDBTInvld;
		BMS_BTEDBUInvld = _x.BMS_BTEDBUInvld;
		BMS_BTEDBMaxTempErr = _x.BMS_BTEDBMaxTempErr;
		BMS_BTEDBMinVoltErr = _x.BMS_BTEDBMinVoltErr;
		BMS_BTEDBRateTempErr = _x.BMS_BTEDBRateTempErr;
		BMS_BTEDBRateVoltErr = _x.BMS_BTEDBRateVoltErr;
		BMS_BTEDBTempDiffErr = _x.BMS_BTEDBTempDiffErr;
		BMS_BTEDTMdulMaxFild = _x.BMS_BTEDTMdulMaxFild;
		BMS_BTEDUCellMinFild = _x.BMS_BTEDUCellMinFild;
		BMS_ACChgFullSt = _x.BMS_ACChgFullSt;
		BMS_BattACChgErr = _x.BMS_BattACChgErr;
		BMS_BattSOE = _x.BMS_BattSOE;
		BMS_ThermalMsgWarn = _x.BMS_ThermalMsgWarn;
		return *this;
	}
	BDCTestBMS3& operator=(BDCTestBMS3 &&_x){
		BMS_ThermalRunawayErr = std::move(_x.BMS_ThermalRunawayErr);
		BMS_FaultLampInd = std::move(_x.BMS_FaultLampInd);
		BMS_BattTempAvg = std::move(_x.BMS_BattTempAvg);
		BMS_ThermalReq = std::move(_x.BMS_ThermalReq);
		BMS_LvPwrSysMsgWarn = std::move(_x.BMS_LvPwrSysMsgWarn);
		BMS_EngMilLampReq = std::move(_x.BMS_EngMilLampReq);
		BMS_PCBTempMax = std::move(_x.BMS_PCBTempMax);
		BMS_BTEDBTInvld = std::move(_x.BMS_BTEDBTInvld);
		BMS_BTEDBUInvld = std::move(_x.BMS_BTEDBUInvld);
		BMS_BTEDBMaxTempErr = std::move(_x.BMS_BTEDBMaxTempErr);
		BMS_BTEDBMinVoltErr = std::move(_x.BMS_BTEDBMinVoltErr);
		BMS_BTEDBRateTempErr = std::move(_x.BMS_BTEDBRateTempErr);
		BMS_BTEDBRateVoltErr = std::move(_x.BMS_BTEDBRateVoltErr);
		BMS_BTEDBTempDiffErr = std::move(_x.BMS_BTEDBTempDiffErr);
		BMS_BTEDTMdulMaxFild = std::move(_x.BMS_BTEDTMdulMaxFild);
		BMS_BTEDUCellMinFild = std::move(_x.BMS_BTEDUCellMinFild);
		BMS_ACChgFullSt = std::move(_x.BMS_ACChgFullSt);
		BMS_BattACChgErr = std::move(_x.BMS_BattACChgErr);
		BMS_BattSOE = std::move(_x.BMS_BattSOE);
		BMS_ThermalMsgWarn = std::move(_x.BMS_ThermalMsgWarn);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(BMS_ThermalRunawayErr);
		fun(BMS_FaultLampInd);
		fun(BMS_BattTempAvg);
		fun(BMS_ThermalReq);
		fun(BMS_LvPwrSysMsgWarn);
		fun(BMS_EngMilLampReq);
		fun(BMS_PCBTempMax);
		fun(BMS_BTEDBTInvld);
		fun(BMS_BTEDBUInvld);
		fun(BMS_BTEDBMaxTempErr);
		fun(BMS_BTEDBMinVoltErr);
		fun(BMS_BTEDBRateTempErr);
		fun(BMS_BTEDBRateVoltErr);
		fun(BMS_BTEDBTempDiffErr);
		fun(BMS_BTEDTMdulMaxFild);
		fun(BMS_BTEDUCellMinFild);
		fun(BMS_ACChgFullSt);
		fun(BMS_BattACChgErr);
		fun(BMS_BattSOE);
		fun(BMS_ThermalMsgWarn);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(BMS_ThermalRunawayErr);
		fun(BMS_FaultLampInd);
		fun(BMS_BattTempAvg);
		fun(BMS_ThermalReq);
		fun(BMS_LvPwrSysMsgWarn);
		fun(BMS_EngMilLampReq);
		fun(BMS_PCBTempMax);
		fun(BMS_BTEDBTInvld);
		fun(BMS_BTEDBUInvld);
		fun(BMS_BTEDBMaxTempErr);
		fun(BMS_BTEDBMinVoltErr);
		fun(BMS_BTEDBRateTempErr);
		fun(BMS_BTEDBRateVoltErr);
		fun(BMS_BTEDBTempDiffErr);
		fun(BMS_BTEDTMdulMaxFild);
		fun(BMS_BTEDUCellMinFild);
		fun(BMS_ACChgFullSt);
		fun(BMS_BattACChgErr);
		fun(BMS_BattSOE);
		fun(BMS_ThermalMsgWarn);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (BMS_ThermalRunawayErr);
		fun << (BMS_FaultLampInd);
		fun << (BMS_BattTempAvg);
		fun << (BMS_ThermalReq);
		fun << (BMS_LvPwrSysMsgWarn);
		fun << (BMS_EngMilLampReq);
		fun << (BMS_PCBTempMax);
		fun << (BMS_BTEDBTInvld);
		fun << (BMS_BTEDBUInvld);
		fun << (BMS_BTEDBMaxTempErr);
		fun << (BMS_BTEDBMinVoltErr);
		fun << (BMS_BTEDBRateTempErr);
		fun << (BMS_BTEDBRateVoltErr);
		fun << (BMS_BTEDBTempDiffErr);
		fun << (BMS_BTEDTMdulMaxFild);
		fun << (BMS_BTEDUCellMinFild);
		fun << (BMS_ACChgFullSt);
		fun << (BMS_BattACChgErr);
		fun << (BMS_BattSOE);
		fun << (BMS_ThermalMsgWarn);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (BMS_ThermalRunawayErr);
		fun >> (BMS_FaultLampInd);
		fun >> (BMS_BattTempAvg);
		fun >> (BMS_ThermalReq);
		fun >> (BMS_LvPwrSysMsgWarn);
		fun >> (BMS_EngMilLampReq);
		fun >> (BMS_PCBTempMax);
		fun >> (BMS_BTEDBTInvld);
		fun >> (BMS_BTEDBUInvld);
		fun >> (BMS_BTEDBMaxTempErr);
		fun >> (BMS_BTEDBMinVoltErr);
		fun >> (BMS_BTEDBRateTempErr);
		fun >> (BMS_BTEDBRateVoltErr);
		fun >> (BMS_BTEDBTempDiffErr);
		fun >> (BMS_BTEDTMdulMaxFild);
		fun >> (BMS_BTEDUCellMinFild);
		fun >> (BMS_ACChgFullSt);
		fun >> (BMS_BattACChgErr);
		fun >> (BMS_BattSOE);
		fun >> (BMS_ThermalMsgWarn);
	}
};

#endif //____BDCTESTBMS3_H__
