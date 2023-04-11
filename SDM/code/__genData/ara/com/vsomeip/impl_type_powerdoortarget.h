#ifndef __ARA_COM_VSOMEIP__POWERDOORTARGET_H__
#define __ARA_COM_VSOMEIP__POWERDOORTARGET_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct PowerDoorTarget {
public:
	std::uint8_t FrontLeftDoor;
	std::uint8_t FrontRightDoor;
	std::uint8_t RearLeftDoor;
	std::uint8_t RearRightDoor;
	std::uint8_t Reserved4;
	std::uint8_t Reserved3;
	std::uint8_t Reserved2;
	std::uint8_t Reserved1;
/*
	PowerDoorTarget() {}
	~PowerDoorTarget() {}
	PowerDoorTarget(const std::uint8_t _FrontLeftDoor,const std::uint8_t _FrontRightDoor,const std::uint8_t _RearLeftDoor,const std::uint8_t _RearRightDoor,const std::uint8_t _Reserved4,const std::uint8_t _Reserved3,const std::uint8_t _Reserved2,const std::uint8_t _Reserved1):FrontLeftDoor(_FrontLeftDoor),FrontRightDoor(_FrontRightDoor),RearLeftDoor(_RearLeftDoor),RearRightDoor(_RearRightDoor),Reserved4(_Reserved4),Reserved3(_Reserved3),Reserved2(_Reserved2),Reserved1(_Reserved1) {}
	PowerDoorTarget(const PowerDoorTarget &_x){
		FrontLeftDoor = _x.FrontLeftDoor;
		FrontRightDoor = _x.FrontRightDoor;
		RearLeftDoor = _x.RearLeftDoor;
		RearRightDoor = _x.RearRightDoor;
		Reserved4 = _x.Reserved4;
		Reserved3 = _x.Reserved3;
		Reserved2 = _x.Reserved2;
		Reserved1 = _x.Reserved1;
	}
	PowerDoorTarget(PowerDoorTarget &&_x){
		FrontLeftDoor = std::move(_x.FrontLeftDoor);
		FrontRightDoor = std::move(_x.FrontRightDoor);
		RearLeftDoor = std::move(_x.RearLeftDoor);
		RearRightDoor = std::move(_x.RearRightDoor);
		Reserved4 = std::move(_x.Reserved4);
		Reserved3 = std::move(_x.Reserved3);
		Reserved2 = std::move(_x.Reserved2);
		Reserved1 = std::move(_x.Reserved1);
	}
	PowerDoorTarget& operator=(const PowerDoorTarget &_x){
		FrontLeftDoor = _x.FrontLeftDoor;
		FrontRightDoor = _x.FrontRightDoor;
		RearLeftDoor = _x.RearLeftDoor;
		RearRightDoor = _x.RearRightDoor;
		Reserved4 = _x.Reserved4;
		Reserved3 = _x.Reserved3;
		Reserved2 = _x.Reserved2;
		Reserved1 = _x.Reserved1;
		return *this;
	}
	PowerDoorTarget& operator=(PowerDoorTarget &&_x){
		FrontLeftDoor = std::move(_x.FrontLeftDoor);
		FrontRightDoor = std::move(_x.FrontRightDoor);
		RearLeftDoor = std::move(_x.RearLeftDoor);
		RearRightDoor = std::move(_x.RearRightDoor);
		Reserved4 = std::move(_x.Reserved4);
		Reserved3 = std::move(_x.Reserved3);
		Reserved2 = std::move(_x.Reserved2);
		Reserved1 = std::move(_x.Reserved1);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(FrontLeftDoor);
		fun(FrontRightDoor);
		fun(RearLeftDoor);
		fun(RearRightDoor);
		fun(Reserved4);
		fun(Reserved3);
		fun(Reserved2);
		fun(Reserved1);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(FrontLeftDoor);
		fun(FrontRightDoor);
		fun(RearLeftDoor);
		fun(RearRightDoor);
		fun(Reserved4);
		fun(Reserved3);
		fun(Reserved2);
		fun(Reserved1);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (FrontLeftDoor);
		fun << (FrontRightDoor);
		fun << (RearLeftDoor);
		fun << (RearRightDoor);
		fun << (Reserved4);
		fun << (Reserved3);
		fun << (Reserved2);
		fun << (Reserved1);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (FrontLeftDoor);
		fun >> (FrontRightDoor);
		fun >> (RearLeftDoor);
		fun >> (RearRightDoor);
		fun >> (Reserved4);
		fun >> (Reserved3);
		fun >> (Reserved2);
		fun >> (Reserved1);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__POWERDOORTARGET_H__
