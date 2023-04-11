#ifndef ____BDCVCUDATA6_H__
#define ____BDCVCUDATA6_H__


#include "cstdint"






struct BDCVCUDATA6 {
public:
	std::uint64_t HVACF_Batt_EXVPtPress;
	std::uint64_t HVACF_Batt_EXVPtTemp;
	std::uint64_t HVAC_ECPAvalibleSt;
	std::uint64_t HVAC_Batt_EVATsh;
	std::uint64_t HVACF_RawExterTemp;
	std::uint64_t VCU_ACCStRespVCU_ads_bAccActive;
	std::uint64_t HVACF_EngineStartRq;
	std::uint8_t VCU_HTMSMTWaterPumpSpdSet;
	std::uint8_t VCU_CoolFanFault;
/*
	BDCVCUDATA6() {}
	~BDCVCUDATA6() {}
	BDCVCUDATA6(const std::uint64_t _HVACF_Batt_EXVPtPress,const std::uint64_t _HVACF_Batt_EXVPtTemp,const std::uint64_t _HVAC_ECPAvalibleSt,const std::uint64_t _HVAC_Batt_EVATsh,const std::uint64_t _HVACF_RawExterTemp,const std::uint64_t _VCU_ACCStRespVCU_ads_bAccActive,const std::uint64_t _HVACF_EngineStartRq,const std::uint8_t _VCU_HTMSMTWaterPumpSpdSet,const std::uint8_t _VCU_CoolFanFault):HVACF_Batt_EXVPtPress(_HVACF_Batt_EXVPtPress),HVACF_Batt_EXVPtTemp(_HVACF_Batt_EXVPtTemp),HVAC_ECPAvalibleSt(_HVAC_ECPAvalibleSt),HVAC_Batt_EVATsh(_HVAC_Batt_EVATsh),HVACF_RawExterTemp(_HVACF_RawExterTemp),VCU_ACCStRespVCU_ads_bAccActive(_VCU_ACCStRespVCU_ads_bAccActive),HVACF_EngineStartRq(_HVACF_EngineStartRq),VCU_HTMSMTWaterPumpSpdSet(_VCU_HTMSMTWaterPumpSpdSet),VCU_CoolFanFault(_VCU_CoolFanFault) {}
	BDCVCUDATA6(const BDCVCUDATA6 &_x){
		HVACF_Batt_EXVPtPress = _x.HVACF_Batt_EXVPtPress;
		HVACF_Batt_EXVPtTemp = _x.HVACF_Batt_EXVPtTemp;
		HVAC_ECPAvalibleSt = _x.HVAC_ECPAvalibleSt;
		HVAC_Batt_EVATsh = _x.HVAC_Batt_EVATsh;
		HVACF_RawExterTemp = _x.HVACF_RawExterTemp;
		VCU_ACCStRespVCU_ads_bAccActive = _x.VCU_ACCStRespVCU_ads_bAccActive;
		HVACF_EngineStartRq = _x.HVACF_EngineStartRq;
		VCU_HTMSMTWaterPumpSpdSet = _x.VCU_HTMSMTWaterPumpSpdSet;
		VCU_CoolFanFault = _x.VCU_CoolFanFault;
	}
	BDCVCUDATA6(BDCVCUDATA6 &&_x){
		HVACF_Batt_EXVPtPress = std::move(_x.HVACF_Batt_EXVPtPress);
		HVACF_Batt_EXVPtTemp = std::move(_x.HVACF_Batt_EXVPtTemp);
		HVAC_ECPAvalibleSt = std::move(_x.HVAC_ECPAvalibleSt);
		HVAC_Batt_EVATsh = std::move(_x.HVAC_Batt_EVATsh);
		HVACF_RawExterTemp = std::move(_x.HVACF_RawExterTemp);
		VCU_ACCStRespVCU_ads_bAccActive = std::move(_x.VCU_ACCStRespVCU_ads_bAccActive);
		HVACF_EngineStartRq = std::move(_x.HVACF_EngineStartRq);
		VCU_HTMSMTWaterPumpSpdSet = std::move(_x.VCU_HTMSMTWaterPumpSpdSet);
		VCU_CoolFanFault = std::move(_x.VCU_CoolFanFault);
	}
	BDCVCUDATA6& operator=(const BDCVCUDATA6 &_x){
		HVACF_Batt_EXVPtPress = _x.HVACF_Batt_EXVPtPress;
		HVACF_Batt_EXVPtTemp = _x.HVACF_Batt_EXVPtTemp;
		HVAC_ECPAvalibleSt = _x.HVAC_ECPAvalibleSt;
		HVAC_Batt_EVATsh = _x.HVAC_Batt_EVATsh;
		HVACF_RawExterTemp = _x.HVACF_RawExterTemp;
		VCU_ACCStRespVCU_ads_bAccActive = _x.VCU_ACCStRespVCU_ads_bAccActive;
		HVACF_EngineStartRq = _x.HVACF_EngineStartRq;
		VCU_HTMSMTWaterPumpSpdSet = _x.VCU_HTMSMTWaterPumpSpdSet;
		VCU_CoolFanFault = _x.VCU_CoolFanFault;
		return *this;
	}
	BDCVCUDATA6& operator=(BDCVCUDATA6 &&_x){
		HVACF_Batt_EXVPtPress = std::move(_x.HVACF_Batt_EXVPtPress);
		HVACF_Batt_EXVPtTemp = std::move(_x.HVACF_Batt_EXVPtTemp);
		HVAC_ECPAvalibleSt = std::move(_x.HVAC_ECPAvalibleSt);
		HVAC_Batt_EVATsh = std::move(_x.HVAC_Batt_EVATsh);
		HVACF_RawExterTemp = std::move(_x.HVACF_RawExterTemp);
		VCU_ACCStRespVCU_ads_bAccActive = std::move(_x.VCU_ACCStRespVCU_ads_bAccActive);
		HVACF_EngineStartRq = std::move(_x.HVACF_EngineStartRq);
		VCU_HTMSMTWaterPumpSpdSet = std::move(_x.VCU_HTMSMTWaterPumpSpdSet);
		VCU_CoolFanFault = std::move(_x.VCU_CoolFanFault);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(HVACF_Batt_EXVPtPress);
		fun(HVACF_Batt_EXVPtTemp);
		fun(HVAC_ECPAvalibleSt);
		fun(HVAC_Batt_EVATsh);
		fun(HVACF_RawExterTemp);
		fun(VCU_ACCStRespVCU_ads_bAccActive);
		fun(HVACF_EngineStartRq);
		fun(VCU_HTMSMTWaterPumpSpdSet);
		fun(VCU_CoolFanFault);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(HVACF_Batt_EXVPtPress);
		fun(HVACF_Batt_EXVPtTemp);
		fun(HVAC_ECPAvalibleSt);
		fun(HVAC_Batt_EVATsh);
		fun(HVACF_RawExterTemp);
		fun(VCU_ACCStRespVCU_ads_bAccActive);
		fun(HVACF_EngineStartRq);
		fun(VCU_HTMSMTWaterPumpSpdSet);
		fun(VCU_CoolFanFault);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (HVACF_Batt_EXVPtPress);
		fun << (HVACF_Batt_EXVPtTemp);
		fun << (HVAC_ECPAvalibleSt);
		fun << (HVAC_Batt_EVATsh);
		fun << (HVACF_RawExterTemp);
		fun << (VCU_ACCStRespVCU_ads_bAccActive);
		fun << (HVACF_EngineStartRq);
		fun << (VCU_HTMSMTWaterPumpSpdSet);
		fun << (VCU_CoolFanFault);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (HVACF_Batt_EXVPtPress);
		fun >> (HVACF_Batt_EXVPtTemp);
		fun >> (HVAC_ECPAvalibleSt);
		fun >> (HVAC_Batt_EVATsh);
		fun >> (HVACF_RawExterTemp);
		fun >> (VCU_ACCStRespVCU_ads_bAccActive);
		fun >> (HVACF_EngineStartRq);
		fun >> (VCU_HTMSMTWaterPumpSpdSet);
		fun >> (VCU_CoolFanFault);
	}
};

#endif //____BDCVCUDATA6_H__
