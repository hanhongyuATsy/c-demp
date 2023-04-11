#ifndef ____BDCEPS3_H__
#define ____BDCEPS3_H__


#include "cstdint"






struct BDCEPS3 {
public:
	std::uint8_t ADC_AngReqSt_A;
	std::uint8_t ADC_AngReqFunction;
	std::uint8_t ADC_LongCtrlAvailability;
	std::uint16_t ADC_StrAngleReq_A;
	std::uint8_t ADC_SACMotorTorLimExtMax_A;
	std::uint8_t ADC_SACMotorTorLimExtMin_A;
	std::uint8_t ADC_AssistParaSwitchReq;
	std::uint8_t ADC_AngReqRdntReq_A;
	std::uint8_t ADC_SteerGainReq;
	std::uint8_t ADC_StrgWhlVibrWarnLevel;
	std::uint8_t ADC_SteerGainLevel;
	std::uint8_t ADC_EvsSteerReq;
	std::uint8_t ADC_StrgWhlVibrWarnReq;
	std::uint8_t ADC_PAA2ESPAxReqEnable;
	std::uint8_t IFC_AngReqRdntSt;
	std::uint8_t IFC_AngReqSt;
	std::uint16_t IFC_StrAngleReq;
	std::uint8_t IFC_SACMotorTorLimExtMin;
	std::uint8_t IFC_SACMotorTorLimExtMax;
	std::uint16_t VMC_EPSAddTorqReq;
	std::uint8_t VMC_FuncReqSt;
/*
	BDCEPS3() {}
	~BDCEPS3() {}
	BDCEPS3(const std::uint8_t _ADC_AngReqSt_A,const std::uint8_t _ADC_AngReqFunction,const std::uint8_t _ADC_LongCtrlAvailability,const std::uint16_t _ADC_StrAngleReq_A,const std::uint8_t _ADC_SACMotorTorLimExtMax_A,const std::uint8_t _ADC_SACMotorTorLimExtMin_A,const std::uint8_t _ADC_AssistParaSwitchReq,const std::uint8_t _ADC_AngReqRdntReq_A,const std::uint8_t _ADC_SteerGainReq,const std::uint8_t _ADC_StrgWhlVibrWarnLevel,const std::uint8_t _ADC_SteerGainLevel,const std::uint8_t _ADC_EvsSteerReq,const std::uint8_t _ADC_StrgWhlVibrWarnReq,const std::uint8_t _ADC_PAA2ESPAxReqEnable,const std::uint8_t _IFC_AngReqRdntSt,const std::uint8_t _IFC_AngReqSt,const std::uint16_t _IFC_StrAngleReq,const std::uint8_t _IFC_SACMotorTorLimExtMin,const std::uint8_t _IFC_SACMotorTorLimExtMax,const std::uint16_t _VMC_EPSAddTorqReq,const std::uint8_t _VMC_FuncReqSt):ADC_AngReqSt_A(_ADC_AngReqSt_A),ADC_AngReqFunction(_ADC_AngReqFunction),ADC_LongCtrlAvailability(_ADC_LongCtrlAvailability),ADC_StrAngleReq_A(_ADC_StrAngleReq_A),ADC_SACMotorTorLimExtMax_A(_ADC_SACMotorTorLimExtMax_A),ADC_SACMotorTorLimExtMin_A(_ADC_SACMotorTorLimExtMin_A),ADC_AssistParaSwitchReq(_ADC_AssistParaSwitchReq),ADC_AngReqRdntReq_A(_ADC_AngReqRdntReq_A),ADC_SteerGainReq(_ADC_SteerGainReq),ADC_StrgWhlVibrWarnLevel(_ADC_StrgWhlVibrWarnLevel),ADC_SteerGainLevel(_ADC_SteerGainLevel),ADC_EvsSteerReq(_ADC_EvsSteerReq),ADC_StrgWhlVibrWarnReq(_ADC_StrgWhlVibrWarnReq),ADC_PAA2ESPAxReqEnable(_ADC_PAA2ESPAxReqEnable),IFC_AngReqRdntSt(_IFC_AngReqRdntSt),IFC_AngReqSt(_IFC_AngReqSt),IFC_StrAngleReq(_IFC_StrAngleReq),IFC_SACMotorTorLimExtMin(_IFC_SACMotorTorLimExtMin),IFC_SACMotorTorLimExtMax(_IFC_SACMotorTorLimExtMax),VMC_EPSAddTorqReq(_VMC_EPSAddTorqReq),VMC_FuncReqSt(_VMC_FuncReqSt) {}
	BDCEPS3(const BDCEPS3 &_x){
		ADC_AngReqSt_A = _x.ADC_AngReqSt_A;
		ADC_AngReqFunction = _x.ADC_AngReqFunction;
		ADC_LongCtrlAvailability = _x.ADC_LongCtrlAvailability;
		ADC_StrAngleReq_A = _x.ADC_StrAngleReq_A;
		ADC_SACMotorTorLimExtMax_A = _x.ADC_SACMotorTorLimExtMax_A;
		ADC_SACMotorTorLimExtMin_A = _x.ADC_SACMotorTorLimExtMin_A;
		ADC_AssistParaSwitchReq = _x.ADC_AssistParaSwitchReq;
		ADC_AngReqRdntReq_A = _x.ADC_AngReqRdntReq_A;
		ADC_SteerGainReq = _x.ADC_SteerGainReq;
		ADC_StrgWhlVibrWarnLevel = _x.ADC_StrgWhlVibrWarnLevel;
		ADC_SteerGainLevel = _x.ADC_SteerGainLevel;
		ADC_EvsSteerReq = _x.ADC_EvsSteerReq;
		ADC_StrgWhlVibrWarnReq = _x.ADC_StrgWhlVibrWarnReq;
		ADC_PAA2ESPAxReqEnable = _x.ADC_PAA2ESPAxReqEnable;
		IFC_AngReqRdntSt = _x.IFC_AngReqRdntSt;
		IFC_AngReqSt = _x.IFC_AngReqSt;
		IFC_StrAngleReq = _x.IFC_StrAngleReq;
		IFC_SACMotorTorLimExtMin = _x.IFC_SACMotorTorLimExtMin;
		IFC_SACMotorTorLimExtMax = _x.IFC_SACMotorTorLimExtMax;
		VMC_EPSAddTorqReq = _x.VMC_EPSAddTorqReq;
		VMC_FuncReqSt = _x.VMC_FuncReqSt;
	}
	BDCEPS3(BDCEPS3 &&_x){
		ADC_AngReqSt_A = std::move(_x.ADC_AngReqSt_A);
		ADC_AngReqFunction = std::move(_x.ADC_AngReqFunction);
		ADC_LongCtrlAvailability = std::move(_x.ADC_LongCtrlAvailability);
		ADC_StrAngleReq_A = std::move(_x.ADC_StrAngleReq_A);
		ADC_SACMotorTorLimExtMax_A = std::move(_x.ADC_SACMotorTorLimExtMax_A);
		ADC_SACMotorTorLimExtMin_A = std::move(_x.ADC_SACMotorTorLimExtMin_A);
		ADC_AssistParaSwitchReq = std::move(_x.ADC_AssistParaSwitchReq);
		ADC_AngReqRdntReq_A = std::move(_x.ADC_AngReqRdntReq_A);
		ADC_SteerGainReq = std::move(_x.ADC_SteerGainReq);
		ADC_StrgWhlVibrWarnLevel = std::move(_x.ADC_StrgWhlVibrWarnLevel);
		ADC_SteerGainLevel = std::move(_x.ADC_SteerGainLevel);
		ADC_EvsSteerReq = std::move(_x.ADC_EvsSteerReq);
		ADC_StrgWhlVibrWarnReq = std::move(_x.ADC_StrgWhlVibrWarnReq);
		ADC_PAA2ESPAxReqEnable = std::move(_x.ADC_PAA2ESPAxReqEnable);
		IFC_AngReqRdntSt = std::move(_x.IFC_AngReqRdntSt);
		IFC_AngReqSt = std::move(_x.IFC_AngReqSt);
		IFC_StrAngleReq = std::move(_x.IFC_StrAngleReq);
		IFC_SACMotorTorLimExtMin = std::move(_x.IFC_SACMotorTorLimExtMin);
		IFC_SACMotorTorLimExtMax = std::move(_x.IFC_SACMotorTorLimExtMax);
		VMC_EPSAddTorqReq = std::move(_x.VMC_EPSAddTorqReq);
		VMC_FuncReqSt = std::move(_x.VMC_FuncReqSt);
	}
	BDCEPS3& operator=(const BDCEPS3 &_x){
		ADC_AngReqSt_A = _x.ADC_AngReqSt_A;
		ADC_AngReqFunction = _x.ADC_AngReqFunction;
		ADC_LongCtrlAvailability = _x.ADC_LongCtrlAvailability;
		ADC_StrAngleReq_A = _x.ADC_StrAngleReq_A;
		ADC_SACMotorTorLimExtMax_A = _x.ADC_SACMotorTorLimExtMax_A;
		ADC_SACMotorTorLimExtMin_A = _x.ADC_SACMotorTorLimExtMin_A;
		ADC_AssistParaSwitchReq = _x.ADC_AssistParaSwitchReq;
		ADC_AngReqRdntReq_A = _x.ADC_AngReqRdntReq_A;
		ADC_SteerGainReq = _x.ADC_SteerGainReq;
		ADC_StrgWhlVibrWarnLevel = _x.ADC_StrgWhlVibrWarnLevel;
		ADC_SteerGainLevel = _x.ADC_SteerGainLevel;
		ADC_EvsSteerReq = _x.ADC_EvsSteerReq;
		ADC_StrgWhlVibrWarnReq = _x.ADC_StrgWhlVibrWarnReq;
		ADC_PAA2ESPAxReqEnable = _x.ADC_PAA2ESPAxReqEnable;
		IFC_AngReqRdntSt = _x.IFC_AngReqRdntSt;
		IFC_AngReqSt = _x.IFC_AngReqSt;
		IFC_StrAngleReq = _x.IFC_StrAngleReq;
		IFC_SACMotorTorLimExtMin = _x.IFC_SACMotorTorLimExtMin;
		IFC_SACMotorTorLimExtMax = _x.IFC_SACMotorTorLimExtMax;
		VMC_EPSAddTorqReq = _x.VMC_EPSAddTorqReq;
		VMC_FuncReqSt = _x.VMC_FuncReqSt;
		return *this;
	}
	BDCEPS3& operator=(BDCEPS3 &&_x){
		ADC_AngReqSt_A = std::move(_x.ADC_AngReqSt_A);
		ADC_AngReqFunction = std::move(_x.ADC_AngReqFunction);
		ADC_LongCtrlAvailability = std::move(_x.ADC_LongCtrlAvailability);
		ADC_StrAngleReq_A = std::move(_x.ADC_StrAngleReq_A);
		ADC_SACMotorTorLimExtMax_A = std::move(_x.ADC_SACMotorTorLimExtMax_A);
		ADC_SACMotorTorLimExtMin_A = std::move(_x.ADC_SACMotorTorLimExtMin_A);
		ADC_AssistParaSwitchReq = std::move(_x.ADC_AssistParaSwitchReq);
		ADC_AngReqRdntReq_A = std::move(_x.ADC_AngReqRdntReq_A);
		ADC_SteerGainReq = std::move(_x.ADC_SteerGainReq);
		ADC_StrgWhlVibrWarnLevel = std::move(_x.ADC_StrgWhlVibrWarnLevel);
		ADC_SteerGainLevel = std::move(_x.ADC_SteerGainLevel);
		ADC_EvsSteerReq = std::move(_x.ADC_EvsSteerReq);
		ADC_StrgWhlVibrWarnReq = std::move(_x.ADC_StrgWhlVibrWarnReq);
		ADC_PAA2ESPAxReqEnable = std::move(_x.ADC_PAA2ESPAxReqEnable);
		IFC_AngReqRdntSt = std::move(_x.IFC_AngReqRdntSt);
		IFC_AngReqSt = std::move(_x.IFC_AngReqSt);
		IFC_StrAngleReq = std::move(_x.IFC_StrAngleReq);
		IFC_SACMotorTorLimExtMin = std::move(_x.IFC_SACMotorTorLimExtMin);
		IFC_SACMotorTorLimExtMax = std::move(_x.IFC_SACMotorTorLimExtMax);
		VMC_EPSAddTorqReq = std::move(_x.VMC_EPSAddTorqReq);
		VMC_FuncReqSt = std::move(_x.VMC_FuncReqSt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(ADC_AngReqSt_A);
		fun(ADC_AngReqFunction);
		fun(ADC_LongCtrlAvailability);
		fun(ADC_StrAngleReq_A);
		fun(ADC_SACMotorTorLimExtMax_A);
		fun(ADC_SACMotorTorLimExtMin_A);
		fun(ADC_AssistParaSwitchReq);
		fun(ADC_AngReqRdntReq_A);
		fun(ADC_SteerGainReq);
		fun(ADC_StrgWhlVibrWarnLevel);
		fun(ADC_SteerGainLevel);
		fun(ADC_EvsSteerReq);
		fun(ADC_StrgWhlVibrWarnReq);
		fun(ADC_PAA2ESPAxReqEnable);
		fun(IFC_AngReqRdntSt);
		fun(IFC_AngReqSt);
		fun(IFC_StrAngleReq);
		fun(IFC_SACMotorTorLimExtMin);
		fun(IFC_SACMotorTorLimExtMax);
		fun(VMC_EPSAddTorqReq);
		fun(VMC_FuncReqSt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(ADC_AngReqSt_A);
		fun(ADC_AngReqFunction);
		fun(ADC_LongCtrlAvailability);
		fun(ADC_StrAngleReq_A);
		fun(ADC_SACMotorTorLimExtMax_A);
		fun(ADC_SACMotorTorLimExtMin_A);
		fun(ADC_AssistParaSwitchReq);
		fun(ADC_AngReqRdntReq_A);
		fun(ADC_SteerGainReq);
		fun(ADC_StrgWhlVibrWarnLevel);
		fun(ADC_SteerGainLevel);
		fun(ADC_EvsSteerReq);
		fun(ADC_StrgWhlVibrWarnReq);
		fun(ADC_PAA2ESPAxReqEnable);
		fun(IFC_AngReqRdntSt);
		fun(IFC_AngReqSt);
		fun(IFC_StrAngleReq);
		fun(IFC_SACMotorTorLimExtMin);
		fun(IFC_SACMotorTorLimExtMax);
		fun(VMC_EPSAddTorqReq);
		fun(VMC_FuncReqSt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (ADC_AngReqSt_A);
		fun << (ADC_AngReqFunction);
		fun << (ADC_LongCtrlAvailability);
		fun << (ADC_StrAngleReq_A);
		fun << (ADC_SACMotorTorLimExtMax_A);
		fun << (ADC_SACMotorTorLimExtMin_A);
		fun << (ADC_AssistParaSwitchReq);
		fun << (ADC_AngReqRdntReq_A);
		fun << (ADC_SteerGainReq);
		fun << (ADC_StrgWhlVibrWarnLevel);
		fun << (ADC_SteerGainLevel);
		fun << (ADC_EvsSteerReq);
		fun << (ADC_StrgWhlVibrWarnReq);
		fun << (ADC_PAA2ESPAxReqEnable);
		fun << (IFC_AngReqRdntSt);
		fun << (IFC_AngReqSt);
		fun << (IFC_StrAngleReq);
		fun << (IFC_SACMotorTorLimExtMin);
		fun << (IFC_SACMotorTorLimExtMax);
		fun << (VMC_EPSAddTorqReq);
		fun << (VMC_FuncReqSt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (ADC_AngReqSt_A);
		fun >> (ADC_AngReqFunction);
		fun >> (ADC_LongCtrlAvailability);
		fun >> (ADC_StrAngleReq_A);
		fun >> (ADC_SACMotorTorLimExtMax_A);
		fun >> (ADC_SACMotorTorLimExtMin_A);
		fun >> (ADC_AssistParaSwitchReq);
		fun >> (ADC_AngReqRdntReq_A);
		fun >> (ADC_SteerGainReq);
		fun >> (ADC_StrgWhlVibrWarnLevel);
		fun >> (ADC_SteerGainLevel);
		fun >> (ADC_EvsSteerReq);
		fun >> (ADC_StrgWhlVibrWarnReq);
		fun >> (ADC_PAA2ESPAxReqEnable);
		fun >> (IFC_AngReqRdntSt);
		fun >> (IFC_AngReqSt);
		fun >> (IFC_StrAngleReq);
		fun >> (IFC_SACMotorTorLimExtMin);
		fun >> (IFC_SACMotorTorLimExtMax);
		fun >> (VMC_EPSAddTorqReq);
		fun >> (VMC_FuncReqSt);
	}
};

#endif //____BDCEPS3_H__
