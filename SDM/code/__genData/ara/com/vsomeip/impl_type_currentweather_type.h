#ifndef __ARA_COM_VSOMEIP__CURRENTWEATHER_TYPE_H__
#define __ARA_COM_VSOMEIP__CURRENTWEATHER_TYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct CurrentWeather_Type {
public:
	std::uint8_t EHR_CurrWeather;
/*
	CurrentWeather_Type() {}
	~CurrentWeather_Type() {}
	CurrentWeather_Type(const std::uint8_t _EHR_CurrWeather):EHR_CurrWeather(_EHR_CurrWeather) {}
	CurrentWeather_Type(const CurrentWeather_Type &_x){
		EHR_CurrWeather = _x.EHR_CurrWeather;
	}
	CurrentWeather_Type(CurrentWeather_Type &&_x){
		EHR_CurrWeather = std::move(_x.EHR_CurrWeather);
	}
	CurrentWeather_Type& operator=(const CurrentWeather_Type &_x){
		EHR_CurrWeather = _x.EHR_CurrWeather;
		return *this;
	}
	CurrentWeather_Type& operator=(CurrentWeather_Type &&_x){
		EHR_CurrWeather = std::move(_x.EHR_CurrWeather);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(EHR_CurrWeather);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(EHR_CurrWeather);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (EHR_CurrWeather);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (EHR_CurrWeather);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__CURRENTWEATHER_TYPE_H__
