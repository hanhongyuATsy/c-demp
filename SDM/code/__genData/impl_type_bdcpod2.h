#ifndef ____BDCPOD2_H__
#define ____BDCPOD2_H__


#include "cstdint"






struct BDCPOD2 {
public:
	std::uint8_t POD_CinchOptFailOccurFL;
	std::uint8_t POD_PROptFailOccurFL;
	std::uint8_t POD_HighLatchPosFL;
	std::uint8_t POD_CinchOptStFL;
	std::uint8_t POD_CinchOverheatingStFL;
	std::uint8_t POD_HighLatchDoorOpenStFL;
	std::uint8_t POD_CinchHomeStFL;
	std::uint8_t POD_PROptStFL;
	std::uint8_t POD_PROverheatingStFL;
	std::uint8_t POD_DRMPowerReq;
	std::uint8_t UINM_FLDoorInsideCloseSwFaultSt;
	std::uint8_t UINM_FLDoorInsideCloseSwSt;
	std::uint8_t UINM_FLDoorInsideOpenSwFaultSt;
	std::uint8_t UINM_FLDoorInsideOpenSwSt;
	std::uint8_t UINM_FLDoorOutsideSwFaultSt;
	std::uint8_t UINM_FLDoorOutsideSwSt;
	std::uint8_t UINM_FrontLeftPowerReleaseReq;
	std::uint8_t UINM_FrontLeftPowerReleaseFaultSt;
/*
	BDCPOD2() {}
	~BDCPOD2() {}
	BDCPOD2(const std::uint8_t _POD_CinchOptFailOccurFL,const std::uint8_t _POD_PROptFailOccurFL,const std::uint8_t _POD_HighLatchPosFL,const std::uint8_t _POD_CinchOptStFL,const std::uint8_t _POD_CinchOverheatingStFL,const std::uint8_t _POD_HighLatchDoorOpenStFL,const std::uint8_t _POD_CinchHomeStFL,const std::uint8_t _POD_PROptStFL,const std::uint8_t _POD_PROverheatingStFL,const std::uint8_t _POD_DRMPowerReq,const std::uint8_t _UINM_FLDoorInsideCloseSwFaultSt,const std::uint8_t _UINM_FLDoorInsideCloseSwSt,const std::uint8_t _UINM_FLDoorInsideOpenSwFaultSt,const std::uint8_t _UINM_FLDoorInsideOpenSwSt,const std::uint8_t _UINM_FLDoorOutsideSwFaultSt,const std::uint8_t _UINM_FLDoorOutsideSwSt,const std::uint8_t _UINM_FrontLeftPowerReleaseReq,const std::uint8_t _UINM_FrontLeftPowerReleaseFaultSt):POD_CinchOptFailOccurFL(_POD_CinchOptFailOccurFL),POD_PROptFailOccurFL(_POD_PROptFailOccurFL),POD_HighLatchPosFL(_POD_HighLatchPosFL),POD_CinchOptStFL(_POD_CinchOptStFL),POD_CinchOverheatingStFL(_POD_CinchOverheatingStFL),POD_HighLatchDoorOpenStFL(_POD_HighLatchDoorOpenStFL),POD_CinchHomeStFL(_POD_CinchHomeStFL),POD_PROptStFL(_POD_PROptStFL),POD_PROverheatingStFL(_POD_PROverheatingStFL),POD_DRMPowerReq(_POD_DRMPowerReq),UINM_FLDoorInsideCloseSwFaultSt(_UINM_FLDoorInsideCloseSwFaultSt),UINM_FLDoorInsideCloseSwSt(_UINM_FLDoorInsideCloseSwSt),UINM_FLDoorInsideOpenSwFaultSt(_UINM_FLDoorInsideOpenSwFaultSt),UINM_FLDoorInsideOpenSwSt(_UINM_FLDoorInsideOpenSwSt),UINM_FLDoorOutsideSwFaultSt(_UINM_FLDoorOutsideSwFaultSt),UINM_FLDoorOutsideSwSt(_UINM_FLDoorOutsideSwSt),UINM_FrontLeftPowerReleaseReq(_UINM_FrontLeftPowerReleaseReq),UINM_FrontLeftPowerReleaseFaultSt(_UINM_FrontLeftPowerReleaseFaultSt) {}
	BDCPOD2(const BDCPOD2 &_x){
		POD_CinchOptFailOccurFL = _x.POD_CinchOptFailOccurFL;
		POD_PROptFailOccurFL = _x.POD_PROptFailOccurFL;
		POD_HighLatchPosFL = _x.POD_HighLatchPosFL;
		POD_CinchOptStFL = _x.POD_CinchOptStFL;
		POD_CinchOverheatingStFL = _x.POD_CinchOverheatingStFL;
		POD_HighLatchDoorOpenStFL = _x.POD_HighLatchDoorOpenStFL;
		POD_CinchHomeStFL = _x.POD_CinchHomeStFL;
		POD_PROptStFL = _x.POD_PROptStFL;
		POD_PROverheatingStFL = _x.POD_PROverheatingStFL;
		POD_DRMPowerReq = _x.POD_DRMPowerReq;
		UINM_FLDoorInsideCloseSwFaultSt = _x.UINM_FLDoorInsideCloseSwFaultSt;
		UINM_FLDoorInsideCloseSwSt = _x.UINM_FLDoorInsideCloseSwSt;
		UINM_FLDoorInsideOpenSwFaultSt = _x.UINM_FLDoorInsideOpenSwFaultSt;
		UINM_FLDoorInsideOpenSwSt = _x.UINM_FLDoorInsideOpenSwSt;
		UINM_FLDoorOutsideSwFaultSt = _x.UINM_FLDoorOutsideSwFaultSt;
		UINM_FLDoorOutsideSwSt = _x.UINM_FLDoorOutsideSwSt;
		UINM_FrontLeftPowerReleaseReq = _x.UINM_FrontLeftPowerReleaseReq;
		UINM_FrontLeftPowerReleaseFaultSt = _x.UINM_FrontLeftPowerReleaseFaultSt;
	}
	BDCPOD2(BDCPOD2 &&_x){
		POD_CinchOptFailOccurFL = std::move(_x.POD_CinchOptFailOccurFL);
		POD_PROptFailOccurFL = std::move(_x.POD_PROptFailOccurFL);
		POD_HighLatchPosFL = std::move(_x.POD_HighLatchPosFL);
		POD_CinchOptStFL = std::move(_x.POD_CinchOptStFL);
		POD_CinchOverheatingStFL = std::move(_x.POD_CinchOverheatingStFL);
		POD_HighLatchDoorOpenStFL = std::move(_x.POD_HighLatchDoorOpenStFL);
		POD_CinchHomeStFL = std::move(_x.POD_CinchHomeStFL);
		POD_PROptStFL = std::move(_x.POD_PROptStFL);
		POD_PROverheatingStFL = std::move(_x.POD_PROverheatingStFL);
		POD_DRMPowerReq = std::move(_x.POD_DRMPowerReq);
		UINM_FLDoorInsideCloseSwFaultSt = std::move(_x.UINM_FLDoorInsideCloseSwFaultSt);
		UINM_FLDoorInsideCloseSwSt = std::move(_x.UINM_FLDoorInsideCloseSwSt);
		UINM_FLDoorInsideOpenSwFaultSt = std::move(_x.UINM_FLDoorInsideOpenSwFaultSt);
		UINM_FLDoorInsideOpenSwSt = std::move(_x.UINM_FLDoorInsideOpenSwSt);
		UINM_FLDoorOutsideSwFaultSt = std::move(_x.UINM_FLDoorOutsideSwFaultSt);
		UINM_FLDoorOutsideSwSt = std::move(_x.UINM_FLDoorOutsideSwSt);
		UINM_FrontLeftPowerReleaseReq = std::move(_x.UINM_FrontLeftPowerReleaseReq);
		UINM_FrontLeftPowerReleaseFaultSt = std::move(_x.UINM_FrontLeftPowerReleaseFaultSt);
	}
	BDCPOD2& operator=(const BDCPOD2 &_x){
		POD_CinchOptFailOccurFL = _x.POD_CinchOptFailOccurFL;
		POD_PROptFailOccurFL = _x.POD_PROptFailOccurFL;
		POD_HighLatchPosFL = _x.POD_HighLatchPosFL;
		POD_CinchOptStFL = _x.POD_CinchOptStFL;
		POD_CinchOverheatingStFL = _x.POD_CinchOverheatingStFL;
		POD_HighLatchDoorOpenStFL = _x.POD_HighLatchDoorOpenStFL;
		POD_CinchHomeStFL = _x.POD_CinchHomeStFL;
		POD_PROptStFL = _x.POD_PROptStFL;
		POD_PROverheatingStFL = _x.POD_PROverheatingStFL;
		POD_DRMPowerReq = _x.POD_DRMPowerReq;
		UINM_FLDoorInsideCloseSwFaultSt = _x.UINM_FLDoorInsideCloseSwFaultSt;
		UINM_FLDoorInsideCloseSwSt = _x.UINM_FLDoorInsideCloseSwSt;
		UINM_FLDoorInsideOpenSwFaultSt = _x.UINM_FLDoorInsideOpenSwFaultSt;
		UINM_FLDoorInsideOpenSwSt = _x.UINM_FLDoorInsideOpenSwSt;
		UINM_FLDoorOutsideSwFaultSt = _x.UINM_FLDoorOutsideSwFaultSt;
		UINM_FLDoorOutsideSwSt = _x.UINM_FLDoorOutsideSwSt;
		UINM_FrontLeftPowerReleaseReq = _x.UINM_FrontLeftPowerReleaseReq;
		UINM_FrontLeftPowerReleaseFaultSt = _x.UINM_FrontLeftPowerReleaseFaultSt;
		return *this;
	}
	BDCPOD2& operator=(BDCPOD2 &&_x){
		POD_CinchOptFailOccurFL = std::move(_x.POD_CinchOptFailOccurFL);
		POD_PROptFailOccurFL = std::move(_x.POD_PROptFailOccurFL);
		POD_HighLatchPosFL = std::move(_x.POD_HighLatchPosFL);
		POD_CinchOptStFL = std::move(_x.POD_CinchOptStFL);
		POD_CinchOverheatingStFL = std::move(_x.POD_CinchOverheatingStFL);
		POD_HighLatchDoorOpenStFL = std::move(_x.POD_HighLatchDoorOpenStFL);
		POD_CinchHomeStFL = std::move(_x.POD_CinchHomeStFL);
		POD_PROptStFL = std::move(_x.POD_PROptStFL);
		POD_PROverheatingStFL = std::move(_x.POD_PROverheatingStFL);
		POD_DRMPowerReq = std::move(_x.POD_DRMPowerReq);
		UINM_FLDoorInsideCloseSwFaultSt = std::move(_x.UINM_FLDoorInsideCloseSwFaultSt);
		UINM_FLDoorInsideCloseSwSt = std::move(_x.UINM_FLDoorInsideCloseSwSt);
		UINM_FLDoorInsideOpenSwFaultSt = std::move(_x.UINM_FLDoorInsideOpenSwFaultSt);
		UINM_FLDoorInsideOpenSwSt = std::move(_x.UINM_FLDoorInsideOpenSwSt);
		UINM_FLDoorOutsideSwFaultSt = std::move(_x.UINM_FLDoorOutsideSwFaultSt);
		UINM_FLDoorOutsideSwSt = std::move(_x.UINM_FLDoorOutsideSwSt);
		UINM_FrontLeftPowerReleaseReq = std::move(_x.UINM_FrontLeftPowerReleaseReq);
		UINM_FrontLeftPowerReleaseFaultSt = std::move(_x.UINM_FrontLeftPowerReleaseFaultSt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(POD_CinchOptFailOccurFL);
		fun(POD_PROptFailOccurFL);
		fun(POD_HighLatchPosFL);
		fun(POD_CinchOptStFL);
		fun(POD_CinchOverheatingStFL);
		fun(POD_HighLatchDoorOpenStFL);
		fun(POD_CinchHomeStFL);
		fun(POD_PROptStFL);
		fun(POD_PROverheatingStFL);
		fun(POD_DRMPowerReq);
		fun(UINM_FLDoorInsideCloseSwFaultSt);
		fun(UINM_FLDoorInsideCloseSwSt);
		fun(UINM_FLDoorInsideOpenSwFaultSt);
		fun(UINM_FLDoorInsideOpenSwSt);
		fun(UINM_FLDoorOutsideSwFaultSt);
		fun(UINM_FLDoorOutsideSwSt);
		fun(UINM_FrontLeftPowerReleaseReq);
		fun(UINM_FrontLeftPowerReleaseFaultSt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(POD_CinchOptFailOccurFL);
		fun(POD_PROptFailOccurFL);
		fun(POD_HighLatchPosFL);
		fun(POD_CinchOptStFL);
		fun(POD_CinchOverheatingStFL);
		fun(POD_HighLatchDoorOpenStFL);
		fun(POD_CinchHomeStFL);
		fun(POD_PROptStFL);
		fun(POD_PROverheatingStFL);
		fun(POD_DRMPowerReq);
		fun(UINM_FLDoorInsideCloseSwFaultSt);
		fun(UINM_FLDoorInsideCloseSwSt);
		fun(UINM_FLDoorInsideOpenSwFaultSt);
		fun(UINM_FLDoorInsideOpenSwSt);
		fun(UINM_FLDoorOutsideSwFaultSt);
		fun(UINM_FLDoorOutsideSwSt);
		fun(UINM_FrontLeftPowerReleaseReq);
		fun(UINM_FrontLeftPowerReleaseFaultSt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (POD_CinchOptFailOccurFL);
		fun << (POD_PROptFailOccurFL);
		fun << (POD_HighLatchPosFL);
		fun << (POD_CinchOptStFL);
		fun << (POD_CinchOverheatingStFL);
		fun << (POD_HighLatchDoorOpenStFL);
		fun << (POD_CinchHomeStFL);
		fun << (POD_PROptStFL);
		fun << (POD_PROverheatingStFL);
		fun << (POD_DRMPowerReq);
		fun << (UINM_FLDoorInsideCloseSwFaultSt);
		fun << (UINM_FLDoorInsideCloseSwSt);
		fun << (UINM_FLDoorInsideOpenSwFaultSt);
		fun << (UINM_FLDoorInsideOpenSwSt);
		fun << (UINM_FLDoorOutsideSwFaultSt);
		fun << (UINM_FLDoorOutsideSwSt);
		fun << (UINM_FrontLeftPowerReleaseReq);
		fun << (UINM_FrontLeftPowerReleaseFaultSt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (POD_CinchOptFailOccurFL);
		fun >> (POD_PROptFailOccurFL);
		fun >> (POD_HighLatchPosFL);
		fun >> (POD_CinchOptStFL);
		fun >> (POD_CinchOverheatingStFL);
		fun >> (POD_HighLatchDoorOpenStFL);
		fun >> (POD_CinchHomeStFL);
		fun >> (POD_PROptStFL);
		fun >> (POD_PROverheatingStFL);
		fun >> (POD_DRMPowerReq);
		fun >> (UINM_FLDoorInsideCloseSwFaultSt);
		fun >> (UINM_FLDoorInsideCloseSwSt);
		fun >> (UINM_FLDoorInsideOpenSwFaultSt);
		fun >> (UINM_FLDoorInsideOpenSwSt);
		fun >> (UINM_FLDoorOutsideSwFaultSt);
		fun >> (UINM_FLDoorOutsideSwSt);
		fun >> (UINM_FrontLeftPowerReleaseReq);
		fun >> (UINM_FrontLeftPowerReleaseFaultSt);
	}
};

#endif //____BDCPOD2_H__
