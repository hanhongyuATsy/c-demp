#ifndef __ASF_DOORLOCKSTATUS__DOORLOCKSTATUS_H__
#define __ASF_DOORLOCKSTATUS__DOORLOCKSTATUS_H__


#include "cstdint"





namespace asf
{
namespace doorlockstatus
{

struct DoorLockStatus {
public:
	std::uint8_t DriverDoorLockSt;
	std::uint8_t PsngrDoorLockSt;
	std::uint8_t RLDoorLockSt;
	std::uint8_t RRDoorLockSt;
/*
	DoorLockStatus() {}
	~DoorLockStatus() {}
	DoorLockStatus(const std::uint8_t _DriverDoorLockSt,const std::uint8_t _PsngrDoorLockSt,const std::uint8_t _RLDoorLockSt,const std::uint8_t _RRDoorLockSt):DriverDoorLockSt(_DriverDoorLockSt),PsngrDoorLockSt(_PsngrDoorLockSt),RLDoorLockSt(_RLDoorLockSt),RRDoorLockSt(_RRDoorLockSt) {}
	DoorLockStatus(const DoorLockStatus &_x){
		DriverDoorLockSt = _x.DriverDoorLockSt;
		PsngrDoorLockSt = _x.PsngrDoorLockSt;
		RLDoorLockSt = _x.RLDoorLockSt;
		RRDoorLockSt = _x.RRDoorLockSt;
	}
	DoorLockStatus(DoorLockStatus &&_x){
		DriverDoorLockSt = std::move(_x.DriverDoorLockSt);
		PsngrDoorLockSt = std::move(_x.PsngrDoorLockSt);
		RLDoorLockSt = std::move(_x.RLDoorLockSt);
		RRDoorLockSt = std::move(_x.RRDoorLockSt);
	}
	DoorLockStatus& operator=(const DoorLockStatus &_x){
		DriverDoorLockSt = _x.DriverDoorLockSt;
		PsngrDoorLockSt = _x.PsngrDoorLockSt;
		RLDoorLockSt = _x.RLDoorLockSt;
		RRDoorLockSt = _x.RRDoorLockSt;
		return *this;
	}
	DoorLockStatus& operator=(DoorLockStatus &&_x){
		DriverDoorLockSt = std::move(_x.DriverDoorLockSt);
		PsngrDoorLockSt = std::move(_x.PsngrDoorLockSt);
		RLDoorLockSt = std::move(_x.RLDoorLockSt);
		RRDoorLockSt = std::move(_x.RRDoorLockSt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(DriverDoorLockSt);
		fun(PsngrDoorLockSt);
		fun(RLDoorLockSt);
		fun(RRDoorLockSt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(DriverDoorLockSt);
		fun(PsngrDoorLockSt);
		fun(RLDoorLockSt);
		fun(RRDoorLockSt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (DriverDoorLockSt);
		fun << (PsngrDoorLockSt);
		fun << (RLDoorLockSt);
		fun << (RRDoorLockSt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (DriverDoorLockSt);
		fun >> (PsngrDoorLockSt);
		fun >> (RLDoorLockSt);
		fun >> (RRDoorLockSt);
	}
};

}//asf
}//doorlockstatus
#endif //__ASF_DOORLOCKSTATUS__DOORLOCKSTATUS_H__
