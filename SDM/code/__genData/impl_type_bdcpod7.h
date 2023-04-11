#ifndef ____BDCPOD7_H__
#define ____BDCPOD7_H__


#include "cstdint"






struct BDCPOD7 {
public:
	std::uint8_t POD_DoorAntiPinchOccurRL;
	std::uint8_t POD_DoorUrgentStopOccurRL;
	std::uint8_t POD_DoorOptFailOccurRL;
	std::uint8_t POD_DoorOptStRL;
	std::uint8_t POD_FollowUpReqRL;
	std::uint8_t POD_FollowUpReqVaildRL;
	std::uint8_t POD_CurDoorPosRL;
	std::uint8_t POD_DoorOverHeatingStRL;
	std::uint16_t POD_DoorHallCountRL;
	std::uint8_t POD_DoorAntiPinchOccurRR;
	std::uint8_t POD_DoorUrgentStopOccurRR;
	std::uint8_t POD_DoorOptFailOccurRR;
	std::uint8_t POD_DoorOptStRR;
	std::uint8_t POD_FollowUpReqRR;
	std::uint8_t POD_FollowUpReqRRVaild;
	std::uint8_t POD_CurDoorPosRR;
	std::uint8_t POD_DoorOverHeatingStRR;
	std::uint16_t POD_DoorHallCountRR;
/*
	BDCPOD7() {}
	~BDCPOD7() {}
	BDCPOD7(const std::uint8_t _POD_DoorAntiPinchOccurRL,const std::uint8_t _POD_DoorUrgentStopOccurRL,const std::uint8_t _POD_DoorOptFailOccurRL,const std::uint8_t _POD_DoorOptStRL,const std::uint8_t _POD_FollowUpReqRL,const std::uint8_t _POD_FollowUpReqVaildRL,const std::uint8_t _POD_CurDoorPosRL,const std::uint8_t _POD_DoorOverHeatingStRL,const std::uint16_t _POD_DoorHallCountRL,const std::uint8_t _POD_DoorAntiPinchOccurRR,const std::uint8_t _POD_DoorUrgentStopOccurRR,const std::uint8_t _POD_DoorOptFailOccurRR,const std::uint8_t _POD_DoorOptStRR,const std::uint8_t _POD_FollowUpReqRR,const std::uint8_t _POD_FollowUpReqRRVaild,const std::uint8_t _POD_CurDoorPosRR,const std::uint8_t _POD_DoorOverHeatingStRR,const std::uint16_t _POD_DoorHallCountRR):POD_DoorAntiPinchOccurRL(_POD_DoorAntiPinchOccurRL),POD_DoorUrgentStopOccurRL(_POD_DoorUrgentStopOccurRL),POD_DoorOptFailOccurRL(_POD_DoorOptFailOccurRL),POD_DoorOptStRL(_POD_DoorOptStRL),POD_FollowUpReqRL(_POD_FollowUpReqRL),POD_FollowUpReqVaildRL(_POD_FollowUpReqVaildRL),POD_CurDoorPosRL(_POD_CurDoorPosRL),POD_DoorOverHeatingStRL(_POD_DoorOverHeatingStRL),POD_DoorHallCountRL(_POD_DoorHallCountRL),POD_DoorAntiPinchOccurRR(_POD_DoorAntiPinchOccurRR),POD_DoorUrgentStopOccurRR(_POD_DoorUrgentStopOccurRR),POD_DoorOptFailOccurRR(_POD_DoorOptFailOccurRR),POD_DoorOptStRR(_POD_DoorOptStRR),POD_FollowUpReqRR(_POD_FollowUpReqRR),POD_FollowUpReqRRVaild(_POD_FollowUpReqRRVaild),POD_CurDoorPosRR(_POD_CurDoorPosRR),POD_DoorOverHeatingStRR(_POD_DoorOverHeatingStRR),POD_DoorHallCountRR(_POD_DoorHallCountRR) {}
	BDCPOD7(const BDCPOD7 &_x){
		POD_DoorAntiPinchOccurRL = _x.POD_DoorAntiPinchOccurRL;
		POD_DoorUrgentStopOccurRL = _x.POD_DoorUrgentStopOccurRL;
		POD_DoorOptFailOccurRL = _x.POD_DoorOptFailOccurRL;
		POD_DoorOptStRL = _x.POD_DoorOptStRL;
		POD_FollowUpReqRL = _x.POD_FollowUpReqRL;
		POD_FollowUpReqVaildRL = _x.POD_FollowUpReqVaildRL;
		POD_CurDoorPosRL = _x.POD_CurDoorPosRL;
		POD_DoorOverHeatingStRL = _x.POD_DoorOverHeatingStRL;
		POD_DoorHallCountRL = _x.POD_DoorHallCountRL;
		POD_DoorAntiPinchOccurRR = _x.POD_DoorAntiPinchOccurRR;
		POD_DoorUrgentStopOccurRR = _x.POD_DoorUrgentStopOccurRR;
		POD_DoorOptFailOccurRR = _x.POD_DoorOptFailOccurRR;
		POD_DoorOptStRR = _x.POD_DoorOptStRR;
		POD_FollowUpReqRR = _x.POD_FollowUpReqRR;
		POD_FollowUpReqRRVaild = _x.POD_FollowUpReqRRVaild;
		POD_CurDoorPosRR = _x.POD_CurDoorPosRR;
		POD_DoorOverHeatingStRR = _x.POD_DoorOverHeatingStRR;
		POD_DoorHallCountRR = _x.POD_DoorHallCountRR;
	}
	BDCPOD7(BDCPOD7 &&_x){
		POD_DoorAntiPinchOccurRL = std::move(_x.POD_DoorAntiPinchOccurRL);
		POD_DoorUrgentStopOccurRL = std::move(_x.POD_DoorUrgentStopOccurRL);
		POD_DoorOptFailOccurRL = std::move(_x.POD_DoorOptFailOccurRL);
		POD_DoorOptStRL = std::move(_x.POD_DoorOptStRL);
		POD_FollowUpReqRL = std::move(_x.POD_FollowUpReqRL);
		POD_FollowUpReqVaildRL = std::move(_x.POD_FollowUpReqVaildRL);
		POD_CurDoorPosRL = std::move(_x.POD_CurDoorPosRL);
		POD_DoorOverHeatingStRL = std::move(_x.POD_DoorOverHeatingStRL);
		POD_DoorHallCountRL = std::move(_x.POD_DoorHallCountRL);
		POD_DoorAntiPinchOccurRR = std::move(_x.POD_DoorAntiPinchOccurRR);
		POD_DoorUrgentStopOccurRR = std::move(_x.POD_DoorUrgentStopOccurRR);
		POD_DoorOptFailOccurRR = std::move(_x.POD_DoorOptFailOccurRR);
		POD_DoorOptStRR = std::move(_x.POD_DoorOptStRR);
		POD_FollowUpReqRR = std::move(_x.POD_FollowUpReqRR);
		POD_FollowUpReqRRVaild = std::move(_x.POD_FollowUpReqRRVaild);
		POD_CurDoorPosRR = std::move(_x.POD_CurDoorPosRR);
		POD_DoorOverHeatingStRR = std::move(_x.POD_DoorOverHeatingStRR);
		POD_DoorHallCountRR = std::move(_x.POD_DoorHallCountRR);
	}
	BDCPOD7& operator=(const BDCPOD7 &_x){
		POD_DoorAntiPinchOccurRL = _x.POD_DoorAntiPinchOccurRL;
		POD_DoorUrgentStopOccurRL = _x.POD_DoorUrgentStopOccurRL;
		POD_DoorOptFailOccurRL = _x.POD_DoorOptFailOccurRL;
		POD_DoorOptStRL = _x.POD_DoorOptStRL;
		POD_FollowUpReqRL = _x.POD_FollowUpReqRL;
		POD_FollowUpReqVaildRL = _x.POD_FollowUpReqVaildRL;
		POD_CurDoorPosRL = _x.POD_CurDoorPosRL;
		POD_DoorOverHeatingStRL = _x.POD_DoorOverHeatingStRL;
		POD_DoorHallCountRL = _x.POD_DoorHallCountRL;
		POD_DoorAntiPinchOccurRR = _x.POD_DoorAntiPinchOccurRR;
		POD_DoorUrgentStopOccurRR = _x.POD_DoorUrgentStopOccurRR;
		POD_DoorOptFailOccurRR = _x.POD_DoorOptFailOccurRR;
		POD_DoorOptStRR = _x.POD_DoorOptStRR;
		POD_FollowUpReqRR = _x.POD_FollowUpReqRR;
		POD_FollowUpReqRRVaild = _x.POD_FollowUpReqRRVaild;
		POD_CurDoorPosRR = _x.POD_CurDoorPosRR;
		POD_DoorOverHeatingStRR = _x.POD_DoorOverHeatingStRR;
		POD_DoorHallCountRR = _x.POD_DoorHallCountRR;
		return *this;
	}
	BDCPOD7& operator=(BDCPOD7 &&_x){
		POD_DoorAntiPinchOccurRL = std::move(_x.POD_DoorAntiPinchOccurRL);
		POD_DoorUrgentStopOccurRL = std::move(_x.POD_DoorUrgentStopOccurRL);
		POD_DoorOptFailOccurRL = std::move(_x.POD_DoorOptFailOccurRL);
		POD_DoorOptStRL = std::move(_x.POD_DoorOptStRL);
		POD_FollowUpReqRL = std::move(_x.POD_FollowUpReqRL);
		POD_FollowUpReqVaildRL = std::move(_x.POD_FollowUpReqVaildRL);
		POD_CurDoorPosRL = std::move(_x.POD_CurDoorPosRL);
		POD_DoorOverHeatingStRL = std::move(_x.POD_DoorOverHeatingStRL);
		POD_DoorHallCountRL = std::move(_x.POD_DoorHallCountRL);
		POD_DoorAntiPinchOccurRR = std::move(_x.POD_DoorAntiPinchOccurRR);
		POD_DoorUrgentStopOccurRR = std::move(_x.POD_DoorUrgentStopOccurRR);
		POD_DoorOptFailOccurRR = std::move(_x.POD_DoorOptFailOccurRR);
		POD_DoorOptStRR = std::move(_x.POD_DoorOptStRR);
		POD_FollowUpReqRR = std::move(_x.POD_FollowUpReqRR);
		POD_FollowUpReqRRVaild = std::move(_x.POD_FollowUpReqRRVaild);
		POD_CurDoorPosRR = std::move(_x.POD_CurDoorPosRR);
		POD_DoorOverHeatingStRR = std::move(_x.POD_DoorOverHeatingStRR);
		POD_DoorHallCountRR = std::move(_x.POD_DoorHallCountRR);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(POD_DoorAntiPinchOccurRL);
		fun(POD_DoorUrgentStopOccurRL);
		fun(POD_DoorOptFailOccurRL);
		fun(POD_DoorOptStRL);
		fun(POD_FollowUpReqRL);
		fun(POD_FollowUpReqVaildRL);
		fun(POD_CurDoorPosRL);
		fun(POD_DoorOverHeatingStRL);
		fun(POD_DoorHallCountRL);
		fun(POD_DoorAntiPinchOccurRR);
		fun(POD_DoorUrgentStopOccurRR);
		fun(POD_DoorOptFailOccurRR);
		fun(POD_DoorOptStRR);
		fun(POD_FollowUpReqRR);
		fun(POD_FollowUpReqRRVaild);
		fun(POD_CurDoorPosRR);
		fun(POD_DoorOverHeatingStRR);
		fun(POD_DoorHallCountRR);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(POD_DoorAntiPinchOccurRL);
		fun(POD_DoorUrgentStopOccurRL);
		fun(POD_DoorOptFailOccurRL);
		fun(POD_DoorOptStRL);
		fun(POD_FollowUpReqRL);
		fun(POD_FollowUpReqVaildRL);
		fun(POD_CurDoorPosRL);
		fun(POD_DoorOverHeatingStRL);
		fun(POD_DoorHallCountRL);
		fun(POD_DoorAntiPinchOccurRR);
		fun(POD_DoorUrgentStopOccurRR);
		fun(POD_DoorOptFailOccurRR);
		fun(POD_DoorOptStRR);
		fun(POD_FollowUpReqRR);
		fun(POD_FollowUpReqRRVaild);
		fun(POD_CurDoorPosRR);
		fun(POD_DoorOverHeatingStRR);
		fun(POD_DoorHallCountRR);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (POD_DoorAntiPinchOccurRL);
		fun << (POD_DoorUrgentStopOccurRL);
		fun << (POD_DoorOptFailOccurRL);
		fun << (POD_DoorOptStRL);
		fun << (POD_FollowUpReqRL);
		fun << (POD_FollowUpReqVaildRL);
		fun << (POD_CurDoorPosRL);
		fun << (POD_DoorOverHeatingStRL);
		fun << (POD_DoorHallCountRL);
		fun << (POD_DoorAntiPinchOccurRR);
		fun << (POD_DoorUrgentStopOccurRR);
		fun << (POD_DoorOptFailOccurRR);
		fun << (POD_DoorOptStRR);
		fun << (POD_FollowUpReqRR);
		fun << (POD_FollowUpReqRRVaild);
		fun << (POD_CurDoorPosRR);
		fun << (POD_DoorOverHeatingStRR);
		fun << (POD_DoorHallCountRR);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (POD_DoorAntiPinchOccurRL);
		fun >> (POD_DoorUrgentStopOccurRL);
		fun >> (POD_DoorOptFailOccurRL);
		fun >> (POD_DoorOptStRL);
		fun >> (POD_FollowUpReqRL);
		fun >> (POD_FollowUpReqVaildRL);
		fun >> (POD_CurDoorPosRL);
		fun >> (POD_DoorOverHeatingStRL);
		fun >> (POD_DoorHallCountRL);
		fun >> (POD_DoorAntiPinchOccurRR);
		fun >> (POD_DoorUrgentStopOccurRR);
		fun >> (POD_DoorOptFailOccurRR);
		fun >> (POD_DoorOptStRR);
		fun >> (POD_FollowUpReqRR);
		fun >> (POD_FollowUpReqRRVaild);
		fun >> (POD_CurDoorPosRR);
		fun >> (POD_DoorOverHeatingStRR);
		fun >> (POD_DoorHallCountRR);
	}
};

#endif //____BDCPOD7_H__
