#ifndef ____BDCUINM3_H__
#define ____BDCUINM3_H__


#include "cstdint"






struct BDCUINM3 {
public:
	std::uint8_t UINM_FLSeatSlideAdjSwSt;
	std::uint8_t UINM_FLSeatHeightAdjSwSt;
	std::uint8_t UINM_FLSeatTiltAdjSwSt;
	std::uint8_t UINM_FLSeatBackrestAdjSwSt;
	std::uint8_t UINM_SteeringAngleAdjSwSt;
	std::uint8_t UINM_SteeringExtentAdjSwSt;
	std::uint8_t UINM_FLSeatCushionAdjSwSt;
	std::uint8_t UINM_FLSeatOttomanAdjSwSt;
	std::uint8_t UINM_MirrUpAdjSwSt;
	std::uint8_t UINM_MirrDownAdjSwSt;
	std::uint8_t UINM_MirrLeftAdjSwSt;
	std::uint8_t UINM_MirrRightAdjSwSt;
	std::uint8_t UINM_MirrSelectSt;
	std::uint8_t UINM_MirrFoldUnfoldSwSt;
	std::uint8_t UINM_DriverSide_FLWinSwSt;
	std::uint8_t UINM_DriverSide_FRWinSwSt;
	std::uint8_t UINM_DriverSide_RLWinSwSt;
	std::uint8_t UINM_DriverSide_RRWinSwSt;
	std::uint8_t UINM_PassengerWinLockBtnSt;
	std::uint8_t UINM_FrontLeftPowerReleaseReq;
	std::uint8_t UINM_LeftSwLockDoorsReq;
	std::uint8_t UINM_InterSwLockTrunkReq;
	std::uint8_t UINM_InterSwLockHoodReq;
	std::uint8_t UINM_HornSw;
	std::uint8_t UINM_FrontLeftPowerReleaseFaultSt;
	std::uint8_t UINM_FLDoorOutsideSwSt;
	std::uint8_t UINM_FLDoorOutsideSwFaultSt;
	std::uint8_t UINM_FLDoorInsideOpenSwSt;
	std::uint8_t UINM_FLDoorInsideOpenSwFaultSt;
	std::uint8_t UINM_FLDoorInsideCloseSwSt;
	std::uint8_t UINM_FLDoorInsideCloseSwFaultSt;
	std::uint8_t UINM_SwitchLockFillerCapReq;
	std::uint8_t UINM_HeadLightLevelAdjustSwSt;
	std::uint8_t UINM_HazardLightSwSt;
	std::uint8_t UINM_InterTrunkSwSt;
	std::uint8_t UINM_ACdisChgEnReq;
	std::uint8_t UINM_ACEleclockswitchReq;
/*
	BDCUINM3() {}
	~BDCUINM3() {}
	BDCUINM3(const std::uint8_t _UINM_FLSeatSlideAdjSwSt,const std::uint8_t _UINM_FLSeatHeightAdjSwSt,const std::uint8_t _UINM_FLSeatTiltAdjSwSt,const std::uint8_t _UINM_FLSeatBackrestAdjSwSt,const std::uint8_t _UINM_SteeringAngleAdjSwSt,const std::uint8_t _UINM_SteeringExtentAdjSwSt,const std::uint8_t _UINM_FLSeatCushionAdjSwSt,const std::uint8_t _UINM_FLSeatOttomanAdjSwSt,const std::uint8_t _UINM_MirrUpAdjSwSt,const std::uint8_t _UINM_MirrDownAdjSwSt,const std::uint8_t _UINM_MirrLeftAdjSwSt,const std::uint8_t _UINM_MirrRightAdjSwSt,const std::uint8_t _UINM_MirrSelectSt,const std::uint8_t _UINM_MirrFoldUnfoldSwSt,const std::uint8_t _UINM_DriverSide_FLWinSwSt,const std::uint8_t _UINM_DriverSide_FRWinSwSt,const std::uint8_t _UINM_DriverSide_RLWinSwSt,const std::uint8_t _UINM_DriverSide_RRWinSwSt,const std::uint8_t _UINM_PassengerWinLockBtnSt,const std::uint8_t _UINM_FrontLeftPowerReleaseReq,const std::uint8_t _UINM_LeftSwLockDoorsReq,const std::uint8_t _UINM_InterSwLockTrunkReq,const std::uint8_t _UINM_InterSwLockHoodReq,const std::uint8_t _UINM_HornSw,const std::uint8_t _UINM_FrontLeftPowerReleaseFaultSt,const std::uint8_t _UINM_FLDoorOutsideSwSt,const std::uint8_t _UINM_FLDoorOutsideSwFaultSt,const std::uint8_t _UINM_FLDoorInsideOpenSwSt,const std::uint8_t _UINM_FLDoorInsideOpenSwFaultSt,const std::uint8_t _UINM_FLDoorInsideCloseSwSt,const std::uint8_t _UINM_FLDoorInsideCloseSwFaultSt,const std::uint8_t _UINM_SwitchLockFillerCapReq,const std::uint8_t _UINM_HeadLightLevelAdjustSwSt,const std::uint8_t _UINM_HazardLightSwSt,const std::uint8_t _UINM_InterTrunkSwSt,const std::uint8_t _UINM_ACdisChgEnReq,const std::uint8_t _UINM_ACEleclockswitchReq):UINM_FLSeatSlideAdjSwSt(_UINM_FLSeatSlideAdjSwSt),UINM_FLSeatHeightAdjSwSt(_UINM_FLSeatHeightAdjSwSt),UINM_FLSeatTiltAdjSwSt(_UINM_FLSeatTiltAdjSwSt),UINM_FLSeatBackrestAdjSwSt(_UINM_FLSeatBackrestAdjSwSt),UINM_SteeringAngleAdjSwSt(_UINM_SteeringAngleAdjSwSt),UINM_SteeringExtentAdjSwSt(_UINM_SteeringExtentAdjSwSt),UINM_FLSeatCushionAdjSwSt(_UINM_FLSeatCushionAdjSwSt),UINM_FLSeatOttomanAdjSwSt(_UINM_FLSeatOttomanAdjSwSt),UINM_MirrUpAdjSwSt(_UINM_MirrUpAdjSwSt),UINM_MirrDownAdjSwSt(_UINM_MirrDownAdjSwSt),UINM_MirrLeftAdjSwSt(_UINM_MirrLeftAdjSwSt),UINM_MirrRightAdjSwSt(_UINM_MirrRightAdjSwSt),UINM_MirrSelectSt(_UINM_MirrSelectSt),UINM_MirrFoldUnfoldSwSt(_UINM_MirrFoldUnfoldSwSt),UINM_DriverSide_FLWinSwSt(_UINM_DriverSide_FLWinSwSt),UINM_DriverSide_FRWinSwSt(_UINM_DriverSide_FRWinSwSt),UINM_DriverSide_RLWinSwSt(_UINM_DriverSide_RLWinSwSt),UINM_DriverSide_RRWinSwSt(_UINM_DriverSide_RRWinSwSt),UINM_PassengerWinLockBtnSt(_UINM_PassengerWinLockBtnSt),UINM_FrontLeftPowerReleaseReq(_UINM_FrontLeftPowerReleaseReq),UINM_LeftSwLockDoorsReq(_UINM_LeftSwLockDoorsReq),UINM_InterSwLockTrunkReq(_UINM_InterSwLockTrunkReq),UINM_InterSwLockHoodReq(_UINM_InterSwLockHoodReq),UINM_HornSw(_UINM_HornSw),UINM_FrontLeftPowerReleaseFaultSt(_UINM_FrontLeftPowerReleaseFaultSt),UINM_FLDoorOutsideSwSt(_UINM_FLDoorOutsideSwSt),UINM_FLDoorOutsideSwFaultSt(_UINM_FLDoorOutsideSwFaultSt),UINM_FLDoorInsideOpenSwSt(_UINM_FLDoorInsideOpenSwSt),UINM_FLDoorInsideOpenSwFaultSt(_UINM_FLDoorInsideOpenSwFaultSt),UINM_FLDoorInsideCloseSwSt(_UINM_FLDoorInsideCloseSwSt),UINM_FLDoorInsideCloseSwFaultSt(_UINM_FLDoorInsideCloseSwFaultSt),UINM_SwitchLockFillerCapReq(_UINM_SwitchLockFillerCapReq),UINM_HeadLightLevelAdjustSwSt(_UINM_HeadLightLevelAdjustSwSt),UINM_HazardLightSwSt(_UINM_HazardLightSwSt),UINM_InterTrunkSwSt(_UINM_InterTrunkSwSt),UINM_ACdisChgEnReq(_UINM_ACdisChgEnReq),UINM_ACEleclockswitchReq(_UINM_ACEleclockswitchReq) {}
	BDCUINM3(const BDCUINM3 &_x){
		UINM_FLSeatSlideAdjSwSt = _x.UINM_FLSeatSlideAdjSwSt;
		UINM_FLSeatHeightAdjSwSt = _x.UINM_FLSeatHeightAdjSwSt;
		UINM_FLSeatTiltAdjSwSt = _x.UINM_FLSeatTiltAdjSwSt;
		UINM_FLSeatBackrestAdjSwSt = _x.UINM_FLSeatBackrestAdjSwSt;
		UINM_SteeringAngleAdjSwSt = _x.UINM_SteeringAngleAdjSwSt;
		UINM_SteeringExtentAdjSwSt = _x.UINM_SteeringExtentAdjSwSt;
		UINM_FLSeatCushionAdjSwSt = _x.UINM_FLSeatCushionAdjSwSt;
		UINM_FLSeatOttomanAdjSwSt = _x.UINM_FLSeatOttomanAdjSwSt;
		UINM_MirrUpAdjSwSt = _x.UINM_MirrUpAdjSwSt;
		UINM_MirrDownAdjSwSt = _x.UINM_MirrDownAdjSwSt;
		UINM_MirrLeftAdjSwSt = _x.UINM_MirrLeftAdjSwSt;
		UINM_MirrRightAdjSwSt = _x.UINM_MirrRightAdjSwSt;
		UINM_MirrSelectSt = _x.UINM_MirrSelectSt;
		UINM_MirrFoldUnfoldSwSt = _x.UINM_MirrFoldUnfoldSwSt;
		UINM_DriverSide_FLWinSwSt = _x.UINM_DriverSide_FLWinSwSt;
		UINM_DriverSide_FRWinSwSt = _x.UINM_DriverSide_FRWinSwSt;
		UINM_DriverSide_RLWinSwSt = _x.UINM_DriverSide_RLWinSwSt;
		UINM_DriverSide_RRWinSwSt = _x.UINM_DriverSide_RRWinSwSt;
		UINM_PassengerWinLockBtnSt = _x.UINM_PassengerWinLockBtnSt;
		UINM_FrontLeftPowerReleaseReq = _x.UINM_FrontLeftPowerReleaseReq;
		UINM_LeftSwLockDoorsReq = _x.UINM_LeftSwLockDoorsReq;
		UINM_InterSwLockTrunkReq = _x.UINM_InterSwLockTrunkReq;
		UINM_InterSwLockHoodReq = _x.UINM_InterSwLockHoodReq;
		UINM_HornSw = _x.UINM_HornSw;
		UINM_FrontLeftPowerReleaseFaultSt = _x.UINM_FrontLeftPowerReleaseFaultSt;
		UINM_FLDoorOutsideSwSt = _x.UINM_FLDoorOutsideSwSt;
		UINM_FLDoorOutsideSwFaultSt = _x.UINM_FLDoorOutsideSwFaultSt;
		UINM_FLDoorInsideOpenSwSt = _x.UINM_FLDoorInsideOpenSwSt;
		UINM_FLDoorInsideOpenSwFaultSt = _x.UINM_FLDoorInsideOpenSwFaultSt;
		UINM_FLDoorInsideCloseSwSt = _x.UINM_FLDoorInsideCloseSwSt;
		UINM_FLDoorInsideCloseSwFaultSt = _x.UINM_FLDoorInsideCloseSwFaultSt;
		UINM_SwitchLockFillerCapReq = _x.UINM_SwitchLockFillerCapReq;
		UINM_HeadLightLevelAdjustSwSt = _x.UINM_HeadLightLevelAdjustSwSt;
		UINM_HazardLightSwSt = _x.UINM_HazardLightSwSt;
		UINM_InterTrunkSwSt = _x.UINM_InterTrunkSwSt;
		UINM_ACdisChgEnReq = _x.UINM_ACdisChgEnReq;
		UINM_ACEleclockswitchReq = _x.UINM_ACEleclockswitchReq;
	}
	BDCUINM3(BDCUINM3 &&_x){
		UINM_FLSeatSlideAdjSwSt = std::move(_x.UINM_FLSeatSlideAdjSwSt);
		UINM_FLSeatHeightAdjSwSt = std::move(_x.UINM_FLSeatHeightAdjSwSt);
		UINM_FLSeatTiltAdjSwSt = std::move(_x.UINM_FLSeatTiltAdjSwSt);
		UINM_FLSeatBackrestAdjSwSt = std::move(_x.UINM_FLSeatBackrestAdjSwSt);
		UINM_SteeringAngleAdjSwSt = std::move(_x.UINM_SteeringAngleAdjSwSt);
		UINM_SteeringExtentAdjSwSt = std::move(_x.UINM_SteeringExtentAdjSwSt);
		UINM_FLSeatCushionAdjSwSt = std::move(_x.UINM_FLSeatCushionAdjSwSt);
		UINM_FLSeatOttomanAdjSwSt = std::move(_x.UINM_FLSeatOttomanAdjSwSt);
		UINM_MirrUpAdjSwSt = std::move(_x.UINM_MirrUpAdjSwSt);
		UINM_MirrDownAdjSwSt = std::move(_x.UINM_MirrDownAdjSwSt);
		UINM_MirrLeftAdjSwSt = std::move(_x.UINM_MirrLeftAdjSwSt);
		UINM_MirrRightAdjSwSt = std::move(_x.UINM_MirrRightAdjSwSt);
		UINM_MirrSelectSt = std::move(_x.UINM_MirrSelectSt);
		UINM_MirrFoldUnfoldSwSt = std::move(_x.UINM_MirrFoldUnfoldSwSt);
		UINM_DriverSide_FLWinSwSt = std::move(_x.UINM_DriverSide_FLWinSwSt);
		UINM_DriverSide_FRWinSwSt = std::move(_x.UINM_DriverSide_FRWinSwSt);
		UINM_DriverSide_RLWinSwSt = std::move(_x.UINM_DriverSide_RLWinSwSt);
		UINM_DriverSide_RRWinSwSt = std::move(_x.UINM_DriverSide_RRWinSwSt);
		UINM_PassengerWinLockBtnSt = std::move(_x.UINM_PassengerWinLockBtnSt);
		UINM_FrontLeftPowerReleaseReq = std::move(_x.UINM_FrontLeftPowerReleaseReq);
		UINM_LeftSwLockDoorsReq = std::move(_x.UINM_LeftSwLockDoorsReq);
		UINM_InterSwLockTrunkReq = std::move(_x.UINM_InterSwLockTrunkReq);
		UINM_InterSwLockHoodReq = std::move(_x.UINM_InterSwLockHoodReq);
		UINM_HornSw = std::move(_x.UINM_HornSw);
		UINM_FrontLeftPowerReleaseFaultSt = std::move(_x.UINM_FrontLeftPowerReleaseFaultSt);
		UINM_FLDoorOutsideSwSt = std::move(_x.UINM_FLDoorOutsideSwSt);
		UINM_FLDoorOutsideSwFaultSt = std::move(_x.UINM_FLDoorOutsideSwFaultSt);
		UINM_FLDoorInsideOpenSwSt = std::move(_x.UINM_FLDoorInsideOpenSwSt);
		UINM_FLDoorInsideOpenSwFaultSt = std::move(_x.UINM_FLDoorInsideOpenSwFaultSt);
		UINM_FLDoorInsideCloseSwSt = std::move(_x.UINM_FLDoorInsideCloseSwSt);
		UINM_FLDoorInsideCloseSwFaultSt = std::move(_x.UINM_FLDoorInsideCloseSwFaultSt);
		UINM_SwitchLockFillerCapReq = std::move(_x.UINM_SwitchLockFillerCapReq);
		UINM_HeadLightLevelAdjustSwSt = std::move(_x.UINM_HeadLightLevelAdjustSwSt);
		UINM_HazardLightSwSt = std::move(_x.UINM_HazardLightSwSt);
		UINM_InterTrunkSwSt = std::move(_x.UINM_InterTrunkSwSt);
		UINM_ACdisChgEnReq = std::move(_x.UINM_ACdisChgEnReq);
		UINM_ACEleclockswitchReq = std::move(_x.UINM_ACEleclockswitchReq);
	}
	BDCUINM3& operator=(const BDCUINM3 &_x){
		UINM_FLSeatSlideAdjSwSt = _x.UINM_FLSeatSlideAdjSwSt;
		UINM_FLSeatHeightAdjSwSt = _x.UINM_FLSeatHeightAdjSwSt;
		UINM_FLSeatTiltAdjSwSt = _x.UINM_FLSeatTiltAdjSwSt;
		UINM_FLSeatBackrestAdjSwSt = _x.UINM_FLSeatBackrestAdjSwSt;
		UINM_SteeringAngleAdjSwSt = _x.UINM_SteeringAngleAdjSwSt;
		UINM_SteeringExtentAdjSwSt = _x.UINM_SteeringExtentAdjSwSt;
		UINM_FLSeatCushionAdjSwSt = _x.UINM_FLSeatCushionAdjSwSt;
		UINM_FLSeatOttomanAdjSwSt = _x.UINM_FLSeatOttomanAdjSwSt;
		UINM_MirrUpAdjSwSt = _x.UINM_MirrUpAdjSwSt;
		UINM_MirrDownAdjSwSt = _x.UINM_MirrDownAdjSwSt;
		UINM_MirrLeftAdjSwSt = _x.UINM_MirrLeftAdjSwSt;
		UINM_MirrRightAdjSwSt = _x.UINM_MirrRightAdjSwSt;
		UINM_MirrSelectSt = _x.UINM_MirrSelectSt;
		UINM_MirrFoldUnfoldSwSt = _x.UINM_MirrFoldUnfoldSwSt;
		UINM_DriverSide_FLWinSwSt = _x.UINM_DriverSide_FLWinSwSt;
		UINM_DriverSide_FRWinSwSt = _x.UINM_DriverSide_FRWinSwSt;
		UINM_DriverSide_RLWinSwSt = _x.UINM_DriverSide_RLWinSwSt;
		UINM_DriverSide_RRWinSwSt = _x.UINM_DriverSide_RRWinSwSt;
		UINM_PassengerWinLockBtnSt = _x.UINM_PassengerWinLockBtnSt;
		UINM_FrontLeftPowerReleaseReq = _x.UINM_FrontLeftPowerReleaseReq;
		UINM_LeftSwLockDoorsReq = _x.UINM_LeftSwLockDoorsReq;
		UINM_InterSwLockTrunkReq = _x.UINM_InterSwLockTrunkReq;
		UINM_InterSwLockHoodReq = _x.UINM_InterSwLockHoodReq;
		UINM_HornSw = _x.UINM_HornSw;
		UINM_FrontLeftPowerReleaseFaultSt = _x.UINM_FrontLeftPowerReleaseFaultSt;
		UINM_FLDoorOutsideSwSt = _x.UINM_FLDoorOutsideSwSt;
		UINM_FLDoorOutsideSwFaultSt = _x.UINM_FLDoorOutsideSwFaultSt;
		UINM_FLDoorInsideOpenSwSt = _x.UINM_FLDoorInsideOpenSwSt;
		UINM_FLDoorInsideOpenSwFaultSt = _x.UINM_FLDoorInsideOpenSwFaultSt;
		UINM_FLDoorInsideCloseSwSt = _x.UINM_FLDoorInsideCloseSwSt;
		UINM_FLDoorInsideCloseSwFaultSt = _x.UINM_FLDoorInsideCloseSwFaultSt;
		UINM_SwitchLockFillerCapReq = _x.UINM_SwitchLockFillerCapReq;
		UINM_HeadLightLevelAdjustSwSt = _x.UINM_HeadLightLevelAdjustSwSt;
		UINM_HazardLightSwSt = _x.UINM_HazardLightSwSt;
		UINM_InterTrunkSwSt = _x.UINM_InterTrunkSwSt;
		UINM_ACdisChgEnReq = _x.UINM_ACdisChgEnReq;
		UINM_ACEleclockswitchReq = _x.UINM_ACEleclockswitchReq;
		return *this;
	}
	BDCUINM3& operator=(BDCUINM3 &&_x){
		UINM_FLSeatSlideAdjSwSt = std::move(_x.UINM_FLSeatSlideAdjSwSt);
		UINM_FLSeatHeightAdjSwSt = std::move(_x.UINM_FLSeatHeightAdjSwSt);
		UINM_FLSeatTiltAdjSwSt = std::move(_x.UINM_FLSeatTiltAdjSwSt);
		UINM_FLSeatBackrestAdjSwSt = std::move(_x.UINM_FLSeatBackrestAdjSwSt);
		UINM_SteeringAngleAdjSwSt = std::move(_x.UINM_SteeringAngleAdjSwSt);
		UINM_SteeringExtentAdjSwSt = std::move(_x.UINM_SteeringExtentAdjSwSt);
		UINM_FLSeatCushionAdjSwSt = std::move(_x.UINM_FLSeatCushionAdjSwSt);
		UINM_FLSeatOttomanAdjSwSt = std::move(_x.UINM_FLSeatOttomanAdjSwSt);
		UINM_MirrUpAdjSwSt = std::move(_x.UINM_MirrUpAdjSwSt);
		UINM_MirrDownAdjSwSt = std::move(_x.UINM_MirrDownAdjSwSt);
		UINM_MirrLeftAdjSwSt = std::move(_x.UINM_MirrLeftAdjSwSt);
		UINM_MirrRightAdjSwSt = std::move(_x.UINM_MirrRightAdjSwSt);
		UINM_MirrSelectSt = std::move(_x.UINM_MirrSelectSt);
		UINM_MirrFoldUnfoldSwSt = std::move(_x.UINM_MirrFoldUnfoldSwSt);
		UINM_DriverSide_FLWinSwSt = std::move(_x.UINM_DriverSide_FLWinSwSt);
		UINM_DriverSide_FRWinSwSt = std::move(_x.UINM_DriverSide_FRWinSwSt);
		UINM_DriverSide_RLWinSwSt = std::move(_x.UINM_DriverSide_RLWinSwSt);
		UINM_DriverSide_RRWinSwSt = std::move(_x.UINM_DriverSide_RRWinSwSt);
		UINM_PassengerWinLockBtnSt = std::move(_x.UINM_PassengerWinLockBtnSt);
		UINM_FrontLeftPowerReleaseReq = std::move(_x.UINM_FrontLeftPowerReleaseReq);
		UINM_LeftSwLockDoorsReq = std::move(_x.UINM_LeftSwLockDoorsReq);
		UINM_InterSwLockTrunkReq = std::move(_x.UINM_InterSwLockTrunkReq);
		UINM_InterSwLockHoodReq = std::move(_x.UINM_InterSwLockHoodReq);
		UINM_HornSw = std::move(_x.UINM_HornSw);
		UINM_FrontLeftPowerReleaseFaultSt = std::move(_x.UINM_FrontLeftPowerReleaseFaultSt);
		UINM_FLDoorOutsideSwSt = std::move(_x.UINM_FLDoorOutsideSwSt);
		UINM_FLDoorOutsideSwFaultSt = std::move(_x.UINM_FLDoorOutsideSwFaultSt);
		UINM_FLDoorInsideOpenSwSt = std::move(_x.UINM_FLDoorInsideOpenSwSt);
		UINM_FLDoorInsideOpenSwFaultSt = std::move(_x.UINM_FLDoorInsideOpenSwFaultSt);
		UINM_FLDoorInsideCloseSwSt = std::move(_x.UINM_FLDoorInsideCloseSwSt);
		UINM_FLDoorInsideCloseSwFaultSt = std::move(_x.UINM_FLDoorInsideCloseSwFaultSt);
		UINM_SwitchLockFillerCapReq = std::move(_x.UINM_SwitchLockFillerCapReq);
		UINM_HeadLightLevelAdjustSwSt = std::move(_x.UINM_HeadLightLevelAdjustSwSt);
		UINM_HazardLightSwSt = std::move(_x.UINM_HazardLightSwSt);
		UINM_InterTrunkSwSt = std::move(_x.UINM_InterTrunkSwSt);
		UINM_ACdisChgEnReq = std::move(_x.UINM_ACdisChgEnReq);
		UINM_ACEleclockswitchReq = std::move(_x.UINM_ACEleclockswitchReq);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(UINM_FLSeatSlideAdjSwSt);
		fun(UINM_FLSeatHeightAdjSwSt);
		fun(UINM_FLSeatTiltAdjSwSt);
		fun(UINM_FLSeatBackrestAdjSwSt);
		fun(UINM_SteeringAngleAdjSwSt);
		fun(UINM_SteeringExtentAdjSwSt);
		fun(UINM_FLSeatCushionAdjSwSt);
		fun(UINM_FLSeatOttomanAdjSwSt);
		fun(UINM_MirrUpAdjSwSt);
		fun(UINM_MirrDownAdjSwSt);
		fun(UINM_MirrLeftAdjSwSt);
		fun(UINM_MirrRightAdjSwSt);
		fun(UINM_MirrSelectSt);
		fun(UINM_MirrFoldUnfoldSwSt);
		fun(UINM_DriverSide_FLWinSwSt);
		fun(UINM_DriverSide_FRWinSwSt);
		fun(UINM_DriverSide_RLWinSwSt);
		fun(UINM_DriverSide_RRWinSwSt);
		fun(UINM_PassengerWinLockBtnSt);
		fun(UINM_FrontLeftPowerReleaseReq);
		fun(UINM_LeftSwLockDoorsReq);
		fun(UINM_InterSwLockTrunkReq);
		fun(UINM_InterSwLockHoodReq);
		fun(UINM_HornSw);
		fun(UINM_FrontLeftPowerReleaseFaultSt);
		fun(UINM_FLDoorOutsideSwSt);
		fun(UINM_FLDoorOutsideSwFaultSt);
		fun(UINM_FLDoorInsideOpenSwSt);
		fun(UINM_FLDoorInsideOpenSwFaultSt);
		fun(UINM_FLDoorInsideCloseSwSt);
		fun(UINM_FLDoorInsideCloseSwFaultSt);
		fun(UINM_SwitchLockFillerCapReq);
		fun(UINM_HeadLightLevelAdjustSwSt);
		fun(UINM_HazardLightSwSt);
		fun(UINM_InterTrunkSwSt);
		fun(UINM_ACdisChgEnReq);
		fun(UINM_ACEleclockswitchReq);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(UINM_FLSeatSlideAdjSwSt);
		fun(UINM_FLSeatHeightAdjSwSt);
		fun(UINM_FLSeatTiltAdjSwSt);
		fun(UINM_FLSeatBackrestAdjSwSt);
		fun(UINM_SteeringAngleAdjSwSt);
		fun(UINM_SteeringExtentAdjSwSt);
		fun(UINM_FLSeatCushionAdjSwSt);
		fun(UINM_FLSeatOttomanAdjSwSt);
		fun(UINM_MirrUpAdjSwSt);
		fun(UINM_MirrDownAdjSwSt);
		fun(UINM_MirrLeftAdjSwSt);
		fun(UINM_MirrRightAdjSwSt);
		fun(UINM_MirrSelectSt);
		fun(UINM_MirrFoldUnfoldSwSt);
		fun(UINM_DriverSide_FLWinSwSt);
		fun(UINM_DriverSide_FRWinSwSt);
		fun(UINM_DriverSide_RLWinSwSt);
		fun(UINM_DriverSide_RRWinSwSt);
		fun(UINM_PassengerWinLockBtnSt);
		fun(UINM_FrontLeftPowerReleaseReq);
		fun(UINM_LeftSwLockDoorsReq);
		fun(UINM_InterSwLockTrunkReq);
		fun(UINM_InterSwLockHoodReq);
		fun(UINM_HornSw);
		fun(UINM_FrontLeftPowerReleaseFaultSt);
		fun(UINM_FLDoorOutsideSwSt);
		fun(UINM_FLDoorOutsideSwFaultSt);
		fun(UINM_FLDoorInsideOpenSwSt);
		fun(UINM_FLDoorInsideOpenSwFaultSt);
		fun(UINM_FLDoorInsideCloseSwSt);
		fun(UINM_FLDoorInsideCloseSwFaultSt);
		fun(UINM_SwitchLockFillerCapReq);
		fun(UINM_HeadLightLevelAdjustSwSt);
		fun(UINM_HazardLightSwSt);
		fun(UINM_InterTrunkSwSt);
		fun(UINM_ACdisChgEnReq);
		fun(UINM_ACEleclockswitchReq);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (UINM_FLSeatSlideAdjSwSt);
		fun << (UINM_FLSeatHeightAdjSwSt);
		fun << (UINM_FLSeatTiltAdjSwSt);
		fun << (UINM_FLSeatBackrestAdjSwSt);
		fun << (UINM_SteeringAngleAdjSwSt);
		fun << (UINM_SteeringExtentAdjSwSt);
		fun << (UINM_FLSeatCushionAdjSwSt);
		fun << (UINM_FLSeatOttomanAdjSwSt);
		fun << (UINM_MirrUpAdjSwSt);
		fun << (UINM_MirrDownAdjSwSt);
		fun << (UINM_MirrLeftAdjSwSt);
		fun << (UINM_MirrRightAdjSwSt);
		fun << (UINM_MirrSelectSt);
		fun << (UINM_MirrFoldUnfoldSwSt);
		fun << (UINM_DriverSide_FLWinSwSt);
		fun << (UINM_DriverSide_FRWinSwSt);
		fun << (UINM_DriverSide_RLWinSwSt);
		fun << (UINM_DriverSide_RRWinSwSt);
		fun << (UINM_PassengerWinLockBtnSt);
		fun << (UINM_FrontLeftPowerReleaseReq);
		fun << (UINM_LeftSwLockDoorsReq);
		fun << (UINM_InterSwLockTrunkReq);
		fun << (UINM_InterSwLockHoodReq);
		fun << (UINM_HornSw);
		fun << (UINM_FrontLeftPowerReleaseFaultSt);
		fun << (UINM_FLDoorOutsideSwSt);
		fun << (UINM_FLDoorOutsideSwFaultSt);
		fun << (UINM_FLDoorInsideOpenSwSt);
		fun << (UINM_FLDoorInsideOpenSwFaultSt);
		fun << (UINM_FLDoorInsideCloseSwSt);
		fun << (UINM_FLDoorInsideCloseSwFaultSt);
		fun << (UINM_SwitchLockFillerCapReq);
		fun << (UINM_HeadLightLevelAdjustSwSt);
		fun << (UINM_HazardLightSwSt);
		fun << (UINM_InterTrunkSwSt);
		fun << (UINM_ACdisChgEnReq);
		fun << (UINM_ACEleclockswitchReq);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (UINM_FLSeatSlideAdjSwSt);
		fun >> (UINM_FLSeatHeightAdjSwSt);
		fun >> (UINM_FLSeatTiltAdjSwSt);
		fun >> (UINM_FLSeatBackrestAdjSwSt);
		fun >> (UINM_SteeringAngleAdjSwSt);
		fun >> (UINM_SteeringExtentAdjSwSt);
		fun >> (UINM_FLSeatCushionAdjSwSt);
		fun >> (UINM_FLSeatOttomanAdjSwSt);
		fun >> (UINM_MirrUpAdjSwSt);
		fun >> (UINM_MirrDownAdjSwSt);
		fun >> (UINM_MirrLeftAdjSwSt);
		fun >> (UINM_MirrRightAdjSwSt);
		fun >> (UINM_MirrSelectSt);
		fun >> (UINM_MirrFoldUnfoldSwSt);
		fun >> (UINM_DriverSide_FLWinSwSt);
		fun >> (UINM_DriverSide_FRWinSwSt);
		fun >> (UINM_DriverSide_RLWinSwSt);
		fun >> (UINM_DriverSide_RRWinSwSt);
		fun >> (UINM_PassengerWinLockBtnSt);
		fun >> (UINM_FrontLeftPowerReleaseReq);
		fun >> (UINM_LeftSwLockDoorsReq);
		fun >> (UINM_InterSwLockTrunkReq);
		fun >> (UINM_InterSwLockHoodReq);
		fun >> (UINM_HornSw);
		fun >> (UINM_FrontLeftPowerReleaseFaultSt);
		fun >> (UINM_FLDoorOutsideSwSt);
		fun >> (UINM_FLDoorOutsideSwFaultSt);
		fun >> (UINM_FLDoorInsideOpenSwSt);
		fun >> (UINM_FLDoorInsideOpenSwFaultSt);
		fun >> (UINM_FLDoorInsideCloseSwSt);
		fun >> (UINM_FLDoorInsideCloseSwFaultSt);
		fun >> (UINM_SwitchLockFillerCapReq);
		fun >> (UINM_HeadLightLevelAdjustSwSt);
		fun >> (UINM_HazardLightSwSt);
		fun >> (UINM_InterTrunkSwSt);
		fun >> (UINM_ACdisChgEnReq);
		fun >> (UINM_ACEleclockswitchReq);
	}
};

#endif //____BDCUINM3_H__
