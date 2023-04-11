#ifndef __ARA_COM_VSOMEIP__TIRELOWPRESSURE_H__
#define __ARA_COM_VSOMEIP__TIRELOWPRESSURE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct TireLowPressure {
public:
	std::uint8_t FrontLeftTireLowPressure;
	std::uint8_t FrontRightTireLowPressure;
	std::uint8_t RearRightTireLowPressure;
	std::uint8_t RearLeftTireLowPressure;
/*
	TireLowPressure() {}
	~TireLowPressure() {}
	TireLowPressure(const std::uint8_t _FrontLeftTireLowPressure,const std::uint8_t _FrontRightTireLowPressure,const std::uint8_t _RearRightTireLowPressure,const std::uint8_t _RearLeftTireLowPressure):FrontLeftTireLowPressure(_FrontLeftTireLowPressure),FrontRightTireLowPressure(_FrontRightTireLowPressure),RearRightTireLowPressure(_RearRightTireLowPressure),RearLeftTireLowPressure(_RearLeftTireLowPressure) {}
	TireLowPressure(const TireLowPressure &_x){
		FrontLeftTireLowPressure = _x.FrontLeftTireLowPressure;
		FrontRightTireLowPressure = _x.FrontRightTireLowPressure;
		RearRightTireLowPressure = _x.RearRightTireLowPressure;
		RearLeftTireLowPressure = _x.RearLeftTireLowPressure;
	}
	TireLowPressure(TireLowPressure &&_x){
		FrontLeftTireLowPressure = std::move(_x.FrontLeftTireLowPressure);
		FrontRightTireLowPressure = std::move(_x.FrontRightTireLowPressure);
		RearRightTireLowPressure = std::move(_x.RearRightTireLowPressure);
		RearLeftTireLowPressure = std::move(_x.RearLeftTireLowPressure);
	}
	TireLowPressure& operator=(const TireLowPressure &_x){
		FrontLeftTireLowPressure = _x.FrontLeftTireLowPressure;
		FrontRightTireLowPressure = _x.FrontRightTireLowPressure;
		RearRightTireLowPressure = _x.RearRightTireLowPressure;
		RearLeftTireLowPressure = _x.RearLeftTireLowPressure;
		return *this;
	}
	TireLowPressure& operator=(TireLowPressure &&_x){
		FrontLeftTireLowPressure = std::move(_x.FrontLeftTireLowPressure);
		FrontRightTireLowPressure = std::move(_x.FrontRightTireLowPressure);
		RearRightTireLowPressure = std::move(_x.RearRightTireLowPressure);
		RearLeftTireLowPressure = std::move(_x.RearLeftTireLowPressure);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(FrontLeftTireLowPressure);
		fun(FrontRightTireLowPressure);
		fun(RearRightTireLowPressure);
		fun(RearLeftTireLowPressure);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(FrontLeftTireLowPressure);
		fun(FrontRightTireLowPressure);
		fun(RearRightTireLowPressure);
		fun(RearLeftTireLowPressure);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (FrontLeftTireLowPressure);
		fun << (FrontRightTireLowPressure);
		fun << (RearRightTireLowPressure);
		fun << (RearLeftTireLowPressure);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (FrontLeftTireLowPressure);
		fun >> (FrontRightTireLowPressure);
		fun >> (RearRightTireLowPressure);
		fun >> (RearLeftTireLowPressure);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__TIRELOWPRESSURE_H__
