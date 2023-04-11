#ifndef __ARA_COM_VSOMEIP__SENSORLOWBATTERY_H__
#define __ARA_COM_VSOMEIP__SENSORLOWBATTERY_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct SensorLowBattery {
public:
	std::uint8_t FrontLeftSensorLowBattery;
	std::uint8_t FrontRightSensorLowBattery;
	std::uint8_t RearRightSensorLowBattery;
	std::uint8_t RearLeftSensorLowBattery;
/*
	SensorLowBattery() {}
	~SensorLowBattery() {}
	SensorLowBattery(const std::uint8_t _FrontLeftSensorLowBattery,const std::uint8_t _FrontRightSensorLowBattery,const std::uint8_t _RearRightSensorLowBattery,const std::uint8_t _RearLeftSensorLowBattery):FrontLeftSensorLowBattery(_FrontLeftSensorLowBattery),FrontRightSensorLowBattery(_FrontRightSensorLowBattery),RearRightSensorLowBattery(_RearRightSensorLowBattery),RearLeftSensorLowBattery(_RearLeftSensorLowBattery) {}
	SensorLowBattery(const SensorLowBattery &_x){
		FrontLeftSensorLowBattery = _x.FrontLeftSensorLowBattery;
		FrontRightSensorLowBattery = _x.FrontRightSensorLowBattery;
		RearRightSensorLowBattery = _x.RearRightSensorLowBattery;
		RearLeftSensorLowBattery = _x.RearLeftSensorLowBattery;
	}
	SensorLowBattery(SensorLowBattery &&_x){
		FrontLeftSensorLowBattery = std::move(_x.FrontLeftSensorLowBattery);
		FrontRightSensorLowBattery = std::move(_x.FrontRightSensorLowBattery);
		RearRightSensorLowBattery = std::move(_x.RearRightSensorLowBattery);
		RearLeftSensorLowBattery = std::move(_x.RearLeftSensorLowBattery);
	}
	SensorLowBattery& operator=(const SensorLowBattery &_x){
		FrontLeftSensorLowBattery = _x.FrontLeftSensorLowBattery;
		FrontRightSensorLowBattery = _x.FrontRightSensorLowBattery;
		RearRightSensorLowBattery = _x.RearRightSensorLowBattery;
		RearLeftSensorLowBattery = _x.RearLeftSensorLowBattery;
		return *this;
	}
	SensorLowBattery& operator=(SensorLowBattery &&_x){
		FrontLeftSensorLowBattery = std::move(_x.FrontLeftSensorLowBattery);
		FrontRightSensorLowBattery = std::move(_x.FrontRightSensorLowBattery);
		RearRightSensorLowBattery = std::move(_x.RearRightSensorLowBattery);
		RearLeftSensorLowBattery = std::move(_x.RearLeftSensorLowBattery);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(FrontLeftSensorLowBattery);
		fun(FrontRightSensorLowBattery);
		fun(RearRightSensorLowBattery);
		fun(RearLeftSensorLowBattery);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(FrontLeftSensorLowBattery);
		fun(FrontRightSensorLowBattery);
		fun(RearRightSensorLowBattery);
		fun(RearLeftSensorLowBattery);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (FrontLeftSensorLowBattery);
		fun << (FrontRightSensorLowBattery);
		fun << (RearRightSensorLowBattery);
		fun << (RearLeftSensorLowBattery);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (FrontLeftSensorLowBattery);
		fun >> (FrontRightSensorLowBattery);
		fun >> (RearRightSensorLowBattery);
		fun >> (RearLeftSensorLowBattery);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__SENSORLOWBATTERY_H__
