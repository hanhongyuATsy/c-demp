#ifndef __ARA_COM_VSOMEIP__VRCTIME_H__
#define __ARA_COM_VSOMEIP__VRCTIME_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct vRCTime {
public:
	std::uint8_t Time_Hour;
	std::uint8_t Time_Min;
	std::uint8_t Time_Sec;
/*
	vRCTime() {}
	~vRCTime() {}
	vRCTime(const std::uint8_t _Time_Hour,const std::uint8_t _Time_Min,const std::uint8_t _Time_Sec):Time_Hour(_Time_Hour),Time_Min(_Time_Min),Time_Sec(_Time_Sec) {}
	vRCTime(const vRCTime &_x){
		Time_Hour = _x.Time_Hour;
		Time_Min = _x.Time_Min;
		Time_Sec = _x.Time_Sec;
	}
	vRCTime(vRCTime &&_x){
		Time_Hour = std::move(_x.Time_Hour);
		Time_Min = std::move(_x.Time_Min);
		Time_Sec = std::move(_x.Time_Sec);
	}
	vRCTime& operator=(const vRCTime &_x){
		Time_Hour = _x.Time_Hour;
		Time_Min = _x.Time_Min;
		Time_Sec = _x.Time_Sec;
		return *this;
	}
	vRCTime& operator=(vRCTime &&_x){
		Time_Hour = std::move(_x.Time_Hour);
		Time_Min = std::move(_x.Time_Min);
		Time_Sec = std::move(_x.Time_Sec);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(Time_Hour);
		fun(Time_Min);
		fun(Time_Sec);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(Time_Hour);
		fun(Time_Min);
		fun(Time_Sec);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (Time_Hour);
		fun << (Time_Min);
		fun << (Time_Sec);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (Time_Hour);
		fun >> (Time_Min);
		fun >> (Time_Sec);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__VRCTIME_H__
