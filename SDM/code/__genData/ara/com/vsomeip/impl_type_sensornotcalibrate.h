#ifndef __ARA_COM_VSOMEIP__SENSORNOTCALIBRATE_H__
#define __ARA_COM_VSOMEIP__SENSORNOTCALIBRATE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct SensorNotCalibrate {
public:
	std::uint8_t FrontLeftSensorNotCalibrate;
	std::uint8_t FrontRightSensorNotCalibrate;
	std::uint8_t RearRightSensorNotCalibrate;
	std::uint8_t RearLeftSensorNotCalibrate;
/*
	SensorNotCalibrate() {}
	~SensorNotCalibrate() {}
	SensorNotCalibrate(const std::uint8_t _FrontLeftSensorNotCalibrate,const std::uint8_t _FrontRightSensorNotCalibrate,const std::uint8_t _RearRightSensorNotCalibrate,const std::uint8_t _RearLeftSensorNotCalibrate):FrontLeftSensorNotCalibrate(_FrontLeftSensorNotCalibrate),FrontRightSensorNotCalibrate(_FrontRightSensorNotCalibrate),RearRightSensorNotCalibrate(_RearRightSensorNotCalibrate),RearLeftSensorNotCalibrate(_RearLeftSensorNotCalibrate) {}
	SensorNotCalibrate(const SensorNotCalibrate &_x){
		FrontLeftSensorNotCalibrate = _x.FrontLeftSensorNotCalibrate;
		FrontRightSensorNotCalibrate = _x.FrontRightSensorNotCalibrate;
		RearRightSensorNotCalibrate = _x.RearRightSensorNotCalibrate;
		RearLeftSensorNotCalibrate = _x.RearLeftSensorNotCalibrate;
	}
	SensorNotCalibrate(SensorNotCalibrate &&_x){
		FrontLeftSensorNotCalibrate = std::move(_x.FrontLeftSensorNotCalibrate);
		FrontRightSensorNotCalibrate = std::move(_x.FrontRightSensorNotCalibrate);
		RearRightSensorNotCalibrate = std::move(_x.RearRightSensorNotCalibrate);
		RearLeftSensorNotCalibrate = std::move(_x.RearLeftSensorNotCalibrate);
	}
	SensorNotCalibrate& operator=(const SensorNotCalibrate &_x){
		FrontLeftSensorNotCalibrate = _x.FrontLeftSensorNotCalibrate;
		FrontRightSensorNotCalibrate = _x.FrontRightSensorNotCalibrate;
		RearRightSensorNotCalibrate = _x.RearRightSensorNotCalibrate;
		RearLeftSensorNotCalibrate = _x.RearLeftSensorNotCalibrate;
		return *this;
	}
	SensorNotCalibrate& operator=(SensorNotCalibrate &&_x){
		FrontLeftSensorNotCalibrate = std::move(_x.FrontLeftSensorNotCalibrate);
		FrontRightSensorNotCalibrate = std::move(_x.FrontRightSensorNotCalibrate);
		RearRightSensorNotCalibrate = std::move(_x.RearRightSensorNotCalibrate);
		RearLeftSensorNotCalibrate = std::move(_x.RearLeftSensorNotCalibrate);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(FrontLeftSensorNotCalibrate);
		fun(FrontRightSensorNotCalibrate);
		fun(RearRightSensorNotCalibrate);
		fun(RearLeftSensorNotCalibrate);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(FrontLeftSensorNotCalibrate);
		fun(FrontRightSensorNotCalibrate);
		fun(RearRightSensorNotCalibrate);
		fun(RearLeftSensorNotCalibrate);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (FrontLeftSensorNotCalibrate);
		fun << (FrontRightSensorNotCalibrate);
		fun << (RearRightSensorNotCalibrate);
		fun << (RearLeftSensorNotCalibrate);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (FrontLeftSensorNotCalibrate);
		fun >> (FrontRightSensorNotCalibrate);
		fun >> (RearRightSensorNotCalibrate);
		fun >> (RearLeftSensorNotCalibrate);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__SENSORNOTCALIBRATE_H__
