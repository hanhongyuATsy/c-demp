#ifndef ____BDCEL_H__
#define ____BDCEL_H__


#include "cstdint"






struct BDCEL {
public:
	std::uint8_t EL_FLPositionLightSt;
	std::uint8_t EL_FRPositionLightSt;
	std::uint8_t EL_LeftLowBeamSt;
	std::uint8_t EL_RightLowBeamSt;
	std::uint8_t EL_LeftHighBeamSt;
	std::uint8_t EL_RightHighBeamSt;
	std::uint8_t EL_FLFogLightSt;
	std::uint8_t EL_FRFogLightSt;
	std::uint8_t EL_LeftDRLSt;
	std::uint8_t EL_RightDRLSt;
	std::uint8_t EL_LeftCornerLightSt;
	std::uint8_t EL_RightCornerLightSt;
	std::uint8_t EL_FLTurnLightSt;
	std::uint8_t EL_FRTurnLightSt;
	std::uint8_t EL_FrontParkLightSt;
	std::uint8_t EL_IndChargeLightSt;
	std::uint8_t EL_LeftBSDIndicatorSt;
	std::uint8_t EL_LeftPdLightSt;
	std::uint8_t EL_MLTurnLightSt;
	std::uint8_t EL_RightPdLightSt;
	std::uint8_t EL_MRTurnLightSt;
	std::uint8_t EL_RightBSDIndicatorSt;
	std::uint8_t EL_ReverseLightSt;
	std::uint8_t EL_SideBrkLightSt;
	std::uint8_t EL_CHMSLSt;
	std::uint8_t EL_RLPositionLightSt;
	std::uint8_t EL_RRPositionLightSt;
	std::uint8_t EL_RearFogLightSt;
	std::uint8_t EL_LicencePlateLightSt;
	std::uint8_t EL_RLTurnLightSt;
	std::uint8_t EL_RRTurnLightSt;
	std::uint16_t EL_ChassisHeight;
	std::uint8_t EL_RearParkLightSt;
	std::uint8_t EL_RearChargeLightSt;
/*
	BDCEL() {}
	~BDCEL() {}
	BDCEL(const std::uint8_t _EL_FLPositionLightSt,const std::uint8_t _EL_FRPositionLightSt,const std::uint8_t _EL_LeftLowBeamSt,const std::uint8_t _EL_RightLowBeamSt,const std::uint8_t _EL_LeftHighBeamSt,const std::uint8_t _EL_RightHighBeamSt,const std::uint8_t _EL_FLFogLightSt,const std::uint8_t _EL_FRFogLightSt,const std::uint8_t _EL_LeftDRLSt,const std::uint8_t _EL_RightDRLSt,const std::uint8_t _EL_LeftCornerLightSt,const std::uint8_t _EL_RightCornerLightSt,const std::uint8_t _EL_FLTurnLightSt,const std::uint8_t _EL_FRTurnLightSt,const std::uint8_t _EL_FrontParkLightSt,const std::uint8_t _EL_IndChargeLightSt,const std::uint8_t _EL_LeftBSDIndicatorSt,const std::uint8_t _EL_LeftPdLightSt,const std::uint8_t _EL_MLTurnLightSt,const std::uint8_t _EL_RightPdLightSt,const std::uint8_t _EL_MRTurnLightSt,const std::uint8_t _EL_RightBSDIndicatorSt,const std::uint8_t _EL_ReverseLightSt,const std::uint8_t _EL_SideBrkLightSt,const std::uint8_t _EL_CHMSLSt,const std::uint8_t _EL_RLPositionLightSt,const std::uint8_t _EL_RRPositionLightSt,const std::uint8_t _EL_RearFogLightSt,const std::uint8_t _EL_LicencePlateLightSt,const std::uint8_t _EL_RLTurnLightSt,const std::uint8_t _EL_RRTurnLightSt,const std::uint16_t _EL_ChassisHeight,const std::uint8_t _EL_RearParkLightSt,const std::uint8_t _EL_RearChargeLightSt):EL_FLPositionLightSt(_EL_FLPositionLightSt),EL_FRPositionLightSt(_EL_FRPositionLightSt),EL_LeftLowBeamSt(_EL_LeftLowBeamSt),EL_RightLowBeamSt(_EL_RightLowBeamSt),EL_LeftHighBeamSt(_EL_LeftHighBeamSt),EL_RightHighBeamSt(_EL_RightHighBeamSt),EL_FLFogLightSt(_EL_FLFogLightSt),EL_FRFogLightSt(_EL_FRFogLightSt),EL_LeftDRLSt(_EL_LeftDRLSt),EL_RightDRLSt(_EL_RightDRLSt),EL_LeftCornerLightSt(_EL_LeftCornerLightSt),EL_RightCornerLightSt(_EL_RightCornerLightSt),EL_FLTurnLightSt(_EL_FLTurnLightSt),EL_FRTurnLightSt(_EL_FRTurnLightSt),EL_FrontParkLightSt(_EL_FrontParkLightSt),EL_IndChargeLightSt(_EL_IndChargeLightSt),EL_LeftBSDIndicatorSt(_EL_LeftBSDIndicatorSt),EL_LeftPdLightSt(_EL_LeftPdLightSt),EL_MLTurnLightSt(_EL_MLTurnLightSt),EL_RightPdLightSt(_EL_RightPdLightSt),EL_MRTurnLightSt(_EL_MRTurnLightSt),EL_RightBSDIndicatorSt(_EL_RightBSDIndicatorSt),EL_ReverseLightSt(_EL_ReverseLightSt),EL_SideBrkLightSt(_EL_SideBrkLightSt),EL_CHMSLSt(_EL_CHMSLSt),EL_RLPositionLightSt(_EL_RLPositionLightSt),EL_RRPositionLightSt(_EL_RRPositionLightSt),EL_RearFogLightSt(_EL_RearFogLightSt),EL_LicencePlateLightSt(_EL_LicencePlateLightSt),EL_RLTurnLightSt(_EL_RLTurnLightSt),EL_RRTurnLightSt(_EL_RRTurnLightSt),EL_ChassisHeight(_EL_ChassisHeight),EL_RearParkLightSt(_EL_RearParkLightSt),EL_RearChargeLightSt(_EL_RearChargeLightSt) {}
	BDCEL(const BDCEL &_x){
		EL_FLPositionLightSt = _x.EL_FLPositionLightSt;
		EL_FRPositionLightSt = _x.EL_FRPositionLightSt;
		EL_LeftLowBeamSt = _x.EL_LeftLowBeamSt;
		EL_RightLowBeamSt = _x.EL_RightLowBeamSt;
		EL_LeftHighBeamSt = _x.EL_LeftHighBeamSt;
		EL_RightHighBeamSt = _x.EL_RightHighBeamSt;
		EL_FLFogLightSt = _x.EL_FLFogLightSt;
		EL_FRFogLightSt = _x.EL_FRFogLightSt;
		EL_LeftDRLSt = _x.EL_LeftDRLSt;
		EL_RightDRLSt = _x.EL_RightDRLSt;
		EL_LeftCornerLightSt = _x.EL_LeftCornerLightSt;
		EL_RightCornerLightSt = _x.EL_RightCornerLightSt;
		EL_FLTurnLightSt = _x.EL_FLTurnLightSt;
		EL_FRTurnLightSt = _x.EL_FRTurnLightSt;
		EL_FrontParkLightSt = _x.EL_FrontParkLightSt;
		EL_IndChargeLightSt = _x.EL_IndChargeLightSt;
		EL_LeftBSDIndicatorSt = _x.EL_LeftBSDIndicatorSt;
		EL_LeftPdLightSt = _x.EL_LeftPdLightSt;
		EL_MLTurnLightSt = _x.EL_MLTurnLightSt;
		EL_RightPdLightSt = _x.EL_RightPdLightSt;
		EL_MRTurnLightSt = _x.EL_MRTurnLightSt;
		EL_RightBSDIndicatorSt = _x.EL_RightBSDIndicatorSt;
		EL_ReverseLightSt = _x.EL_ReverseLightSt;
		EL_SideBrkLightSt = _x.EL_SideBrkLightSt;
		EL_CHMSLSt = _x.EL_CHMSLSt;
		EL_RLPositionLightSt = _x.EL_RLPositionLightSt;
		EL_RRPositionLightSt = _x.EL_RRPositionLightSt;
		EL_RearFogLightSt = _x.EL_RearFogLightSt;
		EL_LicencePlateLightSt = _x.EL_LicencePlateLightSt;
		EL_RLTurnLightSt = _x.EL_RLTurnLightSt;
		EL_RRTurnLightSt = _x.EL_RRTurnLightSt;
		EL_ChassisHeight = _x.EL_ChassisHeight;
		EL_RearParkLightSt = _x.EL_RearParkLightSt;
		EL_RearChargeLightSt = _x.EL_RearChargeLightSt;
	}
	BDCEL(BDCEL &&_x){
		EL_FLPositionLightSt = std::move(_x.EL_FLPositionLightSt);
		EL_FRPositionLightSt = std::move(_x.EL_FRPositionLightSt);
		EL_LeftLowBeamSt = std::move(_x.EL_LeftLowBeamSt);
		EL_RightLowBeamSt = std::move(_x.EL_RightLowBeamSt);
		EL_LeftHighBeamSt = std::move(_x.EL_LeftHighBeamSt);
		EL_RightHighBeamSt = std::move(_x.EL_RightHighBeamSt);
		EL_FLFogLightSt = std::move(_x.EL_FLFogLightSt);
		EL_FRFogLightSt = std::move(_x.EL_FRFogLightSt);
		EL_LeftDRLSt = std::move(_x.EL_LeftDRLSt);
		EL_RightDRLSt = std::move(_x.EL_RightDRLSt);
		EL_LeftCornerLightSt = std::move(_x.EL_LeftCornerLightSt);
		EL_RightCornerLightSt = std::move(_x.EL_RightCornerLightSt);
		EL_FLTurnLightSt = std::move(_x.EL_FLTurnLightSt);
		EL_FRTurnLightSt = std::move(_x.EL_FRTurnLightSt);
		EL_FrontParkLightSt = std::move(_x.EL_FrontParkLightSt);
		EL_IndChargeLightSt = std::move(_x.EL_IndChargeLightSt);
		EL_LeftBSDIndicatorSt = std::move(_x.EL_LeftBSDIndicatorSt);
		EL_LeftPdLightSt = std::move(_x.EL_LeftPdLightSt);
		EL_MLTurnLightSt = std::move(_x.EL_MLTurnLightSt);
		EL_RightPdLightSt = std::move(_x.EL_RightPdLightSt);
		EL_MRTurnLightSt = std::move(_x.EL_MRTurnLightSt);
		EL_RightBSDIndicatorSt = std::move(_x.EL_RightBSDIndicatorSt);
		EL_ReverseLightSt = std::move(_x.EL_ReverseLightSt);
		EL_SideBrkLightSt = std::move(_x.EL_SideBrkLightSt);
		EL_CHMSLSt = std::move(_x.EL_CHMSLSt);
		EL_RLPositionLightSt = std::move(_x.EL_RLPositionLightSt);
		EL_RRPositionLightSt = std::move(_x.EL_RRPositionLightSt);
		EL_RearFogLightSt = std::move(_x.EL_RearFogLightSt);
		EL_LicencePlateLightSt = std::move(_x.EL_LicencePlateLightSt);
		EL_RLTurnLightSt = std::move(_x.EL_RLTurnLightSt);
		EL_RRTurnLightSt = std::move(_x.EL_RRTurnLightSt);
		EL_ChassisHeight = std::move(_x.EL_ChassisHeight);
		EL_RearParkLightSt = std::move(_x.EL_RearParkLightSt);
		EL_RearChargeLightSt = std::move(_x.EL_RearChargeLightSt);
	}
	BDCEL& operator=(const BDCEL &_x){
		EL_FLPositionLightSt = _x.EL_FLPositionLightSt;
		EL_FRPositionLightSt = _x.EL_FRPositionLightSt;
		EL_LeftLowBeamSt = _x.EL_LeftLowBeamSt;
		EL_RightLowBeamSt = _x.EL_RightLowBeamSt;
		EL_LeftHighBeamSt = _x.EL_LeftHighBeamSt;
		EL_RightHighBeamSt = _x.EL_RightHighBeamSt;
		EL_FLFogLightSt = _x.EL_FLFogLightSt;
		EL_FRFogLightSt = _x.EL_FRFogLightSt;
		EL_LeftDRLSt = _x.EL_LeftDRLSt;
		EL_RightDRLSt = _x.EL_RightDRLSt;
		EL_LeftCornerLightSt = _x.EL_LeftCornerLightSt;
		EL_RightCornerLightSt = _x.EL_RightCornerLightSt;
		EL_FLTurnLightSt = _x.EL_FLTurnLightSt;
		EL_FRTurnLightSt = _x.EL_FRTurnLightSt;
		EL_FrontParkLightSt = _x.EL_FrontParkLightSt;
		EL_IndChargeLightSt = _x.EL_IndChargeLightSt;
		EL_LeftBSDIndicatorSt = _x.EL_LeftBSDIndicatorSt;
		EL_LeftPdLightSt = _x.EL_LeftPdLightSt;
		EL_MLTurnLightSt = _x.EL_MLTurnLightSt;
		EL_RightPdLightSt = _x.EL_RightPdLightSt;
		EL_MRTurnLightSt = _x.EL_MRTurnLightSt;
		EL_RightBSDIndicatorSt = _x.EL_RightBSDIndicatorSt;
		EL_ReverseLightSt = _x.EL_ReverseLightSt;
		EL_SideBrkLightSt = _x.EL_SideBrkLightSt;
		EL_CHMSLSt = _x.EL_CHMSLSt;
		EL_RLPositionLightSt = _x.EL_RLPositionLightSt;
		EL_RRPositionLightSt = _x.EL_RRPositionLightSt;
		EL_RearFogLightSt = _x.EL_RearFogLightSt;
		EL_LicencePlateLightSt = _x.EL_LicencePlateLightSt;
		EL_RLTurnLightSt = _x.EL_RLTurnLightSt;
		EL_RRTurnLightSt = _x.EL_RRTurnLightSt;
		EL_ChassisHeight = _x.EL_ChassisHeight;
		EL_RearParkLightSt = _x.EL_RearParkLightSt;
		EL_RearChargeLightSt = _x.EL_RearChargeLightSt;
		return *this;
	}
	BDCEL& operator=(BDCEL &&_x){
		EL_FLPositionLightSt = std::move(_x.EL_FLPositionLightSt);
		EL_FRPositionLightSt = std::move(_x.EL_FRPositionLightSt);
		EL_LeftLowBeamSt = std::move(_x.EL_LeftLowBeamSt);
		EL_RightLowBeamSt = std::move(_x.EL_RightLowBeamSt);
		EL_LeftHighBeamSt = std::move(_x.EL_LeftHighBeamSt);
		EL_RightHighBeamSt = std::move(_x.EL_RightHighBeamSt);
		EL_FLFogLightSt = std::move(_x.EL_FLFogLightSt);
		EL_FRFogLightSt = std::move(_x.EL_FRFogLightSt);
		EL_LeftDRLSt = std::move(_x.EL_LeftDRLSt);
		EL_RightDRLSt = std::move(_x.EL_RightDRLSt);
		EL_LeftCornerLightSt = std::move(_x.EL_LeftCornerLightSt);
		EL_RightCornerLightSt = std::move(_x.EL_RightCornerLightSt);
		EL_FLTurnLightSt = std::move(_x.EL_FLTurnLightSt);
		EL_FRTurnLightSt = std::move(_x.EL_FRTurnLightSt);
		EL_FrontParkLightSt = std::move(_x.EL_FrontParkLightSt);
		EL_IndChargeLightSt = std::move(_x.EL_IndChargeLightSt);
		EL_LeftBSDIndicatorSt = std::move(_x.EL_LeftBSDIndicatorSt);
		EL_LeftPdLightSt = std::move(_x.EL_LeftPdLightSt);
		EL_MLTurnLightSt = std::move(_x.EL_MLTurnLightSt);
		EL_RightPdLightSt = std::move(_x.EL_RightPdLightSt);
		EL_MRTurnLightSt = std::move(_x.EL_MRTurnLightSt);
		EL_RightBSDIndicatorSt = std::move(_x.EL_RightBSDIndicatorSt);
		EL_ReverseLightSt = std::move(_x.EL_ReverseLightSt);
		EL_SideBrkLightSt = std::move(_x.EL_SideBrkLightSt);
		EL_CHMSLSt = std::move(_x.EL_CHMSLSt);
		EL_RLPositionLightSt = std::move(_x.EL_RLPositionLightSt);
		EL_RRPositionLightSt = std::move(_x.EL_RRPositionLightSt);
		EL_RearFogLightSt = std::move(_x.EL_RearFogLightSt);
		EL_LicencePlateLightSt = std::move(_x.EL_LicencePlateLightSt);
		EL_RLTurnLightSt = std::move(_x.EL_RLTurnLightSt);
		EL_RRTurnLightSt = std::move(_x.EL_RRTurnLightSt);
		EL_ChassisHeight = std::move(_x.EL_ChassisHeight);
		EL_RearParkLightSt = std::move(_x.EL_RearParkLightSt);
		EL_RearChargeLightSt = std::move(_x.EL_RearChargeLightSt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(EL_FLPositionLightSt);
		fun(EL_FRPositionLightSt);
		fun(EL_LeftLowBeamSt);
		fun(EL_RightLowBeamSt);
		fun(EL_LeftHighBeamSt);
		fun(EL_RightHighBeamSt);
		fun(EL_FLFogLightSt);
		fun(EL_FRFogLightSt);
		fun(EL_LeftDRLSt);
		fun(EL_RightDRLSt);
		fun(EL_LeftCornerLightSt);
		fun(EL_RightCornerLightSt);
		fun(EL_FLTurnLightSt);
		fun(EL_FRTurnLightSt);
		fun(EL_FrontParkLightSt);
		fun(EL_IndChargeLightSt);
		fun(EL_LeftBSDIndicatorSt);
		fun(EL_LeftPdLightSt);
		fun(EL_MLTurnLightSt);
		fun(EL_RightPdLightSt);
		fun(EL_MRTurnLightSt);
		fun(EL_RightBSDIndicatorSt);
		fun(EL_ReverseLightSt);
		fun(EL_SideBrkLightSt);
		fun(EL_CHMSLSt);
		fun(EL_RLPositionLightSt);
		fun(EL_RRPositionLightSt);
		fun(EL_RearFogLightSt);
		fun(EL_LicencePlateLightSt);
		fun(EL_RLTurnLightSt);
		fun(EL_RRTurnLightSt);
		fun(EL_ChassisHeight);
		fun(EL_RearParkLightSt);
		fun(EL_RearChargeLightSt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(EL_FLPositionLightSt);
		fun(EL_FRPositionLightSt);
		fun(EL_LeftLowBeamSt);
		fun(EL_RightLowBeamSt);
		fun(EL_LeftHighBeamSt);
		fun(EL_RightHighBeamSt);
		fun(EL_FLFogLightSt);
		fun(EL_FRFogLightSt);
		fun(EL_LeftDRLSt);
		fun(EL_RightDRLSt);
		fun(EL_LeftCornerLightSt);
		fun(EL_RightCornerLightSt);
		fun(EL_FLTurnLightSt);
		fun(EL_FRTurnLightSt);
		fun(EL_FrontParkLightSt);
		fun(EL_IndChargeLightSt);
		fun(EL_LeftBSDIndicatorSt);
		fun(EL_LeftPdLightSt);
		fun(EL_MLTurnLightSt);
		fun(EL_RightPdLightSt);
		fun(EL_MRTurnLightSt);
		fun(EL_RightBSDIndicatorSt);
		fun(EL_ReverseLightSt);
		fun(EL_SideBrkLightSt);
		fun(EL_CHMSLSt);
		fun(EL_RLPositionLightSt);
		fun(EL_RRPositionLightSt);
		fun(EL_RearFogLightSt);
		fun(EL_LicencePlateLightSt);
		fun(EL_RLTurnLightSt);
		fun(EL_RRTurnLightSt);
		fun(EL_ChassisHeight);
		fun(EL_RearParkLightSt);
		fun(EL_RearChargeLightSt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (EL_FLPositionLightSt);
		fun << (EL_FRPositionLightSt);
		fun << (EL_LeftLowBeamSt);
		fun << (EL_RightLowBeamSt);
		fun << (EL_LeftHighBeamSt);
		fun << (EL_RightHighBeamSt);
		fun << (EL_FLFogLightSt);
		fun << (EL_FRFogLightSt);
		fun << (EL_LeftDRLSt);
		fun << (EL_RightDRLSt);
		fun << (EL_LeftCornerLightSt);
		fun << (EL_RightCornerLightSt);
		fun << (EL_FLTurnLightSt);
		fun << (EL_FRTurnLightSt);
		fun << (EL_FrontParkLightSt);
		fun << (EL_IndChargeLightSt);
		fun << (EL_LeftBSDIndicatorSt);
		fun << (EL_LeftPdLightSt);
		fun << (EL_MLTurnLightSt);
		fun << (EL_RightPdLightSt);
		fun << (EL_MRTurnLightSt);
		fun << (EL_RightBSDIndicatorSt);
		fun << (EL_ReverseLightSt);
		fun << (EL_SideBrkLightSt);
		fun << (EL_CHMSLSt);
		fun << (EL_RLPositionLightSt);
		fun << (EL_RRPositionLightSt);
		fun << (EL_RearFogLightSt);
		fun << (EL_LicencePlateLightSt);
		fun << (EL_RLTurnLightSt);
		fun << (EL_RRTurnLightSt);
		fun << (EL_ChassisHeight);
		fun << (EL_RearParkLightSt);
		fun << (EL_RearChargeLightSt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (EL_FLPositionLightSt);
		fun >> (EL_FRPositionLightSt);
		fun >> (EL_LeftLowBeamSt);
		fun >> (EL_RightLowBeamSt);
		fun >> (EL_LeftHighBeamSt);
		fun >> (EL_RightHighBeamSt);
		fun >> (EL_FLFogLightSt);
		fun >> (EL_FRFogLightSt);
		fun >> (EL_LeftDRLSt);
		fun >> (EL_RightDRLSt);
		fun >> (EL_LeftCornerLightSt);
		fun >> (EL_RightCornerLightSt);
		fun >> (EL_FLTurnLightSt);
		fun >> (EL_FRTurnLightSt);
		fun >> (EL_FrontParkLightSt);
		fun >> (EL_IndChargeLightSt);
		fun >> (EL_LeftBSDIndicatorSt);
		fun >> (EL_LeftPdLightSt);
		fun >> (EL_MLTurnLightSt);
		fun >> (EL_RightPdLightSt);
		fun >> (EL_MRTurnLightSt);
		fun >> (EL_RightBSDIndicatorSt);
		fun >> (EL_ReverseLightSt);
		fun >> (EL_SideBrkLightSt);
		fun >> (EL_CHMSLSt);
		fun >> (EL_RLPositionLightSt);
		fun >> (EL_RRPositionLightSt);
		fun >> (EL_RearFogLightSt);
		fun >> (EL_LicencePlateLightSt);
		fun >> (EL_RLTurnLightSt);
		fun >> (EL_RRTurnLightSt);
		fun >> (EL_ChassisHeight);
		fun >> (EL_RearParkLightSt);
		fun >> (EL_RearChargeLightSt);
	}
};

#endif //____BDCEL_H__
