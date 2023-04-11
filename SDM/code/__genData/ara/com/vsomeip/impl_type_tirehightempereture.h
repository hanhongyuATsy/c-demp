#ifndef __ARA_COM_VSOMEIP__TIREHIGHTEMPERETURE_H__
#define __ARA_COM_VSOMEIP__TIREHIGHTEMPERETURE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct TireHighTempereture {
public:
	std::uint8_t FrontLeftTireHighTemperature;
	std::uint8_t FrontRightTireHighTemperature;
	std::uint8_t RearRightTireHighTemperature;
	std::uint8_t RearLeftTireHighTemperature;
/*
	TireHighTempereture() {}
	~TireHighTempereture() {}
	TireHighTempereture(const std::uint8_t _FrontLeftTireHighTemperature,const std::uint8_t _FrontRightTireHighTemperature,const std::uint8_t _RearRightTireHighTemperature,const std::uint8_t _RearLeftTireHighTemperature):FrontLeftTireHighTemperature(_FrontLeftTireHighTemperature),FrontRightTireHighTemperature(_FrontRightTireHighTemperature),RearRightTireHighTemperature(_RearRightTireHighTemperature),RearLeftTireHighTemperature(_RearLeftTireHighTemperature) {}
	TireHighTempereture(const TireHighTempereture &_x){
		FrontLeftTireHighTemperature = _x.FrontLeftTireHighTemperature;
		FrontRightTireHighTemperature = _x.FrontRightTireHighTemperature;
		RearRightTireHighTemperature = _x.RearRightTireHighTemperature;
		RearLeftTireHighTemperature = _x.RearLeftTireHighTemperature;
	}
	TireHighTempereture(TireHighTempereture &&_x){
		FrontLeftTireHighTemperature = std::move(_x.FrontLeftTireHighTemperature);
		FrontRightTireHighTemperature = std::move(_x.FrontRightTireHighTemperature);
		RearRightTireHighTemperature = std::move(_x.RearRightTireHighTemperature);
		RearLeftTireHighTemperature = std::move(_x.RearLeftTireHighTemperature);
	}
	TireHighTempereture& operator=(const TireHighTempereture &_x){
		FrontLeftTireHighTemperature = _x.FrontLeftTireHighTemperature;
		FrontRightTireHighTemperature = _x.FrontRightTireHighTemperature;
		RearRightTireHighTemperature = _x.RearRightTireHighTemperature;
		RearLeftTireHighTemperature = _x.RearLeftTireHighTemperature;
		return *this;
	}
	TireHighTempereture& operator=(TireHighTempereture &&_x){
		FrontLeftTireHighTemperature = std::move(_x.FrontLeftTireHighTemperature);
		FrontRightTireHighTemperature = std::move(_x.FrontRightTireHighTemperature);
		RearRightTireHighTemperature = std::move(_x.RearRightTireHighTemperature);
		RearLeftTireHighTemperature = std::move(_x.RearLeftTireHighTemperature);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(FrontLeftTireHighTemperature);
		fun(FrontRightTireHighTemperature);
		fun(RearRightTireHighTemperature);
		fun(RearLeftTireHighTemperature);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(FrontLeftTireHighTemperature);
		fun(FrontRightTireHighTemperature);
		fun(RearRightTireHighTemperature);
		fun(RearLeftTireHighTemperature);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (FrontLeftTireHighTemperature);
		fun << (FrontRightTireHighTemperature);
		fun << (RearRightTireHighTemperature);
		fun << (RearLeftTireHighTemperature);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (FrontLeftTireHighTemperature);
		fun >> (FrontRightTireHighTemperature);
		fun >> (RearRightTireHighTemperature);
		fun >> (RearLeftTireHighTemperature);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__TIREHIGHTEMPERETURE_H__
