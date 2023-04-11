#ifndef ____BDCMODEDATA_H__
#define ____BDCMODEDATA_H__


#include "cstdint"






struct BDCModeData {
public:
	std::uint8_t VMM_OTAModeSt;
	std::uint8_t VMM_VehModeSt;
	std::uint8_t VCU_VehDrvMod;
	std::uint8_t VCU_VehRdySt;
	std::uint8_t UMM_UsageModeSt;
	std::uint8_t DCU_ModeSt;
	std::uint8_t UMM_DriverSeatSt;
	std::uint8_t UMM_FrontPassengerSeatSt;
/*
	BDCModeData() {}
	~BDCModeData() {}
	BDCModeData(const std::uint8_t _VMM_OTAModeSt,const std::uint8_t _VMM_VehModeSt,const std::uint8_t _VCU_VehDrvMod,const std::uint8_t _VCU_VehRdySt,const std::uint8_t _UMM_UsageModeSt,const std::uint8_t _DCU_ModeSt,const std::uint8_t _UMM_DriverSeatSt,const std::uint8_t _UMM_FrontPassengerSeatSt):VMM_OTAModeSt(_VMM_OTAModeSt),VMM_VehModeSt(_VMM_VehModeSt),VCU_VehDrvMod(_VCU_VehDrvMod),VCU_VehRdySt(_VCU_VehRdySt),UMM_UsageModeSt(_UMM_UsageModeSt),DCU_ModeSt(_DCU_ModeSt),UMM_DriverSeatSt(_UMM_DriverSeatSt),UMM_FrontPassengerSeatSt(_UMM_FrontPassengerSeatSt) {}
	BDCModeData(const BDCModeData &_x){
		VMM_OTAModeSt = _x.VMM_OTAModeSt;
		VMM_VehModeSt = _x.VMM_VehModeSt;
		VCU_VehDrvMod = _x.VCU_VehDrvMod;
		VCU_VehRdySt = _x.VCU_VehRdySt;
		UMM_UsageModeSt = _x.UMM_UsageModeSt;
		DCU_ModeSt = _x.DCU_ModeSt;
		UMM_DriverSeatSt = _x.UMM_DriverSeatSt;
		UMM_FrontPassengerSeatSt = _x.UMM_FrontPassengerSeatSt;
	}
	BDCModeData(BDCModeData &&_x){
		VMM_OTAModeSt = std::move(_x.VMM_OTAModeSt);
		VMM_VehModeSt = std::move(_x.VMM_VehModeSt);
		VCU_VehDrvMod = std::move(_x.VCU_VehDrvMod);
		VCU_VehRdySt = std::move(_x.VCU_VehRdySt);
		UMM_UsageModeSt = std::move(_x.UMM_UsageModeSt);
		DCU_ModeSt = std::move(_x.DCU_ModeSt);
		UMM_DriverSeatSt = std::move(_x.UMM_DriverSeatSt);
		UMM_FrontPassengerSeatSt = std::move(_x.UMM_FrontPassengerSeatSt);
	}
	BDCModeData& operator=(const BDCModeData &_x){
		VMM_OTAModeSt = _x.VMM_OTAModeSt;
		VMM_VehModeSt = _x.VMM_VehModeSt;
		VCU_VehDrvMod = _x.VCU_VehDrvMod;
		VCU_VehRdySt = _x.VCU_VehRdySt;
		UMM_UsageModeSt = _x.UMM_UsageModeSt;
		DCU_ModeSt = _x.DCU_ModeSt;
		UMM_DriverSeatSt = _x.UMM_DriverSeatSt;
		UMM_FrontPassengerSeatSt = _x.UMM_FrontPassengerSeatSt;
		return *this;
	}
	BDCModeData& operator=(BDCModeData &&_x){
		VMM_OTAModeSt = std::move(_x.VMM_OTAModeSt);
		VMM_VehModeSt = std::move(_x.VMM_VehModeSt);
		VCU_VehDrvMod = std::move(_x.VCU_VehDrvMod);
		VCU_VehRdySt = std::move(_x.VCU_VehRdySt);
		UMM_UsageModeSt = std::move(_x.UMM_UsageModeSt);
		DCU_ModeSt = std::move(_x.DCU_ModeSt);
		UMM_DriverSeatSt = std::move(_x.UMM_DriverSeatSt);
		UMM_FrontPassengerSeatSt = std::move(_x.UMM_FrontPassengerSeatSt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(VMM_OTAModeSt);
		fun(VMM_VehModeSt);
		fun(VCU_VehDrvMod);
		fun(VCU_VehRdySt);
		fun(UMM_UsageModeSt);
		fun(DCU_ModeSt);
		fun(UMM_DriverSeatSt);
		fun(UMM_FrontPassengerSeatSt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(VMM_OTAModeSt);
		fun(VMM_VehModeSt);
		fun(VCU_VehDrvMod);
		fun(VCU_VehRdySt);
		fun(UMM_UsageModeSt);
		fun(DCU_ModeSt);
		fun(UMM_DriverSeatSt);
		fun(UMM_FrontPassengerSeatSt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (VMM_OTAModeSt);
		fun << (VMM_VehModeSt);
		fun << (VCU_VehDrvMod);
		fun << (VCU_VehRdySt);
		fun << (UMM_UsageModeSt);
		fun << (DCU_ModeSt);
		fun << (UMM_DriverSeatSt);
		fun << (UMM_FrontPassengerSeatSt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (VMM_OTAModeSt);
		fun >> (VMM_VehModeSt);
		fun >> (VCU_VehDrvMod);
		fun >> (VCU_VehRdySt);
		fun >> (UMM_UsageModeSt);
		fun >> (DCU_ModeSt);
		fun >> (UMM_DriverSeatSt);
		fun >> (UMM_FrontPassengerSeatSt);
	}
};

#endif //____BDCMODEDATA_H__
