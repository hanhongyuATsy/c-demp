#ifndef __ARA_COM_VSOMEIP__TIREHIGHPRESSURE_H__
#define __ARA_COM_VSOMEIP__TIREHIGHPRESSURE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct TireHighPressure {
public:
	std::uint8_t FrontLeftTireHighPressure;
	std::uint8_t FrontRightTireHighPressure;
	std::uint8_t RearRightTireHighPressure;
	std::uint8_t RearLeftTireHighPressure;
/*
	TireHighPressure() {}
	~TireHighPressure() {}
	TireHighPressure(const std::uint8_t _FrontLeftTireHighPressure,const std::uint8_t _FrontRightTireHighPressure,const std::uint8_t _RearRightTireHighPressure,const std::uint8_t _RearLeftTireHighPressure):FrontLeftTireHighPressure(_FrontLeftTireHighPressure),FrontRightTireHighPressure(_FrontRightTireHighPressure),RearRightTireHighPressure(_RearRightTireHighPressure),RearLeftTireHighPressure(_RearLeftTireHighPressure) {}
	TireHighPressure(const TireHighPressure &_x){
		FrontLeftTireHighPressure = _x.FrontLeftTireHighPressure;
		FrontRightTireHighPressure = _x.FrontRightTireHighPressure;
		RearRightTireHighPressure = _x.RearRightTireHighPressure;
		RearLeftTireHighPressure = _x.RearLeftTireHighPressure;
	}
	TireHighPressure(TireHighPressure &&_x){
		FrontLeftTireHighPressure = std::move(_x.FrontLeftTireHighPressure);
		FrontRightTireHighPressure = std::move(_x.FrontRightTireHighPressure);
		RearRightTireHighPressure = std::move(_x.RearRightTireHighPressure);
		RearLeftTireHighPressure = std::move(_x.RearLeftTireHighPressure);
	}
	TireHighPressure& operator=(const TireHighPressure &_x){
		FrontLeftTireHighPressure = _x.FrontLeftTireHighPressure;
		FrontRightTireHighPressure = _x.FrontRightTireHighPressure;
		RearRightTireHighPressure = _x.RearRightTireHighPressure;
		RearLeftTireHighPressure = _x.RearLeftTireHighPressure;
		return *this;
	}
	TireHighPressure& operator=(TireHighPressure &&_x){
		FrontLeftTireHighPressure = std::move(_x.FrontLeftTireHighPressure);
		FrontRightTireHighPressure = std::move(_x.FrontRightTireHighPressure);
		RearRightTireHighPressure = std::move(_x.RearRightTireHighPressure);
		RearLeftTireHighPressure = std::move(_x.RearLeftTireHighPressure);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(FrontLeftTireHighPressure);
		fun(FrontRightTireHighPressure);
		fun(RearRightTireHighPressure);
		fun(RearLeftTireHighPressure);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(FrontLeftTireHighPressure);
		fun(FrontRightTireHighPressure);
		fun(RearRightTireHighPressure);
		fun(RearLeftTireHighPressure);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (FrontLeftTireHighPressure);
		fun << (FrontRightTireHighPressure);
		fun << (RearRightTireHighPressure);
		fun << (RearLeftTireHighPressure);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (FrontLeftTireHighPressure);
		fun >> (FrontRightTireHighPressure);
		fun >> (RearRightTireHighPressure);
		fun >> (RearLeftTireHighPressure);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__TIREHIGHPRESSURE_H__
