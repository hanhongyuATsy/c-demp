#ifndef ____BDCUINM2_H__
#define ____BDCUINM2_H__


#include "cstdint"






struct BDCUINM2 {
public:
	std::uint8_t UINM_DrvReqShft;
	std::uint8_t UINM_DrvReqShftInv;
	std::uint8_t UINM_FuSaErrSt;
	std::uint8_t UINM_ShftFault;
	std::uint8_t UINM_PositionLightSwSt;
	std::uint8_t UINM_LowBeamSwSt;
	std::uint8_t UINM_AutoLightSwSt;
	std::uint8_t UINM_FrontFogLightSwSt;
	std::uint8_t UINM_RearFogLightSwSt;
	std::uint8_t UINM_HighBeamSwSt;
	std::uint8_t UINM_TurnLightSwSt;
	std::uint8_t UINM_FrontWiperSwSt;
	std::uint8_t UINM_FrontWiperIntAdjSwSt;
	std::uint8_t UINM_FrontWasherSwSt;
	std::uint8_t UINM_RearWiperSwSt;
	std::uint8_t UINM_RearWiperIntAdjSwSt;
	std::uint8_t UINM_RearWasherSwSt;
	std::uint8_t UINM_HeadLampWasherSwSt;
/*
	BDCUINM2() {}
	~BDCUINM2() {}
	BDCUINM2(const std::uint8_t _UINM_DrvReqShft,const std::uint8_t _UINM_DrvReqShftInv,const std::uint8_t _UINM_FuSaErrSt,const std::uint8_t _UINM_ShftFault,const std::uint8_t _UINM_PositionLightSwSt,const std::uint8_t _UINM_LowBeamSwSt,const std::uint8_t _UINM_AutoLightSwSt,const std::uint8_t _UINM_FrontFogLightSwSt,const std::uint8_t _UINM_RearFogLightSwSt,const std::uint8_t _UINM_HighBeamSwSt,const std::uint8_t _UINM_TurnLightSwSt,const std::uint8_t _UINM_FrontWiperSwSt,const std::uint8_t _UINM_FrontWiperIntAdjSwSt,const std::uint8_t _UINM_FrontWasherSwSt,const std::uint8_t _UINM_RearWiperSwSt,const std::uint8_t _UINM_RearWiperIntAdjSwSt,const std::uint8_t _UINM_RearWasherSwSt,const std::uint8_t _UINM_HeadLampWasherSwSt):UINM_DrvReqShft(_UINM_DrvReqShft),UINM_DrvReqShftInv(_UINM_DrvReqShftInv),UINM_FuSaErrSt(_UINM_FuSaErrSt),UINM_ShftFault(_UINM_ShftFault),UINM_PositionLightSwSt(_UINM_PositionLightSwSt),UINM_LowBeamSwSt(_UINM_LowBeamSwSt),UINM_AutoLightSwSt(_UINM_AutoLightSwSt),UINM_FrontFogLightSwSt(_UINM_FrontFogLightSwSt),UINM_RearFogLightSwSt(_UINM_RearFogLightSwSt),UINM_HighBeamSwSt(_UINM_HighBeamSwSt),UINM_TurnLightSwSt(_UINM_TurnLightSwSt),UINM_FrontWiperSwSt(_UINM_FrontWiperSwSt),UINM_FrontWiperIntAdjSwSt(_UINM_FrontWiperIntAdjSwSt),UINM_FrontWasherSwSt(_UINM_FrontWasherSwSt),UINM_RearWiperSwSt(_UINM_RearWiperSwSt),UINM_RearWiperIntAdjSwSt(_UINM_RearWiperIntAdjSwSt),UINM_RearWasherSwSt(_UINM_RearWasherSwSt),UINM_HeadLampWasherSwSt(_UINM_HeadLampWasherSwSt) {}
	BDCUINM2(const BDCUINM2 &_x){
		UINM_DrvReqShft = _x.UINM_DrvReqShft;
		UINM_DrvReqShftInv = _x.UINM_DrvReqShftInv;
		UINM_FuSaErrSt = _x.UINM_FuSaErrSt;
		UINM_ShftFault = _x.UINM_ShftFault;
		UINM_PositionLightSwSt = _x.UINM_PositionLightSwSt;
		UINM_LowBeamSwSt = _x.UINM_LowBeamSwSt;
		UINM_AutoLightSwSt = _x.UINM_AutoLightSwSt;
		UINM_FrontFogLightSwSt = _x.UINM_FrontFogLightSwSt;
		UINM_RearFogLightSwSt = _x.UINM_RearFogLightSwSt;
		UINM_HighBeamSwSt = _x.UINM_HighBeamSwSt;
		UINM_TurnLightSwSt = _x.UINM_TurnLightSwSt;
		UINM_FrontWiperSwSt = _x.UINM_FrontWiperSwSt;
		UINM_FrontWiperIntAdjSwSt = _x.UINM_FrontWiperIntAdjSwSt;
		UINM_FrontWasherSwSt = _x.UINM_FrontWasherSwSt;
		UINM_RearWiperSwSt = _x.UINM_RearWiperSwSt;
		UINM_RearWiperIntAdjSwSt = _x.UINM_RearWiperIntAdjSwSt;
		UINM_RearWasherSwSt = _x.UINM_RearWasherSwSt;
		UINM_HeadLampWasherSwSt = _x.UINM_HeadLampWasherSwSt;
	}
	BDCUINM2(BDCUINM2 &&_x){
		UINM_DrvReqShft = std::move(_x.UINM_DrvReqShft);
		UINM_DrvReqShftInv = std::move(_x.UINM_DrvReqShftInv);
		UINM_FuSaErrSt = std::move(_x.UINM_FuSaErrSt);
		UINM_ShftFault = std::move(_x.UINM_ShftFault);
		UINM_PositionLightSwSt = std::move(_x.UINM_PositionLightSwSt);
		UINM_LowBeamSwSt = std::move(_x.UINM_LowBeamSwSt);
		UINM_AutoLightSwSt = std::move(_x.UINM_AutoLightSwSt);
		UINM_FrontFogLightSwSt = std::move(_x.UINM_FrontFogLightSwSt);
		UINM_RearFogLightSwSt = std::move(_x.UINM_RearFogLightSwSt);
		UINM_HighBeamSwSt = std::move(_x.UINM_HighBeamSwSt);
		UINM_TurnLightSwSt = std::move(_x.UINM_TurnLightSwSt);
		UINM_FrontWiperSwSt = std::move(_x.UINM_FrontWiperSwSt);
		UINM_FrontWiperIntAdjSwSt = std::move(_x.UINM_FrontWiperIntAdjSwSt);
		UINM_FrontWasherSwSt = std::move(_x.UINM_FrontWasherSwSt);
		UINM_RearWiperSwSt = std::move(_x.UINM_RearWiperSwSt);
		UINM_RearWiperIntAdjSwSt = std::move(_x.UINM_RearWiperIntAdjSwSt);
		UINM_RearWasherSwSt = std::move(_x.UINM_RearWasherSwSt);
		UINM_HeadLampWasherSwSt = std::move(_x.UINM_HeadLampWasherSwSt);
	}
	BDCUINM2& operator=(const BDCUINM2 &_x){
		UINM_DrvReqShft = _x.UINM_DrvReqShft;
		UINM_DrvReqShftInv = _x.UINM_DrvReqShftInv;
		UINM_FuSaErrSt = _x.UINM_FuSaErrSt;
		UINM_ShftFault = _x.UINM_ShftFault;
		UINM_PositionLightSwSt = _x.UINM_PositionLightSwSt;
		UINM_LowBeamSwSt = _x.UINM_LowBeamSwSt;
		UINM_AutoLightSwSt = _x.UINM_AutoLightSwSt;
		UINM_FrontFogLightSwSt = _x.UINM_FrontFogLightSwSt;
		UINM_RearFogLightSwSt = _x.UINM_RearFogLightSwSt;
		UINM_HighBeamSwSt = _x.UINM_HighBeamSwSt;
		UINM_TurnLightSwSt = _x.UINM_TurnLightSwSt;
		UINM_FrontWiperSwSt = _x.UINM_FrontWiperSwSt;
		UINM_FrontWiperIntAdjSwSt = _x.UINM_FrontWiperIntAdjSwSt;
		UINM_FrontWasherSwSt = _x.UINM_FrontWasherSwSt;
		UINM_RearWiperSwSt = _x.UINM_RearWiperSwSt;
		UINM_RearWiperIntAdjSwSt = _x.UINM_RearWiperIntAdjSwSt;
		UINM_RearWasherSwSt = _x.UINM_RearWasherSwSt;
		UINM_HeadLampWasherSwSt = _x.UINM_HeadLampWasherSwSt;
		return *this;
	}
	BDCUINM2& operator=(BDCUINM2 &&_x){
		UINM_DrvReqShft = std::move(_x.UINM_DrvReqShft);
		UINM_DrvReqShftInv = std::move(_x.UINM_DrvReqShftInv);
		UINM_FuSaErrSt = std::move(_x.UINM_FuSaErrSt);
		UINM_ShftFault = std::move(_x.UINM_ShftFault);
		UINM_PositionLightSwSt = std::move(_x.UINM_PositionLightSwSt);
		UINM_LowBeamSwSt = std::move(_x.UINM_LowBeamSwSt);
		UINM_AutoLightSwSt = std::move(_x.UINM_AutoLightSwSt);
		UINM_FrontFogLightSwSt = std::move(_x.UINM_FrontFogLightSwSt);
		UINM_RearFogLightSwSt = std::move(_x.UINM_RearFogLightSwSt);
		UINM_HighBeamSwSt = std::move(_x.UINM_HighBeamSwSt);
		UINM_TurnLightSwSt = std::move(_x.UINM_TurnLightSwSt);
		UINM_FrontWiperSwSt = std::move(_x.UINM_FrontWiperSwSt);
		UINM_FrontWiperIntAdjSwSt = std::move(_x.UINM_FrontWiperIntAdjSwSt);
		UINM_FrontWasherSwSt = std::move(_x.UINM_FrontWasherSwSt);
		UINM_RearWiperSwSt = std::move(_x.UINM_RearWiperSwSt);
		UINM_RearWiperIntAdjSwSt = std::move(_x.UINM_RearWiperIntAdjSwSt);
		UINM_RearWasherSwSt = std::move(_x.UINM_RearWasherSwSt);
		UINM_HeadLampWasherSwSt = std::move(_x.UINM_HeadLampWasherSwSt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(UINM_DrvReqShft);
		fun(UINM_DrvReqShftInv);
		fun(UINM_FuSaErrSt);
		fun(UINM_ShftFault);
		fun(UINM_PositionLightSwSt);
		fun(UINM_LowBeamSwSt);
		fun(UINM_AutoLightSwSt);
		fun(UINM_FrontFogLightSwSt);
		fun(UINM_RearFogLightSwSt);
		fun(UINM_HighBeamSwSt);
		fun(UINM_TurnLightSwSt);
		fun(UINM_FrontWiperSwSt);
		fun(UINM_FrontWiperIntAdjSwSt);
		fun(UINM_FrontWasherSwSt);
		fun(UINM_RearWiperSwSt);
		fun(UINM_RearWiperIntAdjSwSt);
		fun(UINM_RearWasherSwSt);
		fun(UINM_HeadLampWasherSwSt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(UINM_DrvReqShft);
		fun(UINM_DrvReqShftInv);
		fun(UINM_FuSaErrSt);
		fun(UINM_ShftFault);
		fun(UINM_PositionLightSwSt);
		fun(UINM_LowBeamSwSt);
		fun(UINM_AutoLightSwSt);
		fun(UINM_FrontFogLightSwSt);
		fun(UINM_RearFogLightSwSt);
		fun(UINM_HighBeamSwSt);
		fun(UINM_TurnLightSwSt);
		fun(UINM_FrontWiperSwSt);
		fun(UINM_FrontWiperIntAdjSwSt);
		fun(UINM_FrontWasherSwSt);
		fun(UINM_RearWiperSwSt);
		fun(UINM_RearWiperIntAdjSwSt);
		fun(UINM_RearWasherSwSt);
		fun(UINM_HeadLampWasherSwSt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (UINM_DrvReqShft);
		fun << (UINM_DrvReqShftInv);
		fun << (UINM_FuSaErrSt);
		fun << (UINM_ShftFault);
		fun << (UINM_PositionLightSwSt);
		fun << (UINM_LowBeamSwSt);
		fun << (UINM_AutoLightSwSt);
		fun << (UINM_FrontFogLightSwSt);
		fun << (UINM_RearFogLightSwSt);
		fun << (UINM_HighBeamSwSt);
		fun << (UINM_TurnLightSwSt);
		fun << (UINM_FrontWiperSwSt);
		fun << (UINM_FrontWiperIntAdjSwSt);
		fun << (UINM_FrontWasherSwSt);
		fun << (UINM_RearWiperSwSt);
		fun << (UINM_RearWiperIntAdjSwSt);
		fun << (UINM_RearWasherSwSt);
		fun << (UINM_HeadLampWasherSwSt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (UINM_DrvReqShft);
		fun >> (UINM_DrvReqShftInv);
		fun >> (UINM_FuSaErrSt);
		fun >> (UINM_ShftFault);
		fun >> (UINM_PositionLightSwSt);
		fun >> (UINM_LowBeamSwSt);
		fun >> (UINM_AutoLightSwSt);
		fun >> (UINM_FrontFogLightSwSt);
		fun >> (UINM_RearFogLightSwSt);
		fun >> (UINM_HighBeamSwSt);
		fun >> (UINM_TurnLightSwSt);
		fun >> (UINM_FrontWiperSwSt);
		fun >> (UINM_FrontWiperIntAdjSwSt);
		fun >> (UINM_FrontWasherSwSt);
		fun >> (UINM_RearWiperSwSt);
		fun >> (UINM_RearWiperIntAdjSwSt);
		fun >> (UINM_RearWasherSwSt);
		fun >> (UINM_HeadLampWasherSwSt);
	}
};

#endif //____BDCUINM2_H__
