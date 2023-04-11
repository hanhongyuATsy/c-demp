#ifndef ____BDCTESTBMS2_H__
#define ____BDCTESTBMS2_H__


#include "cstdint"






struct BDCTestBMS2 {
public:
	std::uint16_t BMS_BattSOC;
	std::uint8_t BMS_12Volt;
	std::uint16_t BMS_DisPwrMax30s;
	std::uint16_t BMS_ChgPwrMax30s;
	std::uint16_t BMS_BattActPwr;
	std::uint8_t BMS_DisPwrLimtLvl;
	std::uint8_t BMS_ChgPwrLimtLvl;
	std::uint16_t BMS_Info1;
	std::uint16_t BMS_Info2;
	std::uint16_t BMS_ErrID1BD;
	std::uint16_t BMS_ErrID2BD;
	std::uint16_t BMS_ErrID3BD;
	std::uint16_t BMS_ErrID4BD;
	std::uint16_t BMS_ErrID5BD;
	std::uint16_t BMS_ErrID6BD;
	std::uint16_t BMS_DCChgCurrMaxPile;
	std::uint16_t BMS_DCChgVoltMaxPile;
	std::uint16_t BMS_DCVoltRx;
	std::uint16_t BMS_DCCurrRx;
	std::uint8_t BMS_DCChgFullSt;
	std::uint8_t BMS_DCChgPlugSt;
	std::uint8_t BMS_DCChgErrLvl;
	std::uint8_t BMS_DCChgConfigSt;
	std::uint8_t BMS_DCChgInfoSt;
	std::uint8_t BMS_DCChgrErrInfo;
	std::uint16_t BMS_DcChgVoltMax;
	std::uint16_t BMS_DcChgCurrMax;
/*
	BDCTestBMS2() {}
	~BDCTestBMS2() {}
	BDCTestBMS2(const std::uint16_t _BMS_BattSOC,const std::uint8_t _BMS_12Volt,const std::uint16_t _BMS_DisPwrMax30s,const std::uint16_t _BMS_ChgPwrMax30s,const std::uint16_t _BMS_BattActPwr,const std::uint8_t _BMS_DisPwrLimtLvl,const std::uint8_t _BMS_ChgPwrLimtLvl,const std::uint16_t _BMS_Info1,const std::uint16_t _BMS_Info2,const std::uint16_t _BMS_ErrID1BD,const std::uint16_t _BMS_ErrID2BD,const std::uint16_t _BMS_ErrID3BD,const std::uint16_t _BMS_ErrID4BD,const std::uint16_t _BMS_ErrID5BD,const std::uint16_t _BMS_ErrID6BD,const std::uint16_t _BMS_DCChgCurrMaxPile,const std::uint16_t _BMS_DCChgVoltMaxPile,const std::uint16_t _BMS_DCVoltRx,const std::uint16_t _BMS_DCCurrRx,const std::uint8_t _BMS_DCChgFullSt,const std::uint8_t _BMS_DCChgPlugSt,const std::uint8_t _BMS_DCChgErrLvl,const std::uint8_t _BMS_DCChgConfigSt,const std::uint8_t _BMS_DCChgInfoSt,const std::uint8_t _BMS_DCChgrErrInfo,const std::uint16_t _BMS_DcChgVoltMax,const std::uint16_t _BMS_DcChgCurrMax):BMS_BattSOC(_BMS_BattSOC),BMS_12Volt(_BMS_12Volt),BMS_DisPwrMax30s(_BMS_DisPwrMax30s),BMS_ChgPwrMax30s(_BMS_ChgPwrMax30s),BMS_BattActPwr(_BMS_BattActPwr),BMS_DisPwrLimtLvl(_BMS_DisPwrLimtLvl),BMS_ChgPwrLimtLvl(_BMS_ChgPwrLimtLvl),BMS_Info1(_BMS_Info1),BMS_Info2(_BMS_Info2),BMS_ErrID1BD(_BMS_ErrID1BD),BMS_ErrID2BD(_BMS_ErrID2BD),BMS_ErrID3BD(_BMS_ErrID3BD),BMS_ErrID4BD(_BMS_ErrID4BD),BMS_ErrID5BD(_BMS_ErrID5BD),BMS_ErrID6BD(_BMS_ErrID6BD),BMS_DCChgCurrMaxPile(_BMS_DCChgCurrMaxPile),BMS_DCChgVoltMaxPile(_BMS_DCChgVoltMaxPile),BMS_DCVoltRx(_BMS_DCVoltRx),BMS_DCCurrRx(_BMS_DCCurrRx),BMS_DCChgFullSt(_BMS_DCChgFullSt),BMS_DCChgPlugSt(_BMS_DCChgPlugSt),BMS_DCChgErrLvl(_BMS_DCChgErrLvl),BMS_DCChgConfigSt(_BMS_DCChgConfigSt),BMS_DCChgInfoSt(_BMS_DCChgInfoSt),BMS_DCChgrErrInfo(_BMS_DCChgrErrInfo),BMS_DcChgVoltMax(_BMS_DcChgVoltMax),BMS_DcChgCurrMax(_BMS_DcChgCurrMax) {}
	BDCTestBMS2(const BDCTestBMS2 &_x){
		BMS_BattSOC = _x.BMS_BattSOC;
		BMS_12Volt = _x.BMS_12Volt;
		BMS_DisPwrMax30s = _x.BMS_DisPwrMax30s;
		BMS_ChgPwrMax30s = _x.BMS_ChgPwrMax30s;
		BMS_BattActPwr = _x.BMS_BattActPwr;
		BMS_DisPwrLimtLvl = _x.BMS_DisPwrLimtLvl;
		BMS_ChgPwrLimtLvl = _x.BMS_ChgPwrLimtLvl;
		BMS_Info1 = _x.BMS_Info1;
		BMS_Info2 = _x.BMS_Info2;
		BMS_ErrID1BD = _x.BMS_ErrID1BD;
		BMS_ErrID2BD = _x.BMS_ErrID2BD;
		BMS_ErrID3BD = _x.BMS_ErrID3BD;
		BMS_ErrID4BD = _x.BMS_ErrID4BD;
		BMS_ErrID5BD = _x.BMS_ErrID5BD;
		BMS_ErrID6BD = _x.BMS_ErrID6BD;
		BMS_DCChgCurrMaxPile = _x.BMS_DCChgCurrMaxPile;
		BMS_DCChgVoltMaxPile = _x.BMS_DCChgVoltMaxPile;
		BMS_DCVoltRx = _x.BMS_DCVoltRx;
		BMS_DCCurrRx = _x.BMS_DCCurrRx;
		BMS_DCChgFullSt = _x.BMS_DCChgFullSt;
		BMS_DCChgPlugSt = _x.BMS_DCChgPlugSt;
		BMS_DCChgErrLvl = _x.BMS_DCChgErrLvl;
		BMS_DCChgConfigSt = _x.BMS_DCChgConfigSt;
		BMS_DCChgInfoSt = _x.BMS_DCChgInfoSt;
		BMS_DCChgrErrInfo = _x.BMS_DCChgrErrInfo;
		BMS_DcChgVoltMax = _x.BMS_DcChgVoltMax;
		BMS_DcChgCurrMax = _x.BMS_DcChgCurrMax;
	}
	BDCTestBMS2(BDCTestBMS2 &&_x){
		BMS_BattSOC = std::move(_x.BMS_BattSOC);
		BMS_12Volt = std::move(_x.BMS_12Volt);
		BMS_DisPwrMax30s = std::move(_x.BMS_DisPwrMax30s);
		BMS_ChgPwrMax30s = std::move(_x.BMS_ChgPwrMax30s);
		BMS_BattActPwr = std::move(_x.BMS_BattActPwr);
		BMS_DisPwrLimtLvl = std::move(_x.BMS_DisPwrLimtLvl);
		BMS_ChgPwrLimtLvl = std::move(_x.BMS_ChgPwrLimtLvl);
		BMS_Info1 = std::move(_x.BMS_Info1);
		BMS_Info2 = std::move(_x.BMS_Info2);
		BMS_ErrID1BD = std::move(_x.BMS_ErrID1BD);
		BMS_ErrID2BD = std::move(_x.BMS_ErrID2BD);
		BMS_ErrID3BD = std::move(_x.BMS_ErrID3BD);
		BMS_ErrID4BD = std::move(_x.BMS_ErrID4BD);
		BMS_ErrID5BD = std::move(_x.BMS_ErrID5BD);
		BMS_ErrID6BD = std::move(_x.BMS_ErrID6BD);
		BMS_DCChgCurrMaxPile = std::move(_x.BMS_DCChgCurrMaxPile);
		BMS_DCChgVoltMaxPile = std::move(_x.BMS_DCChgVoltMaxPile);
		BMS_DCVoltRx = std::move(_x.BMS_DCVoltRx);
		BMS_DCCurrRx = std::move(_x.BMS_DCCurrRx);
		BMS_DCChgFullSt = std::move(_x.BMS_DCChgFullSt);
		BMS_DCChgPlugSt = std::move(_x.BMS_DCChgPlugSt);
		BMS_DCChgErrLvl = std::move(_x.BMS_DCChgErrLvl);
		BMS_DCChgConfigSt = std::move(_x.BMS_DCChgConfigSt);
		BMS_DCChgInfoSt = std::move(_x.BMS_DCChgInfoSt);
		BMS_DCChgrErrInfo = std::move(_x.BMS_DCChgrErrInfo);
		BMS_DcChgVoltMax = std::move(_x.BMS_DcChgVoltMax);
		BMS_DcChgCurrMax = std::move(_x.BMS_DcChgCurrMax);
	}
	BDCTestBMS2& operator=(const BDCTestBMS2 &_x){
		BMS_BattSOC = _x.BMS_BattSOC;
		BMS_12Volt = _x.BMS_12Volt;
		BMS_DisPwrMax30s = _x.BMS_DisPwrMax30s;
		BMS_ChgPwrMax30s = _x.BMS_ChgPwrMax30s;
		BMS_BattActPwr = _x.BMS_BattActPwr;
		BMS_DisPwrLimtLvl = _x.BMS_DisPwrLimtLvl;
		BMS_ChgPwrLimtLvl = _x.BMS_ChgPwrLimtLvl;
		BMS_Info1 = _x.BMS_Info1;
		BMS_Info2 = _x.BMS_Info2;
		BMS_ErrID1BD = _x.BMS_ErrID1BD;
		BMS_ErrID2BD = _x.BMS_ErrID2BD;
		BMS_ErrID3BD = _x.BMS_ErrID3BD;
		BMS_ErrID4BD = _x.BMS_ErrID4BD;
		BMS_ErrID5BD = _x.BMS_ErrID5BD;
		BMS_ErrID6BD = _x.BMS_ErrID6BD;
		BMS_DCChgCurrMaxPile = _x.BMS_DCChgCurrMaxPile;
		BMS_DCChgVoltMaxPile = _x.BMS_DCChgVoltMaxPile;
		BMS_DCVoltRx = _x.BMS_DCVoltRx;
		BMS_DCCurrRx = _x.BMS_DCCurrRx;
		BMS_DCChgFullSt = _x.BMS_DCChgFullSt;
		BMS_DCChgPlugSt = _x.BMS_DCChgPlugSt;
		BMS_DCChgErrLvl = _x.BMS_DCChgErrLvl;
		BMS_DCChgConfigSt = _x.BMS_DCChgConfigSt;
		BMS_DCChgInfoSt = _x.BMS_DCChgInfoSt;
		BMS_DCChgrErrInfo = _x.BMS_DCChgrErrInfo;
		BMS_DcChgVoltMax = _x.BMS_DcChgVoltMax;
		BMS_DcChgCurrMax = _x.BMS_DcChgCurrMax;
		return *this;
	}
	BDCTestBMS2& operator=(BDCTestBMS2 &&_x){
		BMS_BattSOC = std::move(_x.BMS_BattSOC);
		BMS_12Volt = std::move(_x.BMS_12Volt);
		BMS_DisPwrMax30s = std::move(_x.BMS_DisPwrMax30s);
		BMS_ChgPwrMax30s = std::move(_x.BMS_ChgPwrMax30s);
		BMS_BattActPwr = std::move(_x.BMS_BattActPwr);
		BMS_DisPwrLimtLvl = std::move(_x.BMS_DisPwrLimtLvl);
		BMS_ChgPwrLimtLvl = std::move(_x.BMS_ChgPwrLimtLvl);
		BMS_Info1 = std::move(_x.BMS_Info1);
		BMS_Info2 = std::move(_x.BMS_Info2);
		BMS_ErrID1BD = std::move(_x.BMS_ErrID1BD);
		BMS_ErrID2BD = std::move(_x.BMS_ErrID2BD);
		BMS_ErrID3BD = std::move(_x.BMS_ErrID3BD);
		BMS_ErrID4BD = std::move(_x.BMS_ErrID4BD);
		BMS_ErrID5BD = std::move(_x.BMS_ErrID5BD);
		BMS_ErrID6BD = std::move(_x.BMS_ErrID6BD);
		BMS_DCChgCurrMaxPile = std::move(_x.BMS_DCChgCurrMaxPile);
		BMS_DCChgVoltMaxPile = std::move(_x.BMS_DCChgVoltMaxPile);
		BMS_DCVoltRx = std::move(_x.BMS_DCVoltRx);
		BMS_DCCurrRx = std::move(_x.BMS_DCCurrRx);
		BMS_DCChgFullSt = std::move(_x.BMS_DCChgFullSt);
		BMS_DCChgPlugSt = std::move(_x.BMS_DCChgPlugSt);
		BMS_DCChgErrLvl = std::move(_x.BMS_DCChgErrLvl);
		BMS_DCChgConfigSt = std::move(_x.BMS_DCChgConfigSt);
		BMS_DCChgInfoSt = std::move(_x.BMS_DCChgInfoSt);
		BMS_DCChgrErrInfo = std::move(_x.BMS_DCChgrErrInfo);
		BMS_DcChgVoltMax = std::move(_x.BMS_DcChgVoltMax);
		BMS_DcChgCurrMax = std::move(_x.BMS_DcChgCurrMax);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(BMS_BattSOC);
		fun(BMS_12Volt);
		fun(BMS_DisPwrMax30s);
		fun(BMS_ChgPwrMax30s);
		fun(BMS_BattActPwr);
		fun(BMS_DisPwrLimtLvl);
		fun(BMS_ChgPwrLimtLvl);
		fun(BMS_Info1);
		fun(BMS_Info2);
		fun(BMS_ErrID1BD);
		fun(BMS_ErrID2BD);
		fun(BMS_ErrID3BD);
		fun(BMS_ErrID4BD);
		fun(BMS_ErrID5BD);
		fun(BMS_ErrID6BD);
		fun(BMS_DCChgCurrMaxPile);
		fun(BMS_DCChgVoltMaxPile);
		fun(BMS_DCVoltRx);
		fun(BMS_DCCurrRx);
		fun(BMS_DCChgFullSt);
		fun(BMS_DCChgPlugSt);
		fun(BMS_DCChgErrLvl);
		fun(BMS_DCChgConfigSt);
		fun(BMS_DCChgInfoSt);
		fun(BMS_DCChgrErrInfo);
		fun(BMS_DcChgVoltMax);
		fun(BMS_DcChgCurrMax);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(BMS_BattSOC);
		fun(BMS_12Volt);
		fun(BMS_DisPwrMax30s);
		fun(BMS_ChgPwrMax30s);
		fun(BMS_BattActPwr);
		fun(BMS_DisPwrLimtLvl);
		fun(BMS_ChgPwrLimtLvl);
		fun(BMS_Info1);
		fun(BMS_Info2);
		fun(BMS_ErrID1BD);
		fun(BMS_ErrID2BD);
		fun(BMS_ErrID3BD);
		fun(BMS_ErrID4BD);
		fun(BMS_ErrID5BD);
		fun(BMS_ErrID6BD);
		fun(BMS_DCChgCurrMaxPile);
		fun(BMS_DCChgVoltMaxPile);
		fun(BMS_DCVoltRx);
		fun(BMS_DCCurrRx);
		fun(BMS_DCChgFullSt);
		fun(BMS_DCChgPlugSt);
		fun(BMS_DCChgErrLvl);
		fun(BMS_DCChgConfigSt);
		fun(BMS_DCChgInfoSt);
		fun(BMS_DCChgrErrInfo);
		fun(BMS_DcChgVoltMax);
		fun(BMS_DcChgCurrMax);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (BMS_BattSOC);
		fun << (BMS_12Volt);
		fun << (BMS_DisPwrMax30s);
		fun << (BMS_ChgPwrMax30s);
		fun << (BMS_BattActPwr);
		fun << (BMS_DisPwrLimtLvl);
		fun << (BMS_ChgPwrLimtLvl);
		fun << (BMS_Info1);
		fun << (BMS_Info2);
		fun << (BMS_ErrID1BD);
		fun << (BMS_ErrID2BD);
		fun << (BMS_ErrID3BD);
		fun << (BMS_ErrID4BD);
		fun << (BMS_ErrID5BD);
		fun << (BMS_ErrID6BD);
		fun << (BMS_DCChgCurrMaxPile);
		fun << (BMS_DCChgVoltMaxPile);
		fun << (BMS_DCVoltRx);
		fun << (BMS_DCCurrRx);
		fun << (BMS_DCChgFullSt);
		fun << (BMS_DCChgPlugSt);
		fun << (BMS_DCChgErrLvl);
		fun << (BMS_DCChgConfigSt);
		fun << (BMS_DCChgInfoSt);
		fun << (BMS_DCChgrErrInfo);
		fun << (BMS_DcChgVoltMax);
		fun << (BMS_DcChgCurrMax);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (BMS_BattSOC);
		fun >> (BMS_12Volt);
		fun >> (BMS_DisPwrMax30s);
		fun >> (BMS_ChgPwrMax30s);
		fun >> (BMS_BattActPwr);
		fun >> (BMS_DisPwrLimtLvl);
		fun >> (BMS_ChgPwrLimtLvl);
		fun >> (BMS_Info1);
		fun >> (BMS_Info2);
		fun >> (BMS_ErrID1BD);
		fun >> (BMS_ErrID2BD);
		fun >> (BMS_ErrID3BD);
		fun >> (BMS_ErrID4BD);
		fun >> (BMS_ErrID5BD);
		fun >> (BMS_ErrID6BD);
		fun >> (BMS_DCChgCurrMaxPile);
		fun >> (BMS_DCChgVoltMaxPile);
		fun >> (BMS_DCVoltRx);
		fun >> (BMS_DCCurrRx);
		fun >> (BMS_DCChgFullSt);
		fun >> (BMS_DCChgPlugSt);
		fun >> (BMS_DCChgErrLvl);
		fun >> (BMS_DCChgConfigSt);
		fun >> (BMS_DCChgInfoSt);
		fun >> (BMS_DCChgrErrInfo);
		fun >> (BMS_DcChgVoltMax);
		fun >> (BMS_DcChgCurrMax);
	}
};

#endif //____BDCTESTBMS2_H__
