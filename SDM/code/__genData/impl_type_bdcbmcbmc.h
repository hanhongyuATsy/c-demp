#ifndef ____BDCBMCBMC_H__
#define ____BDCBMCBMC_H__


#include "cstdint"






struct BDCBMCBMC {
public:
	std::uint8_t BMC_LastTimeChgEnergy;
	std::uint32_t BMC_TotalChgEnergy;
	std::uint16_t BMC_MonShortCurr;
	std::uint8_t BMC_MonShortCurrSt;
	std::uint16_t BMC_Rcell;
	std::uint8_t BMC_SohCell;
	std::uint8_t BMC_CANWup;
	std::uint8_t BMC_AFEWakeUpRsn1;
	std::uint8_t BMC_AFEWakeUpRsn2;
	std::uint8_t BMC_AFEWakeUpRsn3;
	std::uint8_t BMC_AFEWakeUpRsn4;
	std::uint8_t BMC_AFEWakeUpRsn5;
	std::uint8_t BMC_AFEWakeUpRsn6;
	std::uint8_t BMC_AFEWakeUpRsn7;
	std::uint8_t BMC_AFEWakeUpRsn8;
	std::uint32_t BMC_SV;
	std::uint16_t BMC_BattRemainEnergy;
	std::uint8_t BMC_CumuCapaMultiples;
	std::uint32_t BMC_tiBatOff;
/*
	BDCBMCBMC() {}
	~BDCBMCBMC() {}
	BDCBMCBMC(const std::uint8_t _BMC_LastTimeChgEnergy,const std::uint32_t _BMC_TotalChgEnergy,const std::uint16_t _BMC_MonShortCurr,const std::uint8_t _BMC_MonShortCurrSt,const std::uint16_t _BMC_Rcell,const std::uint8_t _BMC_SohCell,const std::uint8_t _BMC_CANWup,const std::uint8_t _BMC_AFEWakeUpRsn1,const std::uint8_t _BMC_AFEWakeUpRsn2,const std::uint8_t _BMC_AFEWakeUpRsn3,const std::uint8_t _BMC_AFEWakeUpRsn4,const std::uint8_t _BMC_AFEWakeUpRsn5,const std::uint8_t _BMC_AFEWakeUpRsn6,const std::uint8_t _BMC_AFEWakeUpRsn7,const std::uint8_t _BMC_AFEWakeUpRsn8,const std::uint32_t _BMC_SV,const std::uint16_t _BMC_BattRemainEnergy,const std::uint8_t _BMC_CumuCapaMultiples,const std::uint32_t _BMC_tiBatOff):BMC_LastTimeChgEnergy(_BMC_LastTimeChgEnergy),BMC_TotalChgEnergy(_BMC_TotalChgEnergy),BMC_MonShortCurr(_BMC_MonShortCurr),BMC_MonShortCurrSt(_BMC_MonShortCurrSt),BMC_Rcell(_BMC_Rcell),BMC_SohCell(_BMC_SohCell),BMC_CANWup(_BMC_CANWup),BMC_AFEWakeUpRsn1(_BMC_AFEWakeUpRsn1),BMC_AFEWakeUpRsn2(_BMC_AFEWakeUpRsn2),BMC_AFEWakeUpRsn3(_BMC_AFEWakeUpRsn3),BMC_AFEWakeUpRsn4(_BMC_AFEWakeUpRsn4),BMC_AFEWakeUpRsn5(_BMC_AFEWakeUpRsn5),BMC_AFEWakeUpRsn6(_BMC_AFEWakeUpRsn6),BMC_AFEWakeUpRsn7(_BMC_AFEWakeUpRsn7),BMC_AFEWakeUpRsn8(_BMC_AFEWakeUpRsn8),BMC_SV(_BMC_SV),BMC_BattRemainEnergy(_BMC_BattRemainEnergy),BMC_CumuCapaMultiples(_BMC_CumuCapaMultiples),BMC_tiBatOff(_BMC_tiBatOff) {}
	BDCBMCBMC(const BDCBMCBMC &_x){
		BMC_LastTimeChgEnergy = _x.BMC_LastTimeChgEnergy;
		BMC_TotalChgEnergy = _x.BMC_TotalChgEnergy;
		BMC_MonShortCurr = _x.BMC_MonShortCurr;
		BMC_MonShortCurrSt = _x.BMC_MonShortCurrSt;
		BMC_Rcell = _x.BMC_Rcell;
		BMC_SohCell = _x.BMC_SohCell;
		BMC_CANWup = _x.BMC_CANWup;
		BMC_AFEWakeUpRsn1 = _x.BMC_AFEWakeUpRsn1;
		BMC_AFEWakeUpRsn2 = _x.BMC_AFEWakeUpRsn2;
		BMC_AFEWakeUpRsn3 = _x.BMC_AFEWakeUpRsn3;
		BMC_AFEWakeUpRsn4 = _x.BMC_AFEWakeUpRsn4;
		BMC_AFEWakeUpRsn5 = _x.BMC_AFEWakeUpRsn5;
		BMC_AFEWakeUpRsn6 = _x.BMC_AFEWakeUpRsn6;
		BMC_AFEWakeUpRsn7 = _x.BMC_AFEWakeUpRsn7;
		BMC_AFEWakeUpRsn8 = _x.BMC_AFEWakeUpRsn8;
		BMC_SV = _x.BMC_SV;
		BMC_BattRemainEnergy = _x.BMC_BattRemainEnergy;
		BMC_CumuCapaMultiples = _x.BMC_CumuCapaMultiples;
		BMC_tiBatOff = _x.BMC_tiBatOff;
	}
	BDCBMCBMC(BDCBMCBMC &&_x){
		BMC_LastTimeChgEnergy = std::move(_x.BMC_LastTimeChgEnergy);
		BMC_TotalChgEnergy = std::move(_x.BMC_TotalChgEnergy);
		BMC_MonShortCurr = std::move(_x.BMC_MonShortCurr);
		BMC_MonShortCurrSt = std::move(_x.BMC_MonShortCurrSt);
		BMC_Rcell = std::move(_x.BMC_Rcell);
		BMC_SohCell = std::move(_x.BMC_SohCell);
		BMC_CANWup = std::move(_x.BMC_CANWup);
		BMC_AFEWakeUpRsn1 = std::move(_x.BMC_AFEWakeUpRsn1);
		BMC_AFEWakeUpRsn2 = std::move(_x.BMC_AFEWakeUpRsn2);
		BMC_AFEWakeUpRsn3 = std::move(_x.BMC_AFEWakeUpRsn3);
		BMC_AFEWakeUpRsn4 = std::move(_x.BMC_AFEWakeUpRsn4);
		BMC_AFEWakeUpRsn5 = std::move(_x.BMC_AFEWakeUpRsn5);
		BMC_AFEWakeUpRsn6 = std::move(_x.BMC_AFEWakeUpRsn6);
		BMC_AFEWakeUpRsn7 = std::move(_x.BMC_AFEWakeUpRsn7);
		BMC_AFEWakeUpRsn8 = std::move(_x.BMC_AFEWakeUpRsn8);
		BMC_SV = std::move(_x.BMC_SV);
		BMC_BattRemainEnergy = std::move(_x.BMC_BattRemainEnergy);
		BMC_CumuCapaMultiples = std::move(_x.BMC_CumuCapaMultiples);
		BMC_tiBatOff = std::move(_x.BMC_tiBatOff);
	}
	BDCBMCBMC& operator=(const BDCBMCBMC &_x){
		BMC_LastTimeChgEnergy = _x.BMC_LastTimeChgEnergy;
		BMC_TotalChgEnergy = _x.BMC_TotalChgEnergy;
		BMC_MonShortCurr = _x.BMC_MonShortCurr;
		BMC_MonShortCurrSt = _x.BMC_MonShortCurrSt;
		BMC_Rcell = _x.BMC_Rcell;
		BMC_SohCell = _x.BMC_SohCell;
		BMC_CANWup = _x.BMC_CANWup;
		BMC_AFEWakeUpRsn1 = _x.BMC_AFEWakeUpRsn1;
		BMC_AFEWakeUpRsn2 = _x.BMC_AFEWakeUpRsn2;
		BMC_AFEWakeUpRsn3 = _x.BMC_AFEWakeUpRsn3;
		BMC_AFEWakeUpRsn4 = _x.BMC_AFEWakeUpRsn4;
		BMC_AFEWakeUpRsn5 = _x.BMC_AFEWakeUpRsn5;
		BMC_AFEWakeUpRsn6 = _x.BMC_AFEWakeUpRsn6;
		BMC_AFEWakeUpRsn7 = _x.BMC_AFEWakeUpRsn7;
		BMC_AFEWakeUpRsn8 = _x.BMC_AFEWakeUpRsn8;
		BMC_SV = _x.BMC_SV;
		BMC_BattRemainEnergy = _x.BMC_BattRemainEnergy;
		BMC_CumuCapaMultiples = _x.BMC_CumuCapaMultiples;
		BMC_tiBatOff = _x.BMC_tiBatOff;
		return *this;
	}
	BDCBMCBMC& operator=(BDCBMCBMC &&_x){
		BMC_LastTimeChgEnergy = std::move(_x.BMC_LastTimeChgEnergy);
		BMC_TotalChgEnergy = std::move(_x.BMC_TotalChgEnergy);
		BMC_MonShortCurr = std::move(_x.BMC_MonShortCurr);
		BMC_MonShortCurrSt = std::move(_x.BMC_MonShortCurrSt);
		BMC_Rcell = std::move(_x.BMC_Rcell);
		BMC_SohCell = std::move(_x.BMC_SohCell);
		BMC_CANWup = std::move(_x.BMC_CANWup);
		BMC_AFEWakeUpRsn1 = std::move(_x.BMC_AFEWakeUpRsn1);
		BMC_AFEWakeUpRsn2 = std::move(_x.BMC_AFEWakeUpRsn2);
		BMC_AFEWakeUpRsn3 = std::move(_x.BMC_AFEWakeUpRsn3);
		BMC_AFEWakeUpRsn4 = std::move(_x.BMC_AFEWakeUpRsn4);
		BMC_AFEWakeUpRsn5 = std::move(_x.BMC_AFEWakeUpRsn5);
		BMC_AFEWakeUpRsn6 = std::move(_x.BMC_AFEWakeUpRsn6);
		BMC_AFEWakeUpRsn7 = std::move(_x.BMC_AFEWakeUpRsn7);
		BMC_AFEWakeUpRsn8 = std::move(_x.BMC_AFEWakeUpRsn8);
		BMC_SV = std::move(_x.BMC_SV);
		BMC_BattRemainEnergy = std::move(_x.BMC_BattRemainEnergy);
		BMC_CumuCapaMultiples = std::move(_x.BMC_CumuCapaMultiples);
		BMC_tiBatOff = std::move(_x.BMC_tiBatOff);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(BMC_LastTimeChgEnergy);
		fun(BMC_TotalChgEnergy);
		fun(BMC_MonShortCurr);
		fun(BMC_MonShortCurrSt);
		fun(BMC_Rcell);
		fun(BMC_SohCell);
		fun(BMC_CANWup);
		fun(BMC_AFEWakeUpRsn1);
		fun(BMC_AFEWakeUpRsn2);
		fun(BMC_AFEWakeUpRsn3);
		fun(BMC_AFEWakeUpRsn4);
		fun(BMC_AFEWakeUpRsn5);
		fun(BMC_AFEWakeUpRsn6);
		fun(BMC_AFEWakeUpRsn7);
		fun(BMC_AFEWakeUpRsn8);
		fun(BMC_SV);
		fun(BMC_BattRemainEnergy);
		fun(BMC_CumuCapaMultiples);
		fun(BMC_tiBatOff);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(BMC_LastTimeChgEnergy);
		fun(BMC_TotalChgEnergy);
		fun(BMC_MonShortCurr);
		fun(BMC_MonShortCurrSt);
		fun(BMC_Rcell);
		fun(BMC_SohCell);
		fun(BMC_CANWup);
		fun(BMC_AFEWakeUpRsn1);
		fun(BMC_AFEWakeUpRsn2);
		fun(BMC_AFEWakeUpRsn3);
		fun(BMC_AFEWakeUpRsn4);
		fun(BMC_AFEWakeUpRsn5);
		fun(BMC_AFEWakeUpRsn6);
		fun(BMC_AFEWakeUpRsn7);
		fun(BMC_AFEWakeUpRsn8);
		fun(BMC_SV);
		fun(BMC_BattRemainEnergy);
		fun(BMC_CumuCapaMultiples);
		fun(BMC_tiBatOff);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (BMC_LastTimeChgEnergy);
		fun << (BMC_TotalChgEnergy);
		fun << (BMC_MonShortCurr);
		fun << (BMC_MonShortCurrSt);
		fun << (BMC_Rcell);
		fun << (BMC_SohCell);
		fun << (BMC_CANWup);
		fun << (BMC_AFEWakeUpRsn1);
		fun << (BMC_AFEWakeUpRsn2);
		fun << (BMC_AFEWakeUpRsn3);
		fun << (BMC_AFEWakeUpRsn4);
		fun << (BMC_AFEWakeUpRsn5);
		fun << (BMC_AFEWakeUpRsn6);
		fun << (BMC_AFEWakeUpRsn7);
		fun << (BMC_AFEWakeUpRsn8);
		fun << (BMC_SV);
		fun << (BMC_BattRemainEnergy);
		fun << (BMC_CumuCapaMultiples);
		fun << (BMC_tiBatOff);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (BMC_LastTimeChgEnergy);
		fun >> (BMC_TotalChgEnergy);
		fun >> (BMC_MonShortCurr);
		fun >> (BMC_MonShortCurrSt);
		fun >> (BMC_Rcell);
		fun >> (BMC_SohCell);
		fun >> (BMC_CANWup);
		fun >> (BMC_AFEWakeUpRsn1);
		fun >> (BMC_AFEWakeUpRsn2);
		fun >> (BMC_AFEWakeUpRsn3);
		fun >> (BMC_AFEWakeUpRsn4);
		fun >> (BMC_AFEWakeUpRsn5);
		fun >> (BMC_AFEWakeUpRsn6);
		fun >> (BMC_AFEWakeUpRsn7);
		fun >> (BMC_AFEWakeUpRsn8);
		fun >> (BMC_SV);
		fun >> (BMC_BattRemainEnergy);
		fun >> (BMC_CumuCapaMultiples);
		fun >> (BMC_tiBatOff);
	}
};

#endif //____BDCBMCBMC_H__
