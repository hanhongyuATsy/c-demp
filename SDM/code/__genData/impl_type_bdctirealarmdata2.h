#ifndef ____BDCTIREALARMDATA2_H__
#define ____BDCTIREALARMDATA2_H__


#include "cstdint"






struct BDCTireAlarmData2 {
public:
	std::uint8_t TPMS_FrontLeftTireLowPressure;
	std::uint8_t TPMS_FrontRightTireLowPressure;
	std::uint8_t TPMS_RearRightTireLowPressure;
	std::uint8_t TPMS_RearLeftTireLowPressure;
	std::uint8_t TPMS_FrontLeftTireHighPressure;
	std::uint8_t TPMS_FrontRightTireHighPressure;
	std::uint8_t TPMS_RearRightTireHighPressure;
	std::uint8_t TPMS_RearLeftTireHighPressure;
	std::uint8_t TPMS_FrontLeftTireDelaPressure;
	std::uint8_t TPMS_FrontRightTireDelaPressure;
	std::uint8_t TPMS_RearRightTireDelaPressure;
	std::uint8_t TPMS_RearLeftTireDelaPressure;
	std::uint8_t TPMS_FrontLeftTireHighTemperature;
	std::uint8_t TPMS_FrontRightTireHighTemperature;
	std::uint8_t TPMS_RearRightTireHighTemperature;
	std::uint8_t TPMS_RearLeftTireHighTemperature;
/*
	BDCTireAlarmData2() {}
	~BDCTireAlarmData2() {}
	BDCTireAlarmData2(const std::uint8_t _TPMS_FrontLeftTireLowPressure,const std::uint8_t _TPMS_FrontRightTireLowPressure,const std::uint8_t _TPMS_RearRightTireLowPressure,const std::uint8_t _TPMS_RearLeftTireLowPressure,const std::uint8_t _TPMS_FrontLeftTireHighPressure,const std::uint8_t _TPMS_FrontRightTireHighPressure,const std::uint8_t _TPMS_RearRightTireHighPressure,const std::uint8_t _TPMS_RearLeftTireHighPressure,const std::uint8_t _TPMS_FrontLeftTireDelaPressure,const std::uint8_t _TPMS_FrontRightTireDelaPressure,const std::uint8_t _TPMS_RearRightTireDelaPressure,const std::uint8_t _TPMS_RearLeftTireDelaPressure,const std::uint8_t _TPMS_FrontLeftTireHighTemperature,const std::uint8_t _TPMS_FrontRightTireHighTemperature,const std::uint8_t _TPMS_RearRightTireHighTemperature,const std::uint8_t _TPMS_RearLeftTireHighTemperature):TPMS_FrontLeftTireLowPressure(_TPMS_FrontLeftTireLowPressure),TPMS_FrontRightTireLowPressure(_TPMS_FrontRightTireLowPressure),TPMS_RearRightTireLowPressure(_TPMS_RearRightTireLowPressure),TPMS_RearLeftTireLowPressure(_TPMS_RearLeftTireLowPressure),TPMS_FrontLeftTireHighPressure(_TPMS_FrontLeftTireHighPressure),TPMS_FrontRightTireHighPressure(_TPMS_FrontRightTireHighPressure),TPMS_RearRightTireHighPressure(_TPMS_RearRightTireHighPressure),TPMS_RearLeftTireHighPressure(_TPMS_RearLeftTireHighPressure),TPMS_FrontLeftTireDelaPressure(_TPMS_FrontLeftTireDelaPressure),TPMS_FrontRightTireDelaPressure(_TPMS_FrontRightTireDelaPressure),TPMS_RearRightTireDelaPressure(_TPMS_RearRightTireDelaPressure),TPMS_RearLeftTireDelaPressure(_TPMS_RearLeftTireDelaPressure),TPMS_FrontLeftTireHighTemperature(_TPMS_FrontLeftTireHighTemperature),TPMS_FrontRightTireHighTemperature(_TPMS_FrontRightTireHighTemperature),TPMS_RearRightTireHighTemperature(_TPMS_RearRightTireHighTemperature),TPMS_RearLeftTireHighTemperature(_TPMS_RearLeftTireHighTemperature) {}
	BDCTireAlarmData2(const BDCTireAlarmData2 &_x){
		TPMS_FrontLeftTireLowPressure = _x.TPMS_FrontLeftTireLowPressure;
		TPMS_FrontRightTireLowPressure = _x.TPMS_FrontRightTireLowPressure;
		TPMS_RearRightTireLowPressure = _x.TPMS_RearRightTireLowPressure;
		TPMS_RearLeftTireLowPressure = _x.TPMS_RearLeftTireLowPressure;
		TPMS_FrontLeftTireHighPressure = _x.TPMS_FrontLeftTireHighPressure;
		TPMS_FrontRightTireHighPressure = _x.TPMS_FrontRightTireHighPressure;
		TPMS_RearRightTireHighPressure = _x.TPMS_RearRightTireHighPressure;
		TPMS_RearLeftTireHighPressure = _x.TPMS_RearLeftTireHighPressure;
		TPMS_FrontLeftTireDelaPressure = _x.TPMS_FrontLeftTireDelaPressure;
		TPMS_FrontRightTireDelaPressure = _x.TPMS_FrontRightTireDelaPressure;
		TPMS_RearRightTireDelaPressure = _x.TPMS_RearRightTireDelaPressure;
		TPMS_RearLeftTireDelaPressure = _x.TPMS_RearLeftTireDelaPressure;
		TPMS_FrontLeftTireHighTemperature = _x.TPMS_FrontLeftTireHighTemperature;
		TPMS_FrontRightTireHighTemperature = _x.TPMS_FrontRightTireHighTemperature;
		TPMS_RearRightTireHighTemperature = _x.TPMS_RearRightTireHighTemperature;
		TPMS_RearLeftTireHighTemperature = _x.TPMS_RearLeftTireHighTemperature;
	}
	BDCTireAlarmData2(BDCTireAlarmData2 &&_x){
		TPMS_FrontLeftTireLowPressure = std::move(_x.TPMS_FrontLeftTireLowPressure);
		TPMS_FrontRightTireLowPressure = std::move(_x.TPMS_FrontRightTireLowPressure);
		TPMS_RearRightTireLowPressure = std::move(_x.TPMS_RearRightTireLowPressure);
		TPMS_RearLeftTireLowPressure = std::move(_x.TPMS_RearLeftTireLowPressure);
		TPMS_FrontLeftTireHighPressure = std::move(_x.TPMS_FrontLeftTireHighPressure);
		TPMS_FrontRightTireHighPressure = std::move(_x.TPMS_FrontRightTireHighPressure);
		TPMS_RearRightTireHighPressure = std::move(_x.TPMS_RearRightTireHighPressure);
		TPMS_RearLeftTireHighPressure = std::move(_x.TPMS_RearLeftTireHighPressure);
		TPMS_FrontLeftTireDelaPressure = std::move(_x.TPMS_FrontLeftTireDelaPressure);
		TPMS_FrontRightTireDelaPressure = std::move(_x.TPMS_FrontRightTireDelaPressure);
		TPMS_RearRightTireDelaPressure = std::move(_x.TPMS_RearRightTireDelaPressure);
		TPMS_RearLeftTireDelaPressure = std::move(_x.TPMS_RearLeftTireDelaPressure);
		TPMS_FrontLeftTireHighTemperature = std::move(_x.TPMS_FrontLeftTireHighTemperature);
		TPMS_FrontRightTireHighTemperature = std::move(_x.TPMS_FrontRightTireHighTemperature);
		TPMS_RearRightTireHighTemperature = std::move(_x.TPMS_RearRightTireHighTemperature);
		TPMS_RearLeftTireHighTemperature = std::move(_x.TPMS_RearLeftTireHighTemperature);
	}
	BDCTireAlarmData2& operator=(const BDCTireAlarmData2 &_x){
		TPMS_FrontLeftTireLowPressure = _x.TPMS_FrontLeftTireLowPressure;
		TPMS_FrontRightTireLowPressure = _x.TPMS_FrontRightTireLowPressure;
		TPMS_RearRightTireLowPressure = _x.TPMS_RearRightTireLowPressure;
		TPMS_RearLeftTireLowPressure = _x.TPMS_RearLeftTireLowPressure;
		TPMS_FrontLeftTireHighPressure = _x.TPMS_FrontLeftTireHighPressure;
		TPMS_FrontRightTireHighPressure = _x.TPMS_FrontRightTireHighPressure;
		TPMS_RearRightTireHighPressure = _x.TPMS_RearRightTireHighPressure;
		TPMS_RearLeftTireHighPressure = _x.TPMS_RearLeftTireHighPressure;
		TPMS_FrontLeftTireDelaPressure = _x.TPMS_FrontLeftTireDelaPressure;
		TPMS_FrontRightTireDelaPressure = _x.TPMS_FrontRightTireDelaPressure;
		TPMS_RearRightTireDelaPressure = _x.TPMS_RearRightTireDelaPressure;
		TPMS_RearLeftTireDelaPressure = _x.TPMS_RearLeftTireDelaPressure;
		TPMS_FrontLeftTireHighTemperature = _x.TPMS_FrontLeftTireHighTemperature;
		TPMS_FrontRightTireHighTemperature = _x.TPMS_FrontRightTireHighTemperature;
		TPMS_RearRightTireHighTemperature = _x.TPMS_RearRightTireHighTemperature;
		TPMS_RearLeftTireHighTemperature = _x.TPMS_RearLeftTireHighTemperature;
		return *this;
	}
	BDCTireAlarmData2& operator=(BDCTireAlarmData2 &&_x){
		TPMS_FrontLeftTireLowPressure = std::move(_x.TPMS_FrontLeftTireLowPressure);
		TPMS_FrontRightTireLowPressure = std::move(_x.TPMS_FrontRightTireLowPressure);
		TPMS_RearRightTireLowPressure = std::move(_x.TPMS_RearRightTireLowPressure);
		TPMS_RearLeftTireLowPressure = std::move(_x.TPMS_RearLeftTireLowPressure);
		TPMS_FrontLeftTireHighPressure = std::move(_x.TPMS_FrontLeftTireHighPressure);
		TPMS_FrontRightTireHighPressure = std::move(_x.TPMS_FrontRightTireHighPressure);
		TPMS_RearRightTireHighPressure = std::move(_x.TPMS_RearRightTireHighPressure);
		TPMS_RearLeftTireHighPressure = std::move(_x.TPMS_RearLeftTireHighPressure);
		TPMS_FrontLeftTireDelaPressure = std::move(_x.TPMS_FrontLeftTireDelaPressure);
		TPMS_FrontRightTireDelaPressure = std::move(_x.TPMS_FrontRightTireDelaPressure);
		TPMS_RearRightTireDelaPressure = std::move(_x.TPMS_RearRightTireDelaPressure);
		TPMS_RearLeftTireDelaPressure = std::move(_x.TPMS_RearLeftTireDelaPressure);
		TPMS_FrontLeftTireHighTemperature = std::move(_x.TPMS_FrontLeftTireHighTemperature);
		TPMS_FrontRightTireHighTemperature = std::move(_x.TPMS_FrontRightTireHighTemperature);
		TPMS_RearRightTireHighTemperature = std::move(_x.TPMS_RearRightTireHighTemperature);
		TPMS_RearLeftTireHighTemperature = std::move(_x.TPMS_RearLeftTireHighTemperature);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(TPMS_FrontLeftTireLowPressure);
		fun(TPMS_FrontRightTireLowPressure);
		fun(TPMS_RearRightTireLowPressure);
		fun(TPMS_RearLeftTireLowPressure);
		fun(TPMS_FrontLeftTireHighPressure);
		fun(TPMS_FrontRightTireHighPressure);
		fun(TPMS_RearRightTireHighPressure);
		fun(TPMS_RearLeftTireHighPressure);
		fun(TPMS_FrontLeftTireDelaPressure);
		fun(TPMS_FrontRightTireDelaPressure);
		fun(TPMS_RearRightTireDelaPressure);
		fun(TPMS_RearLeftTireDelaPressure);
		fun(TPMS_FrontLeftTireHighTemperature);
		fun(TPMS_FrontRightTireHighTemperature);
		fun(TPMS_RearRightTireHighTemperature);
		fun(TPMS_RearLeftTireHighTemperature);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(TPMS_FrontLeftTireLowPressure);
		fun(TPMS_FrontRightTireLowPressure);
		fun(TPMS_RearRightTireLowPressure);
		fun(TPMS_RearLeftTireLowPressure);
		fun(TPMS_FrontLeftTireHighPressure);
		fun(TPMS_FrontRightTireHighPressure);
		fun(TPMS_RearRightTireHighPressure);
		fun(TPMS_RearLeftTireHighPressure);
		fun(TPMS_FrontLeftTireDelaPressure);
		fun(TPMS_FrontRightTireDelaPressure);
		fun(TPMS_RearRightTireDelaPressure);
		fun(TPMS_RearLeftTireDelaPressure);
		fun(TPMS_FrontLeftTireHighTemperature);
		fun(TPMS_FrontRightTireHighTemperature);
		fun(TPMS_RearRightTireHighTemperature);
		fun(TPMS_RearLeftTireHighTemperature);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (TPMS_FrontLeftTireLowPressure);
		fun << (TPMS_FrontRightTireLowPressure);
		fun << (TPMS_RearRightTireLowPressure);
		fun << (TPMS_RearLeftTireLowPressure);
		fun << (TPMS_FrontLeftTireHighPressure);
		fun << (TPMS_FrontRightTireHighPressure);
		fun << (TPMS_RearRightTireHighPressure);
		fun << (TPMS_RearLeftTireHighPressure);
		fun << (TPMS_FrontLeftTireDelaPressure);
		fun << (TPMS_FrontRightTireDelaPressure);
		fun << (TPMS_RearRightTireDelaPressure);
		fun << (TPMS_RearLeftTireDelaPressure);
		fun << (TPMS_FrontLeftTireHighTemperature);
		fun << (TPMS_FrontRightTireHighTemperature);
		fun << (TPMS_RearRightTireHighTemperature);
		fun << (TPMS_RearLeftTireHighTemperature);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (TPMS_FrontLeftTireLowPressure);
		fun >> (TPMS_FrontRightTireLowPressure);
		fun >> (TPMS_RearRightTireLowPressure);
		fun >> (TPMS_RearLeftTireLowPressure);
		fun >> (TPMS_FrontLeftTireHighPressure);
		fun >> (TPMS_FrontRightTireHighPressure);
		fun >> (TPMS_RearRightTireHighPressure);
		fun >> (TPMS_RearLeftTireHighPressure);
		fun >> (TPMS_FrontLeftTireDelaPressure);
		fun >> (TPMS_FrontRightTireDelaPressure);
		fun >> (TPMS_RearRightTireDelaPressure);
		fun >> (TPMS_RearLeftTireDelaPressure);
		fun >> (TPMS_FrontLeftTireHighTemperature);
		fun >> (TPMS_FrontRightTireHighTemperature);
		fun >> (TPMS_RearRightTireHighTemperature);
		fun >> (TPMS_RearLeftTireHighTemperature);
	}
};

#endif //____BDCTIREALARMDATA2_H__
