#ifndef ____BDCUINM1_H__
#define ____BDCUINM1_H__


#include "cstdint"






struct BDCUINM1 {
public:
	std::uint8_t IPDS_BrakeSwNormalClosePowerSt;
	std::uint8_t UINM_BrakeSWSt;
	std::uint8_t UINM_BrakeSWNOSt;
	std::uint8_t UINM_BrakeSWNCSt;
	std::uint16_t CCUBattLocalVoltValue;
	std::uint8_t CCUBatt1LocalVoltStatus;
	std::uint8_t CCUBatt2LocalVoltStatus;
	std::uint8_t UINM_CrashOutputSt_HS;
/*
	BDCUINM1() {}
	~BDCUINM1() {}
	BDCUINM1(const std::uint8_t _IPDS_BrakeSwNormalClosePowerSt,const std::uint8_t _UINM_BrakeSWSt,const std::uint8_t _UINM_BrakeSWNOSt,const std::uint8_t _UINM_BrakeSWNCSt,const std::uint16_t _CCUBattLocalVoltValue,const std::uint8_t _CCUBatt1LocalVoltStatus,const std::uint8_t _CCUBatt2LocalVoltStatus,const std::uint8_t _UINM_CrashOutputSt_HS):IPDS_BrakeSwNormalClosePowerSt(_IPDS_BrakeSwNormalClosePowerSt),UINM_BrakeSWSt(_UINM_BrakeSWSt),UINM_BrakeSWNOSt(_UINM_BrakeSWNOSt),UINM_BrakeSWNCSt(_UINM_BrakeSWNCSt),CCUBattLocalVoltValue(_CCUBattLocalVoltValue),CCUBatt1LocalVoltStatus(_CCUBatt1LocalVoltStatus),CCUBatt2LocalVoltStatus(_CCUBatt2LocalVoltStatus),UINM_CrashOutputSt_HS(_UINM_CrashOutputSt_HS) {}
	BDCUINM1(const BDCUINM1 &_x){
		IPDS_BrakeSwNormalClosePowerSt = _x.IPDS_BrakeSwNormalClosePowerSt;
		UINM_BrakeSWSt = _x.UINM_BrakeSWSt;
		UINM_BrakeSWNOSt = _x.UINM_BrakeSWNOSt;
		UINM_BrakeSWNCSt = _x.UINM_BrakeSWNCSt;
		CCUBattLocalVoltValue = _x.CCUBattLocalVoltValue;
		CCUBatt1LocalVoltStatus = _x.CCUBatt1LocalVoltStatus;
		CCUBatt2LocalVoltStatus = _x.CCUBatt2LocalVoltStatus;
		UINM_CrashOutputSt_HS = _x.UINM_CrashOutputSt_HS;
	}
	BDCUINM1(BDCUINM1 &&_x){
		IPDS_BrakeSwNormalClosePowerSt = std::move(_x.IPDS_BrakeSwNormalClosePowerSt);
		UINM_BrakeSWSt = std::move(_x.UINM_BrakeSWSt);
		UINM_BrakeSWNOSt = std::move(_x.UINM_BrakeSWNOSt);
		UINM_BrakeSWNCSt = std::move(_x.UINM_BrakeSWNCSt);
		CCUBattLocalVoltValue = std::move(_x.CCUBattLocalVoltValue);
		CCUBatt1LocalVoltStatus = std::move(_x.CCUBatt1LocalVoltStatus);
		CCUBatt2LocalVoltStatus = std::move(_x.CCUBatt2LocalVoltStatus);
		UINM_CrashOutputSt_HS = std::move(_x.UINM_CrashOutputSt_HS);
	}
	BDCUINM1& operator=(const BDCUINM1 &_x){
		IPDS_BrakeSwNormalClosePowerSt = _x.IPDS_BrakeSwNormalClosePowerSt;
		UINM_BrakeSWSt = _x.UINM_BrakeSWSt;
		UINM_BrakeSWNOSt = _x.UINM_BrakeSWNOSt;
		UINM_BrakeSWNCSt = _x.UINM_BrakeSWNCSt;
		CCUBattLocalVoltValue = _x.CCUBattLocalVoltValue;
		CCUBatt1LocalVoltStatus = _x.CCUBatt1LocalVoltStatus;
		CCUBatt2LocalVoltStatus = _x.CCUBatt2LocalVoltStatus;
		UINM_CrashOutputSt_HS = _x.UINM_CrashOutputSt_HS;
		return *this;
	}
	BDCUINM1& operator=(BDCUINM1 &&_x){
		IPDS_BrakeSwNormalClosePowerSt = std::move(_x.IPDS_BrakeSwNormalClosePowerSt);
		UINM_BrakeSWSt = std::move(_x.UINM_BrakeSWSt);
		UINM_BrakeSWNOSt = std::move(_x.UINM_BrakeSWNOSt);
		UINM_BrakeSWNCSt = std::move(_x.UINM_BrakeSWNCSt);
		CCUBattLocalVoltValue = std::move(_x.CCUBattLocalVoltValue);
		CCUBatt1LocalVoltStatus = std::move(_x.CCUBatt1LocalVoltStatus);
		CCUBatt2LocalVoltStatus = std::move(_x.CCUBatt2LocalVoltStatus);
		UINM_CrashOutputSt_HS = std::move(_x.UINM_CrashOutputSt_HS);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(IPDS_BrakeSwNormalClosePowerSt);
		fun(UINM_BrakeSWSt);
		fun(UINM_BrakeSWNOSt);
		fun(UINM_BrakeSWNCSt);
		fun(CCUBattLocalVoltValue);
		fun(CCUBatt1LocalVoltStatus);
		fun(CCUBatt2LocalVoltStatus);
		fun(UINM_CrashOutputSt_HS);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(IPDS_BrakeSwNormalClosePowerSt);
		fun(UINM_BrakeSWSt);
		fun(UINM_BrakeSWNOSt);
		fun(UINM_BrakeSWNCSt);
		fun(CCUBattLocalVoltValue);
		fun(CCUBatt1LocalVoltStatus);
		fun(CCUBatt2LocalVoltStatus);
		fun(UINM_CrashOutputSt_HS);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (IPDS_BrakeSwNormalClosePowerSt);
		fun << (UINM_BrakeSWSt);
		fun << (UINM_BrakeSWNOSt);
		fun << (UINM_BrakeSWNCSt);
		fun << (CCUBattLocalVoltValue);
		fun << (CCUBatt1LocalVoltStatus);
		fun << (CCUBatt2LocalVoltStatus);
		fun << (UINM_CrashOutputSt_HS);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (IPDS_BrakeSwNormalClosePowerSt);
		fun >> (UINM_BrakeSWSt);
		fun >> (UINM_BrakeSWNOSt);
		fun >> (UINM_BrakeSWNCSt);
		fun >> (CCUBattLocalVoltValue);
		fun >> (CCUBatt1LocalVoltStatus);
		fun >> (CCUBatt2LocalVoltStatus);
		fun >> (UINM_CrashOutputSt_HS);
	}
};

#endif //____BDCUINM1_H__
