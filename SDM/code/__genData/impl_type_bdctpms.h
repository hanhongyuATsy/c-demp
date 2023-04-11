#ifndef ____BDCTPMS_H__
#define ____BDCTPMS_H__


#include "cstdint"






struct BDCTPMS {
public:
	std::uint32_t TPMS_FrontLeftSensorID;
	std::uint32_t TPMS_FrontRightSensorID;
	std::uint32_t TPMS_RearRightSensorID;
	std::uint32_t TPMS_RearLeftSensorID;
	std::uint8_t TPMS_FrontLeftSensorLowBattery;
	std::uint8_t TPMS_FrontRighSensorLowBattery;
	std::uint8_t TPMS_RearRightSensorLowBattery;
	std::uint8_t TPMS_RearLeftSensorLowBattery;
	std::uint8_t TPMS_FrontLeftSensorFailure;
	std::uint8_t TPMS_FrontRightSensorFailure;
	std::uint8_t TPMS_RearRightSensorFailure;
	std::uint8_t TPMS_RearLeftSensorFailure;
	std::uint8_t TPMS_FrontLeftSensorNotCalibrate;
	std::uint8_t TPMS_FrontRightSensorNotCalibrate;
	std::uint8_t TPMS_RearRightSensorNotCalibrate;
	std::uint8_t TPMS_RearLeftSensorNotCalibrate;
	std::uint8_t TPMS_FrontLeftSensorMute;
	std::uint8_t TPMS_FrontRightSensorMute;
	std::uint8_t TPMS_RearRightSensorMute;
	std::uint8_t TPMS_RearLeftSensorMute;
/*
	BDCTPMS() {}
	~BDCTPMS() {}
	BDCTPMS(const std::uint32_t _TPMS_FrontLeftSensorID,const std::uint32_t _TPMS_FrontRightSensorID,const std::uint32_t _TPMS_RearRightSensorID,const std::uint32_t _TPMS_RearLeftSensorID,const std::uint8_t _TPMS_FrontLeftSensorLowBattery,const std::uint8_t _TPMS_FrontRighSensorLowBattery,const std::uint8_t _TPMS_RearRightSensorLowBattery,const std::uint8_t _TPMS_RearLeftSensorLowBattery,const std::uint8_t _TPMS_FrontLeftSensorFailure,const std::uint8_t _TPMS_FrontRightSensorFailure,const std::uint8_t _TPMS_RearRightSensorFailure,const std::uint8_t _TPMS_RearLeftSensorFailure,const std::uint8_t _TPMS_FrontLeftSensorNotCalibrate,const std::uint8_t _TPMS_FrontRightSensorNotCalibrate,const std::uint8_t _TPMS_RearRightSensorNotCalibrate,const std::uint8_t _TPMS_RearLeftSensorNotCalibrate,const std::uint8_t _TPMS_FrontLeftSensorMute,const std::uint8_t _TPMS_FrontRightSensorMute,const std::uint8_t _TPMS_RearRightSensorMute,const std::uint8_t _TPMS_RearLeftSensorMute):TPMS_FrontLeftSensorID(_TPMS_FrontLeftSensorID),TPMS_FrontRightSensorID(_TPMS_FrontRightSensorID),TPMS_RearRightSensorID(_TPMS_RearRightSensorID),TPMS_RearLeftSensorID(_TPMS_RearLeftSensorID),TPMS_FrontLeftSensorLowBattery(_TPMS_FrontLeftSensorLowBattery),TPMS_FrontRighSensorLowBattery(_TPMS_FrontRighSensorLowBattery),TPMS_RearRightSensorLowBattery(_TPMS_RearRightSensorLowBattery),TPMS_RearLeftSensorLowBattery(_TPMS_RearLeftSensorLowBattery),TPMS_FrontLeftSensorFailure(_TPMS_FrontLeftSensorFailure),TPMS_FrontRightSensorFailure(_TPMS_FrontRightSensorFailure),TPMS_RearRightSensorFailure(_TPMS_RearRightSensorFailure),TPMS_RearLeftSensorFailure(_TPMS_RearLeftSensorFailure),TPMS_FrontLeftSensorNotCalibrate(_TPMS_FrontLeftSensorNotCalibrate),TPMS_FrontRightSensorNotCalibrate(_TPMS_FrontRightSensorNotCalibrate),TPMS_RearRightSensorNotCalibrate(_TPMS_RearRightSensorNotCalibrate),TPMS_RearLeftSensorNotCalibrate(_TPMS_RearLeftSensorNotCalibrate),TPMS_FrontLeftSensorMute(_TPMS_FrontLeftSensorMute),TPMS_FrontRightSensorMute(_TPMS_FrontRightSensorMute),TPMS_RearRightSensorMute(_TPMS_RearRightSensorMute),TPMS_RearLeftSensorMute(_TPMS_RearLeftSensorMute) {}
	BDCTPMS(const BDCTPMS &_x){
		TPMS_FrontLeftSensorID = _x.TPMS_FrontLeftSensorID;
		TPMS_FrontRightSensorID = _x.TPMS_FrontRightSensorID;
		TPMS_RearRightSensorID = _x.TPMS_RearRightSensorID;
		TPMS_RearLeftSensorID = _x.TPMS_RearLeftSensorID;
		TPMS_FrontLeftSensorLowBattery = _x.TPMS_FrontLeftSensorLowBattery;
		TPMS_FrontRighSensorLowBattery = _x.TPMS_FrontRighSensorLowBattery;
		TPMS_RearRightSensorLowBattery = _x.TPMS_RearRightSensorLowBattery;
		TPMS_RearLeftSensorLowBattery = _x.TPMS_RearLeftSensorLowBattery;
		TPMS_FrontLeftSensorFailure = _x.TPMS_FrontLeftSensorFailure;
		TPMS_FrontRightSensorFailure = _x.TPMS_FrontRightSensorFailure;
		TPMS_RearRightSensorFailure = _x.TPMS_RearRightSensorFailure;
		TPMS_RearLeftSensorFailure = _x.TPMS_RearLeftSensorFailure;
		TPMS_FrontLeftSensorNotCalibrate = _x.TPMS_FrontLeftSensorNotCalibrate;
		TPMS_FrontRightSensorNotCalibrate = _x.TPMS_FrontRightSensorNotCalibrate;
		TPMS_RearRightSensorNotCalibrate = _x.TPMS_RearRightSensorNotCalibrate;
		TPMS_RearLeftSensorNotCalibrate = _x.TPMS_RearLeftSensorNotCalibrate;
		TPMS_FrontLeftSensorMute = _x.TPMS_FrontLeftSensorMute;
		TPMS_FrontRightSensorMute = _x.TPMS_FrontRightSensorMute;
		TPMS_RearRightSensorMute = _x.TPMS_RearRightSensorMute;
		TPMS_RearLeftSensorMute = _x.TPMS_RearLeftSensorMute;
	}
	BDCTPMS(BDCTPMS &&_x){
		TPMS_FrontLeftSensorID = std::move(_x.TPMS_FrontLeftSensorID);
		TPMS_FrontRightSensorID = std::move(_x.TPMS_FrontRightSensorID);
		TPMS_RearRightSensorID = std::move(_x.TPMS_RearRightSensorID);
		TPMS_RearLeftSensorID = std::move(_x.TPMS_RearLeftSensorID);
		TPMS_FrontLeftSensorLowBattery = std::move(_x.TPMS_FrontLeftSensorLowBattery);
		TPMS_FrontRighSensorLowBattery = std::move(_x.TPMS_FrontRighSensorLowBattery);
		TPMS_RearRightSensorLowBattery = std::move(_x.TPMS_RearRightSensorLowBattery);
		TPMS_RearLeftSensorLowBattery = std::move(_x.TPMS_RearLeftSensorLowBattery);
		TPMS_FrontLeftSensorFailure = std::move(_x.TPMS_FrontLeftSensorFailure);
		TPMS_FrontRightSensorFailure = std::move(_x.TPMS_FrontRightSensorFailure);
		TPMS_RearRightSensorFailure = std::move(_x.TPMS_RearRightSensorFailure);
		TPMS_RearLeftSensorFailure = std::move(_x.TPMS_RearLeftSensorFailure);
		TPMS_FrontLeftSensorNotCalibrate = std::move(_x.TPMS_FrontLeftSensorNotCalibrate);
		TPMS_FrontRightSensorNotCalibrate = std::move(_x.TPMS_FrontRightSensorNotCalibrate);
		TPMS_RearRightSensorNotCalibrate = std::move(_x.TPMS_RearRightSensorNotCalibrate);
		TPMS_RearLeftSensorNotCalibrate = std::move(_x.TPMS_RearLeftSensorNotCalibrate);
		TPMS_FrontLeftSensorMute = std::move(_x.TPMS_FrontLeftSensorMute);
		TPMS_FrontRightSensorMute = std::move(_x.TPMS_FrontRightSensorMute);
		TPMS_RearRightSensorMute = std::move(_x.TPMS_RearRightSensorMute);
		TPMS_RearLeftSensorMute = std::move(_x.TPMS_RearLeftSensorMute);
	}
	BDCTPMS& operator=(const BDCTPMS &_x){
		TPMS_FrontLeftSensorID = _x.TPMS_FrontLeftSensorID;
		TPMS_FrontRightSensorID = _x.TPMS_FrontRightSensorID;
		TPMS_RearRightSensorID = _x.TPMS_RearRightSensorID;
		TPMS_RearLeftSensorID = _x.TPMS_RearLeftSensorID;
		TPMS_FrontLeftSensorLowBattery = _x.TPMS_FrontLeftSensorLowBattery;
		TPMS_FrontRighSensorLowBattery = _x.TPMS_FrontRighSensorLowBattery;
		TPMS_RearRightSensorLowBattery = _x.TPMS_RearRightSensorLowBattery;
		TPMS_RearLeftSensorLowBattery = _x.TPMS_RearLeftSensorLowBattery;
		TPMS_FrontLeftSensorFailure = _x.TPMS_FrontLeftSensorFailure;
		TPMS_FrontRightSensorFailure = _x.TPMS_FrontRightSensorFailure;
		TPMS_RearRightSensorFailure = _x.TPMS_RearRightSensorFailure;
		TPMS_RearLeftSensorFailure = _x.TPMS_RearLeftSensorFailure;
		TPMS_FrontLeftSensorNotCalibrate = _x.TPMS_FrontLeftSensorNotCalibrate;
		TPMS_FrontRightSensorNotCalibrate = _x.TPMS_FrontRightSensorNotCalibrate;
		TPMS_RearRightSensorNotCalibrate = _x.TPMS_RearRightSensorNotCalibrate;
		TPMS_RearLeftSensorNotCalibrate = _x.TPMS_RearLeftSensorNotCalibrate;
		TPMS_FrontLeftSensorMute = _x.TPMS_FrontLeftSensorMute;
		TPMS_FrontRightSensorMute = _x.TPMS_FrontRightSensorMute;
		TPMS_RearRightSensorMute = _x.TPMS_RearRightSensorMute;
		TPMS_RearLeftSensorMute = _x.TPMS_RearLeftSensorMute;
		return *this;
	}
	BDCTPMS& operator=(BDCTPMS &&_x){
		TPMS_FrontLeftSensorID = std::move(_x.TPMS_FrontLeftSensorID);
		TPMS_FrontRightSensorID = std::move(_x.TPMS_FrontRightSensorID);
		TPMS_RearRightSensorID = std::move(_x.TPMS_RearRightSensorID);
		TPMS_RearLeftSensorID = std::move(_x.TPMS_RearLeftSensorID);
		TPMS_FrontLeftSensorLowBattery = std::move(_x.TPMS_FrontLeftSensorLowBattery);
		TPMS_FrontRighSensorLowBattery = std::move(_x.TPMS_FrontRighSensorLowBattery);
		TPMS_RearRightSensorLowBattery = std::move(_x.TPMS_RearRightSensorLowBattery);
		TPMS_RearLeftSensorLowBattery = std::move(_x.TPMS_RearLeftSensorLowBattery);
		TPMS_FrontLeftSensorFailure = std::move(_x.TPMS_FrontLeftSensorFailure);
		TPMS_FrontRightSensorFailure = std::move(_x.TPMS_FrontRightSensorFailure);
		TPMS_RearRightSensorFailure = std::move(_x.TPMS_RearRightSensorFailure);
		TPMS_RearLeftSensorFailure = std::move(_x.TPMS_RearLeftSensorFailure);
		TPMS_FrontLeftSensorNotCalibrate = std::move(_x.TPMS_FrontLeftSensorNotCalibrate);
		TPMS_FrontRightSensorNotCalibrate = std::move(_x.TPMS_FrontRightSensorNotCalibrate);
		TPMS_RearRightSensorNotCalibrate = std::move(_x.TPMS_RearRightSensorNotCalibrate);
		TPMS_RearLeftSensorNotCalibrate = std::move(_x.TPMS_RearLeftSensorNotCalibrate);
		TPMS_FrontLeftSensorMute = std::move(_x.TPMS_FrontLeftSensorMute);
		TPMS_FrontRightSensorMute = std::move(_x.TPMS_FrontRightSensorMute);
		TPMS_RearRightSensorMute = std::move(_x.TPMS_RearRightSensorMute);
		TPMS_RearLeftSensorMute = std::move(_x.TPMS_RearLeftSensorMute);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(TPMS_FrontLeftSensorID);
		fun(TPMS_FrontRightSensorID);
		fun(TPMS_RearRightSensorID);
		fun(TPMS_RearLeftSensorID);
		fun(TPMS_FrontLeftSensorLowBattery);
		fun(TPMS_FrontRighSensorLowBattery);
		fun(TPMS_RearRightSensorLowBattery);
		fun(TPMS_RearLeftSensorLowBattery);
		fun(TPMS_FrontLeftSensorFailure);
		fun(TPMS_FrontRightSensorFailure);
		fun(TPMS_RearRightSensorFailure);
		fun(TPMS_RearLeftSensorFailure);
		fun(TPMS_FrontLeftSensorNotCalibrate);
		fun(TPMS_FrontRightSensorNotCalibrate);
		fun(TPMS_RearRightSensorNotCalibrate);
		fun(TPMS_RearLeftSensorNotCalibrate);
		fun(TPMS_FrontLeftSensorMute);
		fun(TPMS_FrontRightSensorMute);
		fun(TPMS_RearRightSensorMute);
		fun(TPMS_RearLeftSensorMute);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(TPMS_FrontLeftSensorID);
		fun(TPMS_FrontRightSensorID);
		fun(TPMS_RearRightSensorID);
		fun(TPMS_RearLeftSensorID);
		fun(TPMS_FrontLeftSensorLowBattery);
		fun(TPMS_FrontRighSensorLowBattery);
		fun(TPMS_RearRightSensorLowBattery);
		fun(TPMS_RearLeftSensorLowBattery);
		fun(TPMS_FrontLeftSensorFailure);
		fun(TPMS_FrontRightSensorFailure);
		fun(TPMS_RearRightSensorFailure);
		fun(TPMS_RearLeftSensorFailure);
		fun(TPMS_FrontLeftSensorNotCalibrate);
		fun(TPMS_FrontRightSensorNotCalibrate);
		fun(TPMS_RearRightSensorNotCalibrate);
		fun(TPMS_RearLeftSensorNotCalibrate);
		fun(TPMS_FrontLeftSensorMute);
		fun(TPMS_FrontRightSensorMute);
		fun(TPMS_RearRightSensorMute);
		fun(TPMS_RearLeftSensorMute);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (TPMS_FrontLeftSensorID);
		fun << (TPMS_FrontRightSensorID);
		fun << (TPMS_RearRightSensorID);
		fun << (TPMS_RearLeftSensorID);
		fun << (TPMS_FrontLeftSensorLowBattery);
		fun << (TPMS_FrontRighSensorLowBattery);
		fun << (TPMS_RearRightSensorLowBattery);
		fun << (TPMS_RearLeftSensorLowBattery);
		fun << (TPMS_FrontLeftSensorFailure);
		fun << (TPMS_FrontRightSensorFailure);
		fun << (TPMS_RearRightSensorFailure);
		fun << (TPMS_RearLeftSensorFailure);
		fun << (TPMS_FrontLeftSensorNotCalibrate);
		fun << (TPMS_FrontRightSensorNotCalibrate);
		fun << (TPMS_RearRightSensorNotCalibrate);
		fun << (TPMS_RearLeftSensorNotCalibrate);
		fun << (TPMS_FrontLeftSensorMute);
		fun << (TPMS_FrontRightSensorMute);
		fun << (TPMS_RearRightSensorMute);
		fun << (TPMS_RearLeftSensorMute);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (TPMS_FrontLeftSensorID);
		fun >> (TPMS_FrontRightSensorID);
		fun >> (TPMS_RearRightSensorID);
		fun >> (TPMS_RearLeftSensorID);
		fun >> (TPMS_FrontLeftSensorLowBattery);
		fun >> (TPMS_FrontRighSensorLowBattery);
		fun >> (TPMS_RearRightSensorLowBattery);
		fun >> (TPMS_RearLeftSensorLowBattery);
		fun >> (TPMS_FrontLeftSensorFailure);
		fun >> (TPMS_FrontRightSensorFailure);
		fun >> (TPMS_RearRightSensorFailure);
		fun >> (TPMS_RearLeftSensorFailure);
		fun >> (TPMS_FrontLeftSensorNotCalibrate);
		fun >> (TPMS_FrontRightSensorNotCalibrate);
		fun >> (TPMS_RearRightSensorNotCalibrate);
		fun >> (TPMS_RearLeftSensorNotCalibrate);
		fun >> (TPMS_FrontLeftSensorMute);
		fun >> (TPMS_FrontRightSensorMute);
		fun >> (TPMS_RearRightSensorMute);
		fun >> (TPMS_RearLeftSensorMute);
	}
};

#endif //____BDCTPMS_H__
