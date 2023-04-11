#ifndef ____BDCTHERM_H__
#define ____BDCTHERM_H__


#include "cstdint"






struct BDCTherm {
public:
	std::uint8_t BMC_InslSt;
	std::uint8_t BMC_FaultLampInd;
	std::uint8_t BMC_InslStChkMsgWarn;
	std::uint8_t BMC_DataQuickUploadReq;
	std::uint16_t BMC_CellVoltMax;
	std::uint16_t BMC_CellVoltMin;
	std::uint16_t BMC_InslRes;
	std::uint16_t BMC_BattSoe;
	std::uint16_t BMC_CellVoltAvg;
	std::uint16_t BMC_ChgCurrMax_Peak;
	std::uint16_t BMC_ChgCurrMax_Contns;
	std::uint8_t BMC_ThermalRunawayTCBD;
	std::uint8_t BMC_ThermalRunawayTS1BD;
	std::uint8_t BMC_ThermalRunawayTS2BD;
	std::uint8_t BMC_ThermalRunawayTS3BD;
	std::uint8_t BMC_ThermalRunawayTS4BD;
	std::uint8_t BMC_ThermalRunawayTS5BD;
	std::uint8_t BMC_ThermalRunawayTS6BD;
	std::uint8_t BMC_ThermalRunawayTS7BD;
	std::uint8_t BMC_ThermalRunawayTS8BD;
	std::uint8_t BMC_ThermalRunawayTS9BD;
	std::uint8_t BMC_ThermalRunawayTS10BD;
	std::uint16_t BMC_HVBattElec;
	std::uint8_t BMC_ChgFulNotice;
	std::uint8_t BMC_HealCheckReq;
	std::uint8_t BMC_HealCheckNotice;
	std::uint16_t BMC_Counter;
	std::uint8_t BMC_NrCellVoltMax;
	std::uint8_t BMC_NrCellVoltMin;
/*
	BDCTherm() {}
	~BDCTherm() {}
	BDCTherm(const std::uint8_t _BMC_InslSt,const std::uint8_t _BMC_FaultLampInd,const std::uint8_t _BMC_InslStChkMsgWarn,const std::uint8_t _BMC_DataQuickUploadReq,const std::uint16_t _BMC_CellVoltMax,const std::uint16_t _BMC_CellVoltMin,const std::uint16_t _BMC_InslRes,const std::uint16_t _BMC_BattSoe,const std::uint16_t _BMC_CellVoltAvg,const std::uint16_t _BMC_ChgCurrMax_Peak,const std::uint16_t _BMC_ChgCurrMax_Contns,const std::uint8_t _BMC_ThermalRunawayTCBD,const std::uint8_t _BMC_ThermalRunawayTS1BD,const std::uint8_t _BMC_ThermalRunawayTS2BD,const std::uint8_t _BMC_ThermalRunawayTS3BD,const std::uint8_t _BMC_ThermalRunawayTS4BD,const std::uint8_t _BMC_ThermalRunawayTS5BD,const std::uint8_t _BMC_ThermalRunawayTS6BD,const std::uint8_t _BMC_ThermalRunawayTS7BD,const std::uint8_t _BMC_ThermalRunawayTS8BD,const std::uint8_t _BMC_ThermalRunawayTS9BD,const std::uint8_t _BMC_ThermalRunawayTS10BD,const std::uint16_t _BMC_HVBattElec,const std::uint8_t _BMC_ChgFulNotice,const std::uint8_t _BMC_HealCheckReq,const std::uint8_t _BMC_HealCheckNotice,const std::uint16_t _BMC_Counter,const std::uint8_t _BMC_NrCellVoltMax,const std::uint8_t _BMC_NrCellVoltMin):BMC_InslSt(_BMC_InslSt),BMC_FaultLampInd(_BMC_FaultLampInd),BMC_InslStChkMsgWarn(_BMC_InslStChkMsgWarn),BMC_DataQuickUploadReq(_BMC_DataQuickUploadReq),BMC_CellVoltMax(_BMC_CellVoltMax),BMC_CellVoltMin(_BMC_CellVoltMin),BMC_InslRes(_BMC_InslRes),BMC_BattSoe(_BMC_BattSoe),BMC_CellVoltAvg(_BMC_CellVoltAvg),BMC_ChgCurrMax_Peak(_BMC_ChgCurrMax_Peak),BMC_ChgCurrMax_Contns(_BMC_ChgCurrMax_Contns),BMC_ThermalRunawayTCBD(_BMC_ThermalRunawayTCBD),BMC_ThermalRunawayTS1BD(_BMC_ThermalRunawayTS1BD),BMC_ThermalRunawayTS2BD(_BMC_ThermalRunawayTS2BD),BMC_ThermalRunawayTS3BD(_BMC_ThermalRunawayTS3BD),BMC_ThermalRunawayTS4BD(_BMC_ThermalRunawayTS4BD),BMC_ThermalRunawayTS5BD(_BMC_ThermalRunawayTS5BD),BMC_ThermalRunawayTS6BD(_BMC_ThermalRunawayTS6BD),BMC_ThermalRunawayTS7BD(_BMC_ThermalRunawayTS7BD),BMC_ThermalRunawayTS8BD(_BMC_ThermalRunawayTS8BD),BMC_ThermalRunawayTS9BD(_BMC_ThermalRunawayTS9BD),BMC_ThermalRunawayTS10BD(_BMC_ThermalRunawayTS10BD),BMC_HVBattElec(_BMC_HVBattElec),BMC_ChgFulNotice(_BMC_ChgFulNotice),BMC_HealCheckReq(_BMC_HealCheckReq),BMC_HealCheckNotice(_BMC_HealCheckNotice),BMC_Counter(_BMC_Counter),BMC_NrCellVoltMax(_BMC_NrCellVoltMax),BMC_NrCellVoltMin(_BMC_NrCellVoltMin) {}
	BDCTherm(const BDCTherm &_x){
		BMC_InslSt = _x.BMC_InslSt;
		BMC_FaultLampInd = _x.BMC_FaultLampInd;
		BMC_InslStChkMsgWarn = _x.BMC_InslStChkMsgWarn;
		BMC_DataQuickUploadReq = _x.BMC_DataQuickUploadReq;
		BMC_CellVoltMax = _x.BMC_CellVoltMax;
		BMC_CellVoltMin = _x.BMC_CellVoltMin;
		BMC_InslRes = _x.BMC_InslRes;
		BMC_BattSoe = _x.BMC_BattSoe;
		BMC_CellVoltAvg = _x.BMC_CellVoltAvg;
		BMC_ChgCurrMax_Peak = _x.BMC_ChgCurrMax_Peak;
		BMC_ChgCurrMax_Contns = _x.BMC_ChgCurrMax_Contns;
		BMC_ThermalRunawayTCBD = _x.BMC_ThermalRunawayTCBD;
		BMC_ThermalRunawayTS1BD = _x.BMC_ThermalRunawayTS1BD;
		BMC_ThermalRunawayTS2BD = _x.BMC_ThermalRunawayTS2BD;
		BMC_ThermalRunawayTS3BD = _x.BMC_ThermalRunawayTS3BD;
		BMC_ThermalRunawayTS4BD = _x.BMC_ThermalRunawayTS4BD;
		BMC_ThermalRunawayTS5BD = _x.BMC_ThermalRunawayTS5BD;
		BMC_ThermalRunawayTS6BD = _x.BMC_ThermalRunawayTS6BD;
		BMC_ThermalRunawayTS7BD = _x.BMC_ThermalRunawayTS7BD;
		BMC_ThermalRunawayTS8BD = _x.BMC_ThermalRunawayTS8BD;
		BMC_ThermalRunawayTS9BD = _x.BMC_ThermalRunawayTS9BD;
		BMC_ThermalRunawayTS10BD = _x.BMC_ThermalRunawayTS10BD;
		BMC_HVBattElec = _x.BMC_HVBattElec;
		BMC_ChgFulNotice = _x.BMC_ChgFulNotice;
		BMC_HealCheckReq = _x.BMC_HealCheckReq;
		BMC_HealCheckNotice = _x.BMC_HealCheckNotice;
		BMC_Counter = _x.BMC_Counter;
		BMC_NrCellVoltMax = _x.BMC_NrCellVoltMax;
		BMC_NrCellVoltMin = _x.BMC_NrCellVoltMin;
	}
	BDCTherm(BDCTherm &&_x){
		BMC_InslSt = std::move(_x.BMC_InslSt);
		BMC_FaultLampInd = std::move(_x.BMC_FaultLampInd);
		BMC_InslStChkMsgWarn = std::move(_x.BMC_InslStChkMsgWarn);
		BMC_DataQuickUploadReq = std::move(_x.BMC_DataQuickUploadReq);
		BMC_CellVoltMax = std::move(_x.BMC_CellVoltMax);
		BMC_CellVoltMin = std::move(_x.BMC_CellVoltMin);
		BMC_InslRes = std::move(_x.BMC_InslRes);
		BMC_BattSoe = std::move(_x.BMC_BattSoe);
		BMC_CellVoltAvg = std::move(_x.BMC_CellVoltAvg);
		BMC_ChgCurrMax_Peak = std::move(_x.BMC_ChgCurrMax_Peak);
		BMC_ChgCurrMax_Contns = std::move(_x.BMC_ChgCurrMax_Contns);
		BMC_ThermalRunawayTCBD = std::move(_x.BMC_ThermalRunawayTCBD);
		BMC_ThermalRunawayTS1BD = std::move(_x.BMC_ThermalRunawayTS1BD);
		BMC_ThermalRunawayTS2BD = std::move(_x.BMC_ThermalRunawayTS2BD);
		BMC_ThermalRunawayTS3BD = std::move(_x.BMC_ThermalRunawayTS3BD);
		BMC_ThermalRunawayTS4BD = std::move(_x.BMC_ThermalRunawayTS4BD);
		BMC_ThermalRunawayTS5BD = std::move(_x.BMC_ThermalRunawayTS5BD);
		BMC_ThermalRunawayTS6BD = std::move(_x.BMC_ThermalRunawayTS6BD);
		BMC_ThermalRunawayTS7BD = std::move(_x.BMC_ThermalRunawayTS7BD);
		BMC_ThermalRunawayTS8BD = std::move(_x.BMC_ThermalRunawayTS8BD);
		BMC_ThermalRunawayTS9BD = std::move(_x.BMC_ThermalRunawayTS9BD);
		BMC_ThermalRunawayTS10BD = std::move(_x.BMC_ThermalRunawayTS10BD);
		BMC_HVBattElec = std::move(_x.BMC_HVBattElec);
		BMC_ChgFulNotice = std::move(_x.BMC_ChgFulNotice);
		BMC_HealCheckReq = std::move(_x.BMC_HealCheckReq);
		BMC_HealCheckNotice = std::move(_x.BMC_HealCheckNotice);
		BMC_Counter = std::move(_x.BMC_Counter);
		BMC_NrCellVoltMax = std::move(_x.BMC_NrCellVoltMax);
		BMC_NrCellVoltMin = std::move(_x.BMC_NrCellVoltMin);
	}
	BDCTherm& operator=(const BDCTherm &_x){
		BMC_InslSt = _x.BMC_InslSt;
		BMC_FaultLampInd = _x.BMC_FaultLampInd;
		BMC_InslStChkMsgWarn = _x.BMC_InslStChkMsgWarn;
		BMC_DataQuickUploadReq = _x.BMC_DataQuickUploadReq;
		BMC_CellVoltMax = _x.BMC_CellVoltMax;
		BMC_CellVoltMin = _x.BMC_CellVoltMin;
		BMC_InslRes = _x.BMC_InslRes;
		BMC_BattSoe = _x.BMC_BattSoe;
		BMC_CellVoltAvg = _x.BMC_CellVoltAvg;
		BMC_ChgCurrMax_Peak = _x.BMC_ChgCurrMax_Peak;
		BMC_ChgCurrMax_Contns = _x.BMC_ChgCurrMax_Contns;
		BMC_ThermalRunawayTCBD = _x.BMC_ThermalRunawayTCBD;
		BMC_ThermalRunawayTS1BD = _x.BMC_ThermalRunawayTS1BD;
		BMC_ThermalRunawayTS2BD = _x.BMC_ThermalRunawayTS2BD;
		BMC_ThermalRunawayTS3BD = _x.BMC_ThermalRunawayTS3BD;
		BMC_ThermalRunawayTS4BD = _x.BMC_ThermalRunawayTS4BD;
		BMC_ThermalRunawayTS5BD = _x.BMC_ThermalRunawayTS5BD;
		BMC_ThermalRunawayTS6BD = _x.BMC_ThermalRunawayTS6BD;
		BMC_ThermalRunawayTS7BD = _x.BMC_ThermalRunawayTS7BD;
		BMC_ThermalRunawayTS8BD = _x.BMC_ThermalRunawayTS8BD;
		BMC_ThermalRunawayTS9BD = _x.BMC_ThermalRunawayTS9BD;
		BMC_ThermalRunawayTS10BD = _x.BMC_ThermalRunawayTS10BD;
		BMC_HVBattElec = _x.BMC_HVBattElec;
		BMC_ChgFulNotice = _x.BMC_ChgFulNotice;
		BMC_HealCheckReq = _x.BMC_HealCheckReq;
		BMC_HealCheckNotice = _x.BMC_HealCheckNotice;
		BMC_Counter = _x.BMC_Counter;
		BMC_NrCellVoltMax = _x.BMC_NrCellVoltMax;
		BMC_NrCellVoltMin = _x.BMC_NrCellVoltMin;
		return *this;
	}
	BDCTherm& operator=(BDCTherm &&_x){
		BMC_InslSt = std::move(_x.BMC_InslSt);
		BMC_FaultLampInd = std::move(_x.BMC_FaultLampInd);
		BMC_InslStChkMsgWarn = std::move(_x.BMC_InslStChkMsgWarn);
		BMC_DataQuickUploadReq = std::move(_x.BMC_DataQuickUploadReq);
		BMC_CellVoltMax = std::move(_x.BMC_CellVoltMax);
		BMC_CellVoltMin = std::move(_x.BMC_CellVoltMin);
		BMC_InslRes = std::move(_x.BMC_InslRes);
		BMC_BattSoe = std::move(_x.BMC_BattSoe);
		BMC_CellVoltAvg = std::move(_x.BMC_CellVoltAvg);
		BMC_ChgCurrMax_Peak = std::move(_x.BMC_ChgCurrMax_Peak);
		BMC_ChgCurrMax_Contns = std::move(_x.BMC_ChgCurrMax_Contns);
		BMC_ThermalRunawayTCBD = std::move(_x.BMC_ThermalRunawayTCBD);
		BMC_ThermalRunawayTS1BD = std::move(_x.BMC_ThermalRunawayTS1BD);
		BMC_ThermalRunawayTS2BD = std::move(_x.BMC_ThermalRunawayTS2BD);
		BMC_ThermalRunawayTS3BD = std::move(_x.BMC_ThermalRunawayTS3BD);
		BMC_ThermalRunawayTS4BD = std::move(_x.BMC_ThermalRunawayTS4BD);
		BMC_ThermalRunawayTS5BD = std::move(_x.BMC_ThermalRunawayTS5BD);
		BMC_ThermalRunawayTS6BD = std::move(_x.BMC_ThermalRunawayTS6BD);
		BMC_ThermalRunawayTS7BD = std::move(_x.BMC_ThermalRunawayTS7BD);
		BMC_ThermalRunawayTS8BD = std::move(_x.BMC_ThermalRunawayTS8BD);
		BMC_ThermalRunawayTS9BD = std::move(_x.BMC_ThermalRunawayTS9BD);
		BMC_ThermalRunawayTS10BD = std::move(_x.BMC_ThermalRunawayTS10BD);
		BMC_HVBattElec = std::move(_x.BMC_HVBattElec);
		BMC_ChgFulNotice = std::move(_x.BMC_ChgFulNotice);
		BMC_HealCheckReq = std::move(_x.BMC_HealCheckReq);
		BMC_HealCheckNotice = std::move(_x.BMC_HealCheckNotice);
		BMC_Counter = std::move(_x.BMC_Counter);
		BMC_NrCellVoltMax = std::move(_x.BMC_NrCellVoltMax);
		BMC_NrCellVoltMin = std::move(_x.BMC_NrCellVoltMin);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(BMC_InslSt);
		fun(BMC_FaultLampInd);
		fun(BMC_InslStChkMsgWarn);
		fun(BMC_DataQuickUploadReq);
		fun(BMC_CellVoltMax);
		fun(BMC_CellVoltMin);
		fun(BMC_InslRes);
		fun(BMC_BattSoe);
		fun(BMC_CellVoltAvg);
		fun(BMC_ChgCurrMax_Peak);
		fun(BMC_ChgCurrMax_Contns);
		fun(BMC_ThermalRunawayTCBD);
		fun(BMC_ThermalRunawayTS1BD);
		fun(BMC_ThermalRunawayTS2BD);
		fun(BMC_ThermalRunawayTS3BD);
		fun(BMC_ThermalRunawayTS4BD);
		fun(BMC_ThermalRunawayTS5BD);
		fun(BMC_ThermalRunawayTS6BD);
		fun(BMC_ThermalRunawayTS7BD);
		fun(BMC_ThermalRunawayTS8BD);
		fun(BMC_ThermalRunawayTS9BD);
		fun(BMC_ThermalRunawayTS10BD);
		fun(BMC_HVBattElec);
		fun(BMC_ChgFulNotice);
		fun(BMC_HealCheckReq);
		fun(BMC_HealCheckNotice);
		fun(BMC_Counter);
		fun(BMC_NrCellVoltMax);
		fun(BMC_NrCellVoltMin);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(BMC_InslSt);
		fun(BMC_FaultLampInd);
		fun(BMC_InslStChkMsgWarn);
		fun(BMC_DataQuickUploadReq);
		fun(BMC_CellVoltMax);
		fun(BMC_CellVoltMin);
		fun(BMC_InslRes);
		fun(BMC_BattSoe);
		fun(BMC_CellVoltAvg);
		fun(BMC_ChgCurrMax_Peak);
		fun(BMC_ChgCurrMax_Contns);
		fun(BMC_ThermalRunawayTCBD);
		fun(BMC_ThermalRunawayTS1BD);
		fun(BMC_ThermalRunawayTS2BD);
		fun(BMC_ThermalRunawayTS3BD);
		fun(BMC_ThermalRunawayTS4BD);
		fun(BMC_ThermalRunawayTS5BD);
		fun(BMC_ThermalRunawayTS6BD);
		fun(BMC_ThermalRunawayTS7BD);
		fun(BMC_ThermalRunawayTS8BD);
		fun(BMC_ThermalRunawayTS9BD);
		fun(BMC_ThermalRunawayTS10BD);
		fun(BMC_HVBattElec);
		fun(BMC_ChgFulNotice);
		fun(BMC_HealCheckReq);
		fun(BMC_HealCheckNotice);
		fun(BMC_Counter);
		fun(BMC_NrCellVoltMax);
		fun(BMC_NrCellVoltMin);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (BMC_InslSt);
		fun << (BMC_FaultLampInd);
		fun << (BMC_InslStChkMsgWarn);
		fun << (BMC_DataQuickUploadReq);
		fun << (BMC_CellVoltMax);
		fun << (BMC_CellVoltMin);
		fun << (BMC_InslRes);
		fun << (BMC_BattSoe);
		fun << (BMC_CellVoltAvg);
		fun << (BMC_ChgCurrMax_Peak);
		fun << (BMC_ChgCurrMax_Contns);
		fun << (BMC_ThermalRunawayTCBD);
		fun << (BMC_ThermalRunawayTS1BD);
		fun << (BMC_ThermalRunawayTS2BD);
		fun << (BMC_ThermalRunawayTS3BD);
		fun << (BMC_ThermalRunawayTS4BD);
		fun << (BMC_ThermalRunawayTS5BD);
		fun << (BMC_ThermalRunawayTS6BD);
		fun << (BMC_ThermalRunawayTS7BD);
		fun << (BMC_ThermalRunawayTS8BD);
		fun << (BMC_ThermalRunawayTS9BD);
		fun << (BMC_ThermalRunawayTS10BD);
		fun << (BMC_HVBattElec);
		fun << (BMC_ChgFulNotice);
		fun << (BMC_HealCheckReq);
		fun << (BMC_HealCheckNotice);
		fun << (BMC_Counter);
		fun << (BMC_NrCellVoltMax);
		fun << (BMC_NrCellVoltMin);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (BMC_InslSt);
		fun >> (BMC_FaultLampInd);
		fun >> (BMC_InslStChkMsgWarn);
		fun >> (BMC_DataQuickUploadReq);
		fun >> (BMC_CellVoltMax);
		fun >> (BMC_CellVoltMin);
		fun >> (BMC_InslRes);
		fun >> (BMC_BattSoe);
		fun >> (BMC_CellVoltAvg);
		fun >> (BMC_ChgCurrMax_Peak);
		fun >> (BMC_ChgCurrMax_Contns);
		fun >> (BMC_ThermalRunawayTCBD);
		fun >> (BMC_ThermalRunawayTS1BD);
		fun >> (BMC_ThermalRunawayTS2BD);
		fun >> (BMC_ThermalRunawayTS3BD);
		fun >> (BMC_ThermalRunawayTS4BD);
		fun >> (BMC_ThermalRunawayTS5BD);
		fun >> (BMC_ThermalRunawayTS6BD);
		fun >> (BMC_ThermalRunawayTS7BD);
		fun >> (BMC_ThermalRunawayTS8BD);
		fun >> (BMC_ThermalRunawayTS9BD);
		fun >> (BMC_ThermalRunawayTS10BD);
		fun >> (BMC_HVBattElec);
		fun >> (BMC_ChgFulNotice);
		fun >> (BMC_HealCheckReq);
		fun >> (BMC_HealCheckNotice);
		fun >> (BMC_Counter);
		fun >> (BMC_NrCellVoltMax);
		fun >> (BMC_NrCellVoltMin);
	}
};

#endif //____BDCTHERM_H__
