#ifndef ____BDCTIREDATA_H__
#define ____BDCTIREDATA_H__


#include "cstdint"






struct BDCTireData {
public:
	std::uint8_t TPMS_FrontLeftTireTemperature;
	std::uint8_t TPMS_FrontRightTireTemperature;
	std::uint8_t TPMS_RearRightTireTemperature;
	std::uint8_t TPMS_RearLeftTireTemperature;
	std::uint8_t TPMS_FrontLeftTirePressure;
	std::uint8_t TPMS_FrontRightTirePressure;
	std::uint8_t TPMS_RearRightTirePressure;
	std::uint8_t TPMS_RearLeftTirePressure;
/*
	BDCTireData() {}
	~BDCTireData() {}
	BDCTireData(const std::uint8_t _TPMS_FrontLeftTireTemperature,const std::uint8_t _TPMS_FrontRightTireTemperature,const std::uint8_t _TPMS_RearRightTireTemperature,const std::uint8_t _TPMS_RearLeftTireTemperature,const std::uint8_t _TPMS_FrontLeftTirePressure,const std::uint8_t _TPMS_FrontRightTirePressure,const std::uint8_t _TPMS_RearRightTirePressure,const std::uint8_t _TPMS_RearLeftTirePressure):TPMS_FrontLeftTireTemperature(_TPMS_FrontLeftTireTemperature),TPMS_FrontRightTireTemperature(_TPMS_FrontRightTireTemperature),TPMS_RearRightTireTemperature(_TPMS_RearRightTireTemperature),TPMS_RearLeftTireTemperature(_TPMS_RearLeftTireTemperature),TPMS_FrontLeftTirePressure(_TPMS_FrontLeftTirePressure),TPMS_FrontRightTirePressure(_TPMS_FrontRightTirePressure),TPMS_RearRightTirePressure(_TPMS_RearRightTirePressure),TPMS_RearLeftTirePressure(_TPMS_RearLeftTirePressure) {}
	BDCTireData(const BDCTireData &_x){
		TPMS_FrontLeftTireTemperature = _x.TPMS_FrontLeftTireTemperature;
		TPMS_FrontRightTireTemperature = _x.TPMS_FrontRightTireTemperature;
		TPMS_RearRightTireTemperature = _x.TPMS_RearRightTireTemperature;
		TPMS_RearLeftTireTemperature = _x.TPMS_RearLeftTireTemperature;
		TPMS_FrontLeftTirePressure = _x.TPMS_FrontLeftTirePressure;
		TPMS_FrontRightTirePressure = _x.TPMS_FrontRightTirePressure;
		TPMS_RearRightTirePressure = _x.TPMS_RearRightTirePressure;
		TPMS_RearLeftTirePressure = _x.TPMS_RearLeftTirePressure;
	}
	BDCTireData(BDCTireData &&_x){
		TPMS_FrontLeftTireTemperature = std::move(_x.TPMS_FrontLeftTireTemperature);
		TPMS_FrontRightTireTemperature = std::move(_x.TPMS_FrontRightTireTemperature);
		TPMS_RearRightTireTemperature = std::move(_x.TPMS_RearRightTireTemperature);
		TPMS_RearLeftTireTemperature = std::move(_x.TPMS_RearLeftTireTemperature);
		TPMS_FrontLeftTirePressure = std::move(_x.TPMS_FrontLeftTirePressure);
		TPMS_FrontRightTirePressure = std::move(_x.TPMS_FrontRightTirePressure);
		TPMS_RearRightTirePressure = std::move(_x.TPMS_RearRightTirePressure);
		TPMS_RearLeftTirePressure = std::move(_x.TPMS_RearLeftTirePressure);
	}
	BDCTireData& operator=(const BDCTireData &_x){
		TPMS_FrontLeftTireTemperature = _x.TPMS_FrontLeftTireTemperature;
		TPMS_FrontRightTireTemperature = _x.TPMS_FrontRightTireTemperature;
		TPMS_RearRightTireTemperature = _x.TPMS_RearRightTireTemperature;
		TPMS_RearLeftTireTemperature = _x.TPMS_RearLeftTireTemperature;
		TPMS_FrontLeftTirePressure = _x.TPMS_FrontLeftTirePressure;
		TPMS_FrontRightTirePressure = _x.TPMS_FrontRightTirePressure;
		TPMS_RearRightTirePressure = _x.TPMS_RearRightTirePressure;
		TPMS_RearLeftTirePressure = _x.TPMS_RearLeftTirePressure;
		return *this;
	}
	BDCTireData& operator=(BDCTireData &&_x){
		TPMS_FrontLeftTireTemperature = std::move(_x.TPMS_FrontLeftTireTemperature);
		TPMS_FrontRightTireTemperature = std::move(_x.TPMS_FrontRightTireTemperature);
		TPMS_RearRightTireTemperature = std::move(_x.TPMS_RearRightTireTemperature);
		TPMS_RearLeftTireTemperature = std::move(_x.TPMS_RearLeftTireTemperature);
		TPMS_FrontLeftTirePressure = std::move(_x.TPMS_FrontLeftTirePressure);
		TPMS_FrontRightTirePressure = std::move(_x.TPMS_FrontRightTirePressure);
		TPMS_RearRightTirePressure = std::move(_x.TPMS_RearRightTirePressure);
		TPMS_RearLeftTirePressure = std::move(_x.TPMS_RearLeftTirePressure);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(TPMS_FrontLeftTireTemperature);
		fun(TPMS_FrontRightTireTemperature);
		fun(TPMS_RearRightTireTemperature);
		fun(TPMS_RearLeftTireTemperature);
		fun(TPMS_FrontLeftTirePressure);
		fun(TPMS_FrontRightTirePressure);
		fun(TPMS_RearRightTirePressure);
		fun(TPMS_RearLeftTirePressure);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(TPMS_FrontLeftTireTemperature);
		fun(TPMS_FrontRightTireTemperature);
		fun(TPMS_RearRightTireTemperature);
		fun(TPMS_RearLeftTireTemperature);
		fun(TPMS_FrontLeftTirePressure);
		fun(TPMS_FrontRightTirePressure);
		fun(TPMS_RearRightTirePressure);
		fun(TPMS_RearLeftTirePressure);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (TPMS_FrontLeftTireTemperature);
		fun << (TPMS_FrontRightTireTemperature);
		fun << (TPMS_RearRightTireTemperature);
		fun << (TPMS_RearLeftTireTemperature);
		fun << (TPMS_FrontLeftTirePressure);
		fun << (TPMS_FrontRightTirePressure);
		fun << (TPMS_RearRightTirePressure);
		fun << (TPMS_RearLeftTirePressure);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (TPMS_FrontLeftTireTemperature);
		fun >> (TPMS_FrontRightTireTemperature);
		fun >> (TPMS_RearRightTireTemperature);
		fun >> (TPMS_RearLeftTireTemperature);
		fun >> (TPMS_FrontLeftTirePressure);
		fun >> (TPMS_FrontRightTirePressure);
		fun >> (TPMS_RearRightTirePressure);
		fun >> (TPMS_RearLeftTirePressure);
	}
};

#endif //____BDCTIREDATA_H__
