#ifndef __ARA_VIRTUALTESTER__SCRIPTRUNCONDITION_H__
#define __ARA_VIRTUALTESTER__SCRIPTRUNCONDITION_H__


#include "cstdint"





namespace ara
{
namespace virtualtester
{

struct ScriptRunCondition {
public:
	std::uint8_t VehicleSpeed;
	std::uint8_t BattarySOC;
	std::int16_t VehicleMode;
	std::int16_t DriveMode;
/*
	ScriptRunCondition() {}
	~ScriptRunCondition() {}
	ScriptRunCondition(const std::uint8_t _VehicleSpeed,const std::uint8_t _BattarySOC,const std::int16_t _VehicleMode,const std::int16_t _DriveMode):VehicleSpeed(_VehicleSpeed),BattarySOC(_BattarySOC),VehicleMode(_VehicleMode),DriveMode(_DriveMode) {}
	ScriptRunCondition(const ScriptRunCondition &_x){
		VehicleSpeed = _x.VehicleSpeed;
		BattarySOC = _x.BattarySOC;
		VehicleMode = _x.VehicleMode;
		DriveMode = _x.DriveMode;
	}
	ScriptRunCondition(ScriptRunCondition &&_x){
		VehicleSpeed = std::move(_x.VehicleSpeed);
		BattarySOC = std::move(_x.BattarySOC);
		VehicleMode = std::move(_x.VehicleMode);
		DriveMode = std::move(_x.DriveMode);
	}
	ScriptRunCondition& operator=(const ScriptRunCondition &_x){
		VehicleSpeed = _x.VehicleSpeed;
		BattarySOC = _x.BattarySOC;
		VehicleMode = _x.VehicleMode;
		DriveMode = _x.DriveMode;
		return *this;
	}
	ScriptRunCondition& operator=(ScriptRunCondition &&_x){
		VehicleSpeed = std::move(_x.VehicleSpeed);
		BattarySOC = std::move(_x.BattarySOC);
		VehicleMode = std::move(_x.VehicleMode);
		DriveMode = std::move(_x.DriveMode);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(VehicleSpeed);
		fun(BattarySOC);
		fun(VehicleMode);
		fun(DriveMode);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(VehicleSpeed);
		fun(BattarySOC);
		fun(VehicleMode);
		fun(DriveMode);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (VehicleSpeed);
		fun << (BattarySOC);
		fun << (VehicleMode);
		fun << (DriveMode);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (VehicleSpeed);
		fun >> (BattarySOC);
		fun >> (VehicleMode);
		fun >> (DriveMode);
	}
};

}//ara
}//virtualtester
#endif //__ARA_VIRTUALTESTER__SCRIPTRUNCONDITION_H__
