#ifndef __ARA_COM_VSOMEIP__VEHICLEREALTIMESTATUSINFO_TYPE_H__
#define __ARA_COM_VSOMEIP__VEHICLEREALTIMESTATUSINFO_TYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct VehicleRealtimeStatusInfo_Type {
public:
	std::uint32_t DEF_Longitude;
	std::uint32_t DEF_Latidute;
	std::uint16_t DEF_VehSpd;
	bool DEF_VehSpdVD;
/*
	VehicleRealtimeStatusInfo_Type() {}
	~VehicleRealtimeStatusInfo_Type() {}
	VehicleRealtimeStatusInfo_Type(const std::uint32_t _DEF_Longitude,const std::uint32_t _DEF_Latidute,const std::uint16_t _DEF_VehSpd,const bool _DEF_VehSpdVD):DEF_Longitude(_DEF_Longitude),DEF_Latidute(_DEF_Latidute),DEF_VehSpd(_DEF_VehSpd),DEF_VehSpdVD(_DEF_VehSpdVD) {}
	VehicleRealtimeStatusInfo_Type(const VehicleRealtimeStatusInfo_Type &_x){
		DEF_Longitude = _x.DEF_Longitude;
		DEF_Latidute = _x.DEF_Latidute;
		DEF_VehSpd = _x.DEF_VehSpd;
		DEF_VehSpdVD = _x.DEF_VehSpdVD;
	}
	VehicleRealtimeStatusInfo_Type(VehicleRealtimeStatusInfo_Type &&_x){
		DEF_Longitude = std::move(_x.DEF_Longitude);
		DEF_Latidute = std::move(_x.DEF_Latidute);
		DEF_VehSpd = std::move(_x.DEF_VehSpd);
		DEF_VehSpdVD = std::move(_x.DEF_VehSpdVD);
	}
	VehicleRealtimeStatusInfo_Type& operator=(const VehicleRealtimeStatusInfo_Type &_x){
		DEF_Longitude = _x.DEF_Longitude;
		DEF_Latidute = _x.DEF_Latidute;
		DEF_VehSpd = _x.DEF_VehSpd;
		DEF_VehSpdVD = _x.DEF_VehSpdVD;
		return *this;
	}
	VehicleRealtimeStatusInfo_Type& operator=(VehicleRealtimeStatusInfo_Type &&_x){
		DEF_Longitude = std::move(_x.DEF_Longitude);
		DEF_Latidute = std::move(_x.DEF_Latidute);
		DEF_VehSpd = std::move(_x.DEF_VehSpd);
		DEF_VehSpdVD = std::move(_x.DEF_VehSpdVD);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(DEF_Longitude);
		fun(DEF_Latidute);
		fun(DEF_VehSpd);
		fun(DEF_VehSpdVD);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(DEF_Longitude);
		fun(DEF_Latidute);
		fun(DEF_VehSpd);
		fun(DEF_VehSpdVD);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (DEF_Longitude);
		fun << (DEF_Latidute);
		fun << (DEF_VehSpd);
		fun << (DEF_VehSpdVD);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (DEF_Longitude);
		fun >> (DEF_Latidute);
		fun >> (DEF_VehSpd);
		fun >> (DEF_VehSpdVD);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__VEHICLEREALTIMESTATUSINFO_TYPE_H__
