#ifndef ____BDCPOD5_H__
#define ____BDCPOD5_H__


#include "cstdint"






struct BDCPOD5 {
public:
	std::uint8_t POD_DoorAntiPinchOccurFL;
	std::uint8_t POD_DoorUrgentStopOccurFL;
	std::uint8_t POD_DoorOptFailOccurFL;
	std::uint8_t POD_DoorOptStFL;
	std::uint8_t POD_FollowUpReqFL;
	std::uint8_t POD_FollowUpReqVaildFL;
	std::uint8_t POD_CurDoorPosFL;
	std::uint8_t POD_DoorOverHeatingStFL;
	std::uint16_t POD_DoorHallCountFL;
	std::uint8_t POD_DSMSnsErrFlagFL1;
	std::uint8_t POD_DoorAntiPinchOccurFR;
	std::uint8_t POD_DoorUrgentStopOccurFR;
	std::uint8_t POD_DoorOptFailOccurFR;
	std::uint8_t POD_DoorOptStFR;
	std::uint8_t POD_FollowUpReqFR;
	std::uint8_t POD_FollowUpReqVaildFR;
	std::uint8_t POD_CurDoorPosFR;
	std::uint8_t POD_DoorOverHeatingStFR;
	std::uint16_t POD_DoorHallCountFR;
/*
	BDCPOD5() {}
	~BDCPOD5() {}
	BDCPOD5(const std::uint8_t _POD_DoorAntiPinchOccurFL,const std::uint8_t _POD_DoorUrgentStopOccurFL,const std::uint8_t _POD_DoorOptFailOccurFL,const std::uint8_t _POD_DoorOptStFL,const std::uint8_t _POD_FollowUpReqFL,const std::uint8_t _POD_FollowUpReqVaildFL,const std::uint8_t _POD_CurDoorPosFL,const std::uint8_t _POD_DoorOverHeatingStFL,const std::uint16_t _POD_DoorHallCountFL,const std::uint8_t _POD_DSMSnsErrFlagFL1,const std::uint8_t _POD_DoorAntiPinchOccurFR,const std::uint8_t _POD_DoorUrgentStopOccurFR,const std::uint8_t _POD_DoorOptFailOccurFR,const std::uint8_t _POD_DoorOptStFR,const std::uint8_t _POD_FollowUpReqFR,const std::uint8_t _POD_FollowUpReqVaildFR,const std::uint8_t _POD_CurDoorPosFR,const std::uint8_t _POD_DoorOverHeatingStFR,const std::uint16_t _POD_DoorHallCountFR):POD_DoorAntiPinchOccurFL(_POD_DoorAntiPinchOccurFL),POD_DoorUrgentStopOccurFL(_POD_DoorUrgentStopOccurFL),POD_DoorOptFailOccurFL(_POD_DoorOptFailOccurFL),POD_DoorOptStFL(_POD_DoorOptStFL),POD_FollowUpReqFL(_POD_FollowUpReqFL),POD_FollowUpReqVaildFL(_POD_FollowUpReqVaildFL),POD_CurDoorPosFL(_POD_CurDoorPosFL),POD_DoorOverHeatingStFL(_POD_DoorOverHeatingStFL),POD_DoorHallCountFL(_POD_DoorHallCountFL),POD_DSMSnsErrFlagFL1(_POD_DSMSnsErrFlagFL1),POD_DoorAntiPinchOccurFR(_POD_DoorAntiPinchOccurFR),POD_DoorUrgentStopOccurFR(_POD_DoorUrgentStopOccurFR),POD_DoorOptFailOccurFR(_POD_DoorOptFailOccurFR),POD_DoorOptStFR(_POD_DoorOptStFR),POD_FollowUpReqFR(_POD_FollowUpReqFR),POD_FollowUpReqVaildFR(_POD_FollowUpReqVaildFR),POD_CurDoorPosFR(_POD_CurDoorPosFR),POD_DoorOverHeatingStFR(_POD_DoorOverHeatingStFR),POD_DoorHallCountFR(_POD_DoorHallCountFR) {}
	BDCPOD5(const BDCPOD5 &_x){
		POD_DoorAntiPinchOccurFL = _x.POD_DoorAntiPinchOccurFL;
		POD_DoorUrgentStopOccurFL = _x.POD_DoorUrgentStopOccurFL;
		POD_DoorOptFailOccurFL = _x.POD_DoorOptFailOccurFL;
		POD_DoorOptStFL = _x.POD_DoorOptStFL;
		POD_FollowUpReqFL = _x.POD_FollowUpReqFL;
		POD_FollowUpReqVaildFL = _x.POD_FollowUpReqVaildFL;
		POD_CurDoorPosFL = _x.POD_CurDoorPosFL;
		POD_DoorOverHeatingStFL = _x.POD_DoorOverHeatingStFL;
		POD_DoorHallCountFL = _x.POD_DoorHallCountFL;
		POD_DSMSnsErrFlagFL1 = _x.POD_DSMSnsErrFlagFL1;
		POD_DoorAntiPinchOccurFR = _x.POD_DoorAntiPinchOccurFR;
		POD_DoorUrgentStopOccurFR = _x.POD_DoorUrgentStopOccurFR;
		POD_DoorOptFailOccurFR = _x.POD_DoorOptFailOccurFR;
		POD_DoorOptStFR = _x.POD_DoorOptStFR;
		POD_FollowUpReqFR = _x.POD_FollowUpReqFR;
		POD_FollowUpReqVaildFR = _x.POD_FollowUpReqVaildFR;
		POD_CurDoorPosFR = _x.POD_CurDoorPosFR;
		POD_DoorOverHeatingStFR = _x.POD_DoorOverHeatingStFR;
		POD_DoorHallCountFR = _x.POD_DoorHallCountFR;
	}
	BDCPOD5(BDCPOD5 &&_x){
		POD_DoorAntiPinchOccurFL = std::move(_x.POD_DoorAntiPinchOccurFL);
		POD_DoorUrgentStopOccurFL = std::move(_x.POD_DoorUrgentStopOccurFL);
		POD_DoorOptFailOccurFL = std::move(_x.POD_DoorOptFailOccurFL);
		POD_DoorOptStFL = std::move(_x.POD_DoorOptStFL);
		POD_FollowUpReqFL = std::move(_x.POD_FollowUpReqFL);
		POD_FollowUpReqVaildFL = std::move(_x.POD_FollowUpReqVaildFL);
		POD_CurDoorPosFL = std::move(_x.POD_CurDoorPosFL);
		POD_DoorOverHeatingStFL = std::move(_x.POD_DoorOverHeatingStFL);
		POD_DoorHallCountFL = std::move(_x.POD_DoorHallCountFL);
		POD_DSMSnsErrFlagFL1 = std::move(_x.POD_DSMSnsErrFlagFL1);
		POD_DoorAntiPinchOccurFR = std::move(_x.POD_DoorAntiPinchOccurFR);
		POD_DoorUrgentStopOccurFR = std::move(_x.POD_DoorUrgentStopOccurFR);
		POD_DoorOptFailOccurFR = std::move(_x.POD_DoorOptFailOccurFR);
		POD_DoorOptStFR = std::move(_x.POD_DoorOptStFR);
		POD_FollowUpReqFR = std::move(_x.POD_FollowUpReqFR);
		POD_FollowUpReqVaildFR = std::move(_x.POD_FollowUpReqVaildFR);
		POD_CurDoorPosFR = std::move(_x.POD_CurDoorPosFR);
		POD_DoorOverHeatingStFR = std::move(_x.POD_DoorOverHeatingStFR);
		POD_DoorHallCountFR = std::move(_x.POD_DoorHallCountFR);
	}
	BDCPOD5& operator=(const BDCPOD5 &_x){
		POD_DoorAntiPinchOccurFL = _x.POD_DoorAntiPinchOccurFL;
		POD_DoorUrgentStopOccurFL = _x.POD_DoorUrgentStopOccurFL;
		POD_DoorOptFailOccurFL = _x.POD_DoorOptFailOccurFL;
		POD_DoorOptStFL = _x.POD_DoorOptStFL;
		POD_FollowUpReqFL = _x.POD_FollowUpReqFL;
		POD_FollowUpReqVaildFL = _x.POD_FollowUpReqVaildFL;
		POD_CurDoorPosFL = _x.POD_CurDoorPosFL;
		POD_DoorOverHeatingStFL = _x.POD_DoorOverHeatingStFL;
		POD_DoorHallCountFL = _x.POD_DoorHallCountFL;
		POD_DSMSnsErrFlagFL1 = _x.POD_DSMSnsErrFlagFL1;
		POD_DoorAntiPinchOccurFR = _x.POD_DoorAntiPinchOccurFR;
		POD_DoorUrgentStopOccurFR = _x.POD_DoorUrgentStopOccurFR;
		POD_DoorOptFailOccurFR = _x.POD_DoorOptFailOccurFR;
		POD_DoorOptStFR = _x.POD_DoorOptStFR;
		POD_FollowUpReqFR = _x.POD_FollowUpReqFR;
		POD_FollowUpReqVaildFR = _x.POD_FollowUpReqVaildFR;
		POD_CurDoorPosFR = _x.POD_CurDoorPosFR;
		POD_DoorOverHeatingStFR = _x.POD_DoorOverHeatingStFR;
		POD_DoorHallCountFR = _x.POD_DoorHallCountFR;
		return *this;
	}
	BDCPOD5& operator=(BDCPOD5 &&_x){
		POD_DoorAntiPinchOccurFL = std::move(_x.POD_DoorAntiPinchOccurFL);
		POD_DoorUrgentStopOccurFL = std::move(_x.POD_DoorUrgentStopOccurFL);
		POD_DoorOptFailOccurFL = std::move(_x.POD_DoorOptFailOccurFL);
		POD_DoorOptStFL = std::move(_x.POD_DoorOptStFL);
		POD_FollowUpReqFL = std::move(_x.POD_FollowUpReqFL);
		POD_FollowUpReqVaildFL = std::move(_x.POD_FollowUpReqVaildFL);
		POD_CurDoorPosFL = std::move(_x.POD_CurDoorPosFL);
		POD_DoorOverHeatingStFL = std::move(_x.POD_DoorOverHeatingStFL);
		POD_DoorHallCountFL = std::move(_x.POD_DoorHallCountFL);
		POD_DSMSnsErrFlagFL1 = std::move(_x.POD_DSMSnsErrFlagFL1);
		POD_DoorAntiPinchOccurFR = std::move(_x.POD_DoorAntiPinchOccurFR);
		POD_DoorUrgentStopOccurFR = std::move(_x.POD_DoorUrgentStopOccurFR);
		POD_DoorOptFailOccurFR = std::move(_x.POD_DoorOptFailOccurFR);
		POD_DoorOptStFR = std::move(_x.POD_DoorOptStFR);
		POD_FollowUpReqFR = std::move(_x.POD_FollowUpReqFR);
		POD_FollowUpReqVaildFR = std::move(_x.POD_FollowUpReqVaildFR);
		POD_CurDoorPosFR = std::move(_x.POD_CurDoorPosFR);
		POD_DoorOverHeatingStFR = std::move(_x.POD_DoorOverHeatingStFR);
		POD_DoorHallCountFR = std::move(_x.POD_DoorHallCountFR);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(POD_DoorAntiPinchOccurFL);
		fun(POD_DoorUrgentStopOccurFL);
		fun(POD_DoorOptFailOccurFL);
		fun(POD_DoorOptStFL);
		fun(POD_FollowUpReqFL);
		fun(POD_FollowUpReqVaildFL);
		fun(POD_CurDoorPosFL);
		fun(POD_DoorOverHeatingStFL);
		fun(POD_DoorHallCountFL);
		fun(POD_DSMSnsErrFlagFL1);
		fun(POD_DoorAntiPinchOccurFR);
		fun(POD_DoorUrgentStopOccurFR);
		fun(POD_DoorOptFailOccurFR);
		fun(POD_DoorOptStFR);
		fun(POD_FollowUpReqFR);
		fun(POD_FollowUpReqVaildFR);
		fun(POD_CurDoorPosFR);
		fun(POD_DoorOverHeatingStFR);
		fun(POD_DoorHallCountFR);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(POD_DoorAntiPinchOccurFL);
		fun(POD_DoorUrgentStopOccurFL);
		fun(POD_DoorOptFailOccurFL);
		fun(POD_DoorOptStFL);
		fun(POD_FollowUpReqFL);
		fun(POD_FollowUpReqVaildFL);
		fun(POD_CurDoorPosFL);
		fun(POD_DoorOverHeatingStFL);
		fun(POD_DoorHallCountFL);
		fun(POD_DSMSnsErrFlagFL1);
		fun(POD_DoorAntiPinchOccurFR);
		fun(POD_DoorUrgentStopOccurFR);
		fun(POD_DoorOptFailOccurFR);
		fun(POD_DoorOptStFR);
		fun(POD_FollowUpReqFR);
		fun(POD_FollowUpReqVaildFR);
		fun(POD_CurDoorPosFR);
		fun(POD_DoorOverHeatingStFR);
		fun(POD_DoorHallCountFR);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (POD_DoorAntiPinchOccurFL);
		fun << (POD_DoorUrgentStopOccurFL);
		fun << (POD_DoorOptFailOccurFL);
		fun << (POD_DoorOptStFL);
		fun << (POD_FollowUpReqFL);
		fun << (POD_FollowUpReqVaildFL);
		fun << (POD_CurDoorPosFL);
		fun << (POD_DoorOverHeatingStFL);
		fun << (POD_DoorHallCountFL);
		fun << (POD_DSMSnsErrFlagFL1);
		fun << (POD_DoorAntiPinchOccurFR);
		fun << (POD_DoorUrgentStopOccurFR);
		fun << (POD_DoorOptFailOccurFR);
		fun << (POD_DoorOptStFR);
		fun << (POD_FollowUpReqFR);
		fun << (POD_FollowUpReqVaildFR);
		fun << (POD_CurDoorPosFR);
		fun << (POD_DoorOverHeatingStFR);
		fun << (POD_DoorHallCountFR);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (POD_DoorAntiPinchOccurFL);
		fun >> (POD_DoorUrgentStopOccurFL);
		fun >> (POD_DoorOptFailOccurFL);
		fun >> (POD_DoorOptStFL);
		fun >> (POD_FollowUpReqFL);
		fun >> (POD_FollowUpReqVaildFL);
		fun >> (POD_CurDoorPosFL);
		fun >> (POD_DoorOverHeatingStFL);
		fun >> (POD_DoorHallCountFL);
		fun >> (POD_DSMSnsErrFlagFL1);
		fun >> (POD_DoorAntiPinchOccurFR);
		fun >> (POD_DoorUrgentStopOccurFR);
		fun >> (POD_DoorOptFailOccurFR);
		fun >> (POD_DoorOptStFR);
		fun >> (POD_FollowUpReqFR);
		fun >> (POD_FollowUpReqVaildFR);
		fun >> (POD_CurDoorPosFR);
		fun >> (POD_DoorOverHeatingStFR);
		fun >> (POD_DoorHallCountFR);
	}
};

#endif //____BDCPOD5_H__
