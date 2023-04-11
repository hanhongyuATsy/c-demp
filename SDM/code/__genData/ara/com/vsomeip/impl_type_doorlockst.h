#ifndef __ARA_COM_VSOMEIP__DOORLOCKST_H__
#define __ARA_COM_VSOMEIP__DOORLOCKST_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct DoorLockSt {
public:
	std::uint8_t FrontLeftDoorLockSt;
	std::uint8_t FrontRightDoorLockSt;
	std::uint8_t RearLeftDoorLockSt;
	std::uint8_t RearRightDoorLockSt;
	std::uint8_t RearLeftChildSaftyLockSt;
	std::uint8_t RearRightChildSaftyLockSt;
	std::uint8_t DriverDoorLockSt;
	std::uint8_t PassengerDoorLockSt;
	std::uint8_t VehicleChildSaftyLockSt;
	std::uint8_t VehicleDoorLockSt;
/*
	DoorLockSt() {}
	~DoorLockSt() {}
	DoorLockSt(const std::uint8_t _FrontLeftDoorLockSt,const std::uint8_t _FrontRightDoorLockSt,const std::uint8_t _RearLeftDoorLockSt,const std::uint8_t _RearRightDoorLockSt,const std::uint8_t _RearLeftChildSaftyLockSt,const std::uint8_t _RearRightChildSaftyLockSt,const std::uint8_t _DriverDoorLockSt,const std::uint8_t _PassengerDoorLockSt,const std::uint8_t _VehicleChildSaftyLockSt,const std::uint8_t _VehicleDoorLockSt):FrontLeftDoorLockSt(_FrontLeftDoorLockSt),FrontRightDoorLockSt(_FrontRightDoorLockSt),RearLeftDoorLockSt(_RearLeftDoorLockSt),RearRightDoorLockSt(_RearRightDoorLockSt),RearLeftChildSaftyLockSt(_RearLeftChildSaftyLockSt),RearRightChildSaftyLockSt(_RearRightChildSaftyLockSt),DriverDoorLockSt(_DriverDoorLockSt),PassengerDoorLockSt(_PassengerDoorLockSt),VehicleChildSaftyLockSt(_VehicleChildSaftyLockSt),VehicleDoorLockSt(_VehicleDoorLockSt) {}
	DoorLockSt(const DoorLockSt &_x){
		FrontLeftDoorLockSt = _x.FrontLeftDoorLockSt;
		FrontRightDoorLockSt = _x.FrontRightDoorLockSt;
		RearLeftDoorLockSt = _x.RearLeftDoorLockSt;
		RearRightDoorLockSt = _x.RearRightDoorLockSt;
		RearLeftChildSaftyLockSt = _x.RearLeftChildSaftyLockSt;
		RearRightChildSaftyLockSt = _x.RearRightChildSaftyLockSt;
		DriverDoorLockSt = _x.DriverDoorLockSt;
		PassengerDoorLockSt = _x.PassengerDoorLockSt;
		VehicleChildSaftyLockSt = _x.VehicleChildSaftyLockSt;
		VehicleDoorLockSt = _x.VehicleDoorLockSt;
	}
	DoorLockSt(DoorLockSt &&_x){
		FrontLeftDoorLockSt = std::move(_x.FrontLeftDoorLockSt);
		FrontRightDoorLockSt = std::move(_x.FrontRightDoorLockSt);
		RearLeftDoorLockSt = std::move(_x.RearLeftDoorLockSt);
		RearRightDoorLockSt = std::move(_x.RearRightDoorLockSt);
		RearLeftChildSaftyLockSt = std::move(_x.RearLeftChildSaftyLockSt);
		RearRightChildSaftyLockSt = std::move(_x.RearRightChildSaftyLockSt);
		DriverDoorLockSt = std::move(_x.DriverDoorLockSt);
		PassengerDoorLockSt = std::move(_x.PassengerDoorLockSt);
		VehicleChildSaftyLockSt = std::move(_x.VehicleChildSaftyLockSt);
		VehicleDoorLockSt = std::move(_x.VehicleDoorLockSt);
	}
	DoorLockSt& operator=(const DoorLockSt &_x){
		FrontLeftDoorLockSt = _x.FrontLeftDoorLockSt;
		FrontRightDoorLockSt = _x.FrontRightDoorLockSt;
		RearLeftDoorLockSt = _x.RearLeftDoorLockSt;
		RearRightDoorLockSt = _x.RearRightDoorLockSt;
		RearLeftChildSaftyLockSt = _x.RearLeftChildSaftyLockSt;
		RearRightChildSaftyLockSt = _x.RearRightChildSaftyLockSt;
		DriverDoorLockSt = _x.DriverDoorLockSt;
		PassengerDoorLockSt = _x.PassengerDoorLockSt;
		VehicleChildSaftyLockSt = _x.VehicleChildSaftyLockSt;
		VehicleDoorLockSt = _x.VehicleDoorLockSt;
		return *this;
	}
	DoorLockSt& operator=(DoorLockSt &&_x){
		FrontLeftDoorLockSt = std::move(_x.FrontLeftDoorLockSt);
		FrontRightDoorLockSt = std::move(_x.FrontRightDoorLockSt);
		RearLeftDoorLockSt = std::move(_x.RearLeftDoorLockSt);
		RearRightDoorLockSt = std::move(_x.RearRightDoorLockSt);
		RearLeftChildSaftyLockSt = std::move(_x.RearLeftChildSaftyLockSt);
		RearRightChildSaftyLockSt = std::move(_x.RearRightChildSaftyLockSt);
		DriverDoorLockSt = std::move(_x.DriverDoorLockSt);
		PassengerDoorLockSt = std::move(_x.PassengerDoorLockSt);
		VehicleChildSaftyLockSt = std::move(_x.VehicleChildSaftyLockSt);
		VehicleDoorLockSt = std::move(_x.VehicleDoorLockSt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(FrontLeftDoorLockSt);
		fun(FrontRightDoorLockSt);
		fun(RearLeftDoorLockSt);
		fun(RearRightDoorLockSt);
		fun(RearLeftChildSaftyLockSt);
		fun(RearRightChildSaftyLockSt);
		fun(DriverDoorLockSt);
		fun(PassengerDoorLockSt);
		fun(VehicleChildSaftyLockSt);
		fun(VehicleDoorLockSt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(FrontLeftDoorLockSt);
		fun(FrontRightDoorLockSt);
		fun(RearLeftDoorLockSt);
		fun(RearRightDoorLockSt);
		fun(RearLeftChildSaftyLockSt);
		fun(RearRightChildSaftyLockSt);
		fun(DriverDoorLockSt);
		fun(PassengerDoorLockSt);
		fun(VehicleChildSaftyLockSt);
		fun(VehicleDoorLockSt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (FrontLeftDoorLockSt);
		fun << (FrontRightDoorLockSt);
		fun << (RearLeftDoorLockSt);
		fun << (RearRightDoorLockSt);
		fun << (RearLeftChildSaftyLockSt);
		fun << (RearRightChildSaftyLockSt);
		fun << (DriverDoorLockSt);
		fun << (PassengerDoorLockSt);
		fun << (VehicleChildSaftyLockSt);
		fun << (VehicleDoorLockSt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (FrontLeftDoorLockSt);
		fun >> (FrontRightDoorLockSt);
		fun >> (RearLeftDoorLockSt);
		fun >> (RearRightDoorLockSt);
		fun >> (RearLeftChildSaftyLockSt);
		fun >> (RearRightChildSaftyLockSt);
		fun >> (DriverDoorLockSt);
		fun >> (PassengerDoorLockSt);
		fun >> (VehicleChildSaftyLockSt);
		fun >> (VehicleDoorLockSt);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__DOORLOCKST_H__
