#ifndef ____BDCUINM4_H__
#define ____BDCUINM4_H__


#include "cstdint"






struct BDCUINM4 {
public:
	std::uint8_t UINM_BrakeSWNOSt2;
	std::uint8_t UINM_TrunkSWSt;
	std::uint8_t UINM_FrontRightPowerReleaseReq;
	std::uint8_t UINM_ExterSwLockTrunkReq;
	std::uint8_t UINM_RightSwLockDoorsReq;
	std::uint8_t UINM_FrontRightPowerReleaseFaultSt;
	std::uint8_t UMM_FrontPassengerSeatSt;
	std::uint8_t UINM_FRSeatSlideAdjSwSt;
	std::uint8_t UINM_FRSeatHeightAdjSwSt;
	std::uint8_t UINM_FRSeatTiltAdjSwSt;
	std::uint8_t UINM_FRSeatBackrestAdjSwSt;
	std::uint8_t UINM_FRSeatCushionAdjSwSt;
	std::uint8_t UINM_FRSeatOttomanAdjSwSt;
	std::uint8_t UINM_FRDoorOutsideSwSt;
	std::uint8_t UINM_FRDoorOutsideSwFaultSt;
	std::uint8_t UINM_KicksensorSt;
	std::uint8_t UINM_LocalSide_FRWinSwSt;
	std::uint8_t UINM_FRDoorInsideOpenSwSt;
	std::uint8_t UINM_FRDoorInsideOpenFaultSt;
	std::uint8_t UINM_FRDoorInsideCloseSwSt;
	std::uint8_t UINM_FRDoorInsideCloseSwFaultSt;
	std::uint8_t UINM_LocalSide_RLWinSwSt;
	std::uint8_t UINM_LocalSide_RRWinSwSt;
	std::uint8_t UINM_RLDoorOutsideSwSt;
	std::uint8_t UINM_RLDoorOutsideSwFaultSt;
	std::uint8_t UINM_RRDoorOutsideSwSt;
	std::uint8_t UINM_RRDoorOutsideSwFaultSt;
	std::uint8_t UINM_RearLeftPowerReleaseReq;
	std::uint8_t UINM_RearRightPowerReleaseReq;
	std::uint8_t UINM_RearLeftPowerReleaseFaultSt;
	std::uint8_t UINM_RearRightPowerReleaseFaultSt;
	std::uint8_t UINM_PLGSWSt;
/*
	BDCUINM4() {}
	~BDCUINM4() {}
	BDCUINM4(const std::uint8_t _UINM_BrakeSWNOSt2,const std::uint8_t _UINM_TrunkSWSt,const std::uint8_t _UINM_FrontRightPowerReleaseReq,const std::uint8_t _UINM_ExterSwLockTrunkReq,const std::uint8_t _UINM_RightSwLockDoorsReq,const std::uint8_t _UINM_FrontRightPowerReleaseFaultSt,const std::uint8_t _UMM_FrontPassengerSeatSt,const std::uint8_t _UINM_FRSeatSlideAdjSwSt,const std::uint8_t _UINM_FRSeatHeightAdjSwSt,const std::uint8_t _UINM_FRSeatTiltAdjSwSt,const std::uint8_t _UINM_FRSeatBackrestAdjSwSt,const std::uint8_t _UINM_FRSeatCushionAdjSwSt,const std::uint8_t _UINM_FRSeatOttomanAdjSwSt,const std::uint8_t _UINM_FRDoorOutsideSwSt,const std::uint8_t _UINM_FRDoorOutsideSwFaultSt,const std::uint8_t _UINM_KicksensorSt,const std::uint8_t _UINM_LocalSide_FRWinSwSt,const std::uint8_t _UINM_FRDoorInsideOpenSwSt,const std::uint8_t _UINM_FRDoorInsideOpenFaultSt,const std::uint8_t _UINM_FRDoorInsideCloseSwSt,const std::uint8_t _UINM_FRDoorInsideCloseSwFaultSt,const std::uint8_t _UINM_LocalSide_RLWinSwSt,const std::uint8_t _UINM_LocalSide_RRWinSwSt,const std::uint8_t _UINM_RLDoorOutsideSwSt,const std::uint8_t _UINM_RLDoorOutsideSwFaultSt,const std::uint8_t _UINM_RRDoorOutsideSwSt,const std::uint8_t _UINM_RRDoorOutsideSwFaultSt,const std::uint8_t _UINM_RearLeftPowerReleaseReq,const std::uint8_t _UINM_RearRightPowerReleaseReq,const std::uint8_t _UINM_RearLeftPowerReleaseFaultSt,const std::uint8_t _UINM_RearRightPowerReleaseFaultSt,const std::uint8_t _UINM_PLGSWSt):UINM_BrakeSWNOSt2(_UINM_BrakeSWNOSt2),UINM_TrunkSWSt(_UINM_TrunkSWSt),UINM_FrontRightPowerReleaseReq(_UINM_FrontRightPowerReleaseReq),UINM_ExterSwLockTrunkReq(_UINM_ExterSwLockTrunkReq),UINM_RightSwLockDoorsReq(_UINM_RightSwLockDoorsReq),UINM_FrontRightPowerReleaseFaultSt(_UINM_FrontRightPowerReleaseFaultSt),UMM_FrontPassengerSeatSt(_UMM_FrontPassengerSeatSt),UINM_FRSeatSlideAdjSwSt(_UINM_FRSeatSlideAdjSwSt),UINM_FRSeatHeightAdjSwSt(_UINM_FRSeatHeightAdjSwSt),UINM_FRSeatTiltAdjSwSt(_UINM_FRSeatTiltAdjSwSt),UINM_FRSeatBackrestAdjSwSt(_UINM_FRSeatBackrestAdjSwSt),UINM_FRSeatCushionAdjSwSt(_UINM_FRSeatCushionAdjSwSt),UINM_FRSeatOttomanAdjSwSt(_UINM_FRSeatOttomanAdjSwSt),UINM_FRDoorOutsideSwSt(_UINM_FRDoorOutsideSwSt),UINM_FRDoorOutsideSwFaultSt(_UINM_FRDoorOutsideSwFaultSt),UINM_KicksensorSt(_UINM_KicksensorSt),UINM_LocalSide_FRWinSwSt(_UINM_LocalSide_FRWinSwSt),UINM_FRDoorInsideOpenSwSt(_UINM_FRDoorInsideOpenSwSt),UINM_FRDoorInsideOpenFaultSt(_UINM_FRDoorInsideOpenFaultSt),UINM_FRDoorInsideCloseSwSt(_UINM_FRDoorInsideCloseSwSt),UINM_FRDoorInsideCloseSwFaultSt(_UINM_FRDoorInsideCloseSwFaultSt),UINM_LocalSide_RLWinSwSt(_UINM_LocalSide_RLWinSwSt),UINM_LocalSide_RRWinSwSt(_UINM_LocalSide_RRWinSwSt),UINM_RLDoorOutsideSwSt(_UINM_RLDoorOutsideSwSt),UINM_RLDoorOutsideSwFaultSt(_UINM_RLDoorOutsideSwFaultSt),UINM_RRDoorOutsideSwSt(_UINM_RRDoorOutsideSwSt),UINM_RRDoorOutsideSwFaultSt(_UINM_RRDoorOutsideSwFaultSt),UINM_RearLeftPowerReleaseReq(_UINM_RearLeftPowerReleaseReq),UINM_RearRightPowerReleaseReq(_UINM_RearRightPowerReleaseReq),UINM_RearLeftPowerReleaseFaultSt(_UINM_RearLeftPowerReleaseFaultSt),UINM_RearRightPowerReleaseFaultSt(_UINM_RearRightPowerReleaseFaultSt),UINM_PLGSWSt(_UINM_PLGSWSt) {}
	BDCUINM4(const BDCUINM4 &_x){
		UINM_BrakeSWNOSt2 = _x.UINM_BrakeSWNOSt2;
		UINM_TrunkSWSt = _x.UINM_TrunkSWSt;
		UINM_FrontRightPowerReleaseReq = _x.UINM_FrontRightPowerReleaseReq;
		UINM_ExterSwLockTrunkReq = _x.UINM_ExterSwLockTrunkReq;
		UINM_RightSwLockDoorsReq = _x.UINM_RightSwLockDoorsReq;
		UINM_FrontRightPowerReleaseFaultSt = _x.UINM_FrontRightPowerReleaseFaultSt;
		UMM_FrontPassengerSeatSt = _x.UMM_FrontPassengerSeatSt;
		UINM_FRSeatSlideAdjSwSt = _x.UINM_FRSeatSlideAdjSwSt;
		UINM_FRSeatHeightAdjSwSt = _x.UINM_FRSeatHeightAdjSwSt;
		UINM_FRSeatTiltAdjSwSt = _x.UINM_FRSeatTiltAdjSwSt;
		UINM_FRSeatBackrestAdjSwSt = _x.UINM_FRSeatBackrestAdjSwSt;
		UINM_FRSeatCushionAdjSwSt = _x.UINM_FRSeatCushionAdjSwSt;
		UINM_FRSeatOttomanAdjSwSt = _x.UINM_FRSeatOttomanAdjSwSt;
		UINM_FRDoorOutsideSwSt = _x.UINM_FRDoorOutsideSwSt;
		UINM_FRDoorOutsideSwFaultSt = _x.UINM_FRDoorOutsideSwFaultSt;
		UINM_KicksensorSt = _x.UINM_KicksensorSt;
		UINM_LocalSide_FRWinSwSt = _x.UINM_LocalSide_FRWinSwSt;
		UINM_FRDoorInsideOpenSwSt = _x.UINM_FRDoorInsideOpenSwSt;
		UINM_FRDoorInsideOpenFaultSt = _x.UINM_FRDoorInsideOpenFaultSt;
		UINM_FRDoorInsideCloseSwSt = _x.UINM_FRDoorInsideCloseSwSt;
		UINM_FRDoorInsideCloseSwFaultSt = _x.UINM_FRDoorInsideCloseSwFaultSt;
		UINM_LocalSide_RLWinSwSt = _x.UINM_LocalSide_RLWinSwSt;
		UINM_LocalSide_RRWinSwSt = _x.UINM_LocalSide_RRWinSwSt;
		UINM_RLDoorOutsideSwSt = _x.UINM_RLDoorOutsideSwSt;
		UINM_RLDoorOutsideSwFaultSt = _x.UINM_RLDoorOutsideSwFaultSt;
		UINM_RRDoorOutsideSwSt = _x.UINM_RRDoorOutsideSwSt;
		UINM_RRDoorOutsideSwFaultSt = _x.UINM_RRDoorOutsideSwFaultSt;
		UINM_RearLeftPowerReleaseReq = _x.UINM_RearLeftPowerReleaseReq;
		UINM_RearRightPowerReleaseReq = _x.UINM_RearRightPowerReleaseReq;
		UINM_RearLeftPowerReleaseFaultSt = _x.UINM_RearLeftPowerReleaseFaultSt;
		UINM_RearRightPowerReleaseFaultSt = _x.UINM_RearRightPowerReleaseFaultSt;
		UINM_PLGSWSt = _x.UINM_PLGSWSt;
	}
	BDCUINM4(BDCUINM4 &&_x){
		UINM_BrakeSWNOSt2 = std::move(_x.UINM_BrakeSWNOSt2);
		UINM_TrunkSWSt = std::move(_x.UINM_TrunkSWSt);
		UINM_FrontRightPowerReleaseReq = std::move(_x.UINM_FrontRightPowerReleaseReq);
		UINM_ExterSwLockTrunkReq = std::move(_x.UINM_ExterSwLockTrunkReq);
		UINM_RightSwLockDoorsReq = std::move(_x.UINM_RightSwLockDoorsReq);
		UINM_FrontRightPowerReleaseFaultSt = std::move(_x.UINM_FrontRightPowerReleaseFaultSt);
		UMM_FrontPassengerSeatSt = std::move(_x.UMM_FrontPassengerSeatSt);
		UINM_FRSeatSlideAdjSwSt = std::move(_x.UINM_FRSeatSlideAdjSwSt);
		UINM_FRSeatHeightAdjSwSt = std::move(_x.UINM_FRSeatHeightAdjSwSt);
		UINM_FRSeatTiltAdjSwSt = std::move(_x.UINM_FRSeatTiltAdjSwSt);
		UINM_FRSeatBackrestAdjSwSt = std::move(_x.UINM_FRSeatBackrestAdjSwSt);
		UINM_FRSeatCushionAdjSwSt = std::move(_x.UINM_FRSeatCushionAdjSwSt);
		UINM_FRSeatOttomanAdjSwSt = std::move(_x.UINM_FRSeatOttomanAdjSwSt);
		UINM_FRDoorOutsideSwSt = std::move(_x.UINM_FRDoorOutsideSwSt);
		UINM_FRDoorOutsideSwFaultSt = std::move(_x.UINM_FRDoorOutsideSwFaultSt);
		UINM_KicksensorSt = std::move(_x.UINM_KicksensorSt);
		UINM_LocalSide_FRWinSwSt = std::move(_x.UINM_LocalSide_FRWinSwSt);
		UINM_FRDoorInsideOpenSwSt = std::move(_x.UINM_FRDoorInsideOpenSwSt);
		UINM_FRDoorInsideOpenFaultSt = std::move(_x.UINM_FRDoorInsideOpenFaultSt);
		UINM_FRDoorInsideCloseSwSt = std::move(_x.UINM_FRDoorInsideCloseSwSt);
		UINM_FRDoorInsideCloseSwFaultSt = std::move(_x.UINM_FRDoorInsideCloseSwFaultSt);
		UINM_LocalSide_RLWinSwSt = std::move(_x.UINM_LocalSide_RLWinSwSt);
		UINM_LocalSide_RRWinSwSt = std::move(_x.UINM_LocalSide_RRWinSwSt);
		UINM_RLDoorOutsideSwSt = std::move(_x.UINM_RLDoorOutsideSwSt);
		UINM_RLDoorOutsideSwFaultSt = std::move(_x.UINM_RLDoorOutsideSwFaultSt);
		UINM_RRDoorOutsideSwSt = std::move(_x.UINM_RRDoorOutsideSwSt);
		UINM_RRDoorOutsideSwFaultSt = std::move(_x.UINM_RRDoorOutsideSwFaultSt);
		UINM_RearLeftPowerReleaseReq = std::move(_x.UINM_RearLeftPowerReleaseReq);
		UINM_RearRightPowerReleaseReq = std::move(_x.UINM_RearRightPowerReleaseReq);
		UINM_RearLeftPowerReleaseFaultSt = std::move(_x.UINM_RearLeftPowerReleaseFaultSt);
		UINM_RearRightPowerReleaseFaultSt = std::move(_x.UINM_RearRightPowerReleaseFaultSt);
		UINM_PLGSWSt = std::move(_x.UINM_PLGSWSt);
	}
	BDCUINM4& operator=(const BDCUINM4 &_x){
		UINM_BrakeSWNOSt2 = _x.UINM_BrakeSWNOSt2;
		UINM_TrunkSWSt = _x.UINM_TrunkSWSt;
		UINM_FrontRightPowerReleaseReq = _x.UINM_FrontRightPowerReleaseReq;
		UINM_ExterSwLockTrunkReq = _x.UINM_ExterSwLockTrunkReq;
		UINM_RightSwLockDoorsReq = _x.UINM_RightSwLockDoorsReq;
		UINM_FrontRightPowerReleaseFaultSt = _x.UINM_FrontRightPowerReleaseFaultSt;
		UMM_FrontPassengerSeatSt = _x.UMM_FrontPassengerSeatSt;
		UINM_FRSeatSlideAdjSwSt = _x.UINM_FRSeatSlideAdjSwSt;
		UINM_FRSeatHeightAdjSwSt = _x.UINM_FRSeatHeightAdjSwSt;
		UINM_FRSeatTiltAdjSwSt = _x.UINM_FRSeatTiltAdjSwSt;
		UINM_FRSeatBackrestAdjSwSt = _x.UINM_FRSeatBackrestAdjSwSt;
		UINM_FRSeatCushionAdjSwSt = _x.UINM_FRSeatCushionAdjSwSt;
		UINM_FRSeatOttomanAdjSwSt = _x.UINM_FRSeatOttomanAdjSwSt;
		UINM_FRDoorOutsideSwSt = _x.UINM_FRDoorOutsideSwSt;
		UINM_FRDoorOutsideSwFaultSt = _x.UINM_FRDoorOutsideSwFaultSt;
		UINM_KicksensorSt = _x.UINM_KicksensorSt;
		UINM_LocalSide_FRWinSwSt = _x.UINM_LocalSide_FRWinSwSt;
		UINM_FRDoorInsideOpenSwSt = _x.UINM_FRDoorInsideOpenSwSt;
		UINM_FRDoorInsideOpenFaultSt = _x.UINM_FRDoorInsideOpenFaultSt;
		UINM_FRDoorInsideCloseSwSt = _x.UINM_FRDoorInsideCloseSwSt;
		UINM_FRDoorInsideCloseSwFaultSt = _x.UINM_FRDoorInsideCloseSwFaultSt;
		UINM_LocalSide_RLWinSwSt = _x.UINM_LocalSide_RLWinSwSt;
		UINM_LocalSide_RRWinSwSt = _x.UINM_LocalSide_RRWinSwSt;
		UINM_RLDoorOutsideSwSt = _x.UINM_RLDoorOutsideSwSt;
		UINM_RLDoorOutsideSwFaultSt = _x.UINM_RLDoorOutsideSwFaultSt;
		UINM_RRDoorOutsideSwSt = _x.UINM_RRDoorOutsideSwSt;
		UINM_RRDoorOutsideSwFaultSt = _x.UINM_RRDoorOutsideSwFaultSt;
		UINM_RearLeftPowerReleaseReq = _x.UINM_RearLeftPowerReleaseReq;
		UINM_RearRightPowerReleaseReq = _x.UINM_RearRightPowerReleaseReq;
		UINM_RearLeftPowerReleaseFaultSt = _x.UINM_RearLeftPowerReleaseFaultSt;
		UINM_RearRightPowerReleaseFaultSt = _x.UINM_RearRightPowerReleaseFaultSt;
		UINM_PLGSWSt = _x.UINM_PLGSWSt;
		return *this;
	}
	BDCUINM4& operator=(BDCUINM4 &&_x){
		UINM_BrakeSWNOSt2 = std::move(_x.UINM_BrakeSWNOSt2);
		UINM_TrunkSWSt = std::move(_x.UINM_TrunkSWSt);
		UINM_FrontRightPowerReleaseReq = std::move(_x.UINM_FrontRightPowerReleaseReq);
		UINM_ExterSwLockTrunkReq = std::move(_x.UINM_ExterSwLockTrunkReq);
		UINM_RightSwLockDoorsReq = std::move(_x.UINM_RightSwLockDoorsReq);
		UINM_FrontRightPowerReleaseFaultSt = std::move(_x.UINM_FrontRightPowerReleaseFaultSt);
		UMM_FrontPassengerSeatSt = std::move(_x.UMM_FrontPassengerSeatSt);
		UINM_FRSeatSlideAdjSwSt = std::move(_x.UINM_FRSeatSlideAdjSwSt);
		UINM_FRSeatHeightAdjSwSt = std::move(_x.UINM_FRSeatHeightAdjSwSt);
		UINM_FRSeatTiltAdjSwSt = std::move(_x.UINM_FRSeatTiltAdjSwSt);
		UINM_FRSeatBackrestAdjSwSt = std::move(_x.UINM_FRSeatBackrestAdjSwSt);
		UINM_FRSeatCushionAdjSwSt = std::move(_x.UINM_FRSeatCushionAdjSwSt);
		UINM_FRSeatOttomanAdjSwSt = std::move(_x.UINM_FRSeatOttomanAdjSwSt);
		UINM_FRDoorOutsideSwSt = std::move(_x.UINM_FRDoorOutsideSwSt);
		UINM_FRDoorOutsideSwFaultSt = std::move(_x.UINM_FRDoorOutsideSwFaultSt);
		UINM_KicksensorSt = std::move(_x.UINM_KicksensorSt);
		UINM_LocalSide_FRWinSwSt = std::move(_x.UINM_LocalSide_FRWinSwSt);
		UINM_FRDoorInsideOpenSwSt = std::move(_x.UINM_FRDoorInsideOpenSwSt);
		UINM_FRDoorInsideOpenFaultSt = std::move(_x.UINM_FRDoorInsideOpenFaultSt);
		UINM_FRDoorInsideCloseSwSt = std::move(_x.UINM_FRDoorInsideCloseSwSt);
		UINM_FRDoorInsideCloseSwFaultSt = std::move(_x.UINM_FRDoorInsideCloseSwFaultSt);
		UINM_LocalSide_RLWinSwSt = std::move(_x.UINM_LocalSide_RLWinSwSt);
		UINM_LocalSide_RRWinSwSt = std::move(_x.UINM_LocalSide_RRWinSwSt);
		UINM_RLDoorOutsideSwSt = std::move(_x.UINM_RLDoorOutsideSwSt);
		UINM_RLDoorOutsideSwFaultSt = std::move(_x.UINM_RLDoorOutsideSwFaultSt);
		UINM_RRDoorOutsideSwSt = std::move(_x.UINM_RRDoorOutsideSwSt);
		UINM_RRDoorOutsideSwFaultSt = std::move(_x.UINM_RRDoorOutsideSwFaultSt);
		UINM_RearLeftPowerReleaseReq = std::move(_x.UINM_RearLeftPowerReleaseReq);
		UINM_RearRightPowerReleaseReq = std::move(_x.UINM_RearRightPowerReleaseReq);
		UINM_RearLeftPowerReleaseFaultSt = std::move(_x.UINM_RearLeftPowerReleaseFaultSt);
		UINM_RearRightPowerReleaseFaultSt = std::move(_x.UINM_RearRightPowerReleaseFaultSt);
		UINM_PLGSWSt = std::move(_x.UINM_PLGSWSt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(UINM_BrakeSWNOSt2);
		fun(UINM_TrunkSWSt);
		fun(UINM_FrontRightPowerReleaseReq);
		fun(UINM_ExterSwLockTrunkReq);
		fun(UINM_RightSwLockDoorsReq);
		fun(UINM_FrontRightPowerReleaseFaultSt);
		fun(UMM_FrontPassengerSeatSt);
		fun(UINM_FRSeatSlideAdjSwSt);
		fun(UINM_FRSeatHeightAdjSwSt);
		fun(UINM_FRSeatTiltAdjSwSt);
		fun(UINM_FRSeatBackrestAdjSwSt);
		fun(UINM_FRSeatCushionAdjSwSt);
		fun(UINM_FRSeatOttomanAdjSwSt);
		fun(UINM_FRDoorOutsideSwSt);
		fun(UINM_FRDoorOutsideSwFaultSt);
		fun(UINM_KicksensorSt);
		fun(UINM_LocalSide_FRWinSwSt);
		fun(UINM_FRDoorInsideOpenSwSt);
		fun(UINM_FRDoorInsideOpenFaultSt);
		fun(UINM_FRDoorInsideCloseSwSt);
		fun(UINM_FRDoorInsideCloseSwFaultSt);
		fun(UINM_LocalSide_RLWinSwSt);
		fun(UINM_LocalSide_RRWinSwSt);
		fun(UINM_RLDoorOutsideSwSt);
		fun(UINM_RLDoorOutsideSwFaultSt);
		fun(UINM_RRDoorOutsideSwSt);
		fun(UINM_RRDoorOutsideSwFaultSt);
		fun(UINM_RearLeftPowerReleaseReq);
		fun(UINM_RearRightPowerReleaseReq);
		fun(UINM_RearLeftPowerReleaseFaultSt);
		fun(UINM_RearRightPowerReleaseFaultSt);
		fun(UINM_PLGSWSt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(UINM_BrakeSWNOSt2);
		fun(UINM_TrunkSWSt);
		fun(UINM_FrontRightPowerReleaseReq);
		fun(UINM_ExterSwLockTrunkReq);
		fun(UINM_RightSwLockDoorsReq);
		fun(UINM_FrontRightPowerReleaseFaultSt);
		fun(UMM_FrontPassengerSeatSt);
		fun(UINM_FRSeatSlideAdjSwSt);
		fun(UINM_FRSeatHeightAdjSwSt);
		fun(UINM_FRSeatTiltAdjSwSt);
		fun(UINM_FRSeatBackrestAdjSwSt);
		fun(UINM_FRSeatCushionAdjSwSt);
		fun(UINM_FRSeatOttomanAdjSwSt);
		fun(UINM_FRDoorOutsideSwSt);
		fun(UINM_FRDoorOutsideSwFaultSt);
		fun(UINM_KicksensorSt);
		fun(UINM_LocalSide_FRWinSwSt);
		fun(UINM_FRDoorInsideOpenSwSt);
		fun(UINM_FRDoorInsideOpenFaultSt);
		fun(UINM_FRDoorInsideCloseSwSt);
		fun(UINM_FRDoorInsideCloseSwFaultSt);
		fun(UINM_LocalSide_RLWinSwSt);
		fun(UINM_LocalSide_RRWinSwSt);
		fun(UINM_RLDoorOutsideSwSt);
		fun(UINM_RLDoorOutsideSwFaultSt);
		fun(UINM_RRDoorOutsideSwSt);
		fun(UINM_RRDoorOutsideSwFaultSt);
		fun(UINM_RearLeftPowerReleaseReq);
		fun(UINM_RearRightPowerReleaseReq);
		fun(UINM_RearLeftPowerReleaseFaultSt);
		fun(UINM_RearRightPowerReleaseFaultSt);
		fun(UINM_PLGSWSt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (UINM_BrakeSWNOSt2);
		fun << (UINM_TrunkSWSt);
		fun << (UINM_FrontRightPowerReleaseReq);
		fun << (UINM_ExterSwLockTrunkReq);
		fun << (UINM_RightSwLockDoorsReq);
		fun << (UINM_FrontRightPowerReleaseFaultSt);
		fun << (UMM_FrontPassengerSeatSt);
		fun << (UINM_FRSeatSlideAdjSwSt);
		fun << (UINM_FRSeatHeightAdjSwSt);
		fun << (UINM_FRSeatTiltAdjSwSt);
		fun << (UINM_FRSeatBackrestAdjSwSt);
		fun << (UINM_FRSeatCushionAdjSwSt);
		fun << (UINM_FRSeatOttomanAdjSwSt);
		fun << (UINM_FRDoorOutsideSwSt);
		fun << (UINM_FRDoorOutsideSwFaultSt);
		fun << (UINM_KicksensorSt);
		fun << (UINM_LocalSide_FRWinSwSt);
		fun << (UINM_FRDoorInsideOpenSwSt);
		fun << (UINM_FRDoorInsideOpenFaultSt);
		fun << (UINM_FRDoorInsideCloseSwSt);
		fun << (UINM_FRDoorInsideCloseSwFaultSt);
		fun << (UINM_LocalSide_RLWinSwSt);
		fun << (UINM_LocalSide_RRWinSwSt);
		fun << (UINM_RLDoorOutsideSwSt);
		fun << (UINM_RLDoorOutsideSwFaultSt);
		fun << (UINM_RRDoorOutsideSwSt);
		fun << (UINM_RRDoorOutsideSwFaultSt);
		fun << (UINM_RearLeftPowerReleaseReq);
		fun << (UINM_RearRightPowerReleaseReq);
		fun << (UINM_RearLeftPowerReleaseFaultSt);
		fun << (UINM_RearRightPowerReleaseFaultSt);
		fun << (UINM_PLGSWSt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (UINM_BrakeSWNOSt2);
		fun >> (UINM_TrunkSWSt);
		fun >> (UINM_FrontRightPowerReleaseReq);
		fun >> (UINM_ExterSwLockTrunkReq);
		fun >> (UINM_RightSwLockDoorsReq);
		fun >> (UINM_FrontRightPowerReleaseFaultSt);
		fun >> (UMM_FrontPassengerSeatSt);
		fun >> (UINM_FRSeatSlideAdjSwSt);
		fun >> (UINM_FRSeatHeightAdjSwSt);
		fun >> (UINM_FRSeatTiltAdjSwSt);
		fun >> (UINM_FRSeatBackrestAdjSwSt);
		fun >> (UINM_FRSeatCushionAdjSwSt);
		fun >> (UINM_FRSeatOttomanAdjSwSt);
		fun >> (UINM_FRDoorOutsideSwSt);
		fun >> (UINM_FRDoorOutsideSwFaultSt);
		fun >> (UINM_KicksensorSt);
		fun >> (UINM_LocalSide_FRWinSwSt);
		fun >> (UINM_FRDoorInsideOpenSwSt);
		fun >> (UINM_FRDoorInsideOpenFaultSt);
		fun >> (UINM_FRDoorInsideCloseSwSt);
		fun >> (UINM_FRDoorInsideCloseSwFaultSt);
		fun >> (UINM_LocalSide_RLWinSwSt);
		fun >> (UINM_LocalSide_RRWinSwSt);
		fun >> (UINM_RLDoorOutsideSwSt);
		fun >> (UINM_RLDoorOutsideSwFaultSt);
		fun >> (UINM_RRDoorOutsideSwSt);
		fun >> (UINM_RRDoorOutsideSwFaultSt);
		fun >> (UINM_RearLeftPowerReleaseReq);
		fun >> (UINM_RearRightPowerReleaseReq);
		fun >> (UINM_RearLeftPowerReleaseFaultSt);
		fun >> (UINM_RearRightPowerReleaseFaultSt);
		fun >> (UINM_PLGSWSt);
	}
};

#endif //____BDCUINM4_H__
