#ifndef __ARA_COM_VSOMEIP__DOORHANDLEPOSITION_H__
#define __ARA_COM_VSOMEIP__DOORHANDLEPOSITION_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct DoorHandlePosition {
public:
	std::uint8_t FrontLeftDoorHandlePosition;
	std::uint8_t FrontRightDoorHandlePosition;
	std::uint8_t RearLeftDoorHandlePosition;
	std::uint8_t RearRightDoorHandlePosition;
	std::uint8_t DriverDoorHandlePosition;
	std::uint8_t PassengerDoorHandlePosition;
/*
	DoorHandlePosition() {}
	~DoorHandlePosition() {}
	DoorHandlePosition(const std::uint8_t _FrontLeftDoorHandlePosition,const std::uint8_t _FrontRightDoorHandlePosition,const std::uint8_t _RearLeftDoorHandlePosition,const std::uint8_t _RearRightDoorHandlePosition,const std::uint8_t _DriverDoorHandlePosition,const std::uint8_t _PassengerDoorHandlePosition):FrontLeftDoorHandlePosition(_FrontLeftDoorHandlePosition),FrontRightDoorHandlePosition(_FrontRightDoorHandlePosition),RearLeftDoorHandlePosition(_RearLeftDoorHandlePosition),RearRightDoorHandlePosition(_RearRightDoorHandlePosition),DriverDoorHandlePosition(_DriverDoorHandlePosition),PassengerDoorHandlePosition(_PassengerDoorHandlePosition) {}
	DoorHandlePosition(const DoorHandlePosition &_x){
		FrontLeftDoorHandlePosition = _x.FrontLeftDoorHandlePosition;
		FrontRightDoorHandlePosition = _x.FrontRightDoorHandlePosition;
		RearLeftDoorHandlePosition = _x.RearLeftDoorHandlePosition;
		RearRightDoorHandlePosition = _x.RearRightDoorHandlePosition;
		DriverDoorHandlePosition = _x.DriverDoorHandlePosition;
		PassengerDoorHandlePosition = _x.PassengerDoorHandlePosition;
	}
	DoorHandlePosition(DoorHandlePosition &&_x){
		FrontLeftDoorHandlePosition = std::move(_x.FrontLeftDoorHandlePosition);
		FrontRightDoorHandlePosition = std::move(_x.FrontRightDoorHandlePosition);
		RearLeftDoorHandlePosition = std::move(_x.RearLeftDoorHandlePosition);
		RearRightDoorHandlePosition = std::move(_x.RearRightDoorHandlePosition);
		DriverDoorHandlePosition = std::move(_x.DriverDoorHandlePosition);
		PassengerDoorHandlePosition = std::move(_x.PassengerDoorHandlePosition);
	}
	DoorHandlePosition& operator=(const DoorHandlePosition &_x){
		FrontLeftDoorHandlePosition = _x.FrontLeftDoorHandlePosition;
		FrontRightDoorHandlePosition = _x.FrontRightDoorHandlePosition;
		RearLeftDoorHandlePosition = _x.RearLeftDoorHandlePosition;
		RearRightDoorHandlePosition = _x.RearRightDoorHandlePosition;
		DriverDoorHandlePosition = _x.DriverDoorHandlePosition;
		PassengerDoorHandlePosition = _x.PassengerDoorHandlePosition;
		return *this;
	}
	DoorHandlePosition& operator=(DoorHandlePosition &&_x){
		FrontLeftDoorHandlePosition = std::move(_x.FrontLeftDoorHandlePosition);
		FrontRightDoorHandlePosition = std::move(_x.FrontRightDoorHandlePosition);
		RearLeftDoorHandlePosition = std::move(_x.RearLeftDoorHandlePosition);
		RearRightDoorHandlePosition = std::move(_x.RearRightDoorHandlePosition);
		DriverDoorHandlePosition = std::move(_x.DriverDoorHandlePosition);
		PassengerDoorHandlePosition = std::move(_x.PassengerDoorHandlePosition);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(FrontLeftDoorHandlePosition);
		fun(FrontRightDoorHandlePosition);
		fun(RearLeftDoorHandlePosition);
		fun(RearRightDoorHandlePosition);
		fun(DriverDoorHandlePosition);
		fun(PassengerDoorHandlePosition);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(FrontLeftDoorHandlePosition);
		fun(FrontRightDoorHandlePosition);
		fun(RearLeftDoorHandlePosition);
		fun(RearRightDoorHandlePosition);
		fun(DriverDoorHandlePosition);
		fun(PassengerDoorHandlePosition);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (FrontLeftDoorHandlePosition);
		fun << (FrontRightDoorHandlePosition);
		fun << (RearLeftDoorHandlePosition);
		fun << (RearRightDoorHandlePosition);
		fun << (DriverDoorHandlePosition);
		fun << (PassengerDoorHandlePosition);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (FrontLeftDoorHandlePosition);
		fun >> (FrontRightDoorHandlePosition);
		fun >> (RearLeftDoorHandlePosition);
		fun >> (RearRightDoorHandlePosition);
		fun >> (DriverDoorHandlePosition);
		fun >> (PassengerDoorHandlePosition);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__DOORHANDLEPOSITION_H__
