#ifndef __ARA_COM_VSOMEIP__TIREDELAPRESSURE_H__
#define __ARA_COM_VSOMEIP__TIREDELAPRESSURE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct TireDelaPressure {
public:
	std::uint8_t FrontLeftTireDelaPressure;
	std::uint8_t FrontRightTireDelaPressure;
	std::uint8_t RearRightTireDelaPressure;
	std::uint8_t RearLeftTireDelaPressure;
/*
	TireDelaPressure() {}
	~TireDelaPressure() {}
	TireDelaPressure(const std::uint8_t _FrontLeftTireDelaPressure,const std::uint8_t _FrontRightTireDelaPressure,const std::uint8_t _RearRightTireDelaPressure,const std::uint8_t _RearLeftTireDelaPressure):FrontLeftTireDelaPressure(_FrontLeftTireDelaPressure),FrontRightTireDelaPressure(_FrontRightTireDelaPressure),RearRightTireDelaPressure(_RearRightTireDelaPressure),RearLeftTireDelaPressure(_RearLeftTireDelaPressure) {}
	TireDelaPressure(const TireDelaPressure &_x){
		FrontLeftTireDelaPressure = _x.FrontLeftTireDelaPressure;
		FrontRightTireDelaPressure = _x.FrontRightTireDelaPressure;
		RearRightTireDelaPressure = _x.RearRightTireDelaPressure;
		RearLeftTireDelaPressure = _x.RearLeftTireDelaPressure;
	}
	TireDelaPressure(TireDelaPressure &&_x){
		FrontLeftTireDelaPressure = std::move(_x.FrontLeftTireDelaPressure);
		FrontRightTireDelaPressure = std::move(_x.FrontRightTireDelaPressure);
		RearRightTireDelaPressure = std::move(_x.RearRightTireDelaPressure);
		RearLeftTireDelaPressure = std::move(_x.RearLeftTireDelaPressure);
	}
	TireDelaPressure& operator=(const TireDelaPressure &_x){
		FrontLeftTireDelaPressure = _x.FrontLeftTireDelaPressure;
		FrontRightTireDelaPressure = _x.FrontRightTireDelaPressure;
		RearRightTireDelaPressure = _x.RearRightTireDelaPressure;
		RearLeftTireDelaPressure = _x.RearLeftTireDelaPressure;
		return *this;
	}
	TireDelaPressure& operator=(TireDelaPressure &&_x){
		FrontLeftTireDelaPressure = std::move(_x.FrontLeftTireDelaPressure);
		FrontRightTireDelaPressure = std::move(_x.FrontRightTireDelaPressure);
		RearRightTireDelaPressure = std::move(_x.RearRightTireDelaPressure);
		RearLeftTireDelaPressure = std::move(_x.RearLeftTireDelaPressure);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(FrontLeftTireDelaPressure);
		fun(FrontRightTireDelaPressure);
		fun(RearRightTireDelaPressure);
		fun(RearLeftTireDelaPressure);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(FrontLeftTireDelaPressure);
		fun(FrontRightTireDelaPressure);
		fun(RearRightTireDelaPressure);
		fun(RearLeftTireDelaPressure);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (FrontLeftTireDelaPressure);
		fun << (FrontRightTireDelaPressure);
		fun << (RearRightTireDelaPressure);
		fun << (RearLeftTireDelaPressure);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (FrontLeftTireDelaPressure);
		fun >> (FrontRightTireDelaPressure);
		fun >> (RearRightTireDelaPressure);
		fun >> (RearLeftTireDelaPressure);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__TIREDELAPRESSURE_H__
