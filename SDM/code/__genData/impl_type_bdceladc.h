#ifndef ____BDCELADC_H__
#define ____BDCELADC_H__


#include "cstdint"






struct BDCELADC {
public:
	std::uint8_t ADC_LowBeamReq;
	std::uint8_t ADC_IHBC_HighBeamReq;
	std::uint8_t ADC_FlashReq;
	std::uint8_t ADC_PositionLampReq;
	std::uint8_t ADC_BrakeLightReq;
	std::uint8_t ADC_CCUReqVD;
	std::uint8_t ADC_TurnLightReq;
	std::uint8_t ADC_BSDExMirLedWarnR;
	std::uint8_t ADC_BSDExMirLedWarnL;
	std::uint8_t IFC_BrakeLightReq;
	std::uint8_t IFC_TurnLightReq;
	std::uint8_t IFC_CCUReqVD;
	std::uint8_t EPB_SysBrkLightsReq;
	std::uint8_t BCS_BrkLightOn;
	std::uint8_t WW_FWPMotorSt;
	std::uint8_t UINM_HazardLightSwSt;
	std::uint8_t KAE_SATOReminderReq;
	std::uint8_t KAE_RKEExtiorLightAlarmReq;
	std::uint8_t KAE_WelcomeLightReq;
	std::uint8_t VCU_Chglamplightreq;
	std::uint8_t VCU_Chglampflashreq;
	std::uint8_t UINM_PositionLightSwSt;
	std::uint8_t UINM_LowBeamSwSt;
	std::uint8_t UINM_AutoLightSwSt;
	std::uint8_t UINM_FrontFogLightSwSt;
	std::uint8_t UINM_RearFogLightSwSt;
	std::uint8_t UINM_HighBeamSwSt;
	std::uint8_t UINM_TurnLightSwSt;
/*
	BDCELADC() {}
	~BDCELADC() {}
	BDCELADC(const std::uint8_t _ADC_LowBeamReq,const std::uint8_t _ADC_IHBC_HighBeamReq,const std::uint8_t _ADC_FlashReq,const std::uint8_t _ADC_PositionLampReq,const std::uint8_t _ADC_BrakeLightReq,const std::uint8_t _ADC_CCUReqVD,const std::uint8_t _ADC_TurnLightReq,const std::uint8_t _ADC_BSDExMirLedWarnR,const std::uint8_t _ADC_BSDExMirLedWarnL,const std::uint8_t _IFC_BrakeLightReq,const std::uint8_t _IFC_TurnLightReq,const std::uint8_t _IFC_CCUReqVD,const std::uint8_t _EPB_SysBrkLightsReq,const std::uint8_t _BCS_BrkLightOn,const std::uint8_t _WW_FWPMotorSt,const std::uint8_t _UINM_HazardLightSwSt,const std::uint8_t _KAE_SATOReminderReq,const std::uint8_t _KAE_RKEExtiorLightAlarmReq,const std::uint8_t _KAE_WelcomeLightReq,const std::uint8_t _VCU_Chglamplightreq,const std::uint8_t _VCU_Chglampflashreq,const std::uint8_t _UINM_PositionLightSwSt,const std::uint8_t _UINM_LowBeamSwSt,const std::uint8_t _UINM_AutoLightSwSt,const std::uint8_t _UINM_FrontFogLightSwSt,const std::uint8_t _UINM_RearFogLightSwSt,const std::uint8_t _UINM_HighBeamSwSt,const std::uint8_t _UINM_TurnLightSwSt):ADC_LowBeamReq(_ADC_LowBeamReq),ADC_IHBC_HighBeamReq(_ADC_IHBC_HighBeamReq),ADC_FlashReq(_ADC_FlashReq),ADC_PositionLampReq(_ADC_PositionLampReq),ADC_BrakeLightReq(_ADC_BrakeLightReq),ADC_CCUReqVD(_ADC_CCUReqVD),ADC_TurnLightReq(_ADC_TurnLightReq),ADC_BSDExMirLedWarnR(_ADC_BSDExMirLedWarnR),ADC_BSDExMirLedWarnL(_ADC_BSDExMirLedWarnL),IFC_BrakeLightReq(_IFC_BrakeLightReq),IFC_TurnLightReq(_IFC_TurnLightReq),IFC_CCUReqVD(_IFC_CCUReqVD),EPB_SysBrkLightsReq(_EPB_SysBrkLightsReq),BCS_BrkLightOn(_BCS_BrkLightOn),WW_FWPMotorSt(_WW_FWPMotorSt),UINM_HazardLightSwSt(_UINM_HazardLightSwSt),KAE_SATOReminderReq(_KAE_SATOReminderReq),KAE_RKEExtiorLightAlarmReq(_KAE_RKEExtiorLightAlarmReq),KAE_WelcomeLightReq(_KAE_WelcomeLightReq),VCU_Chglamplightreq(_VCU_Chglamplightreq),VCU_Chglampflashreq(_VCU_Chglampflashreq),UINM_PositionLightSwSt(_UINM_PositionLightSwSt),UINM_LowBeamSwSt(_UINM_LowBeamSwSt),UINM_AutoLightSwSt(_UINM_AutoLightSwSt),UINM_FrontFogLightSwSt(_UINM_FrontFogLightSwSt),UINM_RearFogLightSwSt(_UINM_RearFogLightSwSt),UINM_HighBeamSwSt(_UINM_HighBeamSwSt),UINM_TurnLightSwSt(_UINM_TurnLightSwSt) {}
	BDCELADC(const BDCELADC &_x){
		ADC_LowBeamReq = _x.ADC_LowBeamReq;
		ADC_IHBC_HighBeamReq = _x.ADC_IHBC_HighBeamReq;
		ADC_FlashReq = _x.ADC_FlashReq;
		ADC_PositionLampReq = _x.ADC_PositionLampReq;
		ADC_BrakeLightReq = _x.ADC_BrakeLightReq;
		ADC_CCUReqVD = _x.ADC_CCUReqVD;
		ADC_TurnLightReq = _x.ADC_TurnLightReq;
		ADC_BSDExMirLedWarnR = _x.ADC_BSDExMirLedWarnR;
		ADC_BSDExMirLedWarnL = _x.ADC_BSDExMirLedWarnL;
		IFC_BrakeLightReq = _x.IFC_BrakeLightReq;
		IFC_TurnLightReq = _x.IFC_TurnLightReq;
		IFC_CCUReqVD = _x.IFC_CCUReqVD;
		EPB_SysBrkLightsReq = _x.EPB_SysBrkLightsReq;
		BCS_BrkLightOn = _x.BCS_BrkLightOn;
		WW_FWPMotorSt = _x.WW_FWPMotorSt;
		UINM_HazardLightSwSt = _x.UINM_HazardLightSwSt;
		KAE_SATOReminderReq = _x.KAE_SATOReminderReq;
		KAE_RKEExtiorLightAlarmReq = _x.KAE_RKEExtiorLightAlarmReq;
		KAE_WelcomeLightReq = _x.KAE_WelcomeLightReq;
		VCU_Chglamplightreq = _x.VCU_Chglamplightreq;
		VCU_Chglampflashreq = _x.VCU_Chglampflashreq;
		UINM_PositionLightSwSt = _x.UINM_PositionLightSwSt;
		UINM_LowBeamSwSt = _x.UINM_LowBeamSwSt;
		UINM_AutoLightSwSt = _x.UINM_AutoLightSwSt;
		UINM_FrontFogLightSwSt = _x.UINM_FrontFogLightSwSt;
		UINM_RearFogLightSwSt = _x.UINM_RearFogLightSwSt;
		UINM_HighBeamSwSt = _x.UINM_HighBeamSwSt;
		UINM_TurnLightSwSt = _x.UINM_TurnLightSwSt;
	}
	BDCELADC(BDCELADC &&_x){
		ADC_LowBeamReq = std::move(_x.ADC_LowBeamReq);
		ADC_IHBC_HighBeamReq = std::move(_x.ADC_IHBC_HighBeamReq);
		ADC_FlashReq = std::move(_x.ADC_FlashReq);
		ADC_PositionLampReq = std::move(_x.ADC_PositionLampReq);
		ADC_BrakeLightReq = std::move(_x.ADC_BrakeLightReq);
		ADC_CCUReqVD = std::move(_x.ADC_CCUReqVD);
		ADC_TurnLightReq = std::move(_x.ADC_TurnLightReq);
		ADC_BSDExMirLedWarnR = std::move(_x.ADC_BSDExMirLedWarnR);
		ADC_BSDExMirLedWarnL = std::move(_x.ADC_BSDExMirLedWarnL);
		IFC_BrakeLightReq = std::move(_x.IFC_BrakeLightReq);
		IFC_TurnLightReq = std::move(_x.IFC_TurnLightReq);
		IFC_CCUReqVD = std::move(_x.IFC_CCUReqVD);
		EPB_SysBrkLightsReq = std::move(_x.EPB_SysBrkLightsReq);
		BCS_BrkLightOn = std::move(_x.BCS_BrkLightOn);
		WW_FWPMotorSt = std::move(_x.WW_FWPMotorSt);
		UINM_HazardLightSwSt = std::move(_x.UINM_HazardLightSwSt);
		KAE_SATOReminderReq = std::move(_x.KAE_SATOReminderReq);
		KAE_RKEExtiorLightAlarmReq = std::move(_x.KAE_RKEExtiorLightAlarmReq);
		KAE_WelcomeLightReq = std::move(_x.KAE_WelcomeLightReq);
		VCU_Chglamplightreq = std::move(_x.VCU_Chglamplightreq);
		VCU_Chglampflashreq = std::move(_x.VCU_Chglampflashreq);
		UINM_PositionLightSwSt = std::move(_x.UINM_PositionLightSwSt);
		UINM_LowBeamSwSt = std::move(_x.UINM_LowBeamSwSt);
		UINM_AutoLightSwSt = std::move(_x.UINM_AutoLightSwSt);
		UINM_FrontFogLightSwSt = std::move(_x.UINM_FrontFogLightSwSt);
		UINM_RearFogLightSwSt = std::move(_x.UINM_RearFogLightSwSt);
		UINM_HighBeamSwSt = std::move(_x.UINM_HighBeamSwSt);
		UINM_TurnLightSwSt = std::move(_x.UINM_TurnLightSwSt);
	}
	BDCELADC& operator=(const BDCELADC &_x){
		ADC_LowBeamReq = _x.ADC_LowBeamReq;
		ADC_IHBC_HighBeamReq = _x.ADC_IHBC_HighBeamReq;
		ADC_FlashReq = _x.ADC_FlashReq;
		ADC_PositionLampReq = _x.ADC_PositionLampReq;
		ADC_BrakeLightReq = _x.ADC_BrakeLightReq;
		ADC_CCUReqVD = _x.ADC_CCUReqVD;
		ADC_TurnLightReq = _x.ADC_TurnLightReq;
		ADC_BSDExMirLedWarnR = _x.ADC_BSDExMirLedWarnR;
		ADC_BSDExMirLedWarnL = _x.ADC_BSDExMirLedWarnL;
		IFC_BrakeLightReq = _x.IFC_BrakeLightReq;
		IFC_TurnLightReq = _x.IFC_TurnLightReq;
		IFC_CCUReqVD = _x.IFC_CCUReqVD;
		EPB_SysBrkLightsReq = _x.EPB_SysBrkLightsReq;
		BCS_BrkLightOn = _x.BCS_BrkLightOn;
		WW_FWPMotorSt = _x.WW_FWPMotorSt;
		UINM_HazardLightSwSt = _x.UINM_HazardLightSwSt;
		KAE_SATOReminderReq = _x.KAE_SATOReminderReq;
		KAE_RKEExtiorLightAlarmReq = _x.KAE_RKEExtiorLightAlarmReq;
		KAE_WelcomeLightReq = _x.KAE_WelcomeLightReq;
		VCU_Chglamplightreq = _x.VCU_Chglamplightreq;
		VCU_Chglampflashreq = _x.VCU_Chglampflashreq;
		UINM_PositionLightSwSt = _x.UINM_PositionLightSwSt;
		UINM_LowBeamSwSt = _x.UINM_LowBeamSwSt;
		UINM_AutoLightSwSt = _x.UINM_AutoLightSwSt;
		UINM_FrontFogLightSwSt = _x.UINM_FrontFogLightSwSt;
		UINM_RearFogLightSwSt = _x.UINM_RearFogLightSwSt;
		UINM_HighBeamSwSt = _x.UINM_HighBeamSwSt;
		UINM_TurnLightSwSt = _x.UINM_TurnLightSwSt;
		return *this;
	}
	BDCELADC& operator=(BDCELADC &&_x){
		ADC_LowBeamReq = std::move(_x.ADC_LowBeamReq);
		ADC_IHBC_HighBeamReq = std::move(_x.ADC_IHBC_HighBeamReq);
		ADC_FlashReq = std::move(_x.ADC_FlashReq);
		ADC_PositionLampReq = std::move(_x.ADC_PositionLampReq);
		ADC_BrakeLightReq = std::move(_x.ADC_BrakeLightReq);
		ADC_CCUReqVD = std::move(_x.ADC_CCUReqVD);
		ADC_TurnLightReq = std::move(_x.ADC_TurnLightReq);
		ADC_BSDExMirLedWarnR = std::move(_x.ADC_BSDExMirLedWarnR);
		ADC_BSDExMirLedWarnL = std::move(_x.ADC_BSDExMirLedWarnL);
		IFC_BrakeLightReq = std::move(_x.IFC_BrakeLightReq);
		IFC_TurnLightReq = std::move(_x.IFC_TurnLightReq);
		IFC_CCUReqVD = std::move(_x.IFC_CCUReqVD);
		EPB_SysBrkLightsReq = std::move(_x.EPB_SysBrkLightsReq);
		BCS_BrkLightOn = std::move(_x.BCS_BrkLightOn);
		WW_FWPMotorSt = std::move(_x.WW_FWPMotorSt);
		UINM_HazardLightSwSt = std::move(_x.UINM_HazardLightSwSt);
		KAE_SATOReminderReq = std::move(_x.KAE_SATOReminderReq);
		KAE_RKEExtiorLightAlarmReq = std::move(_x.KAE_RKEExtiorLightAlarmReq);
		KAE_WelcomeLightReq = std::move(_x.KAE_WelcomeLightReq);
		VCU_Chglamplightreq = std::move(_x.VCU_Chglamplightreq);
		VCU_Chglampflashreq = std::move(_x.VCU_Chglampflashreq);
		UINM_PositionLightSwSt = std::move(_x.UINM_PositionLightSwSt);
		UINM_LowBeamSwSt = std::move(_x.UINM_LowBeamSwSt);
		UINM_AutoLightSwSt = std::move(_x.UINM_AutoLightSwSt);
		UINM_FrontFogLightSwSt = std::move(_x.UINM_FrontFogLightSwSt);
		UINM_RearFogLightSwSt = std::move(_x.UINM_RearFogLightSwSt);
		UINM_HighBeamSwSt = std::move(_x.UINM_HighBeamSwSt);
		UINM_TurnLightSwSt = std::move(_x.UINM_TurnLightSwSt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(ADC_LowBeamReq);
		fun(ADC_IHBC_HighBeamReq);
		fun(ADC_FlashReq);
		fun(ADC_PositionLampReq);
		fun(ADC_BrakeLightReq);
		fun(ADC_CCUReqVD);
		fun(ADC_TurnLightReq);
		fun(ADC_BSDExMirLedWarnR);
		fun(ADC_BSDExMirLedWarnL);
		fun(IFC_BrakeLightReq);
		fun(IFC_TurnLightReq);
		fun(IFC_CCUReqVD);
		fun(EPB_SysBrkLightsReq);
		fun(BCS_BrkLightOn);
		fun(WW_FWPMotorSt);
		fun(UINM_HazardLightSwSt);
		fun(KAE_SATOReminderReq);
		fun(KAE_RKEExtiorLightAlarmReq);
		fun(KAE_WelcomeLightReq);
		fun(VCU_Chglamplightreq);
		fun(VCU_Chglampflashreq);
		fun(UINM_PositionLightSwSt);
		fun(UINM_LowBeamSwSt);
		fun(UINM_AutoLightSwSt);
		fun(UINM_FrontFogLightSwSt);
		fun(UINM_RearFogLightSwSt);
		fun(UINM_HighBeamSwSt);
		fun(UINM_TurnLightSwSt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(ADC_LowBeamReq);
		fun(ADC_IHBC_HighBeamReq);
		fun(ADC_FlashReq);
		fun(ADC_PositionLampReq);
		fun(ADC_BrakeLightReq);
		fun(ADC_CCUReqVD);
		fun(ADC_TurnLightReq);
		fun(ADC_BSDExMirLedWarnR);
		fun(ADC_BSDExMirLedWarnL);
		fun(IFC_BrakeLightReq);
		fun(IFC_TurnLightReq);
		fun(IFC_CCUReqVD);
		fun(EPB_SysBrkLightsReq);
		fun(BCS_BrkLightOn);
		fun(WW_FWPMotorSt);
		fun(UINM_HazardLightSwSt);
		fun(KAE_SATOReminderReq);
		fun(KAE_RKEExtiorLightAlarmReq);
		fun(KAE_WelcomeLightReq);
		fun(VCU_Chglamplightreq);
		fun(VCU_Chglampflashreq);
		fun(UINM_PositionLightSwSt);
		fun(UINM_LowBeamSwSt);
		fun(UINM_AutoLightSwSt);
		fun(UINM_FrontFogLightSwSt);
		fun(UINM_RearFogLightSwSt);
		fun(UINM_HighBeamSwSt);
		fun(UINM_TurnLightSwSt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (ADC_LowBeamReq);
		fun << (ADC_IHBC_HighBeamReq);
		fun << (ADC_FlashReq);
		fun << (ADC_PositionLampReq);
		fun << (ADC_BrakeLightReq);
		fun << (ADC_CCUReqVD);
		fun << (ADC_TurnLightReq);
		fun << (ADC_BSDExMirLedWarnR);
		fun << (ADC_BSDExMirLedWarnL);
		fun << (IFC_BrakeLightReq);
		fun << (IFC_TurnLightReq);
		fun << (IFC_CCUReqVD);
		fun << (EPB_SysBrkLightsReq);
		fun << (BCS_BrkLightOn);
		fun << (WW_FWPMotorSt);
		fun << (UINM_HazardLightSwSt);
		fun << (KAE_SATOReminderReq);
		fun << (KAE_RKEExtiorLightAlarmReq);
		fun << (KAE_WelcomeLightReq);
		fun << (VCU_Chglamplightreq);
		fun << (VCU_Chglampflashreq);
		fun << (UINM_PositionLightSwSt);
		fun << (UINM_LowBeamSwSt);
		fun << (UINM_AutoLightSwSt);
		fun << (UINM_FrontFogLightSwSt);
		fun << (UINM_RearFogLightSwSt);
		fun << (UINM_HighBeamSwSt);
		fun << (UINM_TurnLightSwSt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (ADC_LowBeamReq);
		fun >> (ADC_IHBC_HighBeamReq);
		fun >> (ADC_FlashReq);
		fun >> (ADC_PositionLampReq);
		fun >> (ADC_BrakeLightReq);
		fun >> (ADC_CCUReqVD);
		fun >> (ADC_TurnLightReq);
		fun >> (ADC_BSDExMirLedWarnR);
		fun >> (ADC_BSDExMirLedWarnL);
		fun >> (IFC_BrakeLightReq);
		fun >> (IFC_TurnLightReq);
		fun >> (IFC_CCUReqVD);
		fun >> (EPB_SysBrkLightsReq);
		fun >> (BCS_BrkLightOn);
		fun >> (WW_FWPMotorSt);
		fun >> (UINM_HazardLightSwSt);
		fun >> (KAE_SATOReminderReq);
		fun >> (KAE_RKEExtiorLightAlarmReq);
		fun >> (KAE_WelcomeLightReq);
		fun >> (VCU_Chglamplightreq);
		fun >> (VCU_Chglampflashreq);
		fun >> (UINM_PositionLightSwSt);
		fun >> (UINM_LowBeamSwSt);
		fun >> (UINM_AutoLightSwSt);
		fun >> (UINM_FrontFogLightSwSt);
		fun >> (UINM_RearFogLightSwSt);
		fun >> (UINM_HighBeamSwSt);
		fun >> (UINM_TurnLightSwSt);
	}
};

#endif //____BDCELADC_H__
