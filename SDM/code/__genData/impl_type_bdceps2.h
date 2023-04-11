#ifndef ____BDCEPS2_H__
#define ____BDCEPS2_H__


#include "cstdint"






struct BDCEPS2 {
public:
	std::uint8_t EPS_VMC_CtrlSt;
	std::uint8_t EPS_VMC_CtrlDlvdValueVD;
	std::uint16_t EPS_VMC_CtrlDlvdValue;
	std::uint8_t EPS_VMCErrFeedback;
	std::uint8_t EPS_PstOverlaySt_SideA;
	std::uint8_t EPS_PstOverlaySt_SideB;
	std::uint8_t EPS_HealthySt_SideA;
	std::uint8_t EPS_HealthySt_SideB;
	std::uint8_t EPS_PstOverlaySt;
	std::uint8_t EPS_HealthySt_DualSide;
	std::uint8_t EPS_PstOverLayRdntSt;
	std::uint8_t EPS_VibrationWarnSt_A;
	std::uint8_t SAC_ErrFeedback_SideA;
	std::uint8_t SAC_ErrFeedback_SideB;
	std::uint16_t EPS_ADASTargetAngle;
	std::uint8_t EPS_FunctionStyleSt;
	std::uint8_t EPS_SteeringModeSt;
	std::uint8_t EPS_ActEffectiveChannel;
	std::uint8_t EPS_ReqAngOverRange;
	std::uint16_t EPS_SACMotorTorAct;
	std::uint16_t EPS_SACMotorTorLimInt;
	std::uint8_t EPS_ReqAngSpdOverRange;
	std::uint8_t EPS_AssistPraSwitchToLKA;
	std::uint8_t EPS_SteerGainEnable;
	std::uint8_t EPS_EmSteerEnable;
	std::uint8_t EPS_SG_ErrFeedback;
	std::uint8_t EPS_EM_ErrFeedback;
	std::uint8_t EPS_VW_ErrFeedback;
	std::uint8_t EPS_AngReqForIFCSt;
	std::uint16_t EPS_SACMotorTorActMot;
	std::uint16_t EPS_MotorTorSum;
	std::uint16_t EPS_SACMotorTorLimIntMot;
	std::uint8_t EPS_SG_ActualLevel;
	std::uint16_t EPS_SteeringWhlTorFlt;
	std::uint8_t EPS_SteeringWhlTorFltVD;
/*
	BDCEPS2() {}
	~BDCEPS2() {}
	BDCEPS2(const std::uint8_t _EPS_VMC_CtrlSt,const std::uint8_t _EPS_VMC_CtrlDlvdValueVD,const std::uint16_t _EPS_VMC_CtrlDlvdValue,const std::uint8_t _EPS_VMCErrFeedback,const std::uint8_t _EPS_PstOverlaySt_SideA,const std::uint8_t _EPS_PstOverlaySt_SideB,const std::uint8_t _EPS_HealthySt_SideA,const std::uint8_t _EPS_HealthySt_SideB,const std::uint8_t _EPS_PstOverlaySt,const std::uint8_t _EPS_HealthySt_DualSide,const std::uint8_t _EPS_PstOverLayRdntSt,const std::uint8_t _EPS_VibrationWarnSt_A,const std::uint8_t _SAC_ErrFeedback_SideA,const std::uint8_t _SAC_ErrFeedback_SideB,const std::uint16_t _EPS_ADASTargetAngle,const std::uint8_t _EPS_FunctionStyleSt,const std::uint8_t _EPS_SteeringModeSt,const std::uint8_t _EPS_ActEffectiveChannel,const std::uint8_t _EPS_ReqAngOverRange,const std::uint16_t _EPS_SACMotorTorAct,const std::uint16_t _EPS_SACMotorTorLimInt,const std::uint8_t _EPS_ReqAngSpdOverRange,const std::uint8_t _EPS_AssistPraSwitchToLKA,const std::uint8_t _EPS_SteerGainEnable,const std::uint8_t _EPS_EmSteerEnable,const std::uint8_t _EPS_SG_ErrFeedback,const std::uint8_t _EPS_EM_ErrFeedback,const std::uint8_t _EPS_VW_ErrFeedback,const std::uint8_t _EPS_AngReqForIFCSt,const std::uint16_t _EPS_SACMotorTorActMot,const std::uint16_t _EPS_MotorTorSum,const std::uint16_t _EPS_SACMotorTorLimIntMot,const std::uint8_t _EPS_SG_ActualLevel,const std::uint16_t _EPS_SteeringWhlTorFlt,const std::uint8_t _EPS_SteeringWhlTorFltVD):EPS_VMC_CtrlSt(_EPS_VMC_CtrlSt),EPS_VMC_CtrlDlvdValueVD(_EPS_VMC_CtrlDlvdValueVD),EPS_VMC_CtrlDlvdValue(_EPS_VMC_CtrlDlvdValue),EPS_VMCErrFeedback(_EPS_VMCErrFeedback),EPS_PstOverlaySt_SideA(_EPS_PstOverlaySt_SideA),EPS_PstOverlaySt_SideB(_EPS_PstOverlaySt_SideB),EPS_HealthySt_SideA(_EPS_HealthySt_SideA),EPS_HealthySt_SideB(_EPS_HealthySt_SideB),EPS_PstOverlaySt(_EPS_PstOverlaySt),EPS_HealthySt_DualSide(_EPS_HealthySt_DualSide),EPS_PstOverLayRdntSt(_EPS_PstOverLayRdntSt),EPS_VibrationWarnSt_A(_EPS_VibrationWarnSt_A),SAC_ErrFeedback_SideA(_SAC_ErrFeedback_SideA),SAC_ErrFeedback_SideB(_SAC_ErrFeedback_SideB),EPS_ADASTargetAngle(_EPS_ADASTargetAngle),EPS_FunctionStyleSt(_EPS_FunctionStyleSt),EPS_SteeringModeSt(_EPS_SteeringModeSt),EPS_ActEffectiveChannel(_EPS_ActEffectiveChannel),EPS_ReqAngOverRange(_EPS_ReqAngOverRange),EPS_SACMotorTorAct(_EPS_SACMotorTorAct),EPS_SACMotorTorLimInt(_EPS_SACMotorTorLimInt),EPS_ReqAngSpdOverRange(_EPS_ReqAngSpdOverRange),EPS_AssistPraSwitchToLKA(_EPS_AssistPraSwitchToLKA),EPS_SteerGainEnable(_EPS_SteerGainEnable),EPS_EmSteerEnable(_EPS_EmSteerEnable),EPS_SG_ErrFeedback(_EPS_SG_ErrFeedback),EPS_EM_ErrFeedback(_EPS_EM_ErrFeedback),EPS_VW_ErrFeedback(_EPS_VW_ErrFeedback),EPS_AngReqForIFCSt(_EPS_AngReqForIFCSt),EPS_SACMotorTorActMot(_EPS_SACMotorTorActMot),EPS_MotorTorSum(_EPS_MotorTorSum),EPS_SACMotorTorLimIntMot(_EPS_SACMotorTorLimIntMot),EPS_SG_ActualLevel(_EPS_SG_ActualLevel),EPS_SteeringWhlTorFlt(_EPS_SteeringWhlTorFlt),EPS_SteeringWhlTorFltVD(_EPS_SteeringWhlTorFltVD) {}
	BDCEPS2(const BDCEPS2 &_x){
		EPS_VMC_CtrlSt = _x.EPS_VMC_CtrlSt;
		EPS_VMC_CtrlDlvdValueVD = _x.EPS_VMC_CtrlDlvdValueVD;
		EPS_VMC_CtrlDlvdValue = _x.EPS_VMC_CtrlDlvdValue;
		EPS_VMCErrFeedback = _x.EPS_VMCErrFeedback;
		EPS_PstOverlaySt_SideA = _x.EPS_PstOverlaySt_SideA;
		EPS_PstOverlaySt_SideB = _x.EPS_PstOverlaySt_SideB;
		EPS_HealthySt_SideA = _x.EPS_HealthySt_SideA;
		EPS_HealthySt_SideB = _x.EPS_HealthySt_SideB;
		EPS_PstOverlaySt = _x.EPS_PstOverlaySt;
		EPS_HealthySt_DualSide = _x.EPS_HealthySt_DualSide;
		EPS_PstOverLayRdntSt = _x.EPS_PstOverLayRdntSt;
		EPS_VibrationWarnSt_A = _x.EPS_VibrationWarnSt_A;
		SAC_ErrFeedback_SideA = _x.SAC_ErrFeedback_SideA;
		SAC_ErrFeedback_SideB = _x.SAC_ErrFeedback_SideB;
		EPS_ADASTargetAngle = _x.EPS_ADASTargetAngle;
		EPS_FunctionStyleSt = _x.EPS_FunctionStyleSt;
		EPS_SteeringModeSt = _x.EPS_SteeringModeSt;
		EPS_ActEffectiveChannel = _x.EPS_ActEffectiveChannel;
		EPS_ReqAngOverRange = _x.EPS_ReqAngOverRange;
		EPS_SACMotorTorAct = _x.EPS_SACMotorTorAct;
		EPS_SACMotorTorLimInt = _x.EPS_SACMotorTorLimInt;
		EPS_ReqAngSpdOverRange = _x.EPS_ReqAngSpdOverRange;
		EPS_AssistPraSwitchToLKA = _x.EPS_AssistPraSwitchToLKA;
		EPS_SteerGainEnable = _x.EPS_SteerGainEnable;
		EPS_EmSteerEnable = _x.EPS_EmSteerEnable;
		EPS_SG_ErrFeedback = _x.EPS_SG_ErrFeedback;
		EPS_EM_ErrFeedback = _x.EPS_EM_ErrFeedback;
		EPS_VW_ErrFeedback = _x.EPS_VW_ErrFeedback;
		EPS_AngReqForIFCSt = _x.EPS_AngReqForIFCSt;
		EPS_SACMotorTorActMot = _x.EPS_SACMotorTorActMot;
		EPS_MotorTorSum = _x.EPS_MotorTorSum;
		EPS_SACMotorTorLimIntMot = _x.EPS_SACMotorTorLimIntMot;
		EPS_SG_ActualLevel = _x.EPS_SG_ActualLevel;
		EPS_SteeringWhlTorFlt = _x.EPS_SteeringWhlTorFlt;
		EPS_SteeringWhlTorFltVD = _x.EPS_SteeringWhlTorFltVD;
	}
	BDCEPS2(BDCEPS2 &&_x){
		EPS_VMC_CtrlSt = std::move(_x.EPS_VMC_CtrlSt);
		EPS_VMC_CtrlDlvdValueVD = std::move(_x.EPS_VMC_CtrlDlvdValueVD);
		EPS_VMC_CtrlDlvdValue = std::move(_x.EPS_VMC_CtrlDlvdValue);
		EPS_VMCErrFeedback = std::move(_x.EPS_VMCErrFeedback);
		EPS_PstOverlaySt_SideA = std::move(_x.EPS_PstOverlaySt_SideA);
		EPS_PstOverlaySt_SideB = std::move(_x.EPS_PstOverlaySt_SideB);
		EPS_HealthySt_SideA = std::move(_x.EPS_HealthySt_SideA);
		EPS_HealthySt_SideB = std::move(_x.EPS_HealthySt_SideB);
		EPS_PstOverlaySt = std::move(_x.EPS_PstOverlaySt);
		EPS_HealthySt_DualSide = std::move(_x.EPS_HealthySt_DualSide);
		EPS_PstOverLayRdntSt = std::move(_x.EPS_PstOverLayRdntSt);
		EPS_VibrationWarnSt_A = std::move(_x.EPS_VibrationWarnSt_A);
		SAC_ErrFeedback_SideA = std::move(_x.SAC_ErrFeedback_SideA);
		SAC_ErrFeedback_SideB = std::move(_x.SAC_ErrFeedback_SideB);
		EPS_ADASTargetAngle = std::move(_x.EPS_ADASTargetAngle);
		EPS_FunctionStyleSt = std::move(_x.EPS_FunctionStyleSt);
		EPS_SteeringModeSt = std::move(_x.EPS_SteeringModeSt);
		EPS_ActEffectiveChannel = std::move(_x.EPS_ActEffectiveChannel);
		EPS_ReqAngOverRange = std::move(_x.EPS_ReqAngOverRange);
		EPS_SACMotorTorAct = std::move(_x.EPS_SACMotorTorAct);
		EPS_SACMotorTorLimInt = std::move(_x.EPS_SACMotorTorLimInt);
		EPS_ReqAngSpdOverRange = std::move(_x.EPS_ReqAngSpdOverRange);
		EPS_AssistPraSwitchToLKA = std::move(_x.EPS_AssistPraSwitchToLKA);
		EPS_SteerGainEnable = std::move(_x.EPS_SteerGainEnable);
		EPS_EmSteerEnable = std::move(_x.EPS_EmSteerEnable);
		EPS_SG_ErrFeedback = std::move(_x.EPS_SG_ErrFeedback);
		EPS_EM_ErrFeedback = std::move(_x.EPS_EM_ErrFeedback);
		EPS_VW_ErrFeedback = std::move(_x.EPS_VW_ErrFeedback);
		EPS_AngReqForIFCSt = std::move(_x.EPS_AngReqForIFCSt);
		EPS_SACMotorTorActMot = std::move(_x.EPS_SACMotorTorActMot);
		EPS_MotorTorSum = std::move(_x.EPS_MotorTorSum);
		EPS_SACMotorTorLimIntMot = std::move(_x.EPS_SACMotorTorLimIntMot);
		EPS_SG_ActualLevel = std::move(_x.EPS_SG_ActualLevel);
		EPS_SteeringWhlTorFlt = std::move(_x.EPS_SteeringWhlTorFlt);
		EPS_SteeringWhlTorFltVD = std::move(_x.EPS_SteeringWhlTorFltVD);
	}
	BDCEPS2& operator=(const BDCEPS2 &_x){
		EPS_VMC_CtrlSt = _x.EPS_VMC_CtrlSt;
		EPS_VMC_CtrlDlvdValueVD = _x.EPS_VMC_CtrlDlvdValueVD;
		EPS_VMC_CtrlDlvdValue = _x.EPS_VMC_CtrlDlvdValue;
		EPS_VMCErrFeedback = _x.EPS_VMCErrFeedback;
		EPS_PstOverlaySt_SideA = _x.EPS_PstOverlaySt_SideA;
		EPS_PstOverlaySt_SideB = _x.EPS_PstOverlaySt_SideB;
		EPS_HealthySt_SideA = _x.EPS_HealthySt_SideA;
		EPS_HealthySt_SideB = _x.EPS_HealthySt_SideB;
		EPS_PstOverlaySt = _x.EPS_PstOverlaySt;
		EPS_HealthySt_DualSide = _x.EPS_HealthySt_DualSide;
		EPS_PstOverLayRdntSt = _x.EPS_PstOverLayRdntSt;
		EPS_VibrationWarnSt_A = _x.EPS_VibrationWarnSt_A;
		SAC_ErrFeedback_SideA = _x.SAC_ErrFeedback_SideA;
		SAC_ErrFeedback_SideB = _x.SAC_ErrFeedback_SideB;
		EPS_ADASTargetAngle = _x.EPS_ADASTargetAngle;
		EPS_FunctionStyleSt = _x.EPS_FunctionStyleSt;
		EPS_SteeringModeSt = _x.EPS_SteeringModeSt;
		EPS_ActEffectiveChannel = _x.EPS_ActEffectiveChannel;
		EPS_ReqAngOverRange = _x.EPS_ReqAngOverRange;
		EPS_SACMotorTorAct = _x.EPS_SACMotorTorAct;
		EPS_SACMotorTorLimInt = _x.EPS_SACMotorTorLimInt;
		EPS_ReqAngSpdOverRange = _x.EPS_ReqAngSpdOverRange;
		EPS_AssistPraSwitchToLKA = _x.EPS_AssistPraSwitchToLKA;
		EPS_SteerGainEnable = _x.EPS_SteerGainEnable;
		EPS_EmSteerEnable = _x.EPS_EmSteerEnable;
		EPS_SG_ErrFeedback = _x.EPS_SG_ErrFeedback;
		EPS_EM_ErrFeedback = _x.EPS_EM_ErrFeedback;
		EPS_VW_ErrFeedback = _x.EPS_VW_ErrFeedback;
		EPS_AngReqForIFCSt = _x.EPS_AngReqForIFCSt;
		EPS_SACMotorTorActMot = _x.EPS_SACMotorTorActMot;
		EPS_MotorTorSum = _x.EPS_MotorTorSum;
		EPS_SACMotorTorLimIntMot = _x.EPS_SACMotorTorLimIntMot;
		EPS_SG_ActualLevel = _x.EPS_SG_ActualLevel;
		EPS_SteeringWhlTorFlt = _x.EPS_SteeringWhlTorFlt;
		EPS_SteeringWhlTorFltVD = _x.EPS_SteeringWhlTorFltVD;
		return *this;
	}
	BDCEPS2& operator=(BDCEPS2 &&_x){
		EPS_VMC_CtrlSt = std::move(_x.EPS_VMC_CtrlSt);
		EPS_VMC_CtrlDlvdValueVD = std::move(_x.EPS_VMC_CtrlDlvdValueVD);
		EPS_VMC_CtrlDlvdValue = std::move(_x.EPS_VMC_CtrlDlvdValue);
		EPS_VMCErrFeedback = std::move(_x.EPS_VMCErrFeedback);
		EPS_PstOverlaySt_SideA = std::move(_x.EPS_PstOverlaySt_SideA);
		EPS_PstOverlaySt_SideB = std::move(_x.EPS_PstOverlaySt_SideB);
		EPS_HealthySt_SideA = std::move(_x.EPS_HealthySt_SideA);
		EPS_HealthySt_SideB = std::move(_x.EPS_HealthySt_SideB);
		EPS_PstOverlaySt = std::move(_x.EPS_PstOverlaySt);
		EPS_HealthySt_DualSide = std::move(_x.EPS_HealthySt_DualSide);
		EPS_PstOverLayRdntSt = std::move(_x.EPS_PstOverLayRdntSt);
		EPS_VibrationWarnSt_A = std::move(_x.EPS_VibrationWarnSt_A);
		SAC_ErrFeedback_SideA = std::move(_x.SAC_ErrFeedback_SideA);
		SAC_ErrFeedback_SideB = std::move(_x.SAC_ErrFeedback_SideB);
		EPS_ADASTargetAngle = std::move(_x.EPS_ADASTargetAngle);
		EPS_FunctionStyleSt = std::move(_x.EPS_FunctionStyleSt);
		EPS_SteeringModeSt = std::move(_x.EPS_SteeringModeSt);
		EPS_ActEffectiveChannel = std::move(_x.EPS_ActEffectiveChannel);
		EPS_ReqAngOverRange = std::move(_x.EPS_ReqAngOverRange);
		EPS_SACMotorTorAct = std::move(_x.EPS_SACMotorTorAct);
		EPS_SACMotorTorLimInt = std::move(_x.EPS_SACMotorTorLimInt);
		EPS_ReqAngSpdOverRange = std::move(_x.EPS_ReqAngSpdOverRange);
		EPS_AssistPraSwitchToLKA = std::move(_x.EPS_AssistPraSwitchToLKA);
		EPS_SteerGainEnable = std::move(_x.EPS_SteerGainEnable);
		EPS_EmSteerEnable = std::move(_x.EPS_EmSteerEnable);
		EPS_SG_ErrFeedback = std::move(_x.EPS_SG_ErrFeedback);
		EPS_EM_ErrFeedback = std::move(_x.EPS_EM_ErrFeedback);
		EPS_VW_ErrFeedback = std::move(_x.EPS_VW_ErrFeedback);
		EPS_AngReqForIFCSt = std::move(_x.EPS_AngReqForIFCSt);
		EPS_SACMotorTorActMot = std::move(_x.EPS_SACMotorTorActMot);
		EPS_MotorTorSum = std::move(_x.EPS_MotorTorSum);
		EPS_SACMotorTorLimIntMot = std::move(_x.EPS_SACMotorTorLimIntMot);
		EPS_SG_ActualLevel = std::move(_x.EPS_SG_ActualLevel);
		EPS_SteeringWhlTorFlt = std::move(_x.EPS_SteeringWhlTorFlt);
		EPS_SteeringWhlTorFltVD = std::move(_x.EPS_SteeringWhlTorFltVD);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(EPS_VMC_CtrlSt);
		fun(EPS_VMC_CtrlDlvdValueVD);
		fun(EPS_VMC_CtrlDlvdValue);
		fun(EPS_VMCErrFeedback);
		fun(EPS_PstOverlaySt_SideA);
		fun(EPS_PstOverlaySt_SideB);
		fun(EPS_HealthySt_SideA);
		fun(EPS_HealthySt_SideB);
		fun(EPS_PstOverlaySt);
		fun(EPS_HealthySt_DualSide);
		fun(EPS_PstOverLayRdntSt);
		fun(EPS_VibrationWarnSt_A);
		fun(SAC_ErrFeedback_SideA);
		fun(SAC_ErrFeedback_SideB);
		fun(EPS_ADASTargetAngle);
		fun(EPS_FunctionStyleSt);
		fun(EPS_SteeringModeSt);
		fun(EPS_ActEffectiveChannel);
		fun(EPS_ReqAngOverRange);
		fun(EPS_SACMotorTorAct);
		fun(EPS_SACMotorTorLimInt);
		fun(EPS_ReqAngSpdOverRange);
		fun(EPS_AssistPraSwitchToLKA);
		fun(EPS_SteerGainEnable);
		fun(EPS_EmSteerEnable);
		fun(EPS_SG_ErrFeedback);
		fun(EPS_EM_ErrFeedback);
		fun(EPS_VW_ErrFeedback);
		fun(EPS_AngReqForIFCSt);
		fun(EPS_SACMotorTorActMot);
		fun(EPS_MotorTorSum);
		fun(EPS_SACMotorTorLimIntMot);
		fun(EPS_SG_ActualLevel);
		fun(EPS_SteeringWhlTorFlt);
		fun(EPS_SteeringWhlTorFltVD);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(EPS_VMC_CtrlSt);
		fun(EPS_VMC_CtrlDlvdValueVD);
		fun(EPS_VMC_CtrlDlvdValue);
		fun(EPS_VMCErrFeedback);
		fun(EPS_PstOverlaySt_SideA);
		fun(EPS_PstOverlaySt_SideB);
		fun(EPS_HealthySt_SideA);
		fun(EPS_HealthySt_SideB);
		fun(EPS_PstOverlaySt);
		fun(EPS_HealthySt_DualSide);
		fun(EPS_PstOverLayRdntSt);
		fun(EPS_VibrationWarnSt_A);
		fun(SAC_ErrFeedback_SideA);
		fun(SAC_ErrFeedback_SideB);
		fun(EPS_ADASTargetAngle);
		fun(EPS_FunctionStyleSt);
		fun(EPS_SteeringModeSt);
		fun(EPS_ActEffectiveChannel);
		fun(EPS_ReqAngOverRange);
		fun(EPS_SACMotorTorAct);
		fun(EPS_SACMotorTorLimInt);
		fun(EPS_ReqAngSpdOverRange);
		fun(EPS_AssistPraSwitchToLKA);
		fun(EPS_SteerGainEnable);
		fun(EPS_EmSteerEnable);
		fun(EPS_SG_ErrFeedback);
		fun(EPS_EM_ErrFeedback);
		fun(EPS_VW_ErrFeedback);
		fun(EPS_AngReqForIFCSt);
		fun(EPS_SACMotorTorActMot);
		fun(EPS_MotorTorSum);
		fun(EPS_SACMotorTorLimIntMot);
		fun(EPS_SG_ActualLevel);
		fun(EPS_SteeringWhlTorFlt);
		fun(EPS_SteeringWhlTorFltVD);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (EPS_VMC_CtrlSt);
		fun << (EPS_VMC_CtrlDlvdValueVD);
		fun << (EPS_VMC_CtrlDlvdValue);
		fun << (EPS_VMCErrFeedback);
		fun << (EPS_PstOverlaySt_SideA);
		fun << (EPS_PstOverlaySt_SideB);
		fun << (EPS_HealthySt_SideA);
		fun << (EPS_HealthySt_SideB);
		fun << (EPS_PstOverlaySt);
		fun << (EPS_HealthySt_DualSide);
		fun << (EPS_PstOverLayRdntSt);
		fun << (EPS_VibrationWarnSt_A);
		fun << (SAC_ErrFeedback_SideA);
		fun << (SAC_ErrFeedback_SideB);
		fun << (EPS_ADASTargetAngle);
		fun << (EPS_FunctionStyleSt);
		fun << (EPS_SteeringModeSt);
		fun << (EPS_ActEffectiveChannel);
		fun << (EPS_ReqAngOverRange);
		fun << (EPS_SACMotorTorAct);
		fun << (EPS_SACMotorTorLimInt);
		fun << (EPS_ReqAngSpdOverRange);
		fun << (EPS_AssistPraSwitchToLKA);
		fun << (EPS_SteerGainEnable);
		fun << (EPS_EmSteerEnable);
		fun << (EPS_SG_ErrFeedback);
		fun << (EPS_EM_ErrFeedback);
		fun << (EPS_VW_ErrFeedback);
		fun << (EPS_AngReqForIFCSt);
		fun << (EPS_SACMotorTorActMot);
		fun << (EPS_MotorTorSum);
		fun << (EPS_SACMotorTorLimIntMot);
		fun << (EPS_SG_ActualLevel);
		fun << (EPS_SteeringWhlTorFlt);
		fun << (EPS_SteeringWhlTorFltVD);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (EPS_VMC_CtrlSt);
		fun >> (EPS_VMC_CtrlDlvdValueVD);
		fun >> (EPS_VMC_CtrlDlvdValue);
		fun >> (EPS_VMCErrFeedback);
		fun >> (EPS_PstOverlaySt_SideA);
		fun >> (EPS_PstOverlaySt_SideB);
		fun >> (EPS_HealthySt_SideA);
		fun >> (EPS_HealthySt_SideB);
		fun >> (EPS_PstOverlaySt);
		fun >> (EPS_HealthySt_DualSide);
		fun >> (EPS_PstOverLayRdntSt);
		fun >> (EPS_VibrationWarnSt_A);
		fun >> (SAC_ErrFeedback_SideA);
		fun >> (SAC_ErrFeedback_SideB);
		fun >> (EPS_ADASTargetAngle);
		fun >> (EPS_FunctionStyleSt);
		fun >> (EPS_SteeringModeSt);
		fun >> (EPS_ActEffectiveChannel);
		fun >> (EPS_ReqAngOverRange);
		fun >> (EPS_SACMotorTorAct);
		fun >> (EPS_SACMotorTorLimInt);
		fun >> (EPS_ReqAngSpdOverRange);
		fun >> (EPS_AssistPraSwitchToLKA);
		fun >> (EPS_SteerGainEnable);
		fun >> (EPS_EmSteerEnable);
		fun >> (EPS_SG_ErrFeedback);
		fun >> (EPS_EM_ErrFeedback);
		fun >> (EPS_VW_ErrFeedback);
		fun >> (EPS_AngReqForIFCSt);
		fun >> (EPS_SACMotorTorActMot);
		fun >> (EPS_MotorTorSum);
		fun >> (EPS_SACMotorTorLimIntMot);
		fun >> (EPS_SG_ActualLevel);
		fun >> (EPS_SteeringWhlTorFlt);
		fun >> (EPS_SteeringWhlTorFltVD);
	}
};

#endif //____BDCEPS2_H__
