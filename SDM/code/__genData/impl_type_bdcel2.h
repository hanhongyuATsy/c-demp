#ifndef ____BDCEL2_H__
#define ____BDCEL2_H__


#include "cstdint"






struct BDCEL2 {
public:
	std::uint8_t LCK_ApproachLightReq;
	std::uint8_t LCK_LockIndicateReq;
	std::uint8_t ACU_HeadLightLevelingVirtualSwSt;
	std::uint8_t ACU_WelcomeLightMode;
	std::uint8_t ACU_LightShowMode;
	std::uint8_t ACU_LightShowFunCmd;
	std::uint8_t ACU_LightShowTimeFlag;
	std::uint8_t ACU_HeadLightVirtualSwSt;
	std::uint8_t ACU_RearFogLightVirtualSwSt;
	std::uint8_t ACU_FrontFogLightVirtualSwSt;
	std::uint8_t ACU_HighBeamVirtualSwSt;
	std::uint8_t ACU_HeadLightDelayCfg;
	std::uint64_t ACU_ALSCfg;
	std::uint8_t VCU_BrkLightOn;
	std::uint8_t VCU_BCMhazardLampOn;
	std::uint64_t RLS_PositionLightSt;
	std::uint8_t RLS_LightOnReq;
	std::uint64_t RLS_LightSnsSt;
	std::uint8_t RLS_LSErr;
	std::uint64_t RLS_OverVoltErr;
/*
	BDCEL2() {}
	~BDCEL2() {}
	BDCEL2(const std::uint8_t _LCK_ApproachLightReq,const std::uint8_t _LCK_LockIndicateReq,const std::uint8_t _ACU_HeadLightLevelingVirtualSwSt,const std::uint8_t _ACU_WelcomeLightMode,const std::uint8_t _ACU_LightShowMode,const std::uint8_t _ACU_LightShowFunCmd,const std::uint8_t _ACU_LightShowTimeFlag,const std::uint8_t _ACU_HeadLightVirtualSwSt,const std::uint8_t _ACU_RearFogLightVirtualSwSt,const std::uint8_t _ACU_FrontFogLightVirtualSwSt,const std::uint8_t _ACU_HighBeamVirtualSwSt,const std::uint8_t _ACU_HeadLightDelayCfg,const std::uint64_t _ACU_ALSCfg,const std::uint8_t _VCU_BrkLightOn,const std::uint8_t _VCU_BCMhazardLampOn,const std::uint64_t _RLS_PositionLightSt,const std::uint8_t _RLS_LightOnReq,const std::uint64_t _RLS_LightSnsSt,const std::uint8_t _RLS_LSErr,const std::uint64_t _RLS_OverVoltErr):LCK_ApproachLightReq(_LCK_ApproachLightReq),LCK_LockIndicateReq(_LCK_LockIndicateReq),ACU_HeadLightLevelingVirtualSwSt(_ACU_HeadLightLevelingVirtualSwSt),ACU_WelcomeLightMode(_ACU_WelcomeLightMode),ACU_LightShowMode(_ACU_LightShowMode),ACU_LightShowFunCmd(_ACU_LightShowFunCmd),ACU_LightShowTimeFlag(_ACU_LightShowTimeFlag),ACU_HeadLightVirtualSwSt(_ACU_HeadLightVirtualSwSt),ACU_RearFogLightVirtualSwSt(_ACU_RearFogLightVirtualSwSt),ACU_FrontFogLightVirtualSwSt(_ACU_FrontFogLightVirtualSwSt),ACU_HighBeamVirtualSwSt(_ACU_HighBeamVirtualSwSt),ACU_HeadLightDelayCfg(_ACU_HeadLightDelayCfg),ACU_ALSCfg(_ACU_ALSCfg),VCU_BrkLightOn(_VCU_BrkLightOn),VCU_BCMhazardLampOn(_VCU_BCMhazardLampOn),RLS_PositionLightSt(_RLS_PositionLightSt),RLS_LightOnReq(_RLS_LightOnReq),RLS_LightSnsSt(_RLS_LightSnsSt),RLS_LSErr(_RLS_LSErr),RLS_OverVoltErr(_RLS_OverVoltErr) {}
	BDCEL2(const BDCEL2 &_x){
		LCK_ApproachLightReq = _x.LCK_ApproachLightReq;
		LCK_LockIndicateReq = _x.LCK_LockIndicateReq;
		ACU_HeadLightLevelingVirtualSwSt = _x.ACU_HeadLightLevelingVirtualSwSt;
		ACU_WelcomeLightMode = _x.ACU_WelcomeLightMode;
		ACU_LightShowMode = _x.ACU_LightShowMode;
		ACU_LightShowFunCmd = _x.ACU_LightShowFunCmd;
		ACU_LightShowTimeFlag = _x.ACU_LightShowTimeFlag;
		ACU_HeadLightVirtualSwSt = _x.ACU_HeadLightVirtualSwSt;
		ACU_RearFogLightVirtualSwSt = _x.ACU_RearFogLightVirtualSwSt;
		ACU_FrontFogLightVirtualSwSt = _x.ACU_FrontFogLightVirtualSwSt;
		ACU_HighBeamVirtualSwSt = _x.ACU_HighBeamVirtualSwSt;
		ACU_HeadLightDelayCfg = _x.ACU_HeadLightDelayCfg;
		ACU_ALSCfg = _x.ACU_ALSCfg;
		VCU_BrkLightOn = _x.VCU_BrkLightOn;
		VCU_BCMhazardLampOn = _x.VCU_BCMhazardLampOn;
		RLS_PositionLightSt = _x.RLS_PositionLightSt;
		RLS_LightOnReq = _x.RLS_LightOnReq;
		RLS_LightSnsSt = _x.RLS_LightSnsSt;
		RLS_LSErr = _x.RLS_LSErr;
		RLS_OverVoltErr = _x.RLS_OverVoltErr;
	}
	BDCEL2(BDCEL2 &&_x){
		LCK_ApproachLightReq = std::move(_x.LCK_ApproachLightReq);
		LCK_LockIndicateReq = std::move(_x.LCK_LockIndicateReq);
		ACU_HeadLightLevelingVirtualSwSt = std::move(_x.ACU_HeadLightLevelingVirtualSwSt);
		ACU_WelcomeLightMode = std::move(_x.ACU_WelcomeLightMode);
		ACU_LightShowMode = std::move(_x.ACU_LightShowMode);
		ACU_LightShowFunCmd = std::move(_x.ACU_LightShowFunCmd);
		ACU_LightShowTimeFlag = std::move(_x.ACU_LightShowTimeFlag);
		ACU_HeadLightVirtualSwSt = std::move(_x.ACU_HeadLightVirtualSwSt);
		ACU_RearFogLightVirtualSwSt = std::move(_x.ACU_RearFogLightVirtualSwSt);
		ACU_FrontFogLightVirtualSwSt = std::move(_x.ACU_FrontFogLightVirtualSwSt);
		ACU_HighBeamVirtualSwSt = std::move(_x.ACU_HighBeamVirtualSwSt);
		ACU_HeadLightDelayCfg = std::move(_x.ACU_HeadLightDelayCfg);
		ACU_ALSCfg = std::move(_x.ACU_ALSCfg);
		VCU_BrkLightOn = std::move(_x.VCU_BrkLightOn);
		VCU_BCMhazardLampOn = std::move(_x.VCU_BCMhazardLampOn);
		RLS_PositionLightSt = std::move(_x.RLS_PositionLightSt);
		RLS_LightOnReq = std::move(_x.RLS_LightOnReq);
		RLS_LightSnsSt = std::move(_x.RLS_LightSnsSt);
		RLS_LSErr = std::move(_x.RLS_LSErr);
		RLS_OverVoltErr = std::move(_x.RLS_OverVoltErr);
	}
	BDCEL2& operator=(const BDCEL2 &_x){
		LCK_ApproachLightReq = _x.LCK_ApproachLightReq;
		LCK_LockIndicateReq = _x.LCK_LockIndicateReq;
		ACU_HeadLightLevelingVirtualSwSt = _x.ACU_HeadLightLevelingVirtualSwSt;
		ACU_WelcomeLightMode = _x.ACU_WelcomeLightMode;
		ACU_LightShowMode = _x.ACU_LightShowMode;
		ACU_LightShowFunCmd = _x.ACU_LightShowFunCmd;
		ACU_LightShowTimeFlag = _x.ACU_LightShowTimeFlag;
		ACU_HeadLightVirtualSwSt = _x.ACU_HeadLightVirtualSwSt;
		ACU_RearFogLightVirtualSwSt = _x.ACU_RearFogLightVirtualSwSt;
		ACU_FrontFogLightVirtualSwSt = _x.ACU_FrontFogLightVirtualSwSt;
		ACU_HighBeamVirtualSwSt = _x.ACU_HighBeamVirtualSwSt;
		ACU_HeadLightDelayCfg = _x.ACU_HeadLightDelayCfg;
		ACU_ALSCfg = _x.ACU_ALSCfg;
		VCU_BrkLightOn = _x.VCU_BrkLightOn;
		VCU_BCMhazardLampOn = _x.VCU_BCMhazardLampOn;
		RLS_PositionLightSt = _x.RLS_PositionLightSt;
		RLS_LightOnReq = _x.RLS_LightOnReq;
		RLS_LightSnsSt = _x.RLS_LightSnsSt;
		RLS_LSErr = _x.RLS_LSErr;
		RLS_OverVoltErr = _x.RLS_OverVoltErr;
		return *this;
	}
	BDCEL2& operator=(BDCEL2 &&_x){
		LCK_ApproachLightReq = std::move(_x.LCK_ApproachLightReq);
		LCK_LockIndicateReq = std::move(_x.LCK_LockIndicateReq);
		ACU_HeadLightLevelingVirtualSwSt = std::move(_x.ACU_HeadLightLevelingVirtualSwSt);
		ACU_WelcomeLightMode = std::move(_x.ACU_WelcomeLightMode);
		ACU_LightShowMode = std::move(_x.ACU_LightShowMode);
		ACU_LightShowFunCmd = std::move(_x.ACU_LightShowFunCmd);
		ACU_LightShowTimeFlag = std::move(_x.ACU_LightShowTimeFlag);
		ACU_HeadLightVirtualSwSt = std::move(_x.ACU_HeadLightVirtualSwSt);
		ACU_RearFogLightVirtualSwSt = std::move(_x.ACU_RearFogLightVirtualSwSt);
		ACU_FrontFogLightVirtualSwSt = std::move(_x.ACU_FrontFogLightVirtualSwSt);
		ACU_HighBeamVirtualSwSt = std::move(_x.ACU_HighBeamVirtualSwSt);
		ACU_HeadLightDelayCfg = std::move(_x.ACU_HeadLightDelayCfg);
		ACU_ALSCfg = std::move(_x.ACU_ALSCfg);
		VCU_BrkLightOn = std::move(_x.VCU_BrkLightOn);
		VCU_BCMhazardLampOn = std::move(_x.VCU_BCMhazardLampOn);
		RLS_PositionLightSt = std::move(_x.RLS_PositionLightSt);
		RLS_LightOnReq = std::move(_x.RLS_LightOnReq);
		RLS_LightSnsSt = std::move(_x.RLS_LightSnsSt);
		RLS_LSErr = std::move(_x.RLS_LSErr);
		RLS_OverVoltErr = std::move(_x.RLS_OverVoltErr);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(LCK_ApproachLightReq);
		fun(LCK_LockIndicateReq);
		fun(ACU_HeadLightLevelingVirtualSwSt);
		fun(ACU_WelcomeLightMode);
		fun(ACU_LightShowMode);
		fun(ACU_LightShowFunCmd);
		fun(ACU_LightShowTimeFlag);
		fun(ACU_HeadLightVirtualSwSt);
		fun(ACU_RearFogLightVirtualSwSt);
		fun(ACU_FrontFogLightVirtualSwSt);
		fun(ACU_HighBeamVirtualSwSt);
		fun(ACU_HeadLightDelayCfg);
		fun(ACU_ALSCfg);
		fun(VCU_BrkLightOn);
		fun(VCU_BCMhazardLampOn);
		fun(RLS_PositionLightSt);
		fun(RLS_LightOnReq);
		fun(RLS_LightSnsSt);
		fun(RLS_LSErr);
		fun(RLS_OverVoltErr);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(LCK_ApproachLightReq);
		fun(LCK_LockIndicateReq);
		fun(ACU_HeadLightLevelingVirtualSwSt);
		fun(ACU_WelcomeLightMode);
		fun(ACU_LightShowMode);
		fun(ACU_LightShowFunCmd);
		fun(ACU_LightShowTimeFlag);
		fun(ACU_HeadLightVirtualSwSt);
		fun(ACU_RearFogLightVirtualSwSt);
		fun(ACU_FrontFogLightVirtualSwSt);
		fun(ACU_HighBeamVirtualSwSt);
		fun(ACU_HeadLightDelayCfg);
		fun(ACU_ALSCfg);
		fun(VCU_BrkLightOn);
		fun(VCU_BCMhazardLampOn);
		fun(RLS_PositionLightSt);
		fun(RLS_LightOnReq);
		fun(RLS_LightSnsSt);
		fun(RLS_LSErr);
		fun(RLS_OverVoltErr);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (LCK_ApproachLightReq);
		fun << (LCK_LockIndicateReq);
		fun << (ACU_HeadLightLevelingVirtualSwSt);
		fun << (ACU_WelcomeLightMode);
		fun << (ACU_LightShowMode);
		fun << (ACU_LightShowFunCmd);
		fun << (ACU_LightShowTimeFlag);
		fun << (ACU_HeadLightVirtualSwSt);
		fun << (ACU_RearFogLightVirtualSwSt);
		fun << (ACU_FrontFogLightVirtualSwSt);
		fun << (ACU_HighBeamVirtualSwSt);
		fun << (ACU_HeadLightDelayCfg);
		fun << (ACU_ALSCfg);
		fun << (VCU_BrkLightOn);
		fun << (VCU_BCMhazardLampOn);
		fun << (RLS_PositionLightSt);
		fun << (RLS_LightOnReq);
		fun << (RLS_LightSnsSt);
		fun << (RLS_LSErr);
		fun << (RLS_OverVoltErr);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (LCK_ApproachLightReq);
		fun >> (LCK_LockIndicateReq);
		fun >> (ACU_HeadLightLevelingVirtualSwSt);
		fun >> (ACU_WelcomeLightMode);
		fun >> (ACU_LightShowMode);
		fun >> (ACU_LightShowFunCmd);
		fun >> (ACU_LightShowTimeFlag);
		fun >> (ACU_HeadLightVirtualSwSt);
		fun >> (ACU_RearFogLightVirtualSwSt);
		fun >> (ACU_FrontFogLightVirtualSwSt);
		fun >> (ACU_HighBeamVirtualSwSt);
		fun >> (ACU_HeadLightDelayCfg);
		fun >> (ACU_ALSCfg);
		fun >> (VCU_BrkLightOn);
		fun >> (VCU_BCMhazardLampOn);
		fun >> (RLS_PositionLightSt);
		fun >> (RLS_LightOnReq);
		fun >> (RLS_LightSnsSt);
		fun >> (RLS_LSErr);
		fun >> (RLS_OverVoltErr);
	}
};

#endif //____BDCEL2_H__
