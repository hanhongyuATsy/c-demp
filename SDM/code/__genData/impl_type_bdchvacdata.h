#ifndef ____BDCHVACDATA_H__
#define ____BDCHVACDATA_H__


#include "cstdint"






struct BDCHVACData {
public:
	std::uint8_t HVAC_DriverTempSelect;
	std::uint8_t HVAC_PsnTempSelect;
	std::uint8_t HVAC_WindExitSpd;
	std::uint8_t HVAC_CorrectedCabinTemp;
	std::uint8_t HVAC_CorrectedCabinTempVD;
	std::uint16_t HVAC_RawCabinTemp;
/*
	BDCHVACData() {}
	~BDCHVACData() {}
	BDCHVACData(const std::uint8_t _HVAC_DriverTempSelect,const std::uint8_t _HVAC_PsnTempSelect,const std::uint8_t _HVAC_WindExitSpd,const std::uint8_t _HVAC_CorrectedCabinTemp,const std::uint8_t _HVAC_CorrectedCabinTempVD,const std::uint16_t _HVAC_RawCabinTemp):HVAC_DriverTempSelect(_HVAC_DriverTempSelect),HVAC_PsnTempSelect(_HVAC_PsnTempSelect),HVAC_WindExitSpd(_HVAC_WindExitSpd),HVAC_CorrectedCabinTemp(_HVAC_CorrectedCabinTemp),HVAC_CorrectedCabinTempVD(_HVAC_CorrectedCabinTempVD),HVAC_RawCabinTemp(_HVAC_RawCabinTemp) {}
	BDCHVACData(const BDCHVACData &_x){
		HVAC_DriverTempSelect = _x.HVAC_DriverTempSelect;
		HVAC_PsnTempSelect = _x.HVAC_PsnTempSelect;
		HVAC_WindExitSpd = _x.HVAC_WindExitSpd;
		HVAC_CorrectedCabinTemp = _x.HVAC_CorrectedCabinTemp;
		HVAC_CorrectedCabinTempVD = _x.HVAC_CorrectedCabinTempVD;
		HVAC_RawCabinTemp = _x.HVAC_RawCabinTemp;
	}
	BDCHVACData(BDCHVACData &&_x){
		HVAC_DriverTempSelect = std::move(_x.HVAC_DriverTempSelect);
		HVAC_PsnTempSelect = std::move(_x.HVAC_PsnTempSelect);
		HVAC_WindExitSpd = std::move(_x.HVAC_WindExitSpd);
		HVAC_CorrectedCabinTemp = std::move(_x.HVAC_CorrectedCabinTemp);
		HVAC_CorrectedCabinTempVD = std::move(_x.HVAC_CorrectedCabinTempVD);
		HVAC_RawCabinTemp = std::move(_x.HVAC_RawCabinTemp);
	}
	BDCHVACData& operator=(const BDCHVACData &_x){
		HVAC_DriverTempSelect = _x.HVAC_DriverTempSelect;
		HVAC_PsnTempSelect = _x.HVAC_PsnTempSelect;
		HVAC_WindExitSpd = _x.HVAC_WindExitSpd;
		HVAC_CorrectedCabinTemp = _x.HVAC_CorrectedCabinTemp;
		HVAC_CorrectedCabinTempVD = _x.HVAC_CorrectedCabinTempVD;
		HVAC_RawCabinTemp = _x.HVAC_RawCabinTemp;
		return *this;
	}
	BDCHVACData& operator=(BDCHVACData &&_x){
		HVAC_DriverTempSelect = std::move(_x.HVAC_DriverTempSelect);
		HVAC_PsnTempSelect = std::move(_x.HVAC_PsnTempSelect);
		HVAC_WindExitSpd = std::move(_x.HVAC_WindExitSpd);
		HVAC_CorrectedCabinTemp = std::move(_x.HVAC_CorrectedCabinTemp);
		HVAC_CorrectedCabinTempVD = std::move(_x.HVAC_CorrectedCabinTempVD);
		HVAC_RawCabinTemp = std::move(_x.HVAC_RawCabinTemp);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(HVAC_DriverTempSelect);
		fun(HVAC_PsnTempSelect);
		fun(HVAC_WindExitSpd);
		fun(HVAC_CorrectedCabinTemp);
		fun(HVAC_CorrectedCabinTempVD);
		fun(HVAC_RawCabinTemp);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(HVAC_DriverTempSelect);
		fun(HVAC_PsnTempSelect);
		fun(HVAC_WindExitSpd);
		fun(HVAC_CorrectedCabinTemp);
		fun(HVAC_CorrectedCabinTempVD);
		fun(HVAC_RawCabinTemp);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (HVAC_DriverTempSelect);
		fun << (HVAC_PsnTempSelect);
		fun << (HVAC_WindExitSpd);
		fun << (HVAC_CorrectedCabinTemp);
		fun << (HVAC_CorrectedCabinTempVD);
		fun << (HVAC_RawCabinTemp);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (HVAC_DriverTempSelect);
		fun >> (HVAC_PsnTempSelect);
		fun >> (HVAC_WindExitSpd);
		fun >> (HVAC_CorrectedCabinTemp);
		fun >> (HVAC_CorrectedCabinTempVD);
		fun >> (HVAC_RawCabinTemp);
	}
};

#endif //____BDCHVACDATA_H__
