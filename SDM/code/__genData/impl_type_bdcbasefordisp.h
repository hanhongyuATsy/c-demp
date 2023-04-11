#ifndef ____BDCBASEFORDISP_H__
#define ____BDCBASEFORDISP_H__


#include "cstdint"






struct BDCBaseForDisp {
public:
	std::uint8_t ICM_VehicleBrakeSt;
	std::uint32_t ICM_TotalOdometer;
	std::uint32_t ICM_TotalOdometer_accurate;
	std::uint8_t ICM_BFLWarning;
	std::uint8_t ICM_FuelLevel_Value;
	std::uint16_t ICM_FuelAvaibleDriveDistance;
	std::uint16_t ICM_TotalAvaibleDriveDistance;
	std::uint32_t ICM_VehRunningOdometer;
	std::uint8_t ICM_VehInsSpd;
	std::uint8_t VCU_BMS_BattSocDisp;
	std::uint16_t BMS_BattSocDisp;
	std::uint16_t VCU_VehRng;
/*
	BDCBaseForDisp() {}
	~BDCBaseForDisp() {}
	BDCBaseForDisp(const std::uint8_t _ICM_VehicleBrakeSt,const std::uint32_t _ICM_TotalOdometer,const std::uint32_t _ICM_TotalOdometer_accurate,const std::uint8_t _ICM_BFLWarning,const std::uint8_t _ICM_FuelLevel_Value,const std::uint16_t _ICM_FuelAvaibleDriveDistance,const std::uint16_t _ICM_TotalAvaibleDriveDistance,const std::uint32_t _ICM_VehRunningOdometer,const std::uint8_t _ICM_VehInsSpd,const std::uint8_t _VCU_BMS_BattSocDisp,const std::uint16_t _BMS_BattSocDisp,const std::uint16_t _VCU_VehRng):ICM_VehicleBrakeSt(_ICM_VehicleBrakeSt),ICM_TotalOdometer(_ICM_TotalOdometer),ICM_TotalOdometer_accurate(_ICM_TotalOdometer_accurate),ICM_BFLWarning(_ICM_BFLWarning),ICM_FuelLevel_Value(_ICM_FuelLevel_Value),ICM_FuelAvaibleDriveDistance(_ICM_FuelAvaibleDriveDistance),ICM_TotalAvaibleDriveDistance(_ICM_TotalAvaibleDriveDistance),ICM_VehRunningOdometer(_ICM_VehRunningOdometer),ICM_VehInsSpd(_ICM_VehInsSpd),VCU_BMS_BattSocDisp(_VCU_BMS_BattSocDisp),BMS_BattSocDisp(_BMS_BattSocDisp),VCU_VehRng(_VCU_VehRng) {}
	BDCBaseForDisp(const BDCBaseForDisp &_x){
		ICM_VehicleBrakeSt = _x.ICM_VehicleBrakeSt;
		ICM_TotalOdometer = _x.ICM_TotalOdometer;
		ICM_TotalOdometer_accurate = _x.ICM_TotalOdometer_accurate;
		ICM_BFLWarning = _x.ICM_BFLWarning;
		ICM_FuelLevel_Value = _x.ICM_FuelLevel_Value;
		ICM_FuelAvaibleDriveDistance = _x.ICM_FuelAvaibleDriveDistance;
		ICM_TotalAvaibleDriveDistance = _x.ICM_TotalAvaibleDriveDistance;
		ICM_VehRunningOdometer = _x.ICM_VehRunningOdometer;
		ICM_VehInsSpd = _x.ICM_VehInsSpd;
		VCU_BMS_BattSocDisp = _x.VCU_BMS_BattSocDisp;
		BMS_BattSocDisp = _x.BMS_BattSocDisp;
		VCU_VehRng = _x.VCU_VehRng;
	}
	BDCBaseForDisp(BDCBaseForDisp &&_x){
		ICM_VehicleBrakeSt = std::move(_x.ICM_VehicleBrakeSt);
		ICM_TotalOdometer = std::move(_x.ICM_TotalOdometer);
		ICM_TotalOdometer_accurate = std::move(_x.ICM_TotalOdometer_accurate);
		ICM_BFLWarning = std::move(_x.ICM_BFLWarning);
		ICM_FuelLevel_Value = std::move(_x.ICM_FuelLevel_Value);
		ICM_FuelAvaibleDriveDistance = std::move(_x.ICM_FuelAvaibleDriveDistance);
		ICM_TotalAvaibleDriveDistance = std::move(_x.ICM_TotalAvaibleDriveDistance);
		ICM_VehRunningOdometer = std::move(_x.ICM_VehRunningOdometer);
		ICM_VehInsSpd = std::move(_x.ICM_VehInsSpd);
		VCU_BMS_BattSocDisp = std::move(_x.VCU_BMS_BattSocDisp);
		BMS_BattSocDisp = std::move(_x.BMS_BattSocDisp);
		VCU_VehRng = std::move(_x.VCU_VehRng);
	}
	BDCBaseForDisp& operator=(const BDCBaseForDisp &_x){
		ICM_VehicleBrakeSt = _x.ICM_VehicleBrakeSt;
		ICM_TotalOdometer = _x.ICM_TotalOdometer;
		ICM_TotalOdometer_accurate = _x.ICM_TotalOdometer_accurate;
		ICM_BFLWarning = _x.ICM_BFLWarning;
		ICM_FuelLevel_Value = _x.ICM_FuelLevel_Value;
		ICM_FuelAvaibleDriveDistance = _x.ICM_FuelAvaibleDriveDistance;
		ICM_TotalAvaibleDriveDistance = _x.ICM_TotalAvaibleDriveDistance;
		ICM_VehRunningOdometer = _x.ICM_VehRunningOdometer;
		ICM_VehInsSpd = _x.ICM_VehInsSpd;
		VCU_BMS_BattSocDisp = _x.VCU_BMS_BattSocDisp;
		BMS_BattSocDisp = _x.BMS_BattSocDisp;
		VCU_VehRng = _x.VCU_VehRng;
		return *this;
	}
	BDCBaseForDisp& operator=(BDCBaseForDisp &&_x){
		ICM_VehicleBrakeSt = std::move(_x.ICM_VehicleBrakeSt);
		ICM_TotalOdometer = std::move(_x.ICM_TotalOdometer);
		ICM_TotalOdometer_accurate = std::move(_x.ICM_TotalOdometer_accurate);
		ICM_BFLWarning = std::move(_x.ICM_BFLWarning);
		ICM_FuelLevel_Value = std::move(_x.ICM_FuelLevel_Value);
		ICM_FuelAvaibleDriveDistance = std::move(_x.ICM_FuelAvaibleDriveDistance);
		ICM_TotalAvaibleDriveDistance = std::move(_x.ICM_TotalAvaibleDriveDistance);
		ICM_VehRunningOdometer = std::move(_x.ICM_VehRunningOdometer);
		ICM_VehInsSpd = std::move(_x.ICM_VehInsSpd);
		VCU_BMS_BattSocDisp = std::move(_x.VCU_BMS_BattSocDisp);
		BMS_BattSocDisp = std::move(_x.BMS_BattSocDisp);
		VCU_VehRng = std::move(_x.VCU_VehRng);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(ICM_VehicleBrakeSt);
		fun(ICM_TotalOdometer);
		fun(ICM_TotalOdometer_accurate);
		fun(ICM_BFLWarning);
		fun(ICM_FuelLevel_Value);
		fun(ICM_FuelAvaibleDriveDistance);
		fun(ICM_TotalAvaibleDriveDistance);
		fun(ICM_VehRunningOdometer);
		fun(ICM_VehInsSpd);
		fun(VCU_BMS_BattSocDisp);
		fun(BMS_BattSocDisp);
		fun(VCU_VehRng);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(ICM_VehicleBrakeSt);
		fun(ICM_TotalOdometer);
		fun(ICM_TotalOdometer_accurate);
		fun(ICM_BFLWarning);
		fun(ICM_FuelLevel_Value);
		fun(ICM_FuelAvaibleDriveDistance);
		fun(ICM_TotalAvaibleDriveDistance);
		fun(ICM_VehRunningOdometer);
		fun(ICM_VehInsSpd);
		fun(VCU_BMS_BattSocDisp);
		fun(BMS_BattSocDisp);
		fun(VCU_VehRng);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (ICM_VehicleBrakeSt);
		fun << (ICM_TotalOdometer);
		fun << (ICM_TotalOdometer_accurate);
		fun << (ICM_BFLWarning);
		fun << (ICM_FuelLevel_Value);
		fun << (ICM_FuelAvaibleDriveDistance);
		fun << (ICM_TotalAvaibleDriveDistance);
		fun << (ICM_VehRunningOdometer);
		fun << (ICM_VehInsSpd);
		fun << (VCU_BMS_BattSocDisp);
		fun << (BMS_BattSocDisp);
		fun << (VCU_VehRng);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (ICM_VehicleBrakeSt);
		fun >> (ICM_TotalOdometer);
		fun >> (ICM_TotalOdometer_accurate);
		fun >> (ICM_BFLWarning);
		fun >> (ICM_FuelLevel_Value);
		fun >> (ICM_FuelAvaibleDriveDistance);
		fun >> (ICM_TotalAvaibleDriveDistance);
		fun >> (ICM_VehRunningOdometer);
		fun >> (ICM_VehInsSpd);
		fun >> (VCU_BMS_BattSocDisp);
		fun >> (BMS_BattSocDisp);
		fun >> (VCU_VehRng);
	}
};

#endif //____BDCBASEFORDISP_H__
