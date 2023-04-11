#ifndef ____BDCADCLI_H__
#define ____BDCADCLI_H__


#include "cstdint"






struct BDCADCLi {
public:
	std::uint8_t BCS_BrkLightOn;
	std::uint8_t BCS_NoBrakeForce;
	std::uint8_t BCS_BrakeOverHeat;
	std::uint8_t BCS_CDPIntervention;
	std::uint16_t BCS_FourwhlsBrkTrq;
	std::uint8_t BCS_HBAActive;
	std::uint16_t ADC_AEBTargetDecel;
	std::uint8_t ADC_AEBDecelCtrlReq;
	std::uint8_t ADC_AEBLVehHoldReq;
	std::uint8_t ADC_ABAReq;
	std::uint8_t ADC_ABALevel;
	std::uint8_t ADC_AWBReq;
	std::uint8_t ADC_ABPReq;
	std::uint8_t ADC_AWBLevel;
/*
	BDCADCLi() {}
	~BDCADCLi() {}
	BDCADCLi(const std::uint8_t _BCS_BrkLightOn,const std::uint8_t _BCS_NoBrakeForce,const std::uint8_t _BCS_BrakeOverHeat,const std::uint8_t _BCS_CDPIntervention,const std::uint16_t _BCS_FourwhlsBrkTrq,const std::uint8_t _BCS_HBAActive,const std::uint16_t _ADC_AEBTargetDecel,const std::uint8_t _ADC_AEBDecelCtrlReq,const std::uint8_t _ADC_AEBLVehHoldReq,const std::uint8_t _ADC_ABAReq,const std::uint8_t _ADC_ABALevel,const std::uint8_t _ADC_AWBReq,const std::uint8_t _ADC_ABPReq,const std::uint8_t _ADC_AWBLevel):BCS_BrkLightOn(_BCS_BrkLightOn),BCS_NoBrakeForce(_BCS_NoBrakeForce),BCS_BrakeOverHeat(_BCS_BrakeOverHeat),BCS_CDPIntervention(_BCS_CDPIntervention),BCS_FourwhlsBrkTrq(_BCS_FourwhlsBrkTrq),BCS_HBAActive(_BCS_HBAActive),ADC_AEBTargetDecel(_ADC_AEBTargetDecel),ADC_AEBDecelCtrlReq(_ADC_AEBDecelCtrlReq),ADC_AEBLVehHoldReq(_ADC_AEBLVehHoldReq),ADC_ABAReq(_ADC_ABAReq),ADC_ABALevel(_ADC_ABALevel),ADC_AWBReq(_ADC_AWBReq),ADC_ABPReq(_ADC_ABPReq),ADC_AWBLevel(_ADC_AWBLevel) {}
	BDCADCLi(const BDCADCLi &_x){
		BCS_BrkLightOn = _x.BCS_BrkLightOn;
		BCS_NoBrakeForce = _x.BCS_NoBrakeForce;
		BCS_BrakeOverHeat = _x.BCS_BrakeOverHeat;
		BCS_CDPIntervention = _x.BCS_CDPIntervention;
		BCS_FourwhlsBrkTrq = _x.BCS_FourwhlsBrkTrq;
		BCS_HBAActive = _x.BCS_HBAActive;
		ADC_AEBTargetDecel = _x.ADC_AEBTargetDecel;
		ADC_AEBDecelCtrlReq = _x.ADC_AEBDecelCtrlReq;
		ADC_AEBLVehHoldReq = _x.ADC_AEBLVehHoldReq;
		ADC_ABAReq = _x.ADC_ABAReq;
		ADC_ABALevel = _x.ADC_ABALevel;
		ADC_AWBReq = _x.ADC_AWBReq;
		ADC_ABPReq = _x.ADC_ABPReq;
		ADC_AWBLevel = _x.ADC_AWBLevel;
	}
	BDCADCLi(BDCADCLi &&_x){
		BCS_BrkLightOn = std::move(_x.BCS_BrkLightOn);
		BCS_NoBrakeForce = std::move(_x.BCS_NoBrakeForce);
		BCS_BrakeOverHeat = std::move(_x.BCS_BrakeOverHeat);
		BCS_CDPIntervention = std::move(_x.BCS_CDPIntervention);
		BCS_FourwhlsBrkTrq = std::move(_x.BCS_FourwhlsBrkTrq);
		BCS_HBAActive = std::move(_x.BCS_HBAActive);
		ADC_AEBTargetDecel = std::move(_x.ADC_AEBTargetDecel);
		ADC_AEBDecelCtrlReq = std::move(_x.ADC_AEBDecelCtrlReq);
		ADC_AEBLVehHoldReq = std::move(_x.ADC_AEBLVehHoldReq);
		ADC_ABAReq = std::move(_x.ADC_ABAReq);
		ADC_ABALevel = std::move(_x.ADC_ABALevel);
		ADC_AWBReq = std::move(_x.ADC_AWBReq);
		ADC_ABPReq = std::move(_x.ADC_ABPReq);
		ADC_AWBLevel = std::move(_x.ADC_AWBLevel);
	}
	BDCADCLi& operator=(const BDCADCLi &_x){
		BCS_BrkLightOn = _x.BCS_BrkLightOn;
		BCS_NoBrakeForce = _x.BCS_NoBrakeForce;
		BCS_BrakeOverHeat = _x.BCS_BrakeOverHeat;
		BCS_CDPIntervention = _x.BCS_CDPIntervention;
		BCS_FourwhlsBrkTrq = _x.BCS_FourwhlsBrkTrq;
		BCS_HBAActive = _x.BCS_HBAActive;
		ADC_AEBTargetDecel = _x.ADC_AEBTargetDecel;
		ADC_AEBDecelCtrlReq = _x.ADC_AEBDecelCtrlReq;
		ADC_AEBLVehHoldReq = _x.ADC_AEBLVehHoldReq;
		ADC_ABAReq = _x.ADC_ABAReq;
		ADC_ABALevel = _x.ADC_ABALevel;
		ADC_AWBReq = _x.ADC_AWBReq;
		ADC_ABPReq = _x.ADC_ABPReq;
		ADC_AWBLevel = _x.ADC_AWBLevel;
		return *this;
	}
	BDCADCLi& operator=(BDCADCLi &&_x){
		BCS_BrkLightOn = std::move(_x.BCS_BrkLightOn);
		BCS_NoBrakeForce = std::move(_x.BCS_NoBrakeForce);
		BCS_BrakeOverHeat = std::move(_x.BCS_BrakeOverHeat);
		BCS_CDPIntervention = std::move(_x.BCS_CDPIntervention);
		BCS_FourwhlsBrkTrq = std::move(_x.BCS_FourwhlsBrkTrq);
		BCS_HBAActive = std::move(_x.BCS_HBAActive);
		ADC_AEBTargetDecel = std::move(_x.ADC_AEBTargetDecel);
		ADC_AEBDecelCtrlReq = std::move(_x.ADC_AEBDecelCtrlReq);
		ADC_AEBLVehHoldReq = std::move(_x.ADC_AEBLVehHoldReq);
		ADC_ABAReq = std::move(_x.ADC_ABAReq);
		ADC_ABALevel = std::move(_x.ADC_ABALevel);
		ADC_AWBReq = std::move(_x.ADC_AWBReq);
		ADC_ABPReq = std::move(_x.ADC_ABPReq);
		ADC_AWBLevel = std::move(_x.ADC_AWBLevel);
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
		fun(BCS_FourwhlsBrkTrq);
		fun(BCS_HBAActive);
		fun(ADC_AEBTargetDecel);
		fun(ADC_AEBDecelCtrlReq);
		fun(ADC_AEBLVehHoldReq);
		fun(ADC_ABAReq);
		fun(ADC_ABALevel);
		fun(ADC_AWBReq);
		fun(ADC_ABPReq);
		fun(ADC_AWBLevel);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(BCS_BrkLightOn);
		fun(BCS_NoBrakeForce);
		fun(BCS_BrakeOverHeat);
		fun(BCS_CDPIntervention);
		fun(BCS_FourwhlsBrkTrq);
		fun(BCS_HBAActive);
		fun(ADC_AEBTargetDecel);
		fun(ADC_AEBDecelCtrlReq);
		fun(ADC_AEBLVehHoldReq);
		fun(ADC_ABAReq);
		fun(ADC_ABALevel);
		fun(ADC_AWBReq);
		fun(ADC_ABPReq);
		fun(ADC_AWBLevel);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (BCS_BrkLightOn);
		fun << (BCS_NoBrakeForce);
		fun << (BCS_BrakeOverHeat);
		fun << (BCS_CDPIntervention);
		fun << (BCS_FourwhlsBrkTrq);
		fun << (BCS_HBAActive);
		fun << (ADC_AEBTargetDecel);
		fun << (ADC_AEBDecelCtrlReq);
		fun << (ADC_AEBLVehHoldReq);
		fun << (ADC_ABAReq);
		fun << (ADC_ABALevel);
		fun << (ADC_AWBReq);
		fun << (ADC_ABPReq);
		fun << (ADC_AWBLevel);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (BCS_BrkLightOn);
		fun >> (BCS_NoBrakeForce);
		fun >> (BCS_BrakeOverHeat);
		fun >> (BCS_CDPIntervention);
		fun >> (BCS_FourwhlsBrkTrq);
		fun >> (BCS_HBAActive);
		fun >> (ADC_AEBTargetDecel);
		fun >> (ADC_AEBDecelCtrlReq);
		fun >> (ADC_AEBLVehHoldReq);
		fun >> (ADC_ABAReq);
		fun >> (ADC_ABALevel);
		fun >> (ADC_AWBReq);
		fun >> (ADC_ABPReq);
		fun >> (ADC_AWBLevel);
	}
};

#endif //____BDCADCLI_H__
