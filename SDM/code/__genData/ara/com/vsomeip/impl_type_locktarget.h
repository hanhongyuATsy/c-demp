#ifndef __ARA_COM_VSOMEIP__LOCKTARGET_H__
#define __ARA_COM_VSOMEIP__LOCKTARGET_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct LockTarget {
public:
	std::uint8_t FrontLeftDoor;
	std::uint8_t FrontRightDoor;
	std::uint8_t RearLeftDoor;
	std::uint8_t RearRightDoor;
	std::uint8_t Hood;
	std::uint8_t Trunk;
	std::uint8_t RearLeftChildSafty;
	std::uint8_t RearRightChildSafty;
	std::uint8_t FillerCapLock_A;
	std::uint8_t FillerCapLock_B;
	std::uint8_t PowerFillerCap;
	std::uint8_t Reserved5;
	std::uint8_t Reserved4;
	std::uint8_t Reserved3;
	std::uint8_t Reserved2;
	std::uint8_t Reserved1;
/*
	LockTarget() {}
	~LockTarget() {}
	LockTarget(const std::uint8_t _FrontLeftDoor,const std::uint8_t _FrontRightDoor,const std::uint8_t _RearLeftDoor,const std::uint8_t _RearRightDoor,const std::uint8_t _Hood,const std::uint8_t _Trunk,const std::uint8_t _RearLeftChildSafty,const std::uint8_t _RearRightChildSafty,const std::uint8_t _FillerCapLock_A,const std::uint8_t _FillerCapLock_B,const std::uint8_t _PowerFillerCap,const std::uint8_t _Reserved5,const std::uint8_t _Reserved4,const std::uint8_t _Reserved3,const std::uint8_t _Reserved2,const std::uint8_t _Reserved1):FrontLeftDoor(_FrontLeftDoor),FrontRightDoor(_FrontRightDoor),RearLeftDoor(_RearLeftDoor),RearRightDoor(_RearRightDoor),Hood(_Hood),Trunk(_Trunk),RearLeftChildSafty(_RearLeftChildSafty),RearRightChildSafty(_RearRightChildSafty),FillerCapLock_A(_FillerCapLock_A),FillerCapLock_B(_FillerCapLock_B),PowerFillerCap(_PowerFillerCap),Reserved5(_Reserved5),Reserved4(_Reserved4),Reserved3(_Reserved3),Reserved2(_Reserved2),Reserved1(_Reserved1) {}
	LockTarget(const LockTarget &_x){
		FrontLeftDoor = _x.FrontLeftDoor;
		FrontRightDoor = _x.FrontRightDoor;
		RearLeftDoor = _x.RearLeftDoor;
		RearRightDoor = _x.RearRightDoor;
		Hood = _x.Hood;
		Trunk = _x.Trunk;
		RearLeftChildSafty = _x.RearLeftChildSafty;
		RearRightChildSafty = _x.RearRightChildSafty;
		FillerCapLock_A = _x.FillerCapLock_A;
		FillerCapLock_B = _x.FillerCapLock_B;
		PowerFillerCap = _x.PowerFillerCap;
		Reserved5 = _x.Reserved5;
		Reserved4 = _x.Reserved4;
		Reserved3 = _x.Reserved3;
		Reserved2 = _x.Reserved2;
		Reserved1 = _x.Reserved1;
	}
	LockTarget(LockTarget &&_x){
		FrontLeftDoor = std::move(_x.FrontLeftDoor);
		FrontRightDoor = std::move(_x.FrontRightDoor);
		RearLeftDoor = std::move(_x.RearLeftDoor);
		RearRightDoor = std::move(_x.RearRightDoor);
		Hood = std::move(_x.Hood);
		Trunk = std::move(_x.Trunk);
		RearLeftChildSafty = std::move(_x.RearLeftChildSafty);
		RearRightChildSafty = std::move(_x.RearRightChildSafty);
		FillerCapLock_A = std::move(_x.FillerCapLock_A);
		FillerCapLock_B = std::move(_x.FillerCapLock_B);
		PowerFillerCap = std::move(_x.PowerFillerCap);
		Reserved5 = std::move(_x.Reserved5);
		Reserved4 = std::move(_x.Reserved4);
		Reserved3 = std::move(_x.Reserved3);
		Reserved2 = std::move(_x.Reserved2);
		Reserved1 = std::move(_x.Reserved1);
	}
	LockTarget& operator=(const LockTarget &_x){
		FrontLeftDoor = _x.FrontLeftDoor;
		FrontRightDoor = _x.FrontRightDoor;
		RearLeftDoor = _x.RearLeftDoor;
		RearRightDoor = _x.RearRightDoor;
		Hood = _x.Hood;
		Trunk = _x.Trunk;
		RearLeftChildSafty = _x.RearLeftChildSafty;
		RearRightChildSafty = _x.RearRightChildSafty;
		FillerCapLock_A = _x.FillerCapLock_A;
		FillerCapLock_B = _x.FillerCapLock_B;
		PowerFillerCap = _x.PowerFillerCap;
		Reserved5 = _x.Reserved5;
		Reserved4 = _x.Reserved4;
		Reserved3 = _x.Reserved3;
		Reserved2 = _x.Reserved2;
		Reserved1 = _x.Reserved1;
		return *this;
	}
	LockTarget& operator=(LockTarget &&_x){
		FrontLeftDoor = std::move(_x.FrontLeftDoor);
		FrontRightDoor = std::move(_x.FrontRightDoor);
		RearLeftDoor = std::move(_x.RearLeftDoor);
		RearRightDoor = std::move(_x.RearRightDoor);
		Hood = std::move(_x.Hood);
		Trunk = std::move(_x.Trunk);
		RearLeftChildSafty = std::move(_x.RearLeftChildSafty);
		RearRightChildSafty = std::move(_x.RearRightChildSafty);
		FillerCapLock_A = std::move(_x.FillerCapLock_A);
		FillerCapLock_B = std::move(_x.FillerCapLock_B);
		PowerFillerCap = std::move(_x.PowerFillerCap);
		Reserved5 = std::move(_x.Reserved5);
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
		fun(Hood);
		fun(Trunk);
		fun(RearLeftChildSafty);
		fun(RearRightChildSafty);
		fun(FillerCapLock_A);
		fun(FillerCapLock_B);
		fun(PowerFillerCap);
		fun(Reserved5);
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
		fun(Hood);
		fun(Trunk);
		fun(RearLeftChildSafty);
		fun(RearRightChildSafty);
		fun(FillerCapLock_A);
		fun(FillerCapLock_B);
		fun(PowerFillerCap);
		fun(Reserved5);
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
		fun << (Hood);
		fun << (Trunk);
		fun << (RearLeftChildSafty);
		fun << (RearRightChildSafty);
		fun << (FillerCapLock_A);
		fun << (FillerCapLock_B);
		fun << (PowerFillerCap);
		fun << (Reserved5);
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
		fun >> (Hood);
		fun >> (Trunk);
		fun >> (RearLeftChildSafty);
		fun >> (RearRightChildSafty);
		fun >> (FillerCapLock_A);
		fun >> (FillerCapLock_B);
		fun >> (PowerFillerCap);
		fun >> (Reserved5);
		fun >> (Reserved4);
		fun >> (Reserved3);
		fun >> (Reserved2);
		fun >> (Reserved1);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__LOCKTARGET_H__
