#ifndef ____BDCVCUDRVMODEDATA_H__
#define ____BDCVCUDRVMODEDATA_H__


#include "cstdint"






struct BDCVCUDrvModeData {
public:
	std::uint8_t EMS_GasPedalActPstforMRRVD;
	std::uint16_t HVAC_CompLPtemp;
	std::uint8_t HVAC_CompLP;
	std::uint8_t VCU_VehCrusSt;
	std::uint16_t VCU_DspChgCurrKA;
	std::uint16_t VCU_DspChgVolt;
	std::uint16_t HVAC_CHI_EXVCurrentPosition;
	std::uint8_t VCU_GearLvlDisp;
	std::uint8_t VCU_ParkingReqToEPB;
	std::uint8_t VCU_stSupBD;
/*
	BDCVCUDrvModeData() {}
	~BDCVCUDrvModeData() {}
	BDCVCUDrvModeData(const std::uint8_t _EMS_GasPedalActPstforMRRVD,const std::uint16_t _HVAC_CompLPtemp,const std::uint8_t _HVAC_CompLP,const std::uint8_t _VCU_VehCrusSt,const std::uint16_t _VCU_DspChgCurrKA,const std::uint16_t _VCU_DspChgVolt,const std::uint16_t _HVAC_CHI_EXVCurrentPosition,const std::uint8_t _VCU_GearLvlDisp,const std::uint8_t _VCU_ParkingReqToEPB,const std::uint8_t _VCU_stSupBD):EMS_GasPedalActPstforMRRVD(_EMS_GasPedalActPstforMRRVD),HVAC_CompLPtemp(_HVAC_CompLPtemp),HVAC_CompLP(_HVAC_CompLP),VCU_VehCrusSt(_VCU_VehCrusSt),VCU_DspChgCurrKA(_VCU_DspChgCurrKA),VCU_DspChgVolt(_VCU_DspChgVolt),HVAC_CHI_EXVCurrentPosition(_HVAC_CHI_EXVCurrentPosition),VCU_GearLvlDisp(_VCU_GearLvlDisp),VCU_ParkingReqToEPB(_VCU_ParkingReqToEPB),VCU_stSupBD(_VCU_stSupBD) {}
	BDCVCUDrvModeData(const BDCVCUDrvModeData &_x){
		EMS_GasPedalActPstforMRRVD = _x.EMS_GasPedalActPstforMRRVD;
		HVAC_CompLPtemp = _x.HVAC_CompLPtemp;
		HVAC_CompLP = _x.HVAC_CompLP;
		VCU_VehCrusSt = _x.VCU_VehCrusSt;
		VCU_DspChgCurrKA = _x.VCU_DspChgCurrKA;
		VCU_DspChgVolt = _x.VCU_DspChgVolt;
		HVAC_CHI_EXVCurrentPosition = _x.HVAC_CHI_EXVCurrentPosition;
		VCU_GearLvlDisp = _x.VCU_GearLvlDisp;
		VCU_ParkingReqToEPB = _x.VCU_ParkingReqToEPB;
		VCU_stSupBD = _x.VCU_stSupBD;
	}
	BDCVCUDrvModeData(BDCVCUDrvModeData &&_x){
		EMS_GasPedalActPstforMRRVD = std::move(_x.EMS_GasPedalActPstforMRRVD);
		HVAC_CompLPtemp = std::move(_x.HVAC_CompLPtemp);
		HVAC_CompLP = std::move(_x.HVAC_CompLP);
		VCU_VehCrusSt = std::move(_x.VCU_VehCrusSt);
		VCU_DspChgCurrKA = std::move(_x.VCU_DspChgCurrKA);
		VCU_DspChgVolt = std::move(_x.VCU_DspChgVolt);
		HVAC_CHI_EXVCurrentPosition = std::move(_x.HVAC_CHI_EXVCurrentPosition);
		VCU_GearLvlDisp = std::move(_x.VCU_GearLvlDisp);
		VCU_ParkingReqToEPB = std::move(_x.VCU_ParkingReqToEPB);
		VCU_stSupBD = std::move(_x.VCU_stSupBD);
	}
	BDCVCUDrvModeData& operator=(const BDCVCUDrvModeData &_x){
		EMS_GasPedalActPstforMRRVD = _x.EMS_GasPedalActPstforMRRVD;
		HVAC_CompLPtemp = _x.HVAC_CompLPtemp;
		HVAC_CompLP = _x.HVAC_CompLP;
		VCU_VehCrusSt = _x.VCU_VehCrusSt;
		VCU_DspChgCurrKA = _x.VCU_DspChgCurrKA;
		VCU_DspChgVolt = _x.VCU_DspChgVolt;
		HVAC_CHI_EXVCurrentPosition = _x.HVAC_CHI_EXVCurrentPosition;
		VCU_GearLvlDisp = _x.VCU_GearLvlDisp;
		VCU_ParkingReqToEPB = _x.VCU_ParkingReqToEPB;
		VCU_stSupBD = _x.VCU_stSupBD;
		return *this;
	}
	BDCVCUDrvModeData& operator=(BDCVCUDrvModeData &&_x){
		EMS_GasPedalActPstforMRRVD = std::move(_x.EMS_GasPedalActPstforMRRVD);
		HVAC_CompLPtemp = std::move(_x.HVAC_CompLPtemp);
		HVAC_CompLP = std::move(_x.HVAC_CompLP);
		VCU_VehCrusSt = std::move(_x.VCU_VehCrusSt);
		VCU_DspChgCurrKA = std::move(_x.VCU_DspChgCurrKA);
		VCU_DspChgVolt = std::move(_x.VCU_DspChgVolt);
		HVAC_CHI_EXVCurrentPosition = std::move(_x.HVAC_CHI_EXVCurrentPosition);
		VCU_GearLvlDisp = std::move(_x.VCU_GearLvlDisp);
		VCU_ParkingReqToEPB = std::move(_x.VCU_ParkingReqToEPB);
		VCU_stSupBD = std::move(_x.VCU_stSupBD);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(EMS_GasPedalActPstforMRRVD);
		fun(HVAC_CompLPtemp);
		fun(HVAC_CompLP);
		fun(VCU_VehCrusSt);
		fun(VCU_DspChgCurrKA);
		fun(VCU_DspChgVolt);
		fun(HVAC_CHI_EXVCurrentPosition);
		fun(VCU_GearLvlDisp);
		fun(VCU_ParkingReqToEPB);
		fun(VCU_stSupBD);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(EMS_GasPedalActPstforMRRVD);
		fun(HVAC_CompLPtemp);
		fun(HVAC_CompLP);
		fun(VCU_VehCrusSt);
		fun(VCU_DspChgCurrKA);
		fun(VCU_DspChgVolt);
		fun(HVAC_CHI_EXVCurrentPosition);
		fun(VCU_GearLvlDisp);
		fun(VCU_ParkingReqToEPB);
		fun(VCU_stSupBD);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (EMS_GasPedalActPstforMRRVD);
		fun << (HVAC_CompLPtemp);
		fun << (HVAC_CompLP);
		fun << (VCU_VehCrusSt);
		fun << (VCU_DspChgCurrKA);
		fun << (VCU_DspChgVolt);
		fun << (HVAC_CHI_EXVCurrentPosition);
		fun << (VCU_GearLvlDisp);
		fun << (VCU_ParkingReqToEPB);
		fun << (VCU_stSupBD);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (EMS_GasPedalActPstforMRRVD);
		fun >> (HVAC_CompLPtemp);
		fun >> (HVAC_CompLP);
		fun >> (VCU_VehCrusSt);
		fun >> (VCU_DspChgCurrKA);
		fun >> (VCU_DspChgVolt);
		fun >> (HVAC_CHI_EXVCurrentPosition);
		fun >> (VCU_GearLvlDisp);
		fun >> (VCU_ParkingReqToEPB);
		fun >> (VCU_stSupBD);
	}
};

#endif //____BDCVCUDRVMODEDATA_H__
