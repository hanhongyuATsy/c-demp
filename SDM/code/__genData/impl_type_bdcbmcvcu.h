#ifndef ____BDCBMCVCU_H__
#define ____BDCBMCVCU_H__


#include "cstdint"






struct BDCBMCVCU {
public:
	std::uint8_t VCU_ValvePositionSet;
	std::uint8_t VCU_SolenoidModeSet;
	std::uint8_t VCU_BatteryLoopPumpSpdSet;
	std::uint8_t VCU_MotorLoopPumpSpdSet;
	std::uint8_t VCU_FAN_SpdSet;
/*
	BDCBMCVCU() {}
	~BDCBMCVCU() {}
	BDCBMCVCU(const std::uint8_t _VCU_ValvePositionSet,const std::uint8_t _VCU_SolenoidModeSet,const std::uint8_t _VCU_BatteryLoopPumpSpdSet,const std::uint8_t _VCU_MotorLoopPumpSpdSet,const std::uint8_t _VCU_FAN_SpdSet):VCU_ValvePositionSet(_VCU_ValvePositionSet),VCU_SolenoidModeSet(_VCU_SolenoidModeSet),VCU_BatteryLoopPumpSpdSet(_VCU_BatteryLoopPumpSpdSet),VCU_MotorLoopPumpSpdSet(_VCU_MotorLoopPumpSpdSet),VCU_FAN_SpdSet(_VCU_FAN_SpdSet) {}
	BDCBMCVCU(const BDCBMCVCU &_x){
		VCU_ValvePositionSet = _x.VCU_ValvePositionSet;
		VCU_SolenoidModeSet = _x.VCU_SolenoidModeSet;
		VCU_BatteryLoopPumpSpdSet = _x.VCU_BatteryLoopPumpSpdSet;
		VCU_MotorLoopPumpSpdSet = _x.VCU_MotorLoopPumpSpdSet;
		VCU_FAN_SpdSet = _x.VCU_FAN_SpdSet;
	}
	BDCBMCVCU(BDCBMCVCU &&_x){
		VCU_ValvePositionSet = std::move(_x.VCU_ValvePositionSet);
		VCU_SolenoidModeSet = std::move(_x.VCU_SolenoidModeSet);
		VCU_BatteryLoopPumpSpdSet = std::move(_x.VCU_BatteryLoopPumpSpdSet);
		VCU_MotorLoopPumpSpdSet = std::move(_x.VCU_MotorLoopPumpSpdSet);
		VCU_FAN_SpdSet = std::move(_x.VCU_FAN_SpdSet);
	}
	BDCBMCVCU& operator=(const BDCBMCVCU &_x){
		VCU_ValvePositionSet = _x.VCU_ValvePositionSet;
		VCU_SolenoidModeSet = _x.VCU_SolenoidModeSet;
		VCU_BatteryLoopPumpSpdSet = _x.VCU_BatteryLoopPumpSpdSet;
		VCU_MotorLoopPumpSpdSet = _x.VCU_MotorLoopPumpSpdSet;
		VCU_FAN_SpdSet = _x.VCU_FAN_SpdSet;
		return *this;
	}
	BDCBMCVCU& operator=(BDCBMCVCU &&_x){
		VCU_ValvePositionSet = std::move(_x.VCU_ValvePositionSet);
		VCU_SolenoidModeSet = std::move(_x.VCU_SolenoidModeSet);
		VCU_BatteryLoopPumpSpdSet = std::move(_x.VCU_BatteryLoopPumpSpdSet);
		VCU_MotorLoopPumpSpdSet = std::move(_x.VCU_MotorLoopPumpSpdSet);
		VCU_FAN_SpdSet = std::move(_x.VCU_FAN_SpdSet);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(VCU_ValvePositionSet);
		fun(VCU_SolenoidModeSet);
		fun(VCU_BatteryLoopPumpSpdSet);
		fun(VCU_MotorLoopPumpSpdSet);
		fun(VCU_FAN_SpdSet);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(VCU_ValvePositionSet);
		fun(VCU_SolenoidModeSet);
		fun(VCU_BatteryLoopPumpSpdSet);
		fun(VCU_MotorLoopPumpSpdSet);
		fun(VCU_FAN_SpdSet);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (VCU_ValvePositionSet);
		fun << (VCU_SolenoidModeSet);
		fun << (VCU_BatteryLoopPumpSpdSet);
		fun << (VCU_MotorLoopPumpSpdSet);
		fun << (VCU_FAN_SpdSet);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (VCU_ValvePositionSet);
		fun >> (VCU_SolenoidModeSet);
		fun >> (VCU_BatteryLoopPumpSpdSet);
		fun >> (VCU_MotorLoopPumpSpdSet);
		fun >> (VCU_FAN_SpdSet);
	}
};

#endif //____BDCBMCVCU_H__
