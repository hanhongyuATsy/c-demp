#ifndef __ARA_COM_VSOMEIP__SENSORFAILURE_H__
#define __ARA_COM_VSOMEIP__SENSORFAILURE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct SensorFailure {
public:
	std::uint8_t FrontLeftSensorFailure;
	std::uint8_t FrontRightSensorFailure;
	std::uint8_t RearRightSensorFailure;
	std::uint8_t RearLeftSensorFailure;
/*
	SensorFailure() {}
	~SensorFailure() {}
	SensorFailure(const std::uint8_t _FrontLeftSensorFailure,const std::uint8_t _FrontRightSensorFailure,const std::uint8_t _RearRightSensorFailure,const std::uint8_t _RearLeftSensorFailure):FrontLeftSensorFailure(_FrontLeftSensorFailure),FrontRightSensorFailure(_FrontRightSensorFailure),RearRightSensorFailure(_RearRightSensorFailure),RearLeftSensorFailure(_RearLeftSensorFailure) {}
	SensorFailure(const SensorFailure &_x){
		FrontLeftSensorFailure = _x.FrontLeftSensorFailure;
		FrontRightSensorFailure = _x.FrontRightSensorFailure;
		RearRightSensorFailure = _x.RearRightSensorFailure;
		RearLeftSensorFailure = _x.RearLeftSensorFailure;
	}
	SensorFailure(SensorFailure &&_x){
		FrontLeftSensorFailure = std::move(_x.FrontLeftSensorFailure);
		FrontRightSensorFailure = std::move(_x.FrontRightSensorFailure);
		RearRightSensorFailure = std::move(_x.RearRightSensorFailure);
		RearLeftSensorFailure = std::move(_x.RearLeftSensorFailure);
	}
	SensorFailure& operator=(const SensorFailure &_x){
		FrontLeftSensorFailure = _x.FrontLeftSensorFailure;
		FrontRightSensorFailure = _x.FrontRightSensorFailure;
		RearRightSensorFailure = _x.RearRightSensorFailure;
		RearLeftSensorFailure = _x.RearLeftSensorFailure;
		return *this;
	}
	SensorFailure& operator=(SensorFailure &&_x){
		FrontLeftSensorFailure = std::move(_x.FrontLeftSensorFailure);
		FrontRightSensorFailure = std::move(_x.FrontRightSensorFailure);
		RearRightSensorFailure = std::move(_x.RearRightSensorFailure);
		RearLeftSensorFailure = std::move(_x.RearLeftSensorFailure);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(FrontLeftSensorFailure);
		fun(FrontRightSensorFailure);
		fun(RearRightSensorFailure);
		fun(RearLeftSensorFailure);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(FrontLeftSensorFailure);
		fun(FrontRightSensorFailure);
		fun(RearRightSensorFailure);
		fun(RearLeftSensorFailure);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (FrontLeftSensorFailure);
		fun << (FrontRightSensorFailure);
		fun << (RearRightSensorFailure);
		fun << (RearLeftSensorFailure);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (FrontLeftSensorFailure);
		fun >> (FrontRightSensorFailure);
		fun >> (RearRightSensorFailure);
		fun >> (RearLeftSensorFailure);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__SENSORFAILURE_H__
