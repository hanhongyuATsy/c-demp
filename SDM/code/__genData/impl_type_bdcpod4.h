#ifndef ____BDCPOD4_H__
#define ____BDCPOD4_H__


#include "cstdint"






struct BDCPOD4 {
public:
	std::uint8_t POD_CinchOptFailOccurRL;
	std::uint8_t POD_CinchOptFailOccurRR;
	std::uint8_t POD_PROptFailOccurRL;
	std::uint8_t POD_PROptFailOccurRR;
	std::uint8_t POD_HighLatchPosRL;
	std::uint8_t POD_HighLatchPosRR;
	std::uint8_t POD_CinchOptStRL;
	std::uint8_t POD_CinchOptStRR;
	std::uint8_t POD_CinchOverheatingStRL;
	std::uint8_t POD_CinchOverheatingStRR;
	std::uint8_t POD_HighLatchDoorOpenStRL;
	std::uint8_t POD_HighLatchDoorOpenStRR;
	std::uint8_t POD_CinchHomeStRL;
	std::uint8_t POD_CinchHomeStRR;
	std::uint8_t POD_PROptStRL;
	std::uint8_t POD_PROptStRR;
	std::uint8_t POD_PROverheatingStRL;
	std::uint8_t POD_PROverheatingStRR;
	std::uint8_t UINM_RearLeftPowerReleaseReq;
	std::uint8_t UINM_RearLeftPowerReleaseFaultSt;
	std::uint8_t UINM_RearRightPowerReleaseReq;
	std::uint8_t UINM_RearRightPowerReleaseFaultSt;
	std::uint8_t UINM_RLDoorOutsideSwFaultSt;
	std::uint8_t UINM_RLDoorOutsideSwSt;
	std::uint8_t UINM_RRDoorOutsideSwFaultSt;
	std::uint8_t UINM_RRDoorOutsideSwSt;
/*
	BDCPOD4() {}
	~BDCPOD4() {}
	BDCPOD4(const std::uint8_t _POD_CinchOptFailOccurRL,const std::uint8_t _POD_CinchOptFailOccurRR,const std::uint8_t _POD_PROptFailOccurRL,const std::uint8_t _POD_PROptFailOccurRR,const std::uint8_t _POD_HighLatchPosRL,const std::uint8_t _POD_HighLatchPosRR,const std::uint8_t _POD_CinchOptStRL,const std::uint8_t _POD_CinchOptStRR,const std::uint8_t _POD_CinchOverheatingStRL,const std::uint8_t _POD_CinchOverheatingStRR,const std::uint8_t _POD_HighLatchDoorOpenStRL,const std::uint8_t _POD_HighLatchDoorOpenStRR,const std::uint8_t _POD_CinchHomeStRL,const std::uint8_t _POD_CinchHomeStRR,const std::uint8_t _POD_PROptStRL,const std::uint8_t _POD_PROptStRR,const std::uint8_t _POD_PROverheatingStRL,const std::uint8_t _POD_PROverheatingStRR,const std::uint8_t _UINM_RearLeftPowerReleaseReq,const std::uint8_t _UINM_RearLeftPowerReleaseFaultSt,const std::uint8_t _UINM_RearRightPowerReleaseReq,const std::uint8_t _UINM_RearRightPowerReleaseFaultSt,const std::uint8_t _UINM_RLDoorOutsideSwFaultSt,const std::uint8_t _UINM_RLDoorOutsideSwSt,const std::uint8_t _UINM_RRDoorOutsideSwFaultSt,const std::uint8_t _UINM_RRDoorOutsideSwSt):POD_CinchOptFailOccurRL(_POD_CinchOptFailOccurRL),POD_CinchOptFailOccurRR(_POD_CinchOptFailOccurRR),POD_PROptFailOccurRL(_POD_PROptFailOccurRL),POD_PROptFailOccurRR(_POD_PROptFailOccurRR),POD_HighLatchPosRL(_POD_HighLatchPosRL),POD_HighLatchPosRR(_POD_HighLatchPosRR),POD_CinchOptStRL(_POD_CinchOptStRL),POD_CinchOptStRR(_POD_CinchOptStRR),POD_CinchOverheatingStRL(_POD_CinchOverheatingStRL),POD_CinchOverheatingStRR(_POD_CinchOverheatingStRR),POD_HighLatchDoorOpenStRL(_POD_HighLatchDoorOpenStRL),POD_HighLatchDoorOpenStRR(_POD_HighLatchDoorOpenStRR),POD_CinchHomeStRL(_POD_CinchHomeStRL),POD_CinchHomeStRR(_POD_CinchHomeStRR),POD_PROptStRL(_POD_PROptStRL),POD_PROptStRR(_POD_PROptStRR),POD_PROverheatingStRL(_POD_PROverheatingStRL),POD_PROverheatingStRR(_POD_PROverheatingStRR),UINM_RearLeftPowerReleaseReq(_UINM_RearLeftPowerReleaseReq),UINM_RearLeftPowerReleaseFaultSt(_UINM_RearLeftPowerReleaseFaultSt),UINM_RearRightPowerReleaseReq(_UINM_RearRightPowerReleaseReq),UINM_RearRightPowerReleaseFaultSt(_UINM_RearRightPowerReleaseFaultSt),UINM_RLDoorOutsideSwFaultSt(_UINM_RLDoorOutsideSwFaultSt),UINM_RLDoorOutsideSwSt(_UINM_RLDoorOutsideSwSt),UINM_RRDoorOutsideSwFaultSt(_UINM_RRDoorOutsideSwFaultSt),UINM_RRDoorOutsideSwSt(_UINM_RRDoorOutsideSwSt) {}
	BDCPOD4(const BDCPOD4 &_x){
		POD_CinchOptFailOccurRL = _x.POD_CinchOptFailOccurRL;
		POD_CinchOptFailOccurRR = _x.POD_CinchOptFailOccurRR;
		POD_PROptFailOccurRL = _x.POD_PROptFailOccurRL;
		POD_PROptFailOccurRR = _x.POD_PROptFailOccurRR;
		POD_HighLatchPosRL = _x.POD_HighLatchPosRL;
		POD_HighLatchPosRR = _x.POD_HighLatchPosRR;
		POD_CinchOptStRL = _x.POD_CinchOptStRL;
		POD_CinchOptStRR = _x.POD_CinchOptStRR;
		POD_CinchOverheatingStRL = _x.POD_CinchOverheatingStRL;
		POD_CinchOverheatingStRR = _x.POD_CinchOverheatingStRR;
		POD_HighLatchDoorOpenStRL = _x.POD_HighLatchDoorOpenStRL;
		POD_HighLatchDoorOpenStRR = _x.POD_HighLatchDoorOpenStRR;
		POD_CinchHomeStRL = _x.POD_CinchHomeStRL;
		POD_CinchHomeStRR = _x.POD_CinchHomeStRR;
		POD_PROptStRL = _x.POD_PROptStRL;
		POD_PROptStRR = _x.POD_PROptStRR;
		POD_PROverheatingStRL = _x.POD_PROverheatingStRL;
		POD_PROverheatingStRR = _x.POD_PROverheatingStRR;
		UINM_RearLeftPowerReleaseReq = _x.UINM_RearLeftPowerReleaseReq;
		UINM_RearLeftPowerReleaseFaultSt = _x.UINM_RearLeftPowerReleaseFaultSt;
		UINM_RearRightPowerReleaseReq = _x.UINM_RearRightPowerReleaseReq;
		UINM_RearRightPowerReleaseFaultSt = _x.UINM_RearRightPowerReleaseFaultSt;
		UINM_RLDoorOutsideSwFaultSt = _x.UINM_RLDoorOutsideSwFaultSt;
		UINM_RLDoorOutsideSwSt = _x.UINM_RLDoorOutsideSwSt;
		UINM_RRDoorOutsideSwFaultSt = _x.UINM_RRDoorOutsideSwFaultSt;
		UINM_RRDoorOutsideSwSt = _x.UINM_RRDoorOutsideSwSt;
	}
	BDCPOD4(BDCPOD4 &&_x){
		POD_CinchOptFailOccurRL = std::move(_x.POD_CinchOptFailOccurRL);
		POD_CinchOptFailOccurRR = std::move(_x.POD_CinchOptFailOccurRR);
		POD_PROptFailOccurRL = std::move(_x.POD_PROptFailOccurRL);
		POD_PROptFailOccurRR = std::move(_x.POD_PROptFailOccurRR);
		POD_HighLatchPosRL = std::move(_x.POD_HighLatchPosRL);
		POD_HighLatchPosRR = std::move(_x.POD_HighLatchPosRR);
		POD_CinchOptStRL = std::move(_x.POD_CinchOptStRL);
		POD_CinchOptStRR = std::move(_x.POD_CinchOptStRR);
		POD_CinchOverheatingStRL = std::move(_x.POD_CinchOverheatingStRL);
		POD_CinchOverheatingStRR = std::move(_x.POD_CinchOverheatingStRR);
		POD_HighLatchDoorOpenStRL = std::move(_x.POD_HighLatchDoorOpenStRL);
		POD_HighLatchDoorOpenStRR = std::move(_x.POD_HighLatchDoorOpenStRR);
		POD_CinchHomeStRL = std::move(_x.POD_CinchHomeStRL);
		POD_CinchHomeStRR = std::move(_x.POD_CinchHomeStRR);
		POD_PROptStRL = std::move(_x.POD_PROptStRL);
		POD_PROptStRR = std::move(_x.POD_PROptStRR);
		POD_PROverheatingStRL = std::move(_x.POD_PROverheatingStRL);
		POD_PROverheatingStRR = std::move(_x.POD_PROverheatingStRR);
		UINM_RearLeftPowerReleaseReq = std::move(_x.UINM_RearLeftPowerReleaseReq);
		UINM_RearLeftPowerReleaseFaultSt = std::move(_x.UINM_RearLeftPowerReleaseFaultSt);
		UINM_RearRightPowerReleaseReq = std::move(_x.UINM_RearRightPowerReleaseReq);
		UINM_RearRightPowerReleaseFaultSt = std::move(_x.UINM_RearRightPowerReleaseFaultSt);
		UINM_RLDoorOutsideSwFaultSt = std::move(_x.UINM_RLDoorOutsideSwFaultSt);
		UINM_RLDoorOutsideSwSt = std::move(_x.UINM_RLDoorOutsideSwSt);
		UINM_RRDoorOutsideSwFaultSt = std::move(_x.UINM_RRDoorOutsideSwFaultSt);
		UINM_RRDoorOutsideSwSt = std::move(_x.UINM_RRDoorOutsideSwSt);
	}
	BDCPOD4& operator=(const BDCPOD4 &_x){
		POD_CinchOptFailOccurRL = _x.POD_CinchOptFailOccurRL;
		POD_CinchOptFailOccurRR = _x.POD_CinchOptFailOccurRR;
		POD_PROptFailOccurRL = _x.POD_PROptFailOccurRL;
		POD_PROptFailOccurRR = _x.POD_PROptFailOccurRR;
		POD_HighLatchPosRL = _x.POD_HighLatchPosRL;
		POD_HighLatchPosRR = _x.POD_HighLatchPosRR;
		POD_CinchOptStRL = _x.POD_CinchOptStRL;
		POD_CinchOptStRR = _x.POD_CinchOptStRR;
		POD_CinchOverheatingStRL = _x.POD_CinchOverheatingStRL;
		POD_CinchOverheatingStRR = _x.POD_CinchOverheatingStRR;
		POD_HighLatchDoorOpenStRL = _x.POD_HighLatchDoorOpenStRL;
		POD_HighLatchDoorOpenStRR = _x.POD_HighLatchDoorOpenStRR;
		POD_CinchHomeStRL = _x.POD_CinchHomeStRL;
		POD_CinchHomeStRR = _x.POD_CinchHomeStRR;
		POD_PROptStRL = _x.POD_PROptStRL;
		POD_PROptStRR = _x.POD_PROptStRR;
		POD_PROverheatingStRL = _x.POD_PROverheatingStRL;
		POD_PROverheatingStRR = _x.POD_PROverheatingStRR;
		UINM_RearLeftPowerReleaseReq = _x.UINM_RearLeftPowerReleaseReq;
		UINM_RearLeftPowerReleaseFaultSt = _x.UINM_RearLeftPowerReleaseFaultSt;
		UINM_RearRightPowerReleaseReq = _x.UINM_RearRightPowerReleaseReq;
		UINM_RearRightPowerReleaseFaultSt = _x.UINM_RearRightPowerReleaseFaultSt;
		UINM_RLDoorOutsideSwFaultSt = _x.UINM_RLDoorOutsideSwFaultSt;
		UINM_RLDoorOutsideSwSt = _x.UINM_RLDoorOutsideSwSt;
		UINM_RRDoorOutsideSwFaultSt = _x.UINM_RRDoorOutsideSwFaultSt;
		UINM_RRDoorOutsideSwSt = _x.UINM_RRDoorOutsideSwSt;
		return *this;
	}
	BDCPOD4& operator=(BDCPOD4 &&_x){
		POD_CinchOptFailOccurRL = std::move(_x.POD_CinchOptFailOccurRL);
		POD_CinchOptFailOccurRR = std::move(_x.POD_CinchOptFailOccurRR);
		POD_PROptFailOccurRL = std::move(_x.POD_PROptFailOccurRL);
		POD_PROptFailOccurRR = std::move(_x.POD_PROptFailOccurRR);
		POD_HighLatchPosRL = std::move(_x.POD_HighLatchPosRL);
		POD_HighLatchPosRR = std::move(_x.POD_HighLatchPosRR);
		POD_CinchOptStRL = std::move(_x.POD_CinchOptStRL);
		POD_CinchOptStRR = std::move(_x.POD_CinchOptStRR);
		POD_CinchOverheatingStRL = std::move(_x.POD_CinchOverheatingStRL);
		POD_CinchOverheatingStRR = std::move(_x.POD_CinchOverheatingStRR);
		POD_HighLatchDoorOpenStRL = std::move(_x.POD_HighLatchDoorOpenStRL);
		POD_HighLatchDoorOpenStRR = std::move(_x.POD_HighLatchDoorOpenStRR);
		POD_CinchHomeStRL = std::move(_x.POD_CinchHomeStRL);
		POD_CinchHomeStRR = std::move(_x.POD_CinchHomeStRR);
		POD_PROptStRL = std::move(_x.POD_PROptStRL);
		POD_PROptStRR = std::move(_x.POD_PROptStRR);
		POD_PROverheatingStRL = std::move(_x.POD_PROverheatingStRL);
		POD_PROverheatingStRR = std::move(_x.POD_PROverheatingStRR);
		UINM_RearLeftPowerReleaseReq = std::move(_x.UINM_RearLeftPowerReleaseReq);
		UINM_RearLeftPowerReleaseFaultSt = std::move(_x.UINM_RearLeftPowerReleaseFaultSt);
		UINM_RearRightPowerReleaseReq = std::move(_x.UINM_RearRightPowerReleaseReq);
		UINM_RearRightPowerReleaseFaultSt = std::move(_x.UINM_RearRightPowerReleaseFaultSt);
		UINM_RLDoorOutsideSwFaultSt = std::move(_x.UINM_RLDoorOutsideSwFaultSt);
		UINM_RLDoorOutsideSwSt = std::move(_x.UINM_RLDoorOutsideSwSt);
		UINM_RRDoorOutsideSwFaultSt = std::move(_x.UINM_RRDoorOutsideSwFaultSt);
		UINM_RRDoorOutsideSwSt = std::move(_x.UINM_RRDoorOutsideSwSt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(POD_CinchOptFailOccurRL);
		fun(POD_CinchOptFailOccurRR);
		fun(POD_PROptFailOccurRL);
		fun(POD_PROptFailOccurRR);
		fun(POD_HighLatchPosRL);
		fun(POD_HighLatchPosRR);
		fun(POD_CinchOptStRL);
		fun(POD_CinchOptStRR);
		fun(POD_CinchOverheatingStRL);
		fun(POD_CinchOverheatingStRR);
		fun(POD_HighLatchDoorOpenStRL);
		fun(POD_HighLatchDoorOpenStRR);
		fun(POD_CinchHomeStRL);
		fun(POD_CinchHomeStRR);
		fun(POD_PROptStRL);
		fun(POD_PROptStRR);
		fun(POD_PROverheatingStRL);
		fun(POD_PROverheatingStRR);
		fun(UINM_RearLeftPowerReleaseReq);
		fun(UINM_RearLeftPowerReleaseFaultSt);
		fun(UINM_RearRightPowerReleaseReq);
		fun(UINM_RearRightPowerReleaseFaultSt);
		fun(UINM_RLDoorOutsideSwFaultSt);
		fun(UINM_RLDoorOutsideSwSt);
		fun(UINM_RRDoorOutsideSwFaultSt);
		fun(UINM_RRDoorOutsideSwSt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(POD_CinchOptFailOccurRL);
		fun(POD_CinchOptFailOccurRR);
		fun(POD_PROptFailOccurRL);
		fun(POD_PROptFailOccurRR);
		fun(POD_HighLatchPosRL);
		fun(POD_HighLatchPosRR);
		fun(POD_CinchOptStRL);
		fun(POD_CinchOptStRR);
		fun(POD_CinchOverheatingStRL);
		fun(POD_CinchOverheatingStRR);
		fun(POD_HighLatchDoorOpenStRL);
		fun(POD_HighLatchDoorOpenStRR);
		fun(POD_CinchHomeStRL);
		fun(POD_CinchHomeStRR);
		fun(POD_PROptStRL);
		fun(POD_PROptStRR);
		fun(POD_PROverheatingStRL);
		fun(POD_PROverheatingStRR);
		fun(UINM_RearLeftPowerReleaseReq);
		fun(UINM_RearLeftPowerReleaseFaultSt);
		fun(UINM_RearRightPowerReleaseReq);
		fun(UINM_RearRightPowerReleaseFaultSt);
		fun(UINM_RLDoorOutsideSwFaultSt);
		fun(UINM_RLDoorOutsideSwSt);
		fun(UINM_RRDoorOutsideSwFaultSt);
		fun(UINM_RRDoorOutsideSwSt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (POD_CinchOptFailOccurRL);
		fun << (POD_CinchOptFailOccurRR);
		fun << (POD_PROptFailOccurRL);
		fun << (POD_PROptFailOccurRR);
		fun << (POD_HighLatchPosRL);
		fun << (POD_HighLatchPosRR);
		fun << (POD_CinchOptStRL);
		fun << (POD_CinchOptStRR);
		fun << (POD_CinchOverheatingStRL);
		fun << (POD_CinchOverheatingStRR);
		fun << (POD_HighLatchDoorOpenStRL);
		fun << (POD_HighLatchDoorOpenStRR);
		fun << (POD_CinchHomeStRL);
		fun << (POD_CinchHomeStRR);
		fun << (POD_PROptStRL);
		fun << (POD_PROptStRR);
		fun << (POD_PROverheatingStRL);
		fun << (POD_PROverheatingStRR);
		fun << (UINM_RearLeftPowerReleaseReq);
		fun << (UINM_RearLeftPowerReleaseFaultSt);
		fun << (UINM_RearRightPowerReleaseReq);
		fun << (UINM_RearRightPowerReleaseFaultSt);
		fun << (UINM_RLDoorOutsideSwFaultSt);
		fun << (UINM_RLDoorOutsideSwSt);
		fun << (UINM_RRDoorOutsideSwFaultSt);
		fun << (UINM_RRDoorOutsideSwSt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (POD_CinchOptFailOccurRL);
		fun >> (POD_CinchOptFailOccurRR);
		fun >> (POD_PROptFailOccurRL);
		fun >> (POD_PROptFailOccurRR);
		fun >> (POD_HighLatchPosRL);
		fun >> (POD_HighLatchPosRR);
		fun >> (POD_CinchOptStRL);
		fun >> (POD_CinchOptStRR);
		fun >> (POD_CinchOverheatingStRL);
		fun >> (POD_CinchOverheatingStRR);
		fun >> (POD_HighLatchDoorOpenStRL);
		fun >> (POD_HighLatchDoorOpenStRR);
		fun >> (POD_CinchHomeStRL);
		fun >> (POD_CinchHomeStRR);
		fun >> (POD_PROptStRL);
		fun >> (POD_PROptStRR);
		fun >> (POD_PROverheatingStRL);
		fun >> (POD_PROverheatingStRR);
		fun >> (UINM_RearLeftPowerReleaseReq);
		fun >> (UINM_RearLeftPowerReleaseFaultSt);
		fun >> (UINM_RearRightPowerReleaseReq);
		fun >> (UINM_RearRightPowerReleaseFaultSt);
		fun >> (UINM_RLDoorOutsideSwFaultSt);
		fun >> (UINM_RLDoorOutsideSwSt);
		fun >> (UINM_RRDoorOutsideSwFaultSt);
		fun >> (UINM_RRDoorOutsideSwSt);
	}
};

#endif //____BDCPOD4_H__
