#ifndef ____BDCBCS_H__
#define ____BDCBCS_H__


#include "cstdint"






struct BDCBCS {
public:
	std::uint8_t BCS_BrkLightOn;
	std::uint8_t BCS_NoBrakeForce;
	std::uint8_t BCS_BrakeOverHeat;
	std::uint8_t BCS_CDPIntervention;
/*
	BDCBCS() {}
	~BDCBCS() {}
	BDCBCS(const std::uint8_t _BCS_BrkLightOn,const std::uint8_t _BCS_NoBrakeForce,const std::uint8_t _BCS_BrakeOverHeat,const std::uint8_t _BCS_CDPIntervention):BCS_BrkLightOn(_BCS_BrkLightOn),BCS_NoBrakeForce(_BCS_NoBrakeForce),BCS_BrakeOverHeat(_BCS_BrakeOverHeat),BCS_CDPIntervention(_BCS_CDPIntervention) {}
	BDCBCS(const BDCBCS &_x){
		BCS_BrkLightOn = _x.BCS_BrkLightOn;
		BCS_NoBrakeForce = _x.BCS_NoBrakeForce;
		BCS_BrakeOverHeat = _x.BCS_BrakeOverHeat;
		BCS_CDPIntervention = _x.BCS_CDPIntervention;
	}
	BDCBCS(BDCBCS &&_x){
		BCS_BrkLightOn = std::move(_x.BCS_BrkLightOn);
		BCS_NoBrakeForce = std::move(_x.BCS_NoBrakeForce);
		BCS_BrakeOverHeat = std::move(_x.BCS_BrakeOverHeat);
		BCS_CDPIntervention = std::move(_x.BCS_CDPIntervention);
	}
	BDCBCS& operator=(const BDCBCS &_x){
		BCS_BrkLightOn = _x.BCS_BrkLightOn;
		BCS_NoBrakeForce = _x.BCS_NoBrakeForce;
		BCS_BrakeOverHeat = _x.BCS_BrakeOverHeat;
		BCS_CDPIntervention = _x.BCS_CDPIntervention;
		return *this;
	}
	BDCBCS& operator=(BDCBCS &&_x){
		BCS_BrkLightOn = std::move(_x.BCS_BrkLightOn);
		BCS_NoBrakeForce = std::move(_x.BCS_NoBrakeForce);
		BCS_BrakeOverHeat = std::move(_x.BCS_BrakeOverHeat);
		BCS_CDPIntervention = std::move(_x.BCS_CDPIntervention);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(BCS_BrkLightOn);
		fun(BCS_NoBrakeForce);
		fun(BCS_BrakeOverHeat);
		fun(BCS_CDPIntervention);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(BCS_BrkLightOn);
		fun(BCS_NoBrakeForce);
		fun(BCS_BrakeOverHeat);
		fun(BCS_CDPIntervention);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (BCS_BrkLightOn);
		fun << (BCS_NoBrakeForce);
		fun << (BCS_BrakeOverHeat);
		fun << (BCS_CDPIntervention);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (BCS_BrkLightOn);
		fun >> (BCS_NoBrakeForce);
		fun >> (BCS_BrakeOverHeat);
		fun >> (BCS_CDPIntervention);
	}
};

#endif //____BDCBCS_H__
