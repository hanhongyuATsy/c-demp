#ifndef ____BDCELFAULT_H__
#define ____BDCELFAULT_H__


#include "cstdint"






struct BDCELFAULT {
public:
	std::uint8_t EL_FLPositionLightFaultSt;
	std::uint8_t EL_FRPositionLightFaultSt;
	std::uint8_t EL_LeftLowBeamFaultSt;
	std::uint8_t EL_RightLowBeamFaultSt;
	std::uint8_t EL_LeftHighBeamFaultSt;
	std::uint8_t EL_RightHighBeamFaultSt;
	std::uint8_t EL_FLFogLightFaultSt;
	std::uint8_t EL_FRFogLightFaultSt;
	std::uint8_t EL_LeftDRLFaultSt;
	std::uint8_t EL_RightDRLFaultSt;
	std::uint8_t EL_LeftCornerLightFaultSt;
	std::uint8_t EL_RightCornerLightFaultSt;
	std::uint8_t EL_FLTurnLightFaultSt;
	std::uint8_t EL_FRTurnLightFaultSt;
	std::uint8_t EL_FrontParkLightFaultSt;
	std::uint8_t EL_GreenChargeLightFaultSt;
	std::uint8_t EL_RedChargeLightFaultSt;
	std::uint8_t EL_BlueChargeLightFaultSt;
	std::uint8_t EL_LeftPdLightFaultSt;
	std::uint8_t EL_MLTurnLightFaultSt;
	std::uint8_t EL_LeftBSDIndicatorFaultSt;
	std::uint8_t EL_RightPdLightFaultSt;
	std::uint8_t EL_MRTurnLightFaultSt;
	std::uint8_t EL_RightBSDIndicatorFaultSt;
	std::uint8_t EL_ReverseLightFaultSt;
	std::uint8_t EL_SideBrkLightFaultSt;
	std::uint8_t EL_CHMSLFaultSt;
	std::uint8_t EL_RLPositionLightFaultSt;
	std::uint8_t EL_RRPositionLightFaultSt;
	std::uint8_t EL_RearFogLightFaultSt;
	std::uint8_t EL_LicencePlateLightFaultSt;
	std::uint8_t EL_RLTurnLightFaultSt;
	std::uint8_t EL_RRTurnLightFaultSt;
	std::uint8_t EL_RearParkLightFaultSt;
	std::uint8_t EL_RearChargeLightFaultSt;
/*
	BDCELFAULT() {}
	~BDCELFAULT() {}
	BDCELFAULT(const std::uint8_t _EL_FLPositionLightFaultSt,const std::uint8_t _EL_FRPositionLightFaultSt,const std::uint8_t _EL_LeftLowBeamFaultSt,const std::uint8_t _EL_RightLowBeamFaultSt,const std::uint8_t _EL_LeftHighBeamFaultSt,const std::uint8_t _EL_RightHighBeamFaultSt,const std::uint8_t _EL_FLFogLightFaultSt,const std::uint8_t _EL_FRFogLightFaultSt,const std::uint8_t _EL_LeftDRLFaultSt,const std::uint8_t _EL_RightDRLFaultSt,const std::uint8_t _EL_LeftCornerLightFaultSt,const std::uint8_t _EL_RightCornerLightFaultSt,const std::uint8_t _EL_FLTurnLightFaultSt,const std::uint8_t _EL_FRTurnLightFaultSt,const std::uint8_t _EL_FrontParkLightFaultSt,const std::uint8_t _EL_GreenChargeLightFaultSt,const std::uint8_t _EL_RedChargeLightFaultSt,const std::uint8_t _EL_BlueChargeLightFaultSt,const std::uint8_t _EL_LeftPdLightFaultSt,const std::uint8_t _EL_MLTurnLightFaultSt,const std::uint8_t _EL_LeftBSDIndicatorFaultSt,const std::uint8_t _EL_RightPdLightFaultSt,const std::uint8_t _EL_MRTurnLightFaultSt,const std::uint8_t _EL_RightBSDIndicatorFaultSt,const std::uint8_t _EL_ReverseLightFaultSt,const std::uint8_t _EL_SideBrkLightFaultSt,const std::uint8_t _EL_CHMSLFaultSt,const std::uint8_t _EL_RLPositionLightFaultSt,const std::uint8_t _EL_RRPositionLightFaultSt,const std::uint8_t _EL_RearFogLightFaultSt,const std::uint8_t _EL_LicencePlateLightFaultSt,const std::uint8_t _EL_RLTurnLightFaultSt,const std::uint8_t _EL_RRTurnLightFaultSt,const std::uint8_t _EL_RearParkLightFaultSt,const std::uint8_t _EL_RearChargeLightFaultSt):EL_FLPositionLightFaultSt(_EL_FLPositionLightFaultSt),EL_FRPositionLightFaultSt(_EL_FRPositionLightFaultSt),EL_LeftLowBeamFaultSt(_EL_LeftLowBeamFaultSt),EL_RightLowBeamFaultSt(_EL_RightLowBeamFaultSt),EL_LeftHighBeamFaultSt(_EL_LeftHighBeamFaultSt),EL_RightHighBeamFaultSt(_EL_RightHighBeamFaultSt),EL_FLFogLightFaultSt(_EL_FLFogLightFaultSt),EL_FRFogLightFaultSt(_EL_FRFogLightFaultSt),EL_LeftDRLFaultSt(_EL_LeftDRLFaultSt),EL_RightDRLFaultSt(_EL_RightDRLFaultSt),EL_LeftCornerLightFaultSt(_EL_LeftCornerLightFaultSt),EL_RightCornerLightFaultSt(_EL_RightCornerLightFaultSt),EL_FLTurnLightFaultSt(_EL_FLTurnLightFaultSt),EL_FRTurnLightFaultSt(_EL_FRTurnLightFaultSt),EL_FrontParkLightFaultSt(_EL_FrontParkLightFaultSt),EL_GreenChargeLightFaultSt(_EL_GreenChargeLightFaultSt),EL_RedChargeLightFaultSt(_EL_RedChargeLightFaultSt),EL_BlueChargeLightFaultSt(_EL_BlueChargeLightFaultSt),EL_LeftPdLightFaultSt(_EL_LeftPdLightFaultSt),EL_MLTurnLightFaultSt(_EL_MLTurnLightFaultSt),EL_LeftBSDIndicatorFaultSt(_EL_LeftBSDIndicatorFaultSt),EL_RightPdLightFaultSt(_EL_RightPdLightFaultSt),EL_MRTurnLightFaultSt(_EL_MRTurnLightFaultSt),EL_RightBSDIndicatorFaultSt(_EL_RightBSDIndicatorFaultSt),EL_ReverseLightFaultSt(_EL_ReverseLightFaultSt),EL_SideBrkLightFaultSt(_EL_SideBrkLightFaultSt),EL_CHMSLFaultSt(_EL_CHMSLFaultSt),EL_RLPositionLightFaultSt(_EL_RLPositionLightFaultSt),EL_RRPositionLightFaultSt(_EL_RRPositionLightFaultSt),EL_RearFogLightFaultSt(_EL_RearFogLightFaultSt),EL_LicencePlateLightFaultSt(_EL_LicencePlateLightFaultSt),EL_RLTurnLightFaultSt(_EL_RLTurnLightFaultSt),EL_RRTurnLightFaultSt(_EL_RRTurnLightFaultSt),EL_RearParkLightFaultSt(_EL_RearParkLightFaultSt),EL_RearChargeLightFaultSt(_EL_RearChargeLightFaultSt) {}
	BDCELFAULT(const BDCELFAULT &_x){
		EL_FLPositionLightFaultSt = _x.EL_FLPositionLightFaultSt;
		EL_FRPositionLightFaultSt = _x.EL_FRPositionLightFaultSt;
		EL_LeftLowBeamFaultSt = _x.EL_LeftLowBeamFaultSt;
		EL_RightLowBeamFaultSt = _x.EL_RightLowBeamFaultSt;
		EL_LeftHighBeamFaultSt = _x.EL_LeftHighBeamFaultSt;
		EL_RightHighBeamFaultSt = _x.EL_RightHighBeamFaultSt;
		EL_FLFogLightFaultSt = _x.EL_FLFogLightFaultSt;
		EL_FRFogLightFaultSt = _x.EL_FRFogLightFaultSt;
		EL_LeftDRLFaultSt = _x.EL_LeftDRLFaultSt;
		EL_RightDRLFaultSt = _x.EL_RightDRLFaultSt;
		EL_LeftCornerLightFaultSt = _x.EL_LeftCornerLightFaultSt;
		EL_RightCornerLightFaultSt = _x.EL_RightCornerLightFaultSt;
		EL_FLTurnLightFaultSt = _x.EL_FLTurnLightFaultSt;
		EL_FRTurnLightFaultSt = _x.EL_FRTurnLightFaultSt;
		EL_FrontParkLightFaultSt = _x.EL_FrontParkLightFaultSt;
		EL_GreenChargeLightFaultSt = _x.EL_GreenChargeLightFaultSt;
		EL_RedChargeLightFaultSt = _x.EL_RedChargeLightFaultSt;
		EL_BlueChargeLightFaultSt = _x.EL_BlueChargeLightFaultSt;
		EL_LeftPdLightFaultSt = _x.EL_LeftPdLightFaultSt;
		EL_MLTurnLightFaultSt = _x.EL_MLTurnLightFaultSt;
		EL_LeftBSDIndicatorFaultSt = _x.EL_LeftBSDIndicatorFaultSt;
		EL_RightPdLightFaultSt = _x.EL_RightPdLightFaultSt;
		EL_MRTurnLightFaultSt = _x.EL_MRTurnLightFaultSt;
		EL_RightBSDIndicatorFaultSt = _x.EL_RightBSDIndicatorFaultSt;
		EL_ReverseLightFaultSt = _x.EL_ReverseLightFaultSt;
		EL_SideBrkLightFaultSt = _x.EL_SideBrkLightFaultSt;
		EL_CHMSLFaultSt = _x.EL_CHMSLFaultSt;
		EL_RLPositionLightFaultSt = _x.EL_RLPositionLightFaultSt;
		EL_RRPositionLightFaultSt = _x.EL_RRPositionLightFaultSt;
		EL_RearFogLightFaultSt = _x.EL_RearFogLightFaultSt;
		EL_LicencePlateLightFaultSt = _x.EL_LicencePlateLightFaultSt;
		EL_RLTurnLightFaultSt = _x.EL_RLTurnLightFaultSt;
		EL_RRTurnLightFaultSt = _x.EL_RRTurnLightFaultSt;
		EL_RearParkLightFaultSt = _x.EL_RearParkLightFaultSt;
		EL_RearChargeLightFaultSt = _x.EL_RearChargeLightFaultSt;
	}
	BDCELFAULT(BDCELFAULT &&_x){
		EL_FLPositionLightFaultSt = std::move(_x.EL_FLPositionLightFaultSt);
		EL_FRPositionLightFaultSt = std::move(_x.EL_FRPositionLightFaultSt);
		EL_LeftLowBeamFaultSt = std::move(_x.EL_LeftLowBeamFaultSt);
		EL_RightLowBeamFaultSt = std::move(_x.EL_RightLowBeamFaultSt);
		EL_LeftHighBeamFaultSt = std::move(_x.EL_LeftHighBeamFaultSt);
		EL_RightHighBeamFaultSt = std::move(_x.EL_RightHighBeamFaultSt);
		EL_FLFogLightFaultSt = std::move(_x.EL_FLFogLightFaultSt);
		EL_FRFogLightFaultSt = std::move(_x.EL_FRFogLightFaultSt);
		EL_LeftDRLFaultSt = std::move(_x.EL_LeftDRLFaultSt);
		EL_RightDRLFaultSt = std::move(_x.EL_RightDRLFaultSt);
		EL_LeftCornerLightFaultSt = std::move(_x.EL_LeftCornerLightFaultSt);
		EL_RightCornerLightFaultSt = std::move(_x.EL_RightCornerLightFaultSt);
		EL_FLTurnLightFaultSt = std::move(_x.EL_FLTurnLightFaultSt);
		EL_FRTurnLightFaultSt = std::move(_x.EL_FRTurnLightFaultSt);
		EL_FrontParkLightFaultSt = std::move(_x.EL_FrontParkLightFaultSt);
		EL_GreenChargeLightFaultSt = std::move(_x.EL_GreenChargeLightFaultSt);
		EL_RedChargeLightFaultSt = std::move(_x.EL_RedChargeLightFaultSt);
		EL_BlueChargeLightFaultSt = std::move(_x.EL_BlueChargeLightFaultSt);
		EL_LeftPdLightFaultSt = std::move(_x.EL_LeftPdLightFaultSt);
		EL_MLTurnLightFaultSt = std::move(_x.EL_MLTurnLightFaultSt);
		EL_LeftBSDIndicatorFaultSt = std::move(_x.EL_LeftBSDIndicatorFaultSt);
		EL_RightPdLightFaultSt = std::move(_x.EL_RightPdLightFaultSt);
		EL_MRTurnLightFaultSt = std::move(_x.EL_MRTurnLightFaultSt);
		EL_RightBSDIndicatorFaultSt = std::move(_x.EL_RightBSDIndicatorFaultSt);
		EL_ReverseLightFaultSt = std::move(_x.EL_ReverseLightFaultSt);
		EL_SideBrkLightFaultSt = std::move(_x.EL_SideBrkLightFaultSt);
		EL_CHMSLFaultSt = std::move(_x.EL_CHMSLFaultSt);
		EL_RLPositionLightFaultSt = std::move(_x.EL_RLPositionLightFaultSt);
		EL_RRPositionLightFaultSt = std::move(_x.EL_RRPositionLightFaultSt);
		EL_RearFogLightFaultSt = std::move(_x.EL_RearFogLightFaultSt);
		EL_LicencePlateLightFaultSt = std::move(_x.EL_LicencePlateLightFaultSt);
		EL_RLTurnLightFaultSt = std::move(_x.EL_RLTurnLightFaultSt);
		EL_RRTurnLightFaultSt = std::move(_x.EL_RRTurnLightFaultSt);
		EL_RearParkLightFaultSt = std::move(_x.EL_RearParkLightFaultSt);
		EL_RearChargeLightFaultSt = std::move(_x.EL_RearChargeLightFaultSt);
	}
	BDCELFAULT& operator=(const BDCELFAULT &_x){
		EL_FLPositionLightFaultSt = _x.EL_FLPositionLightFaultSt;
		EL_FRPositionLightFaultSt = _x.EL_FRPositionLightFaultSt;
		EL_LeftLowBeamFaultSt = _x.EL_LeftLowBeamFaultSt;
		EL_RightLowBeamFaultSt = _x.EL_RightLowBeamFaultSt;
		EL_LeftHighBeamFaultSt = _x.EL_LeftHighBeamFaultSt;
		EL_RightHighBeamFaultSt = _x.EL_RightHighBeamFaultSt;
		EL_FLFogLightFaultSt = _x.EL_FLFogLightFaultSt;
		EL_FRFogLightFaultSt = _x.EL_FRFogLightFaultSt;
		EL_LeftDRLFaultSt = _x.EL_LeftDRLFaultSt;
		EL_RightDRLFaultSt = _x.EL_RightDRLFaultSt;
		EL_LeftCornerLightFaultSt = _x.EL_LeftCornerLightFaultSt;
		EL_RightCornerLightFaultSt = _x.EL_RightCornerLightFaultSt;
		EL_FLTurnLightFaultSt = _x.EL_FLTurnLightFaultSt;
		EL_FRTurnLightFaultSt = _x.EL_FRTurnLightFaultSt;
		EL_FrontParkLightFaultSt = _x.EL_FrontParkLightFaultSt;
		EL_GreenChargeLightFaultSt = _x.EL_GreenChargeLightFaultSt;
		EL_RedChargeLightFaultSt = _x.EL_RedChargeLightFaultSt;
		EL_BlueChargeLightFaultSt = _x.EL_BlueChargeLightFaultSt;
		EL_LeftPdLightFaultSt = _x.EL_LeftPdLightFaultSt;
		EL_MLTurnLightFaultSt = _x.EL_MLTurnLightFaultSt;
		EL_LeftBSDIndicatorFaultSt = _x.EL_LeftBSDIndicatorFaultSt;
		EL_RightPdLightFaultSt = _x.EL_RightPdLightFaultSt;
		EL_MRTurnLightFaultSt = _x.EL_MRTurnLightFaultSt;
		EL_RightBSDIndicatorFaultSt = _x.EL_RightBSDIndicatorFaultSt;
		EL_ReverseLightFaultSt = _x.EL_ReverseLightFaultSt;
		EL_SideBrkLightFaultSt = _x.EL_SideBrkLightFaultSt;
		EL_CHMSLFaultSt = _x.EL_CHMSLFaultSt;
		EL_RLPositionLightFaultSt = _x.EL_RLPositionLightFaultSt;
		EL_RRPositionLightFaultSt = _x.EL_RRPositionLightFaultSt;
		EL_RearFogLightFaultSt = _x.EL_RearFogLightFaultSt;
		EL_LicencePlateLightFaultSt = _x.EL_LicencePlateLightFaultSt;
		EL_RLTurnLightFaultSt = _x.EL_RLTurnLightFaultSt;
		EL_RRTurnLightFaultSt = _x.EL_RRTurnLightFaultSt;
		EL_RearParkLightFaultSt = _x.EL_RearParkLightFaultSt;
		EL_RearChargeLightFaultSt = _x.EL_RearChargeLightFaultSt;
		return *this;
	}
	BDCELFAULT& operator=(BDCELFAULT &&_x){
		EL_FLPositionLightFaultSt = std::move(_x.EL_FLPositionLightFaultSt);
		EL_FRPositionLightFaultSt = std::move(_x.EL_FRPositionLightFaultSt);
		EL_LeftLowBeamFaultSt = std::move(_x.EL_LeftLowBeamFaultSt);
		EL_RightLowBeamFaultSt = std::move(_x.EL_RightLowBeamFaultSt);
		EL_LeftHighBeamFaultSt = std::move(_x.EL_LeftHighBeamFaultSt);
		EL_RightHighBeamFaultSt = std::move(_x.EL_RightHighBeamFaultSt);
		EL_FLFogLightFaultSt = std::move(_x.EL_FLFogLightFaultSt);
		EL_FRFogLightFaultSt = std::move(_x.EL_FRFogLightFaultSt);
		EL_LeftDRLFaultSt = std::move(_x.EL_LeftDRLFaultSt);
		EL_RightDRLFaultSt = std::move(_x.EL_RightDRLFaultSt);
		EL_LeftCornerLightFaultSt = std::move(_x.EL_LeftCornerLightFaultSt);
		EL_RightCornerLightFaultSt = std::move(_x.EL_RightCornerLightFaultSt);
		EL_FLTurnLightFaultSt = std::move(_x.EL_FLTurnLightFaultSt);
		EL_FRTurnLightFaultSt = std::move(_x.EL_FRTurnLightFaultSt);
		EL_FrontParkLightFaultSt = std::move(_x.EL_FrontParkLightFaultSt);
		EL_GreenChargeLightFaultSt = std::move(_x.EL_GreenChargeLightFaultSt);
		EL_RedChargeLightFaultSt = std::move(_x.EL_RedChargeLightFaultSt);
		EL_BlueChargeLightFaultSt = std::move(_x.EL_BlueChargeLightFaultSt);
		EL_LeftPdLightFaultSt = std::move(_x.EL_LeftPdLightFaultSt);
		EL_MLTurnLightFaultSt = std::move(_x.EL_MLTurnLightFaultSt);
		EL_LeftBSDIndicatorFaultSt = std::move(_x.EL_LeftBSDIndicatorFaultSt);
		EL_RightPdLightFaultSt = std::move(_x.EL_RightPdLightFaultSt);
		EL_MRTurnLightFaultSt = std::move(_x.EL_MRTurnLightFaultSt);
		EL_RightBSDIndicatorFaultSt = std::move(_x.EL_RightBSDIndicatorFaultSt);
		EL_ReverseLightFaultSt = std::move(_x.EL_ReverseLightFaultSt);
		EL_SideBrkLightFaultSt = std::move(_x.EL_SideBrkLightFaultSt);
		EL_CHMSLFaultSt = std::move(_x.EL_CHMSLFaultSt);
		EL_RLPositionLightFaultSt = std::move(_x.EL_RLPositionLightFaultSt);
		EL_RRPositionLightFaultSt = std::move(_x.EL_RRPositionLightFaultSt);
		EL_RearFogLightFaultSt = std::move(_x.EL_RearFogLightFaultSt);
		EL_LicencePlateLightFaultSt = std::move(_x.EL_LicencePlateLightFaultSt);
		EL_RLTurnLightFaultSt = std::move(_x.EL_RLTurnLightFaultSt);
		EL_RRTurnLightFaultSt = std::move(_x.EL_RRTurnLightFaultSt);
		EL_RearParkLightFaultSt = std::move(_x.EL_RearParkLightFaultSt);
		EL_RearChargeLightFaultSt = std::move(_x.EL_RearChargeLightFaultSt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(EL_FLPositionLightFaultSt);
		fun(EL_FRPositionLightFaultSt);
		fun(EL_LeftLowBeamFaultSt);
		fun(EL_RightLowBeamFaultSt);
		fun(EL_LeftHighBeamFaultSt);
		fun(EL_RightHighBeamFaultSt);
		fun(EL_FLFogLightFaultSt);
		fun(EL_FRFogLightFaultSt);
		fun(EL_LeftDRLFaultSt);
		fun(EL_RightDRLFaultSt);
		fun(EL_LeftCornerLightFaultSt);
		fun(EL_RightCornerLightFaultSt);
		fun(EL_FLTurnLightFaultSt);
		fun(EL_FRTurnLightFaultSt);
		fun(EL_FrontParkLightFaultSt);
		fun(EL_GreenChargeLightFaultSt);
		fun(EL_RedChargeLightFaultSt);
		fun(EL_BlueChargeLightFaultSt);
		fun(EL_LeftPdLightFaultSt);
		fun(EL_MLTurnLightFaultSt);
		fun(EL_LeftBSDIndicatorFaultSt);
		fun(EL_RightPdLightFaultSt);
		fun(EL_MRTurnLightFaultSt);
		fun(EL_RightBSDIndicatorFaultSt);
		fun(EL_ReverseLightFaultSt);
		fun(EL_SideBrkLightFaultSt);
		fun(EL_CHMSLFaultSt);
		fun(EL_RLPositionLightFaultSt);
		fun(EL_RRPositionLightFaultSt);
		fun(EL_RearFogLightFaultSt);
		fun(EL_LicencePlateLightFaultSt);
		fun(EL_RLTurnLightFaultSt);
		fun(EL_RRTurnLightFaultSt);
		fun(EL_RearParkLightFaultSt);
		fun(EL_RearChargeLightFaultSt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(EL_FLPositionLightFaultSt);
		fun(EL_FRPositionLightFaultSt);
		fun(EL_LeftLowBeamFaultSt);
		fun(EL_RightLowBeamFaultSt);
		fun(EL_LeftHighBeamFaultSt);
		fun(EL_RightHighBeamFaultSt);
		fun(EL_FLFogLightFaultSt);
		fun(EL_FRFogLightFaultSt);
		fun(EL_LeftDRLFaultSt);
		fun(EL_RightDRLFaultSt);
		fun(EL_LeftCornerLightFaultSt);
		fun(EL_RightCornerLightFaultSt);
		fun(EL_FLTurnLightFaultSt);
		fun(EL_FRTurnLightFaultSt);
		fun(EL_FrontParkLightFaultSt);
		fun(EL_GreenChargeLightFaultSt);
		fun(EL_RedChargeLightFaultSt);
		fun(EL_BlueChargeLightFaultSt);
		fun(EL_LeftPdLightFaultSt);
		fun(EL_MLTurnLightFaultSt);
		fun(EL_LeftBSDIndicatorFaultSt);
		fun(EL_RightPdLightFaultSt);
		fun(EL_MRTurnLightFaultSt);
		fun(EL_RightBSDIndicatorFaultSt);
		fun(EL_ReverseLightFaultSt);
		fun(EL_SideBrkLightFaultSt);
		fun(EL_CHMSLFaultSt);
		fun(EL_RLPositionLightFaultSt);
		fun(EL_RRPositionLightFaultSt);
		fun(EL_RearFogLightFaultSt);
		fun(EL_LicencePlateLightFaultSt);
		fun(EL_RLTurnLightFaultSt);
		fun(EL_RRTurnLightFaultSt);
		fun(EL_RearParkLightFaultSt);
		fun(EL_RearChargeLightFaultSt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (EL_FLPositionLightFaultSt);
		fun << (EL_FRPositionLightFaultSt);
		fun << (EL_LeftLowBeamFaultSt);
		fun << (EL_RightLowBeamFaultSt);
		fun << (EL_LeftHighBeamFaultSt);
		fun << (EL_RightHighBeamFaultSt);
		fun << (EL_FLFogLightFaultSt);
		fun << (EL_FRFogLightFaultSt);
		fun << (EL_LeftDRLFaultSt);
		fun << (EL_RightDRLFaultSt);
		fun << (EL_LeftCornerLightFaultSt);
		fun << (EL_RightCornerLightFaultSt);
		fun << (EL_FLTurnLightFaultSt);
		fun << (EL_FRTurnLightFaultSt);
		fun << (EL_FrontParkLightFaultSt);
		fun << (EL_GreenChargeLightFaultSt);
		fun << (EL_RedChargeLightFaultSt);
		fun << (EL_BlueChargeLightFaultSt);
		fun << (EL_LeftPdLightFaultSt);
		fun << (EL_MLTurnLightFaultSt);
		fun << (EL_LeftBSDIndicatorFaultSt);
		fun << (EL_RightPdLightFaultSt);
		fun << (EL_MRTurnLightFaultSt);
		fun << (EL_RightBSDIndicatorFaultSt);
		fun << (EL_ReverseLightFaultSt);
		fun << (EL_SideBrkLightFaultSt);
		fun << (EL_CHMSLFaultSt);
		fun << (EL_RLPositionLightFaultSt);
		fun << (EL_RRPositionLightFaultSt);
		fun << (EL_RearFogLightFaultSt);
		fun << (EL_LicencePlateLightFaultSt);
		fun << (EL_RLTurnLightFaultSt);
		fun << (EL_RRTurnLightFaultSt);
		fun << (EL_RearParkLightFaultSt);
		fun << (EL_RearChargeLightFaultSt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (EL_FLPositionLightFaultSt);
		fun >> (EL_FRPositionLightFaultSt);
		fun >> (EL_LeftLowBeamFaultSt);
		fun >> (EL_RightLowBeamFaultSt);
		fun >> (EL_LeftHighBeamFaultSt);
		fun >> (EL_RightHighBeamFaultSt);
		fun >> (EL_FLFogLightFaultSt);
		fun >> (EL_FRFogLightFaultSt);
		fun >> (EL_LeftDRLFaultSt);
		fun >> (EL_RightDRLFaultSt);
		fun >> (EL_LeftCornerLightFaultSt);
		fun >> (EL_RightCornerLightFaultSt);
		fun >> (EL_FLTurnLightFaultSt);
		fun >> (EL_FRTurnLightFaultSt);
		fun >> (EL_FrontParkLightFaultSt);
		fun >> (EL_GreenChargeLightFaultSt);
		fun >> (EL_RedChargeLightFaultSt);
		fun >> (EL_BlueChargeLightFaultSt);
		fun >> (EL_LeftPdLightFaultSt);
		fun >> (EL_MLTurnLightFaultSt);
		fun >> (EL_LeftBSDIndicatorFaultSt);
		fun >> (EL_RightPdLightFaultSt);
		fun >> (EL_MRTurnLightFaultSt);
		fun >> (EL_RightBSDIndicatorFaultSt);
		fun >> (EL_ReverseLightFaultSt);
		fun >> (EL_SideBrkLightFaultSt);
		fun >> (EL_CHMSLFaultSt);
		fun >> (EL_RLPositionLightFaultSt);
		fun >> (EL_RRPositionLightFaultSt);
		fun >> (EL_RearFogLightFaultSt);
		fun >> (EL_LicencePlateLightFaultSt);
		fun >> (EL_RLTurnLightFaultSt);
		fun >> (EL_RRTurnLightFaultSt);
		fun >> (EL_RearParkLightFaultSt);
		fun >> (EL_RearChargeLightFaultSt);
	}
};

#endif //____BDCELFAULT_H__
