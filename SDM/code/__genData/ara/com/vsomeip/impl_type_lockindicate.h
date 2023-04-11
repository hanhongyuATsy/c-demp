#ifndef __ARA_COM_VSOMEIP__LOCKINDICATE_H__
#define __ARA_COM_VSOMEIP__LOCKINDICATE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct LockIndicate {
public:
	std::uint8_t VehicleChildSaftyLockedIndicate;
	std::uint8_t VehicleDoorLockedIndicate;
	std::uint8_t VehicleDoorUnLockedIndicate;
/*
	LockIndicate() {}
	~LockIndicate() {}
	LockIndicate(const std::uint8_t _VehicleChildSaftyLockedIndicate,const std::uint8_t _VehicleDoorLockedIndicate,const std::uint8_t _VehicleDoorUnLockedIndicate):VehicleChildSaftyLockedIndicate(_VehicleChildSaftyLockedIndicate),VehicleDoorLockedIndicate(_VehicleDoorLockedIndicate),VehicleDoorUnLockedIndicate(_VehicleDoorUnLockedIndicate) {}
	LockIndicate(const LockIndicate &_x){
		VehicleChildSaftyLockedIndicate = _x.VehicleChildSaftyLockedIndicate;
		VehicleDoorLockedIndicate = _x.VehicleDoorLockedIndicate;
		VehicleDoorUnLockedIndicate = _x.VehicleDoorUnLockedIndicate;
	}
	LockIndicate(LockIndicate &&_x){
		VehicleChildSaftyLockedIndicate = std::move(_x.VehicleChildSaftyLockedIndicate);
		VehicleDoorLockedIndicate = std::move(_x.VehicleDoorLockedIndicate);
		VehicleDoorUnLockedIndicate = std::move(_x.VehicleDoorUnLockedIndicate);
	}
	LockIndicate& operator=(const LockIndicate &_x){
		VehicleChildSaftyLockedIndicate = _x.VehicleChildSaftyLockedIndicate;
		VehicleDoorLockedIndicate = _x.VehicleDoorLockedIndicate;
		VehicleDoorUnLockedIndicate = _x.VehicleDoorUnLockedIndicate;
		return *this;
	}
	LockIndicate& operator=(LockIndicate &&_x){
		VehicleChildSaftyLockedIndicate = std::move(_x.VehicleChildSaftyLockedIndicate);
		VehicleDoorLockedIndicate = std::move(_x.VehicleDoorLockedIndicate);
		VehicleDoorUnLockedIndicate = std::move(_x.VehicleDoorUnLockedIndicate);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(VehicleChildSaftyLockedIndicate);
		fun(VehicleDoorLockedIndicate);
		fun(VehicleDoorUnLockedIndicate);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(VehicleChildSaftyLockedIndicate);
		fun(VehicleDoorLockedIndicate);
		fun(VehicleDoorUnLockedIndicate);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (VehicleChildSaftyLockedIndicate);
		fun << (VehicleDoorLockedIndicate);
		fun << (VehicleDoorUnLockedIndicate);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (VehicleChildSaftyLockedIndicate);
		fun >> (VehicleDoorLockedIndicate);
		fun >> (VehicleDoorUnLockedIndicate);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__LOCKINDICATE_H__
