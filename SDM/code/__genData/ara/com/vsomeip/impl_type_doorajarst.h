#ifndef __ARA_COM_VSOMEIP__DOORAJARST_H__
#define __ARA_COM_VSOMEIP__DOORAJARST_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct DoorAjarSt {
public:
	std::uint8_t FrontLeftDoorAjarSt;
	std::uint8_t FrontRightDoorAjarSt;
	std::uint8_t RearLeftDoorAjarSt;
	std::uint8_t RearRightDoorAjarSt;
	std::uint8_t HoodAjarSt;
	std::uint8_t TrunkAjarSt;
	std::uint8_t DriverDoorAjarSt;
	std::uint8_t PassengerDoorAjarSt;
	std::uint8_t VehicleDoorAjarSt;
	std::uint8_t PowerFillerCapSt;
	std::uint8_t FillerCapASt;
	std::uint8_t FillerCapBSt;
/*
	DoorAjarSt() {}
	~DoorAjarSt() {}
	DoorAjarSt(const std::uint8_t _FrontLeftDoorAjarSt,const std::uint8_t _FrontRightDoorAjarSt,const std::uint8_t _RearLeftDoorAjarSt,const std::uint8_t _RearRightDoorAjarSt,const std::uint8_t _HoodAjarSt,const std::uint8_t _TrunkAjarSt,const std::uint8_t _DriverDoorAjarSt,const std::uint8_t _PassengerDoorAjarSt,const std::uint8_t _VehicleDoorAjarSt,const std::uint8_t _PowerFillerCapSt,const std::uint8_t _FillerCapASt,const std::uint8_t _FillerCapBSt):FrontLeftDoorAjarSt(_FrontLeftDoorAjarSt),FrontRightDoorAjarSt(_FrontRightDoorAjarSt),RearLeftDoorAjarSt(_RearLeftDoorAjarSt),RearRightDoorAjarSt(_RearRightDoorAjarSt),HoodAjarSt(_HoodAjarSt),TrunkAjarSt(_TrunkAjarSt),DriverDoorAjarSt(_DriverDoorAjarSt),PassengerDoorAjarSt(_PassengerDoorAjarSt),VehicleDoorAjarSt(_VehicleDoorAjarSt),PowerFillerCapSt(_PowerFillerCapSt),FillerCapASt(_FillerCapASt),FillerCapBSt(_FillerCapBSt) {}
	DoorAjarSt(const DoorAjarSt &_x){
		FrontLeftDoorAjarSt = _x.FrontLeftDoorAjarSt;
		FrontRightDoorAjarSt = _x.FrontRightDoorAjarSt;
		RearLeftDoorAjarSt = _x.RearLeftDoorAjarSt;
		RearRightDoorAjarSt = _x.RearRightDoorAjarSt;
		HoodAjarSt = _x.HoodAjarSt;
		TrunkAjarSt = _x.TrunkAjarSt;
		DriverDoorAjarSt = _x.DriverDoorAjarSt;
		PassengerDoorAjarSt = _x.PassengerDoorAjarSt;
		VehicleDoorAjarSt = _x.VehicleDoorAjarSt;
		PowerFillerCapSt = _x.PowerFillerCapSt;
		FillerCapASt = _x.FillerCapASt;
		FillerCapBSt = _x.FillerCapBSt;
	}
	DoorAjarSt(DoorAjarSt &&_x){
		FrontLeftDoorAjarSt = std::move(_x.FrontLeftDoorAjarSt);
		FrontRightDoorAjarSt = std::move(_x.FrontRightDoorAjarSt);
		RearLeftDoorAjarSt = std::move(_x.RearLeftDoorAjarSt);
		RearRightDoorAjarSt = std::move(_x.RearRightDoorAjarSt);
		HoodAjarSt = std::move(_x.HoodAjarSt);
		TrunkAjarSt = std::move(_x.TrunkAjarSt);
		DriverDoorAjarSt = std::move(_x.DriverDoorAjarSt);
		PassengerDoorAjarSt = std::move(_x.PassengerDoorAjarSt);
		VehicleDoorAjarSt = std::move(_x.VehicleDoorAjarSt);
		PowerFillerCapSt = std::move(_x.PowerFillerCapSt);
		FillerCapASt = std::move(_x.FillerCapASt);
		FillerCapBSt = std::move(_x.FillerCapBSt);
	}
	DoorAjarSt& operator=(const DoorAjarSt &_x){
		FrontLeftDoorAjarSt = _x.FrontLeftDoorAjarSt;
		FrontRightDoorAjarSt = _x.FrontRightDoorAjarSt;
		RearLeftDoorAjarSt = _x.RearLeftDoorAjarSt;
		RearRightDoorAjarSt = _x.RearRightDoorAjarSt;
		HoodAjarSt = _x.HoodAjarSt;
		TrunkAjarSt = _x.TrunkAjarSt;
		DriverDoorAjarSt = _x.DriverDoorAjarSt;
		PassengerDoorAjarSt = _x.PassengerDoorAjarSt;
		VehicleDoorAjarSt = _x.VehicleDoorAjarSt;
		PowerFillerCapSt = _x.PowerFillerCapSt;
		FillerCapASt = _x.FillerCapASt;
		FillerCapBSt = _x.FillerCapBSt;
		return *this;
	}
	DoorAjarSt& operator=(DoorAjarSt &&_x){
		FrontLeftDoorAjarSt = std::move(_x.FrontLeftDoorAjarSt);
		FrontRightDoorAjarSt = std::move(_x.FrontRightDoorAjarSt);
		RearLeftDoorAjarSt = std::move(_x.RearLeftDoorAjarSt);
		RearRightDoorAjarSt = std::move(_x.RearRightDoorAjarSt);
		HoodAjarSt = std::move(_x.HoodAjarSt);
		TrunkAjarSt = std::move(_x.TrunkAjarSt);
		DriverDoorAjarSt = std::move(_x.DriverDoorAjarSt);
		PassengerDoorAjarSt = std::move(_x.PassengerDoorAjarSt);
		VehicleDoorAjarSt = std::move(_x.VehicleDoorAjarSt);
		PowerFillerCapSt = std::move(_x.PowerFillerCapSt);
		FillerCapASt = std::move(_x.FillerCapASt);
		FillerCapBSt = std::move(_x.FillerCapBSt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(FrontLeftDoorAjarSt);
		fun(FrontRightDoorAjarSt);
		fun(RearLeftDoorAjarSt);
		fun(RearRightDoorAjarSt);
		fun(HoodAjarSt);
		fun(TrunkAjarSt);
		fun(DriverDoorAjarSt);
		fun(PassengerDoorAjarSt);
		fun(VehicleDoorAjarSt);
		fun(PowerFillerCapSt);
		fun(FillerCapASt);
		fun(FillerCapBSt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(FrontLeftDoorAjarSt);
		fun(FrontRightDoorAjarSt);
		fun(RearLeftDoorAjarSt);
		fun(RearRightDoorAjarSt);
		fun(HoodAjarSt);
		fun(TrunkAjarSt);
		fun(DriverDoorAjarSt);
		fun(PassengerDoorAjarSt);
		fun(VehicleDoorAjarSt);
		fun(PowerFillerCapSt);
		fun(FillerCapASt);
		fun(FillerCapBSt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (FrontLeftDoorAjarSt);
		fun << (FrontRightDoorAjarSt);
		fun << (RearLeftDoorAjarSt);
		fun << (RearRightDoorAjarSt);
		fun << (HoodAjarSt);
		fun << (TrunkAjarSt);
		fun << (DriverDoorAjarSt);
		fun << (PassengerDoorAjarSt);
		fun << (VehicleDoorAjarSt);
		fun << (PowerFillerCapSt);
		fun << (FillerCapASt);
		fun << (FillerCapBSt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (FrontLeftDoorAjarSt);
		fun >> (FrontRightDoorAjarSt);
		fun >> (RearLeftDoorAjarSt);
		fun >> (RearRightDoorAjarSt);
		fun >> (HoodAjarSt);
		fun >> (TrunkAjarSt);
		fun >> (DriverDoorAjarSt);
		fun >> (PassengerDoorAjarSt);
		fun >> (VehicleDoorAjarSt);
		fun >> (PowerFillerCapSt);
		fun >> (FillerCapASt);
		fun >> (FillerCapBSt);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__DOORAJARST_H__
