#ifndef __ARA_COM_VSOMEIP__VEHSTATEINFO_TYPE_H__
#define __ARA_COM_VSOMEIP__VEHSTATEINFO_TYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct VehStateInfo_Type {
public:
	bool EMS_GVS_KL15St;
	std::uint8_t Time_Year;
	std::uint8_t Time_Month;
	std::uint8_t Time_Day;
	std::uint8_t Time_Hour;
	std::uint8_t Time_Min;
	std::uint8_t Time_Sec;
	std::uint8_t EMS_typetmosphericPressure;
/*
	VehStateInfo_Type() {}
	~VehStateInfo_Type() {}
	VehStateInfo_Type(const bool _EMS_GVS_KL15St,const std::uint8_t _Time_Year,const std::uint8_t _Time_Month,const std::uint8_t _Time_Day,const std::uint8_t _Time_Hour,const std::uint8_t _Time_Min,const std::uint8_t _Time_Sec,const std::uint8_t _EMS_typetmosphericPressure):EMS_GVS_KL15St(_EMS_GVS_KL15St),Time_Year(_Time_Year),Time_Month(_Time_Month),Time_Day(_Time_Day),Time_Hour(_Time_Hour),Time_Min(_Time_Min),Time_Sec(_Time_Sec),EMS_typetmosphericPressure(_EMS_typetmosphericPressure) {}
	VehStateInfo_Type(const VehStateInfo_Type &_x){
		EMS_GVS_KL15St = _x.EMS_GVS_KL15St;
		Time_Year = _x.Time_Year;
		Time_Month = _x.Time_Month;
		Time_Day = _x.Time_Day;
		Time_Hour = _x.Time_Hour;
		Time_Min = _x.Time_Min;
		Time_Sec = _x.Time_Sec;
		EMS_typetmosphericPressure = _x.EMS_typetmosphericPressure;
	}
	VehStateInfo_Type(VehStateInfo_Type &&_x){
		EMS_GVS_KL15St = std::move(_x.EMS_GVS_KL15St);
		Time_Year = std::move(_x.Time_Year);
		Time_Month = std::move(_x.Time_Month);
		Time_Day = std::move(_x.Time_Day);
		Time_Hour = std::move(_x.Time_Hour);
		Time_Min = std::move(_x.Time_Min);
		Time_Sec = std::move(_x.Time_Sec);
		EMS_typetmosphericPressure = std::move(_x.EMS_typetmosphericPressure);
	}
	VehStateInfo_Type& operator=(const VehStateInfo_Type &_x){
		EMS_GVS_KL15St = _x.EMS_GVS_KL15St;
		Time_Year = _x.Time_Year;
		Time_Month = _x.Time_Month;
		Time_Day = _x.Time_Day;
		Time_Hour = _x.Time_Hour;
		Time_Min = _x.Time_Min;
		Time_Sec = _x.Time_Sec;
		EMS_typetmosphericPressure = _x.EMS_typetmosphericPressure;
		return *this;
	}
	VehStateInfo_Type& operator=(VehStateInfo_Type &&_x){
		EMS_GVS_KL15St = std::move(_x.EMS_GVS_KL15St);
		Time_Year = std::move(_x.Time_Year);
		Time_Month = std::move(_x.Time_Month);
		Time_Day = std::move(_x.Time_Day);
		Time_Hour = std::move(_x.Time_Hour);
		Time_Min = std::move(_x.Time_Min);
		Time_Sec = std::move(_x.Time_Sec);
		EMS_typetmosphericPressure = std::move(_x.EMS_typetmosphericPressure);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(EMS_GVS_KL15St);
		fun(Time_Year);
		fun(Time_Month);
		fun(Time_Day);
		fun(Time_Hour);
		fun(Time_Min);
		fun(Time_Sec);
		fun(EMS_typetmosphericPressure);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(EMS_GVS_KL15St);
		fun(Time_Year);
		fun(Time_Month);
		fun(Time_Day);
		fun(Time_Hour);
		fun(Time_Min);
		fun(Time_Sec);
		fun(EMS_typetmosphericPressure);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (EMS_GVS_KL15St);
		fun << (Time_Year);
		fun << (Time_Month);
		fun << (Time_Day);
		fun << (Time_Hour);
		fun << (Time_Min);
		fun << (Time_Sec);
		fun << (EMS_typetmosphericPressure);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (EMS_GVS_KL15St);
		fun >> (Time_Year);
		fun >> (Time_Month);
		fun >> (Time_Day);
		fun >> (Time_Hour);
		fun >> (Time_Min);
		fun >> (Time_Sec);
		fun >> (EMS_typetmosphericPressure);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__VEHSTATEINFO_TYPE_H__
