#ifndef ____BDCBMCITS_H__
#define ____BDCBMCITS_H__


#include "cstdint"






struct BDCBMCITS {
public:
	std::uint8_t ITS_MotorPumpPcbTemp;
	std::uint8_t ITS_BatteryPumpPcbTemp;
	std::uint8_t ITS_HeaterPumpPcbTemp;
/*
	BDCBMCITS() {}
	~BDCBMCITS() {}
	BDCBMCITS(const std::uint8_t _ITS_MotorPumpPcbTemp,const std::uint8_t _ITS_BatteryPumpPcbTemp,const std::uint8_t _ITS_HeaterPumpPcbTemp):ITS_MotorPumpPcbTemp(_ITS_MotorPumpPcbTemp),ITS_BatteryPumpPcbTemp(_ITS_BatteryPumpPcbTemp),ITS_HeaterPumpPcbTemp(_ITS_HeaterPumpPcbTemp) {}
	BDCBMCITS(const BDCBMCITS &_x){
		ITS_MotorPumpPcbTemp = _x.ITS_MotorPumpPcbTemp;
		ITS_BatteryPumpPcbTemp = _x.ITS_BatteryPumpPcbTemp;
		ITS_HeaterPumpPcbTemp = _x.ITS_HeaterPumpPcbTemp;
	}
	BDCBMCITS(BDCBMCITS &&_x){
		ITS_MotorPumpPcbTemp = std::move(_x.ITS_MotorPumpPcbTemp);
		ITS_BatteryPumpPcbTemp = std::move(_x.ITS_BatteryPumpPcbTemp);
		ITS_HeaterPumpPcbTemp = std::move(_x.ITS_HeaterPumpPcbTemp);
	}
	BDCBMCITS& operator=(const BDCBMCITS &_x){
		ITS_MotorPumpPcbTemp = _x.ITS_MotorPumpPcbTemp;
		ITS_BatteryPumpPcbTemp = _x.ITS_BatteryPumpPcbTemp;
		ITS_HeaterPumpPcbTemp = _x.ITS_HeaterPumpPcbTemp;
		return *this;
	}
	BDCBMCITS& operator=(BDCBMCITS &&_x){
		ITS_MotorPumpPcbTemp = std::move(_x.ITS_MotorPumpPcbTemp);
		ITS_BatteryPumpPcbTemp = std::move(_x.ITS_BatteryPumpPcbTemp);
		ITS_HeaterPumpPcbTemp = std::move(_x.ITS_HeaterPumpPcbTemp);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(ITS_MotorPumpPcbTemp);
		fun(ITS_BatteryPumpPcbTemp);
		fun(ITS_HeaterPumpPcbTemp);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(ITS_MotorPumpPcbTemp);
		fun(ITS_BatteryPumpPcbTemp);
		fun(ITS_HeaterPumpPcbTemp);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (ITS_MotorPumpPcbTemp);
		fun << (ITS_BatteryPumpPcbTemp);
		fun << (ITS_HeaterPumpPcbTemp);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (ITS_MotorPumpPcbTemp);
		fun >> (ITS_BatteryPumpPcbTemp);
		fun >> (ITS_HeaterPumpPcbTemp);
	}
};

#endif //____BDCBMCITS_H__
