#ifndef __ARA_COM_VSOMEIP__INHIBITST_H__
#define __ARA_COM_VSOMEIP__INHIBITST_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct InhibitSt {
public:
	std::uint8_t LockOverHeatInhibit;
	std::uint8_t LockVehicleModeInhibit;
	std::uint8_t LockEmergencyInhibit;
/*
	InhibitSt() {}
	~InhibitSt() {}
	InhibitSt(const std::uint8_t _LockOverHeatInhibit,const std::uint8_t _LockVehicleModeInhibit,const std::uint8_t _LockEmergencyInhibit):LockOverHeatInhibit(_LockOverHeatInhibit),LockVehicleModeInhibit(_LockVehicleModeInhibit),LockEmergencyInhibit(_LockEmergencyInhibit) {}
	InhibitSt(const InhibitSt &_x){
		LockOverHeatInhibit = _x.LockOverHeatInhibit;
		LockVehicleModeInhibit = _x.LockVehicleModeInhibit;
		LockEmergencyInhibit = _x.LockEmergencyInhibit;
	}
	InhibitSt(InhibitSt &&_x){
		LockOverHeatInhibit = std::move(_x.LockOverHeatInhibit);
		LockVehicleModeInhibit = std::move(_x.LockVehicleModeInhibit);
		LockEmergencyInhibit = std::move(_x.LockEmergencyInhibit);
	}
	InhibitSt& operator=(const InhibitSt &_x){
		LockOverHeatInhibit = _x.LockOverHeatInhibit;
		LockVehicleModeInhibit = _x.LockVehicleModeInhibit;
		LockEmergencyInhibit = _x.LockEmergencyInhibit;
		return *this;
	}
	InhibitSt& operator=(InhibitSt &&_x){
		LockOverHeatInhibit = std::move(_x.LockOverHeatInhibit);
		LockVehicleModeInhibit = std::move(_x.LockVehicleModeInhibit);
		LockEmergencyInhibit = std::move(_x.LockEmergencyInhibit);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(LockOverHeatInhibit);
		fun(LockVehicleModeInhibit);
		fun(LockEmergencyInhibit);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(LockOverHeatInhibit);
		fun(LockVehicleModeInhibit);
		fun(LockEmergencyInhibit);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (LockOverHeatInhibit);
		fun << (LockVehicleModeInhibit);
		fun << (LockEmergencyInhibit);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (LockOverHeatInhibit);
		fun >> (LockVehicleModeInhibit);
		fun >> (LockEmergencyInhibit);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__INHIBITST_H__
