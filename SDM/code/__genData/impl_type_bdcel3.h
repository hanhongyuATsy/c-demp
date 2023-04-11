#ifndef ____BDCEL3_H__
#define ____BDCEL3_H__


#include "cstdint"






struct BDCEL3 {
public:
	std::uint8_t EL_HeadLightDelayEnable;
	std::uint8_t EL_ReverseLightCtrlCmd;
	std::uint8_t EL_SideBrkLightCtrlCmd;
	std::uint8_t EL_PositionLightTimingOFFCfg;
	std::uint8_t EL_ReverseLightCtrlSource;
	std::uint8_t EL_CHMSLCtrlCmd;
	std::uint8_t EL_BrkLightCtrlSource;
	std::uint8_t EL_LeftLowBeamCtrlCmd;
	std::uint8_t EL_RightLowBeamCtrlCmd;
	std::uint8_t EL_PositionLightCtrlSource;
	std::uint8_t EL_RLSWarning_Light;
	std::uint8_t EL_LeftHeadLightManulAdjustVD;
	std::uint8_t EL_RightHeadLightManulAdjustVD;
	std::uint8_t EL_ParkLightCtrlCmd;
	std::uint8_t EL_FLPositionLightCtrlCmd;
	std::uint8_t EL_FRPositionLightCtrlCmd;
	std::uint8_t EL_RLPositionLightCtrlCmd;
	std::uint8_t EL_RRPositionLightCtrlCmd;
	std::uint8_t EL_LeftHighBeamCtrlCmd;
	std::uint8_t EL_RightHighBeamCtrlCmd;
	std::uint8_t EL_LowBeamCtrlSource;
	std::uint8_t EL_RearFogLightCtrlSource;
/*
	BDCEL3() {}
	~BDCEL3() {}
	BDCEL3(const std::uint8_t _EL_HeadLightDelayEnable,const std::uint8_t _EL_ReverseLightCtrlCmd,const std::uint8_t _EL_SideBrkLightCtrlCmd,const std::uint8_t _EL_PositionLightTimingOFFCfg,const std::uint8_t _EL_ReverseLightCtrlSource,const std::uint8_t _EL_CHMSLCtrlCmd,const std::uint8_t _EL_BrkLightCtrlSource,const std::uint8_t _EL_LeftLowBeamCtrlCmd,const std::uint8_t _EL_RightLowBeamCtrlCmd,const std::uint8_t _EL_PositionLightCtrlSource,const std::uint8_t _EL_RLSWarning_Light,const std::uint8_t _EL_LeftHeadLightManulAdjustVD,const std::uint8_t _EL_RightHeadLightManulAdjustVD,const std::uint8_t _EL_ParkLightCtrlCmd,const std::uint8_t _EL_FLPositionLightCtrlCmd,const std::uint8_t _EL_FRPositionLightCtrlCmd,const std::uint8_t _EL_RLPositionLightCtrlCmd,const std::uint8_t _EL_RRPositionLightCtrlCmd,const std::uint8_t _EL_LeftHighBeamCtrlCmd,const std::uint8_t _EL_RightHighBeamCtrlCmd,const std::uint8_t _EL_LowBeamCtrlSource,const std::uint8_t _EL_RearFogLightCtrlSource):EL_HeadLightDelayEnable(_EL_HeadLightDelayEnable),EL_ReverseLightCtrlCmd(_EL_ReverseLightCtrlCmd),EL_SideBrkLightCtrlCmd(_EL_SideBrkLightCtrlCmd),EL_PositionLightTimingOFFCfg(_EL_PositionLightTimingOFFCfg),EL_ReverseLightCtrlSource(_EL_ReverseLightCtrlSource),EL_CHMSLCtrlCmd(_EL_CHMSLCtrlCmd),EL_BrkLightCtrlSource(_EL_BrkLightCtrlSource),EL_LeftLowBeamCtrlCmd(_EL_LeftLowBeamCtrlCmd),EL_RightLowBeamCtrlCmd(_EL_RightLowBeamCtrlCmd),EL_PositionLightCtrlSource(_EL_PositionLightCtrlSource),EL_RLSWarning_Light(_EL_RLSWarning_Light),EL_LeftHeadLightManulAdjustVD(_EL_LeftHeadLightManulAdjustVD),EL_RightHeadLightManulAdjustVD(_EL_RightHeadLightManulAdjustVD),EL_ParkLightCtrlCmd(_EL_ParkLightCtrlCmd),EL_FLPositionLightCtrlCmd(_EL_FLPositionLightCtrlCmd),EL_FRPositionLightCtrlCmd(_EL_FRPositionLightCtrlCmd),EL_RLPositionLightCtrlCmd(_EL_RLPositionLightCtrlCmd),EL_RRPositionLightCtrlCmd(_EL_RRPositionLightCtrlCmd),EL_LeftHighBeamCtrlCmd(_EL_LeftHighBeamCtrlCmd),EL_RightHighBeamCtrlCmd(_EL_RightHighBeamCtrlCmd),EL_LowBeamCtrlSource(_EL_LowBeamCtrlSource),EL_RearFogLightCtrlSource(_EL_RearFogLightCtrlSource) {}
	BDCEL3(const BDCEL3 &_x){
		EL_HeadLightDelayEnable = _x.EL_HeadLightDelayEnable;
		EL_ReverseLightCtrlCmd = _x.EL_ReverseLightCtrlCmd;
		EL_SideBrkLightCtrlCmd = _x.EL_SideBrkLightCtrlCmd;
		EL_PositionLightTimingOFFCfg = _x.EL_PositionLightTimingOFFCfg;
		EL_ReverseLightCtrlSource = _x.EL_ReverseLightCtrlSource;
		EL_CHMSLCtrlCmd = _x.EL_CHMSLCtrlCmd;
		EL_BrkLightCtrlSource = _x.EL_BrkLightCtrlSource;
		EL_LeftLowBeamCtrlCmd = _x.EL_LeftLowBeamCtrlCmd;
		EL_RightLowBeamCtrlCmd = _x.EL_RightLowBeamCtrlCmd;
		EL_PositionLightCtrlSource = _x.EL_PositionLightCtrlSource;
		EL_RLSWarning_Light = _x.EL_RLSWarning_Light;
		EL_LeftHeadLightManulAdjustVD = _x.EL_LeftHeadLightManulAdjustVD;
		EL_RightHeadLightManulAdjustVD = _x.EL_RightHeadLightManulAdjustVD;
		EL_ParkLightCtrlCmd = _x.EL_ParkLightCtrlCmd;
		EL_FLPositionLightCtrlCmd = _x.EL_FLPositionLightCtrlCmd;
		EL_FRPositionLightCtrlCmd = _x.EL_FRPositionLightCtrlCmd;
		EL_RLPositionLightCtrlCmd = _x.EL_RLPositionLightCtrlCmd;
		EL_RRPositionLightCtrlCmd = _x.EL_RRPositionLightCtrlCmd;
		EL_LeftHighBeamCtrlCmd = _x.EL_LeftHighBeamCtrlCmd;
		EL_RightHighBeamCtrlCmd = _x.EL_RightHighBeamCtrlCmd;
		EL_LowBeamCtrlSource = _x.EL_LowBeamCtrlSource;
		EL_RearFogLightCtrlSource = _x.EL_RearFogLightCtrlSource;
	}
	BDCEL3(BDCEL3 &&_x){
		EL_HeadLightDelayEnable = std::move(_x.EL_HeadLightDelayEnable);
		EL_ReverseLightCtrlCmd = std::move(_x.EL_ReverseLightCtrlCmd);
		EL_SideBrkLightCtrlCmd = std::move(_x.EL_SideBrkLightCtrlCmd);
		EL_PositionLightTimingOFFCfg = std::move(_x.EL_PositionLightTimingOFFCfg);
		EL_ReverseLightCtrlSource = std::move(_x.EL_ReverseLightCtrlSource);
		EL_CHMSLCtrlCmd = std::move(_x.EL_CHMSLCtrlCmd);
		EL_BrkLightCtrlSource = std::move(_x.EL_BrkLightCtrlSource);
		EL_LeftLowBeamCtrlCmd = std::move(_x.EL_LeftLowBeamCtrlCmd);
		EL_RightLowBeamCtrlCmd = std::move(_x.EL_RightLowBeamCtrlCmd);
		EL_PositionLightCtrlSource = std::move(_x.EL_PositionLightCtrlSource);
		EL_RLSWarning_Light = std::move(_x.EL_RLSWarning_Light);
		EL_LeftHeadLightManulAdjustVD = std::move(_x.EL_LeftHeadLightManulAdjustVD);
		EL_RightHeadLightManulAdjustVD = std::move(_x.EL_RightHeadLightManulAdjustVD);
		EL_ParkLightCtrlCmd = std::move(_x.EL_ParkLightCtrlCmd);
		EL_FLPositionLightCtrlCmd = std::move(_x.EL_FLPositionLightCtrlCmd);
		EL_FRPositionLightCtrlCmd = std::move(_x.EL_FRPositionLightCtrlCmd);
		EL_RLPositionLightCtrlCmd = std::move(_x.EL_RLPositionLightCtrlCmd);
		EL_RRPositionLightCtrlCmd = std::move(_x.EL_RRPositionLightCtrlCmd);
		EL_LeftHighBeamCtrlCmd = std::move(_x.EL_LeftHighBeamCtrlCmd);
		EL_RightHighBeamCtrlCmd = std::move(_x.EL_RightHighBeamCtrlCmd);
		EL_LowBeamCtrlSource = std::move(_x.EL_LowBeamCtrlSource);
		EL_RearFogLightCtrlSource = std::move(_x.EL_RearFogLightCtrlSource);
	}
	BDCEL3& operator=(const BDCEL3 &_x){
		EL_HeadLightDelayEnable = _x.EL_HeadLightDelayEnable;
		EL_ReverseLightCtrlCmd = _x.EL_ReverseLightCtrlCmd;
		EL_SideBrkLightCtrlCmd = _x.EL_SideBrkLightCtrlCmd;
		EL_PositionLightTimingOFFCfg = _x.EL_PositionLightTimingOFFCfg;
		EL_ReverseLightCtrlSource = _x.EL_ReverseLightCtrlSource;
		EL_CHMSLCtrlCmd = _x.EL_CHMSLCtrlCmd;
		EL_BrkLightCtrlSource = _x.EL_BrkLightCtrlSource;
		EL_LeftLowBeamCtrlCmd = _x.EL_LeftLowBeamCtrlCmd;
		EL_RightLowBeamCtrlCmd = _x.EL_RightLowBeamCtrlCmd;
		EL_PositionLightCtrlSource = _x.EL_PositionLightCtrlSource;
		EL_RLSWarning_Light = _x.EL_RLSWarning_Light;
		EL_LeftHeadLightManulAdjustVD = _x.EL_LeftHeadLightManulAdjustVD;
		EL_RightHeadLightManulAdjustVD = _x.EL_RightHeadLightManulAdjustVD;
		EL_ParkLightCtrlCmd = _x.EL_ParkLightCtrlCmd;
		EL_FLPositionLightCtrlCmd = _x.EL_FLPositionLightCtrlCmd;
		EL_FRPositionLightCtrlCmd = _x.EL_FRPositionLightCtrlCmd;
		EL_RLPositionLightCtrlCmd = _x.EL_RLPositionLightCtrlCmd;
		EL_RRPositionLightCtrlCmd = _x.EL_RRPositionLightCtrlCmd;
		EL_LeftHighBeamCtrlCmd = _x.EL_LeftHighBeamCtrlCmd;
		EL_RightHighBeamCtrlCmd = _x.EL_RightHighBeamCtrlCmd;
		EL_LowBeamCtrlSource = _x.EL_LowBeamCtrlSource;
		EL_RearFogLightCtrlSource = _x.EL_RearFogLightCtrlSource;
		return *this;
	}
	BDCEL3& operator=(BDCEL3 &&_x){
		EL_HeadLightDelayEnable = std::move(_x.EL_HeadLightDelayEnable);
		EL_ReverseLightCtrlCmd = std::move(_x.EL_ReverseLightCtrlCmd);
		EL_SideBrkLightCtrlCmd = std::move(_x.EL_SideBrkLightCtrlCmd);
		EL_PositionLightTimingOFFCfg = std::move(_x.EL_PositionLightTimingOFFCfg);
		EL_ReverseLightCtrlSource = std::move(_x.EL_ReverseLightCtrlSource);
		EL_CHMSLCtrlCmd = std::move(_x.EL_CHMSLCtrlCmd);
		EL_BrkLightCtrlSource = std::move(_x.EL_BrkLightCtrlSource);
		EL_LeftLowBeamCtrlCmd = std::move(_x.EL_LeftLowBeamCtrlCmd);
		EL_RightLowBeamCtrlCmd = std::move(_x.EL_RightLowBeamCtrlCmd);
		EL_PositionLightCtrlSource = std::move(_x.EL_PositionLightCtrlSource);
		EL_RLSWarning_Light = std::move(_x.EL_RLSWarning_Light);
		EL_LeftHeadLightManulAdjustVD = std::move(_x.EL_LeftHeadLightManulAdjustVD);
		EL_RightHeadLightManulAdjustVD = std::move(_x.EL_RightHeadLightManulAdjustVD);
		EL_ParkLightCtrlCmd = std::move(_x.EL_ParkLightCtrlCmd);
		EL_FLPositionLightCtrlCmd = std::move(_x.EL_FLPositionLightCtrlCmd);
		EL_FRPositionLightCtrlCmd = std::move(_x.EL_FRPositionLightCtrlCmd);
		EL_RLPositionLightCtrlCmd = std::move(_x.EL_RLPositionLightCtrlCmd);
		EL_RRPositionLightCtrlCmd = std::move(_x.EL_RRPositionLightCtrlCmd);
		EL_LeftHighBeamCtrlCmd = std::move(_x.EL_LeftHighBeamCtrlCmd);
		EL_RightHighBeamCtrlCmd = std::move(_x.EL_RightHighBeamCtrlCmd);
		EL_LowBeamCtrlSource = std::move(_x.EL_LowBeamCtrlSource);
		EL_RearFogLightCtrlSource = std::move(_x.EL_RearFogLightCtrlSource);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(EL_HeadLightDelayEnable);
		fun(EL_ReverseLightCtrlCmd);
		fun(EL_SideBrkLightCtrlCmd);
		fun(EL_PositionLightTimingOFFCfg);
		fun(EL_ReverseLightCtrlSource);
		fun(EL_CHMSLCtrlCmd);
		fun(EL_BrkLightCtrlSource);
		fun(EL_LeftLowBeamCtrlCmd);
		fun(EL_RightLowBeamCtrlCmd);
		fun(EL_PositionLightCtrlSource);
		fun(EL_RLSWarning_Light);
		fun(EL_LeftHeadLightManulAdjustVD);
		fun(EL_RightHeadLightManulAdjustVD);
		fun(EL_ParkLightCtrlCmd);
		fun(EL_FLPositionLightCtrlCmd);
		fun(EL_FRPositionLightCtrlCmd);
		fun(EL_RLPositionLightCtrlCmd);
		fun(EL_RRPositionLightCtrlCmd);
		fun(EL_LeftHighBeamCtrlCmd);
		fun(EL_RightHighBeamCtrlCmd);
		fun(EL_LowBeamCtrlSource);
		fun(EL_RearFogLightCtrlSource);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(EL_HeadLightDelayEnable);
		fun(EL_ReverseLightCtrlCmd);
		fun(EL_SideBrkLightCtrlCmd);
		fun(EL_PositionLightTimingOFFCfg);
		fun(EL_ReverseLightCtrlSource);
		fun(EL_CHMSLCtrlCmd);
		fun(EL_BrkLightCtrlSource);
		fun(EL_LeftLowBeamCtrlCmd);
		fun(EL_RightLowBeamCtrlCmd);
		fun(EL_PositionLightCtrlSource);
		fun(EL_RLSWarning_Light);
		fun(EL_LeftHeadLightManulAdjustVD);
		fun(EL_RightHeadLightManulAdjustVD);
		fun(EL_ParkLightCtrlCmd);
		fun(EL_FLPositionLightCtrlCmd);
		fun(EL_FRPositionLightCtrlCmd);
		fun(EL_RLPositionLightCtrlCmd);
		fun(EL_RRPositionLightCtrlCmd);
		fun(EL_LeftHighBeamCtrlCmd);
		fun(EL_RightHighBeamCtrlCmd);
		fun(EL_LowBeamCtrlSource);
		fun(EL_RearFogLightCtrlSource);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (EL_HeadLightDelayEnable);
		fun << (EL_ReverseLightCtrlCmd);
		fun << (EL_SideBrkLightCtrlCmd);
		fun << (EL_PositionLightTimingOFFCfg);
		fun << (EL_ReverseLightCtrlSource);
		fun << (EL_CHMSLCtrlCmd);
		fun << (EL_BrkLightCtrlSource);
		fun << (EL_LeftLowBeamCtrlCmd);
		fun << (EL_RightLowBeamCtrlCmd);
		fun << (EL_PositionLightCtrlSource);
		fun << (EL_RLSWarning_Light);
		fun << (EL_LeftHeadLightManulAdjustVD);
		fun << (EL_RightHeadLightManulAdjustVD);
		fun << (EL_ParkLightCtrlCmd);
		fun << (EL_FLPositionLightCtrlCmd);
		fun << (EL_FRPositionLightCtrlCmd);
		fun << (EL_RLPositionLightCtrlCmd);
		fun << (EL_RRPositionLightCtrlCmd);
		fun << (EL_LeftHighBeamCtrlCmd);
		fun << (EL_RightHighBeamCtrlCmd);
		fun << (EL_LowBeamCtrlSource);
		fun << (EL_RearFogLightCtrlSource);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (EL_HeadLightDelayEnable);
		fun >> (EL_ReverseLightCtrlCmd);
		fun >> (EL_SideBrkLightCtrlCmd);
		fun >> (EL_PositionLightTimingOFFCfg);
		fun >> (EL_ReverseLightCtrlSource);
		fun >> (EL_CHMSLCtrlCmd);
		fun >> (EL_BrkLightCtrlSource);
		fun >> (EL_LeftLowBeamCtrlCmd);
		fun >> (EL_RightLowBeamCtrlCmd);
		fun >> (EL_PositionLightCtrlSource);
		fun >> (EL_RLSWarning_Light);
		fun >> (EL_LeftHeadLightManulAdjustVD);
		fun >> (EL_RightHeadLightManulAdjustVD);
		fun >> (EL_ParkLightCtrlCmd);
		fun >> (EL_FLPositionLightCtrlCmd);
		fun >> (EL_FRPositionLightCtrlCmd);
		fun >> (EL_RLPositionLightCtrlCmd);
		fun >> (EL_RRPositionLightCtrlCmd);
		fun >> (EL_LeftHighBeamCtrlCmd);
		fun >> (EL_RightHighBeamCtrlCmd);
		fun >> (EL_LowBeamCtrlSource);
		fun >> (EL_RearFogLightCtrlSource);
	}
};

#endif //____BDCEL3_H__
