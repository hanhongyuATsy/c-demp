#ifndef ____BDCPOD3_H__
#define ____BDCPOD3_H__


#include "cstdint"






struct BDCPOD3 {
public:
	std::uint8_t POD_HighLatchPosFR;
	std::uint8_t POD_CinchOptFailOccurFR;
	std::uint8_t POD_PROptFailOccurFR;
	std::uint8_t POD_CinchOptStFR;
	std::uint8_t POD_CinchOverheatingStFR;
	std::uint8_t POD_HighLatchDoorOpenStFR;
	std::uint8_t POD_PROptStFR;
	std::uint8_t POD_PROverheatingStFR;
	std::uint8_t POD_CinchHomeStFR;
	std::uint8_t KAE_RKEDoorLockReq;
	std::uint8_t KAE_RKEPowerSliderReq;
	std::uint8_t UINM_FRDoorInsideCloseSwFaultSt;
	std::uint8_t UINM_FRDoorInsideCloseSwSt;
	std::uint8_t UINM_FRDoorInsideOpenFaultSt;
	std::uint8_t UINM_FRDoorInsideOpenSwSt;
	std::uint8_t UINM_FRDoorOutsideSwFaultSt;
	std::uint8_t UINM_FRDoorOutsideSwSt;
	std::uint8_t UINM_FrontRightPowerReleaseReq;
	std::uint8_t UINM_FrontRightPowerReleaseFaultSt;
/*
	BDCPOD3() {}
	~BDCPOD3() {}
	BDCPOD3(const std::uint8_t _POD_HighLatchPosFR,const std::uint8_t _POD_CinchOptFailOccurFR,const std::uint8_t _POD_PROptFailOccurFR,const std::uint8_t _POD_CinchOptStFR,const std::uint8_t _POD_CinchOverheatingStFR,const std::uint8_t _POD_HighLatchDoorOpenStFR,const std::uint8_t _POD_PROptStFR,const std::uint8_t _POD_PROverheatingStFR,const std::uint8_t _POD_CinchHomeStFR,const std::uint8_t _KAE_RKEDoorLockReq,const std::uint8_t _KAE_RKEPowerSliderReq,const std::uint8_t _UINM_FRDoorInsideCloseSwFaultSt,const std::uint8_t _UINM_FRDoorInsideCloseSwSt,const std::uint8_t _UINM_FRDoorInsideOpenFaultSt,const std::uint8_t _UINM_FRDoorInsideOpenSwSt,const std::uint8_t _UINM_FRDoorOutsideSwFaultSt,const std::uint8_t _UINM_FRDoorOutsideSwSt,const std::uint8_t _UINM_FrontRightPowerReleaseReq,const std::uint8_t _UINM_FrontRightPowerReleaseFaultSt):POD_HighLatchPosFR(_POD_HighLatchPosFR),POD_CinchOptFailOccurFR(_POD_CinchOptFailOccurFR),POD_PROptFailOccurFR(_POD_PROptFailOccurFR),POD_CinchOptStFR(_POD_CinchOptStFR),POD_CinchOverheatingStFR(_POD_CinchOverheatingStFR),POD_HighLatchDoorOpenStFR(_POD_HighLatchDoorOpenStFR),POD_PROptStFR(_POD_PROptStFR),POD_PROverheatingStFR(_POD_PROverheatingStFR),POD_CinchHomeStFR(_POD_CinchHomeStFR),KAE_RKEDoorLockReq(_KAE_RKEDoorLockReq),KAE_RKEPowerSliderReq(_KAE_RKEPowerSliderReq),UINM_FRDoorInsideCloseSwFaultSt(_UINM_FRDoorInsideCloseSwFaultSt),UINM_FRDoorInsideCloseSwSt(_UINM_FRDoorInsideCloseSwSt),UINM_FRDoorInsideOpenFaultSt(_UINM_FRDoorInsideOpenFaultSt),UINM_FRDoorInsideOpenSwSt(_UINM_FRDoorInsideOpenSwSt),UINM_FRDoorOutsideSwFaultSt(_UINM_FRDoorOutsideSwFaultSt),UINM_FRDoorOutsideSwSt(_UINM_FRDoorOutsideSwSt),UINM_FrontRightPowerReleaseReq(_UINM_FrontRightPowerReleaseReq),UINM_FrontRightPowerReleaseFaultSt(_UINM_FrontRightPowerReleaseFaultSt) {}
	BDCPOD3(const BDCPOD3 &_x){
		POD_HighLatchPosFR = _x.POD_HighLatchPosFR;
		POD_CinchOptFailOccurFR = _x.POD_CinchOptFailOccurFR;
		POD_PROptFailOccurFR = _x.POD_PROptFailOccurFR;
		POD_CinchOptStFR = _x.POD_CinchOptStFR;
		POD_CinchOverheatingStFR = _x.POD_CinchOverheatingStFR;
		POD_HighLatchDoorOpenStFR = _x.POD_HighLatchDoorOpenStFR;
		POD_PROptStFR = _x.POD_PROptStFR;
		POD_PROverheatingStFR = _x.POD_PROverheatingStFR;
		POD_CinchHomeStFR = _x.POD_CinchHomeStFR;
		KAE_RKEDoorLockReq = _x.KAE_RKEDoorLockReq;
		KAE_RKEPowerSliderReq = _x.KAE_RKEPowerSliderReq;
		UINM_FRDoorInsideCloseSwFaultSt = _x.UINM_FRDoorInsideCloseSwFaultSt;
		UINM_FRDoorInsideCloseSwSt = _x.UINM_FRDoorInsideCloseSwSt;
		UINM_FRDoorInsideOpenFaultSt = _x.UINM_FRDoorInsideOpenFaultSt;
		UINM_FRDoorInsideOpenSwSt = _x.UINM_FRDoorInsideOpenSwSt;
		UINM_FRDoorOutsideSwFaultSt = _x.UINM_FRDoorOutsideSwFaultSt;
		UINM_FRDoorOutsideSwSt = _x.UINM_FRDoorOutsideSwSt;
		UINM_FrontRightPowerReleaseReq = _x.UINM_FrontRightPowerReleaseReq;
		UINM_FrontRightPowerReleaseFaultSt = _x.UINM_FrontRightPowerReleaseFaultSt;
	}
	BDCPOD3(BDCPOD3 &&_x){
		POD_HighLatchPosFR = std::move(_x.POD_HighLatchPosFR);
		POD_CinchOptFailOccurFR = std::move(_x.POD_CinchOptFailOccurFR);
		POD_PROptFailOccurFR = std::move(_x.POD_PROptFailOccurFR);
		POD_CinchOptStFR = std::move(_x.POD_CinchOptStFR);
		POD_CinchOverheatingStFR = std::move(_x.POD_CinchOverheatingStFR);
		POD_HighLatchDoorOpenStFR = std::move(_x.POD_HighLatchDoorOpenStFR);
		POD_PROptStFR = std::move(_x.POD_PROptStFR);
		POD_PROverheatingStFR = std::move(_x.POD_PROverheatingStFR);
		POD_CinchHomeStFR = std::move(_x.POD_CinchHomeStFR);
		KAE_RKEDoorLockReq = std::move(_x.KAE_RKEDoorLockReq);
		KAE_RKEPowerSliderReq = std::move(_x.KAE_RKEPowerSliderReq);
		UINM_FRDoorInsideCloseSwFaultSt = std::move(_x.UINM_FRDoorInsideCloseSwFaultSt);
		UINM_FRDoorInsideCloseSwSt = std::move(_x.UINM_FRDoorInsideCloseSwSt);
		UINM_FRDoorInsideOpenFaultSt = std::move(_x.UINM_FRDoorInsideOpenFaultSt);
		UINM_FRDoorInsideOpenSwSt = std::move(_x.UINM_FRDoorInsideOpenSwSt);
		UINM_FRDoorOutsideSwFaultSt = std::move(_x.UINM_FRDoorOutsideSwFaultSt);
		UINM_FRDoorOutsideSwSt = std::move(_x.UINM_FRDoorOutsideSwSt);
		UINM_FrontRightPowerReleaseReq = std::move(_x.UINM_FrontRightPowerReleaseReq);
		UINM_FrontRightPowerReleaseFaultSt = std::move(_x.UINM_FrontRightPowerReleaseFaultSt);
	}
	BDCPOD3& operator=(const BDCPOD3 &_x){
		POD_HighLatchPosFR = _x.POD_HighLatchPosFR;
		POD_CinchOptFailOccurFR = _x.POD_CinchOptFailOccurFR;
		POD_PROptFailOccurFR = _x.POD_PROptFailOccurFR;
		POD_CinchOptStFR = _x.POD_CinchOptStFR;
		POD_CinchOverheatingStFR = _x.POD_CinchOverheatingStFR;
		POD_HighLatchDoorOpenStFR = _x.POD_HighLatchDoorOpenStFR;
		POD_PROptStFR = _x.POD_PROptStFR;
		POD_PROverheatingStFR = _x.POD_PROverheatingStFR;
		POD_CinchHomeStFR = _x.POD_CinchHomeStFR;
		KAE_RKEDoorLockReq = _x.KAE_RKEDoorLockReq;
		KAE_RKEPowerSliderReq = _x.KAE_RKEPowerSliderReq;
		UINM_FRDoorInsideCloseSwFaultSt = _x.UINM_FRDoorInsideCloseSwFaultSt;
		UINM_FRDoorInsideCloseSwSt = _x.UINM_FRDoorInsideCloseSwSt;
		UINM_FRDoorInsideOpenFaultSt = _x.UINM_FRDoorInsideOpenFaultSt;
		UINM_FRDoorInsideOpenSwSt = _x.UINM_FRDoorInsideOpenSwSt;
		UINM_FRDoorOutsideSwFaultSt = _x.UINM_FRDoorOutsideSwFaultSt;
		UINM_FRDoorOutsideSwSt = _x.UINM_FRDoorOutsideSwSt;
		UINM_FrontRightPowerReleaseReq = _x.UINM_FrontRightPowerReleaseReq;
		UINM_FrontRightPowerReleaseFaultSt = _x.UINM_FrontRightPowerReleaseFaultSt;
		return *this;
	}
	BDCPOD3& operator=(BDCPOD3 &&_x){
		POD_HighLatchPosFR = std::move(_x.POD_HighLatchPosFR);
		POD_CinchOptFailOccurFR = std::move(_x.POD_CinchOptFailOccurFR);
		POD_PROptFailOccurFR = std::move(_x.POD_PROptFailOccurFR);
		POD_CinchOptStFR = std::move(_x.POD_CinchOptStFR);
		POD_CinchOverheatingStFR = std::move(_x.POD_CinchOverheatingStFR);
		POD_HighLatchDoorOpenStFR = std::move(_x.POD_HighLatchDoorOpenStFR);
		POD_PROptStFR = std::move(_x.POD_PROptStFR);
		POD_PROverheatingStFR = std::move(_x.POD_PROverheatingStFR);
		POD_CinchHomeStFR = std::move(_x.POD_CinchHomeStFR);
		KAE_RKEDoorLockReq = std::move(_x.KAE_RKEDoorLockReq);
		KAE_RKEPowerSliderReq = std::move(_x.KAE_RKEPowerSliderReq);
		UINM_FRDoorInsideCloseSwFaultSt = std::move(_x.UINM_FRDoorInsideCloseSwFaultSt);
		UINM_FRDoorInsideCloseSwSt = std::move(_x.UINM_FRDoorInsideCloseSwSt);
		UINM_FRDoorInsideOpenFaultSt = std::move(_x.UINM_FRDoorInsideOpenFaultSt);
		UINM_FRDoorInsideOpenSwSt = std::move(_x.UINM_FRDoorInsideOpenSwSt);
		UINM_FRDoorOutsideSwFaultSt = std::move(_x.UINM_FRDoorOutsideSwFaultSt);
		UINM_FRDoorOutsideSwSt = std::move(_x.UINM_FRDoorOutsideSwSt);
		UINM_FrontRightPowerReleaseReq = std::move(_x.UINM_FrontRightPowerReleaseReq);
		UINM_FrontRightPowerReleaseFaultSt = std::move(_x.UINM_FrontRightPowerReleaseFaultSt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(POD_HighLatchPosFR);
		fun(POD_CinchOptFailOccurFR);
		fun(POD_PROptFailOccurFR);
		fun(POD_CinchOptStFR);
		fun(POD_CinchOverheatingStFR);
		fun(POD_HighLatchDoorOpenStFR);
		fun(POD_PROptStFR);
		fun(POD_PROverheatingStFR);
		fun(POD_CinchHomeStFR);
		fun(KAE_RKEDoorLockReq);
		fun(KAE_RKEPowerSliderReq);
		fun(UINM_FRDoorInsideCloseSwFaultSt);
		fun(UINM_FRDoorInsideCloseSwSt);
		fun(UINM_FRDoorInsideOpenFaultSt);
		fun(UINM_FRDoorInsideOpenSwSt);
		fun(UINM_FRDoorOutsideSwFaultSt);
		fun(UINM_FRDoorOutsideSwSt);
		fun(UINM_FrontRightPowerReleaseReq);
		fun(UINM_FrontRightPowerReleaseFaultSt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(POD_HighLatchPosFR);
		fun(POD_CinchOptFailOccurFR);
		fun(POD_PROptFailOccurFR);
		fun(POD_CinchOptStFR);
		fun(POD_CinchOverheatingStFR);
		fun(POD_HighLatchDoorOpenStFR);
		fun(POD_PROptStFR);
		fun(POD_PROverheatingStFR);
		fun(POD_CinchHomeStFR);
		fun(KAE_RKEDoorLockReq);
		fun(KAE_RKEPowerSliderReq);
		fun(UINM_FRDoorInsideCloseSwFaultSt);
		fun(UINM_FRDoorInsideCloseSwSt);
		fun(UINM_FRDoorInsideOpenFaultSt);
		fun(UINM_FRDoorInsideOpenSwSt);
		fun(UINM_FRDoorOutsideSwFaultSt);
		fun(UINM_FRDoorOutsideSwSt);
		fun(UINM_FrontRightPowerReleaseReq);
		fun(UINM_FrontRightPowerReleaseFaultSt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (POD_HighLatchPosFR);
		fun << (POD_CinchOptFailOccurFR);
		fun << (POD_PROptFailOccurFR);
		fun << (POD_CinchOptStFR);
		fun << (POD_CinchOverheatingStFR);
		fun << (POD_HighLatchDoorOpenStFR);
		fun << (POD_PROptStFR);
		fun << (POD_PROverheatingStFR);
		fun << (POD_CinchHomeStFR);
		fun << (KAE_RKEDoorLockReq);
		fun << (KAE_RKEPowerSliderReq);
		fun << (UINM_FRDoorInsideCloseSwFaultSt);
		fun << (UINM_FRDoorInsideCloseSwSt);
		fun << (UINM_FRDoorInsideOpenFaultSt);
		fun << (UINM_FRDoorInsideOpenSwSt);
		fun << (UINM_FRDoorOutsideSwFaultSt);
		fun << (UINM_FRDoorOutsideSwSt);
		fun << (UINM_FrontRightPowerReleaseReq);
		fun << (UINM_FrontRightPowerReleaseFaultSt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (POD_HighLatchPosFR);
		fun >> (POD_CinchOptFailOccurFR);
		fun >> (POD_PROptFailOccurFR);
		fun >> (POD_CinchOptStFR);
		fun >> (POD_CinchOverheatingStFR);
		fun >> (POD_HighLatchDoorOpenStFR);
		fun >> (POD_PROptStFR);
		fun >> (POD_PROverheatingStFR);
		fun >> (POD_CinchHomeStFR);
		fun >> (KAE_RKEDoorLockReq);
		fun >> (KAE_RKEPowerSliderReq);
		fun >> (UINM_FRDoorInsideCloseSwFaultSt);
		fun >> (UINM_FRDoorInsideCloseSwSt);
		fun >> (UINM_FRDoorInsideOpenFaultSt);
		fun >> (UINM_FRDoorInsideOpenSwSt);
		fun >> (UINM_FRDoorOutsideSwFaultSt);
		fun >> (UINM_FRDoorOutsideSwSt);
		fun >> (UINM_FrontRightPowerReleaseReq);
		fun >> (UINM_FrontRightPowerReleaseFaultSt);
	}
};

#endif //____BDCPOD3_H__
