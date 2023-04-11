#ifndef ____BDCVCU_H__
#define ____BDCVCU_H__


#include "cstdint"






struct BDCVCU {
public:
	std::uint8_t VCU_AutoCalibReq_1;
	std::uint8_t VCU_TorqueBoostReq_1;
	std::uint8_t VCU_TorqueBoostReq_2;
	std::uint8_t VCU_TargetPosReq_1;
	std::uint8_t VCU_TargetPosReq_2;
	std::uint8_t VCU_AutoCalibReq_2;
	std::uint8_t VCU_ValvePositionSet;
	std::uint8_t VCU_SolenoidModeSet;
	std::uint8_t VCU_BatteryLoopPumpSpdSet;
	std::uint8_t VCU_MotorLoopPumpSpdSet;
	std::uint8_t VCU_FAN_SpdSet;
/*
	BDCVCU() {}
	~BDCVCU() {}
	BDCVCU(const std::uint8_t _VCU_AutoCalibReq_1,const std::uint8_t _VCU_TorqueBoostReq_1,const std::uint8_t _VCU_TorqueBoostReq_2,const std::uint8_t _VCU_TargetPosReq_1,const std::uint8_t _VCU_TargetPosReq_2,const std::uint8_t _VCU_AutoCalibReq_2,const std::uint8_t _VCU_ValvePositionSet,const std::uint8_t _VCU_SolenoidModeSet,const std::uint8_t _VCU_BatteryLoopPumpSpdSet,const std::uint8_t _VCU_MotorLoopPumpSpdSet,const std::uint8_t _VCU_FAN_SpdSet):VCU_AutoCalibReq_1(_VCU_AutoCalibReq_1),VCU_TorqueBoostReq_1(_VCU_TorqueBoostReq_1),VCU_TorqueBoostReq_2(_VCU_TorqueBoostReq_2),VCU_TargetPosReq_1(_VCU_TargetPosReq_1),VCU_TargetPosReq_2(_VCU_TargetPosReq_2),VCU_AutoCalibReq_2(_VCU_AutoCalibReq_2),VCU_ValvePositionSet(_VCU_ValvePositionSet),VCU_SolenoidModeSet(_VCU_SolenoidModeSet),VCU_BatteryLoopPumpSpdSet(_VCU_BatteryLoopPumpSpdSet),VCU_MotorLoopPumpSpdSet(_VCU_MotorLoopPumpSpdSet),VCU_FAN_SpdSet(_VCU_FAN_SpdSet) {}
	BDCVCU(const BDCVCU &_x){
		VCU_AutoCalibReq_1 = _x.VCU_AutoCalibReq_1;
		VCU_TorqueBoostReq_1 = _x.VCU_TorqueBoostReq_1;
		VCU_TorqueBoostReq_2 = _x.VCU_TorqueBoostReq_2;
		VCU_TargetPosReq_1 = _x.VCU_TargetPosReq_1;
		VCU_TargetPosReq_2 = _x.VCU_TargetPosReq_2;
		VCU_AutoCalibReq_2 = _x.VCU_AutoCalibReq_2;
		VCU_ValvePositionSet = _x.VCU_ValvePositionSet;
		VCU_SolenoidModeSet = _x.VCU_SolenoidModeSet;
		VCU_BatteryLoopPumpSpdSet = _x.VCU_BatteryLoopPumpSpdSet;
		VCU_MotorLoopPumpSpdSet = _x.VCU_MotorLoopPumpSpdSet;
		VCU_FAN_SpdSet = _x.VCU_FAN_SpdSet;
	}
	BDCVCU(BDCVCU &&_x){
		VCU_AutoCalibReq_1 = std::move(_x.VCU_AutoCalibReq_1);
		VCU_TorqueBoostReq_1 = std::move(_x.VCU_TorqueBoostReq_1);
		VCU_TorqueBoostReq_2 = std::move(_x.VCU_TorqueBoostReq_2);
		VCU_TargetPosReq_1 = std::move(_x.VCU_TargetPosReq_1);
		VCU_TargetPosReq_2 = std::move(_x.VCU_TargetPosReq_2);
		VCU_AutoCalibReq_2 = std::move(_x.VCU_AutoCalibReq_2);
		VCU_ValvePositionSet = std::move(_x.VCU_ValvePositionSet);
		VCU_SolenoidModeSet = std::move(_x.VCU_SolenoidModeSet);
		VCU_BatteryLoopPumpSpdSet = std::move(_x.VCU_BatteryLoopPumpSpdSet);
		VCU_MotorLoopPumpSpdSet = std::move(_x.VCU_MotorLoopPumpSpdSet);
		VCU_FAN_SpdSet = std::move(_x.VCU_FAN_SpdSet);
	}
	BDCVCU& operator=(const BDCVCU &_x){
		VCU_AutoCalibReq_1 = _x.VCU_AutoCalibReq_1;
		VCU_TorqueBoostReq_1 = _x.VCU_TorqueBoostReq_1;
		VCU_TorqueBoostReq_2 = _x.VCU_TorqueBoostReq_2;
		VCU_TargetPosReq_1 = _x.VCU_TargetPosReq_1;
		VCU_TargetPosReq_2 = _x.VCU_TargetPosReq_2;
		VCU_AutoCalibReq_2 = _x.VCU_AutoCalibReq_2;
		VCU_ValvePositionSet = _x.VCU_ValvePositionSet;
		VCU_SolenoidModeSet = _x.VCU_SolenoidModeSet;
		VCU_BatteryLoopPumpSpdSet = _x.VCU_BatteryLoopPumpSpdSet;
		VCU_MotorLoopPumpSpdSet = _x.VCU_MotorLoopPumpSpdSet;
		VCU_FAN_SpdSet = _x.VCU_FAN_SpdSet;
		return *this;
	}
	BDCVCU& operator=(BDCVCU &&_x){
		VCU_AutoCalibReq_1 = std::move(_x.VCU_AutoCalibReq_1);
		VCU_TorqueBoostReq_1 = std::move(_x.VCU_TorqueBoostReq_1);
		VCU_TorqueBoostReq_2 = std::move(_x.VCU_TorqueBoostReq_2);
		VCU_TargetPosReq_1 = std::move(_x.VCU_TargetPosReq_1);
		VCU_TargetPosReq_2 = std::move(_x.VCU_TargetPosReq_2);
		VCU_AutoCalibReq_2 = std::move(_x.VCU_AutoCalibReq_2);
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
		fun(VCU_AutoCalibReq_1);
		fun(VCU_TorqueBoostReq_1);
		fun(VCU_TorqueBoostReq_2);
		fun(VCU_TargetPosReq_1);
		fun(VCU_TargetPosReq_2);
		fun(VCU_AutoCalibReq_2);
		fun(VCU_ValvePositionSet);
		fun(VCU_SolenoidModeSet);
		fun(VCU_BatteryLoopPumpSpdSet);
		fun(VCU_MotorLoopPumpSpdSet);
		fun(VCU_FAN_SpdSet);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(VCU_AutoCalibReq_1);
		fun(VCU_TorqueBoostReq_1);
		fun(VCU_TorqueBoostReq_2);
		fun(VCU_TargetPosReq_1);
		fun(VCU_TargetPosReq_2);
		fun(VCU_AutoCalibReq_2);
		fun(VCU_ValvePositionSet);
		fun(VCU_SolenoidModeSet);
		fun(VCU_BatteryLoopPumpSpdSet);
		fun(VCU_MotorLoopPumpSpdSet);
		fun(VCU_FAN_SpdSet);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (VCU_AutoCalibReq_1);
		fun << (VCU_TorqueBoostReq_1);
		fun << (VCU_TorqueBoostReq_2);
		fun << (VCU_TargetPosReq_1);
		fun << (VCU_TargetPosReq_2);
		fun << (VCU_AutoCalibReq_2);
		fun << (VCU_ValvePositionSet);
		fun << (VCU_SolenoidModeSet);
		fun << (VCU_BatteryLoopPumpSpdSet);
		fun << (VCU_MotorLoopPumpSpdSet);
		fun << (VCU_FAN_SpdSet);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (VCU_AutoCalibReq_1);
		fun >> (VCU_TorqueBoostReq_1);
		fun >> (VCU_TorqueBoostReq_2);
		fun >> (VCU_TargetPosReq_1);
		fun >> (VCU_TargetPosReq_2);
		fun >> (VCU_AutoCalibReq_2);
		fun >> (VCU_ValvePositionSet);
		fun >> (VCU_SolenoidModeSet);
		fun >> (VCU_BatteryLoopPumpSpdSet);
		fun >> (VCU_MotorLoopPumpSpdSet);
		fun >> (VCU_FAN_SpdSet);
	}
};

#endif //____BDCVCU_H__
