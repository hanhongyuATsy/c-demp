#ifndef ____BDCTIME_H__
#define ____BDCTIME_H__


#include "cstdint"






struct BDCTime {
public:
	std::uint8_t Time_Year;
	std::uint8_t Time_Month;
	std::uint8_t Time_Day;
	std::uint8_t Time_Hour;
	std::uint8_t Time_Min;
	std::uint8_t Time_Sec;
/*
	BDCTime() {}
	~BDCTime() {}
	BDCTime(const std::uint8_t _Time_Year,const std::uint8_t _Time_Month,const std::uint8_t _Time_Day,const std::uint8_t _Time_Hour,const std::uint8_t _Time_Min,const std::uint8_t _Time_Sec):Time_Year(_Time_Year),Time_Month(_Time_Month),Time_Day(_Time_Day),Time_Hour(_Time_Hour),Time_Min(_Time_Min),Time_Sec(_Time_Sec) {}
	BDCTime(const BDCTime &_x){
		Time_Year = _x.Time_Year;
		Time_Month = _x.Time_Month;
		Time_Day = _x.Time_Day;
		Time_Hour = _x.Time_Hour;
		Time_Min = _x.Time_Min;
		Time_Sec = _x.Time_Sec;
	}
	BDCTime(BDCTime &&_x){
		Time_Year = std::move(_x.Time_Year);
		Time_Month = std::move(_x.Time_Month);
		Time_Day = std::move(_x.Time_Day);
		Time_Hour = std::move(_x.Time_Hour);
		Time_Min = std::move(_x.Time_Min);
		Time_Sec = std::move(_x.Time_Sec);
	}
	BDCTime& operator=(const BDCTime &_x){
		Time_Year = _x.Time_Year;
		Time_Month = _x.Time_Month;
		Time_Day = _x.Time_Day;
		Time_Hour = _x.Time_Hour;
		Time_Min = _x.Time_Min;
		Time_Sec = _x.Time_Sec;
		return *this;
	}
	BDCTime& operator=(BDCTime &&_x){
		Time_Year = std::move(_x.Time_Year);
		Time_Month = std::move(_x.Time_Month);
		Time_Day = std::move(_x.Time_Day);
		Time_Hour = std::move(_x.Time_Hour);
		Time_Min = std::move(_x.Time_Min);
		Time_Sec = std::move(_x.Time_Sec);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(Time_Year);
		fun(Time_Month);
		fun(Time_Day);
		fun(Time_Hour);
		fun(Time_Min);
		fun(Time_Sec);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(Time_Year);
		fun(Time_Month);
		fun(Time_Day);
		fun(Time_Hour);
		fun(Time_Min);
		fun(Time_Sec);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (Time_Year);
		fun << (Time_Month);
		fun << (Time_Day);
		fun << (Time_Hour);
		fun << (Time_Min);
		fun << (Time_Sec);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (Time_Year);
		fun >> (Time_Month);
		fun >> (Time_Day);
		fun >> (Time_Hour);
		fun >> (Time_Min);
		fun >> (Time_Sec);
	}
};

#endif //____BDCTIME_H__
