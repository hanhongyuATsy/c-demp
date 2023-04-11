#ifndef __ARA_COM_VSOMEIP__SENSORMUTE_H__
#define __ARA_COM_VSOMEIP__SENSORMUTE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct SensorMute {
public:
	std::uint8_t FrontLeftSensorMute;
	std::uint8_t FrontRightSensorMute;
	std::uint8_t RearRightSensorMute;
	std::uint8_t RearLeftSensorMute;
/*
	SensorMute() {}
	~SensorMute() {}
	SensorMute(const std::uint8_t _FrontLeftSensorMute,const std::uint8_t _FrontRightSensorMute,const std::uint8_t _RearRightSensorMute,const std::uint8_t _RearLeftSensorMute):FrontLeftSensorMute(_FrontLeftSensorMute),FrontRightSensorMute(_FrontRightSensorMute),RearRightSensorMute(_RearRightSensorMute),RearLeftSensorMute(_RearLeftSensorMute) {}
	SensorMute(const SensorMute &_x){
		FrontLeftSensorMute = _x.FrontLeftSensorMute;
		FrontRightSensorMute = _x.FrontRightSensorMute;
		RearRightSensorMute = _x.RearRightSensorMute;
		RearLeftSensorMute = _x.RearLeftSensorMute;
	}
	SensorMute(SensorMute &&_x){
		FrontLeftSensorMute = std::move(_x.FrontLeftSensorMute);
		FrontRightSensorMute = std::move(_x.FrontRightSensorMute);
		RearRightSensorMute = std::move(_x.RearRightSensorMute);
		RearLeftSensorMute = std::move(_x.RearLeftSensorMute);
	}
	SensorMute& operator=(const SensorMute &_x){
		FrontLeftSensorMute = _x.FrontLeftSensorMute;
		FrontRightSensorMute = _x.FrontRightSensorMute;
		RearRightSensorMute = _x.RearRightSensorMute;
		RearLeftSensorMute = _x.RearLeftSensorMute;
		return *this;
	}
	SensorMute& operator=(SensorMute &&_x){
		FrontLeftSensorMute = std::move(_x.FrontLeftSensorMute);
		FrontRightSensorMute = std::move(_x.FrontRightSensorMute);
		RearRightSensorMute = std::move(_x.RearRightSensorMute);
		RearLeftSensorMute = std::move(_x.RearLeftSensorMute);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(FrontLeftSensorMute);
		fun(FrontRightSensorMute);
		fun(RearRightSensorMute);
		fun(RearLeftSensorMute);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(FrontLeftSensorMute);
		fun(FrontRightSensorMute);
		fun(RearRightSensorMute);
		fun(RearLeftSensorMute);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (FrontLeftSensorMute);
		fun << (FrontRightSensorMute);
		fun << (RearRightSensorMute);
		fun << (RearLeftSensorMute);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (FrontLeftSensorMute);
		fun >> (FrontRightSensorMute);
		fun >> (RearRightSensorMute);
		fun >> (RearLeftSensorMute);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__SENSORMUTE_H__
