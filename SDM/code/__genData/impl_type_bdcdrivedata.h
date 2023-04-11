#ifndef ____BDCDRIVEDATA_H__
#define ____BDCDRIVEDATA_H__


#include "cstdint"






struct BDCDriveData {
public:
	std::uint16_t BCS_VehSpd;
	std::uint8_t BCS_VehSpdVD;
	std::uint8_t VCU_CrntGearLvl;
	std::uint8_t VCU_CrntGearLvlVD;
	std::uint16_t DCU_TorqAct;
	std::uint16_t DCU_RotSpdAct;
	std::uint8_t VCU_GearLvl;
	std::uint8_t EMS_GVS_CurntGearNum;
	std::uint8_t VCU_GearPosition;
	std::uint16_t VCU_DCU_ActRotSpd;
/*
	BDCDriveData() {}
	~BDCDriveData() {}
	BDCDriveData(const std::uint16_t _BCS_VehSpd,const std::uint8_t _BCS_VehSpdVD,const std::uint8_t _VCU_CrntGearLvl,const std::uint8_t _VCU_CrntGearLvlVD,const std::uint16_t _DCU_TorqAct,const std::uint16_t _DCU_RotSpdAct,const std::uint8_t _VCU_GearLvl,const std::uint8_t _EMS_GVS_CurntGearNum,const std::uint8_t _VCU_GearPosition,const std::uint16_t _VCU_DCU_ActRotSpd):BCS_VehSpd(_BCS_VehSpd),BCS_VehSpdVD(_BCS_VehSpdVD),VCU_CrntGearLvl(_VCU_CrntGearLvl),VCU_CrntGearLvlVD(_VCU_CrntGearLvlVD),DCU_TorqAct(_DCU_TorqAct),DCU_RotSpdAct(_DCU_RotSpdAct),VCU_GearLvl(_VCU_GearLvl),EMS_GVS_CurntGearNum(_EMS_GVS_CurntGearNum),VCU_GearPosition(_VCU_GearPosition),VCU_DCU_ActRotSpd(_VCU_DCU_ActRotSpd) {}
	BDCDriveData(const BDCDriveData &_x){
		BCS_VehSpd = _x.BCS_VehSpd;
		BCS_VehSpdVD = _x.BCS_VehSpdVD;
		VCU_CrntGearLvl = _x.VCU_CrntGearLvl;
		VCU_CrntGearLvlVD = _x.VCU_CrntGearLvlVD;
		DCU_TorqAct = _x.DCU_TorqAct;
		DCU_RotSpdAct = _x.DCU_RotSpdAct;
		VCU_GearLvl = _x.VCU_GearLvl;
		EMS_GVS_CurntGearNum = _x.EMS_GVS_CurntGearNum;
		VCU_GearPosition = _x.VCU_GearPosition;
		VCU_DCU_ActRotSpd = _x.VCU_DCU_ActRotSpd;
	}
	BDCDriveData(BDCDriveData &&_x){
		BCS_VehSpd = std::move(_x.BCS_VehSpd);
		BCS_VehSpdVD = std::move(_x.BCS_VehSpdVD);
		VCU_CrntGearLvl = std::move(_x.VCU_CrntGearLvl);
		VCU_CrntGearLvlVD = std::move(_x.VCU_CrntGearLvlVD);
		DCU_TorqAct = std::move(_x.DCU_TorqAct);
		DCU_RotSpdAct = std::move(_x.DCU_RotSpdAct);
		VCU_GearLvl = std::move(_x.VCU_GearLvl);
		EMS_GVS_CurntGearNum = std::move(_x.EMS_GVS_CurntGearNum);
		VCU_GearPosition = std::move(_x.VCU_GearPosition);
		VCU_DCU_ActRotSpd = std::move(_x.VCU_DCU_ActRotSpd);
	}
	BDCDriveData& operator=(const BDCDriveData &_x){
		BCS_VehSpd = _x.BCS_VehSpd;
		BCS_VehSpdVD = _x.BCS_VehSpdVD;
		VCU_CrntGearLvl = _x.VCU_CrntGearLvl;
		VCU_CrntGearLvlVD = _x.VCU_CrntGearLvlVD;
		DCU_TorqAct = _x.DCU_TorqAct;
		DCU_RotSpdAct = _x.DCU_RotSpdAct;
		VCU_GearLvl = _x.VCU_GearLvl;
		EMS_GVS_CurntGearNum = _x.EMS_GVS_CurntGearNum;
		VCU_GearPosition = _x.VCU_GearPosition;
		VCU_DCU_ActRotSpd = _x.VCU_DCU_ActRotSpd;
		return *this;
	}
	BDCDriveData& operator=(BDCDriveData &&_x){
		BCS_VehSpd = std::move(_x.BCS_VehSpd);
		BCS_VehSpdVD = std::move(_x.BCS_VehSpdVD);
		VCU_CrntGearLvl = std::move(_x.VCU_CrntGearLvl);
		VCU_CrntGearLvlVD = std::move(_x.VCU_CrntGearLvlVD);
		DCU_TorqAct = std::move(_x.DCU_TorqAct);
		DCU_RotSpdAct = std::move(_x.DCU_RotSpdAct);
		VCU_GearLvl = std::move(_x.VCU_GearLvl);
		EMS_GVS_CurntGearNum = std::move(_x.EMS_GVS_CurntGearNum);
		VCU_GearPosition = std::move(_x.VCU_GearPosition);
		VCU_DCU_ActRotSpd = std::move(_x.VCU_DCU_ActRotSpd);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(BCS_VehSpd);
		fun(BCS_VehSpdVD);
		fun(VCU_CrntGearLvl);
		fun(VCU_CrntGearLvlVD);
		fun(DCU_TorqAct);
		fun(DCU_RotSpdAct);
		fun(VCU_GearLvl);
		fun(EMS_GVS_CurntGearNum);
		fun(VCU_GearPosition);
		fun(VCU_DCU_ActRotSpd);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(BCS_VehSpd);
		fun(BCS_VehSpdVD);
		fun(VCU_CrntGearLvl);
		fun(VCU_CrntGearLvlVD);
		fun(DCU_TorqAct);
		fun(DCU_RotSpdAct);
		fun(VCU_GearLvl);
		fun(EMS_GVS_CurntGearNum);
		fun(VCU_GearPosition);
		fun(VCU_DCU_ActRotSpd);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (BCS_VehSpd);
		fun << (BCS_VehSpdVD);
		fun << (VCU_CrntGearLvl);
		fun << (VCU_CrntGearLvlVD);
		fun << (DCU_TorqAct);
		fun << (DCU_RotSpdAct);
		fun << (VCU_GearLvl);
		fun << (EMS_GVS_CurntGearNum);
		fun << (VCU_GearPosition);
		fun << (VCU_DCU_ActRotSpd);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (BCS_VehSpd);
		fun >> (BCS_VehSpdVD);
		fun >> (VCU_CrntGearLvl);
		fun >> (VCU_CrntGearLvlVD);
		fun >> (DCU_TorqAct);
		fun >> (DCU_RotSpdAct);
		fun >> (VCU_GearLvl);
		fun >> (EMS_GVS_CurntGearNum);
		fun >> (VCU_GearPosition);
		fun >> (VCU_DCU_ActRotSpd);
	}
};

#endif //____BDCDRIVEDATA_H__
