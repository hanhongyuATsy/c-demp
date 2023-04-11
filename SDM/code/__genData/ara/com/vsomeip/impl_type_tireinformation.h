#ifndef __ARA_COM_VSOMEIP__TIREINFORMATION_H__
#define __ARA_COM_VSOMEIP__TIREINFORMATION_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct TireInformation {
public:
	std::uint8_t FrontLeftTirePressure;
	std::uint8_t FrontRightTirePressure;
	std::uint8_t RearRightTirePressure;
	std::uint8_t RearLeftTirePressure;
	std::uint8_t FrontWheelRCP;
	std::uint8_t RearWheelRCP;
	std::uint8_t FrontLeftTireTemperature;
	std::uint8_t FrontRightTireTemperature;
	std::uint8_t RearRightTireTemperature;
	std::uint8_t RearLeftTireTemperature;
/*
	TireInformation() {}
	~TireInformation() {}
	TireInformation(const std::uint8_t _FrontLeftTirePressure,const std::uint8_t _FrontRightTirePressure,const std::uint8_t _RearRightTirePressure,const std::uint8_t _RearLeftTirePressure,const std::uint8_t _FrontWheelRCP,const std::uint8_t _RearWheelRCP,const std::uint8_t _FrontLeftTireTemperature,const std::uint8_t _FrontRightTireTemperature,const std::uint8_t _RearRightTireTemperature,const std::uint8_t _RearLeftTireTemperature):FrontLeftTirePressure(_FrontLeftTirePressure),FrontRightTirePressure(_FrontRightTirePressure),RearRightTirePressure(_RearRightTirePressure),RearLeftTirePressure(_RearLeftTirePressure),FrontWheelRCP(_FrontWheelRCP),RearWheelRCP(_RearWheelRCP),FrontLeftTireTemperature(_FrontLeftTireTemperature),FrontRightTireTemperature(_FrontRightTireTemperature),RearRightTireTemperature(_RearRightTireTemperature),RearLeftTireTemperature(_RearLeftTireTemperature) {}
	TireInformation(const TireInformation &_x){
		FrontLeftTirePressure = _x.FrontLeftTirePressure;
		FrontRightTirePressure = _x.FrontRightTirePressure;
		RearRightTirePressure = _x.RearRightTirePressure;
		RearLeftTirePressure = _x.RearLeftTirePressure;
		FrontWheelRCP = _x.FrontWheelRCP;
		RearWheelRCP = _x.RearWheelRCP;
		FrontLeftTireTemperature = _x.FrontLeftTireTemperature;
		FrontRightTireTemperature = _x.FrontRightTireTemperature;
		RearRightTireTemperature = _x.RearRightTireTemperature;
		RearLeftTireTemperature = _x.RearLeftTireTemperature;
	}
	TireInformation(TireInformation &&_x){
		FrontLeftTirePressure = std::move(_x.FrontLeftTirePressure);
		FrontRightTirePressure = std::move(_x.FrontRightTirePressure);
		RearRightTirePressure = std::move(_x.RearRightTirePressure);
		RearLeftTirePressure = std::move(_x.RearLeftTirePressure);
		FrontWheelRCP = std::move(_x.FrontWheelRCP);
		RearWheelRCP = std::move(_x.RearWheelRCP);
		FrontLeftTireTemperature = std::move(_x.FrontLeftTireTemperature);
		FrontRightTireTemperature = std::move(_x.FrontRightTireTemperature);
		RearRightTireTemperature = std::move(_x.RearRightTireTemperature);
		RearLeftTireTemperature = std::move(_x.RearLeftTireTemperature);
	}
	TireInformation& operator=(const TireInformation &_x){
		FrontLeftTirePressure = _x.FrontLeftTirePressure;
		FrontRightTirePressure = _x.FrontRightTirePressure;
		RearRightTirePressure = _x.RearRightTirePressure;
		RearLeftTirePressure = _x.RearLeftTirePressure;
		FrontWheelRCP = _x.FrontWheelRCP;
		RearWheelRCP = _x.RearWheelRCP;
		FrontLeftTireTemperature = _x.FrontLeftTireTemperature;
		FrontRightTireTemperature = _x.FrontRightTireTemperature;
		RearRightTireTemperature = _x.RearRightTireTemperature;
		RearLeftTireTemperature = _x.RearLeftTireTemperature;
		return *this;
	}
	TireInformation& operator=(TireInformation &&_x){
		FrontLeftTirePressure = std::move(_x.FrontLeftTirePressure);
		FrontRightTirePressure = std::move(_x.FrontRightTirePressure);
		RearRightTirePressure = std::move(_x.RearRightTirePressure);
		RearLeftTirePressure = std::move(_x.RearLeftTirePressure);
		FrontWheelRCP = std::move(_x.FrontWheelRCP);
		RearWheelRCP = std::move(_x.RearWheelRCP);
		FrontLeftTireTemperature = std::move(_x.FrontLeftTireTemperature);
		FrontRightTireTemperature = std::move(_x.FrontRightTireTemperature);
		RearRightTireTemperature = std::move(_x.RearRightTireTemperature);
		RearLeftTireTemperature = std::move(_x.RearLeftTireTemperature);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(FrontLeftTirePressure);
		fun(FrontRightTirePressure);
		fun(RearRightTirePressure);
		fun(RearLeftTirePressure);
		fun(FrontWheelRCP);
		fun(RearWheelRCP);
		fun(FrontLeftTireTemperature);
		fun(FrontRightTireTemperature);
		fun(RearRightTireTemperature);
		fun(RearLeftTireTemperature);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(FrontLeftTirePressure);
		fun(FrontRightTirePressure);
		fun(RearRightTirePressure);
		fun(RearLeftTirePressure);
		fun(FrontWheelRCP);
		fun(RearWheelRCP);
		fun(FrontLeftTireTemperature);
		fun(FrontRightTireTemperature);
		fun(RearRightTireTemperature);
		fun(RearLeftTireTemperature);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (FrontLeftTirePressure);
		fun << (FrontRightTirePressure);
		fun << (RearRightTirePressure);
		fun << (RearLeftTirePressure);
		fun << (FrontWheelRCP);
		fun << (RearWheelRCP);
		fun << (FrontLeftTireTemperature);
		fun << (FrontRightTireTemperature);
		fun << (RearRightTireTemperature);
		fun << (RearLeftTireTemperature);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (FrontLeftTirePressure);
		fun >> (FrontRightTirePressure);
		fun >> (RearRightTirePressure);
		fun >> (RearLeftTirePressure);
		fun >> (FrontWheelRCP);
		fun >> (RearWheelRCP);
		fun >> (FrontLeftTireTemperature);
		fun >> (FrontRightTireTemperature);
		fun >> (RearRightTireTemperature);
		fun >> (RearLeftTireTemperature);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__TIREINFORMATION_H__
