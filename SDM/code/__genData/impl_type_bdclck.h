#ifndef ____BDCLCK_H__
#define ____BDCLCK_H__


#include "cstdint"






struct BDCLCK {
public:
	std::uint8_t LCK_DriverDoorLockSt;
	std::uint8_t LCK_PassengerDoorLockSt;
	std::uint8_t LCK_VehicleDoorLockSt;
	std::uint8_t LCK_DriverDoorAjarSt;
	std::uint8_t LCK_PassengerDoorAjarSt;
	std::uint8_t LCK_VehicleDoorAjarSt;
/*
	BDCLCK() {}
	~BDCLCK() {}
	BDCLCK(const std::uint8_t _LCK_DriverDoorLockSt,const std::uint8_t _LCK_PassengerDoorLockSt,const std::uint8_t _LCK_VehicleDoorLockSt,const std::uint8_t _LCK_DriverDoorAjarSt,const std::uint8_t _LCK_PassengerDoorAjarSt,const std::uint8_t _LCK_VehicleDoorAjarSt):LCK_DriverDoorLockSt(_LCK_DriverDoorLockSt),LCK_PassengerDoorLockSt(_LCK_PassengerDoorLockSt),LCK_VehicleDoorLockSt(_LCK_VehicleDoorLockSt),LCK_DriverDoorAjarSt(_LCK_DriverDoorAjarSt),LCK_PassengerDoorAjarSt(_LCK_PassengerDoorAjarSt),LCK_VehicleDoorAjarSt(_LCK_VehicleDoorAjarSt) {}
	BDCLCK(const BDCLCK &_x){
		LCK_DriverDoorLockSt = _x.LCK_DriverDoorLockSt;
		LCK_PassengerDoorLockSt = _x.LCK_PassengerDoorLockSt;
		LCK_VehicleDoorLockSt = _x.LCK_VehicleDoorLockSt;
		LCK_DriverDoorAjarSt = _x.LCK_DriverDoorAjarSt;
		LCK_PassengerDoorAjarSt = _x.LCK_PassengerDoorAjarSt;
		LCK_VehicleDoorAjarSt = _x.LCK_VehicleDoorAjarSt;
	}
	BDCLCK(BDCLCK &&_x){
		LCK_DriverDoorLockSt = std::move(_x.LCK_DriverDoorLockSt);
		LCK_PassengerDoorLockSt = std::move(_x.LCK_PassengerDoorLockSt);
		LCK_VehicleDoorLockSt = std::move(_x.LCK_VehicleDoorLockSt);
		LCK_DriverDoorAjarSt = std::move(_x.LCK_DriverDoorAjarSt);
		LCK_PassengerDoorAjarSt = std::move(_x.LCK_PassengerDoorAjarSt);
		LCK_VehicleDoorAjarSt = std::move(_x.LCK_VehicleDoorAjarSt);
	}
	BDCLCK& operator=(const BDCLCK &_x){
		LCK_DriverDoorLockSt = _x.LCK_DriverDoorLockSt;
		LCK_PassengerDoorLockSt = _x.LCK_PassengerDoorLockSt;
		LCK_VehicleDoorLockSt = _x.LCK_VehicleDoorLockSt;
		LCK_DriverDoorAjarSt = _x.LCK_DriverDoorAjarSt;
		LCK_PassengerDoorAjarSt = _x.LCK_PassengerDoorAjarSt;
		LCK_VehicleDoorAjarSt = _x.LCK_VehicleDoorAjarSt;
		return *this;
	}
	BDCLCK& operator=(BDCLCK &&_x){
		LCK_DriverDoorLockSt = std::move(_x.LCK_DriverDoorLockSt);
		LCK_PassengerDoorLockSt = std::move(_x.LCK_PassengerDoorLockSt);
		LCK_VehicleDoorLockSt = std::move(_x.LCK_VehicleDoorLockSt);
		LCK_DriverDoorAjarSt = std::move(_x.LCK_DriverDoorAjarSt);
		LCK_PassengerDoorAjarSt = std::move(_x.LCK_PassengerDoorAjarSt);
		LCK_VehicleDoorAjarSt = std::move(_x.LCK_VehicleDoorAjarSt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(LCK_DriverDoorLockSt);
		fun(LCK_PassengerDoorLockSt);
		fun(LCK_VehicleDoorLockSt);
		fun(LCK_DriverDoorAjarSt);
		fun(LCK_PassengerDoorAjarSt);
		fun(LCK_VehicleDoorAjarSt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(LCK_DriverDoorLockSt);
		fun(LCK_PassengerDoorLockSt);
		fun(LCK_VehicleDoorLockSt);
		fun(LCK_DriverDoorAjarSt);
		fun(LCK_PassengerDoorAjarSt);
		fun(LCK_VehicleDoorAjarSt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (LCK_DriverDoorLockSt);
		fun << (LCK_PassengerDoorLockSt);
		fun << (LCK_VehicleDoorLockSt);
		fun << (LCK_DriverDoorAjarSt);
		fun << (LCK_PassengerDoorAjarSt);
		fun << (LCK_VehicleDoorAjarSt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (LCK_DriverDoorLockSt);
		fun >> (LCK_PassengerDoorLockSt);
		fun >> (LCK_VehicleDoorLockSt);
		fun >> (LCK_DriverDoorAjarSt);
		fun >> (LCK_PassengerDoorAjarSt);
		fun >> (LCK_VehicleDoorAjarSt);
	}
};

#endif //____BDCLCK_H__
