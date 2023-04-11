#ifndef ____BDCWEATHER_H__
#define ____BDCWEATHER_H__


#include "cstdint"






struct BDCWeather {
public:
	std::uint8_t HVAC_CorrectedExterTemp;
	std::uint8_t HVAC_CorrectedExterTempVD;
	std::uint8_t WW_RainFallLevel;
	std::uint16_t AQM_PM25Data;
	std::uint16_t AQM_PM10Data;
	std::uint8_t AQM_PM25Level;
/*
	BDCWeather() {}
	~BDCWeather() {}
	BDCWeather(const std::uint8_t _HVAC_CorrectedExterTemp,const std::uint8_t _HVAC_CorrectedExterTempVD,const std::uint8_t _WW_RainFallLevel,const std::uint16_t _AQM_PM25Data,const std::uint16_t _AQM_PM10Data,const std::uint8_t _AQM_PM25Level):HVAC_CorrectedExterTemp(_HVAC_CorrectedExterTemp),HVAC_CorrectedExterTempVD(_HVAC_CorrectedExterTempVD),WW_RainFallLevel(_WW_RainFallLevel),AQM_PM25Data(_AQM_PM25Data),AQM_PM10Data(_AQM_PM10Data),AQM_PM25Level(_AQM_PM25Level) {}
	BDCWeather(const BDCWeather &_x){
		HVAC_CorrectedExterTemp = _x.HVAC_CorrectedExterTemp;
		HVAC_CorrectedExterTempVD = _x.HVAC_CorrectedExterTempVD;
		WW_RainFallLevel = _x.WW_RainFallLevel;
		AQM_PM25Data = _x.AQM_PM25Data;
		AQM_PM10Data = _x.AQM_PM10Data;
		AQM_PM25Level = _x.AQM_PM25Level;
	}
	BDCWeather(BDCWeather &&_x){
		HVAC_CorrectedExterTemp = std::move(_x.HVAC_CorrectedExterTemp);
		HVAC_CorrectedExterTempVD = std::move(_x.HVAC_CorrectedExterTempVD);
		WW_RainFallLevel = std::move(_x.WW_RainFallLevel);
		AQM_PM25Data = std::move(_x.AQM_PM25Data);
		AQM_PM10Data = std::move(_x.AQM_PM10Data);
		AQM_PM25Level = std::move(_x.AQM_PM25Level);
	}
	BDCWeather& operator=(const BDCWeather &_x){
		HVAC_CorrectedExterTemp = _x.HVAC_CorrectedExterTemp;
		HVAC_CorrectedExterTempVD = _x.HVAC_CorrectedExterTempVD;
		WW_RainFallLevel = _x.WW_RainFallLevel;
		AQM_PM25Data = _x.AQM_PM25Data;
		AQM_PM10Data = _x.AQM_PM10Data;
		AQM_PM25Level = _x.AQM_PM25Level;
		return *this;
	}
	BDCWeather& operator=(BDCWeather &&_x){
		HVAC_CorrectedExterTemp = std::move(_x.HVAC_CorrectedExterTemp);
		HVAC_CorrectedExterTempVD = std::move(_x.HVAC_CorrectedExterTempVD);
		WW_RainFallLevel = std::move(_x.WW_RainFallLevel);
		AQM_PM25Data = std::move(_x.AQM_PM25Data);
		AQM_PM10Data = std::move(_x.AQM_PM10Data);
		AQM_PM25Level = std::move(_x.AQM_PM25Level);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(HVAC_CorrectedExterTemp);
		fun(HVAC_CorrectedExterTempVD);
		fun(WW_RainFallLevel);
		fun(AQM_PM25Data);
		fun(AQM_PM10Data);
		fun(AQM_PM25Level);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(HVAC_CorrectedExterTemp);
		fun(HVAC_CorrectedExterTempVD);
		fun(WW_RainFallLevel);
		fun(AQM_PM25Data);
		fun(AQM_PM10Data);
		fun(AQM_PM25Level);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (HVAC_CorrectedExterTemp);
		fun << (HVAC_CorrectedExterTempVD);
		fun << (WW_RainFallLevel);
		fun << (AQM_PM25Data);
		fun << (AQM_PM10Data);
		fun << (AQM_PM25Level);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (HVAC_CorrectedExterTemp);
		fun >> (HVAC_CorrectedExterTempVD);
		fun >> (WW_RainFallLevel);
		fun >> (AQM_PM25Data);
		fun >> (AQM_PM10Data);
		fun >> (AQM_PM25Level);
	}
};

#endif //____BDCWEATHER_H__
