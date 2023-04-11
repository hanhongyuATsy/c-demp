#ifndef ____BDCVCUPERF_H__
#define ____BDCVCUPERF_H__


#include "cstdint"






struct BDCVCUPerf {
public:
	std::uint8_t VCU_VehDrvMod;
	std::uint8_t VCU_IpedalModeAvail;
	std::uint8_t VCU_CrntGearLvl;
	std::uint8_t VCU_GearPosition;
	std::uint8_t VCU_EMS_AccPedalActPst;
	std::uint8_t EMS_GasPedalActPstforMRR;
	std::uint8_t VCU_EMS_BrkNomalCloseSwitchSt;
	std::uint8_t VCU_EMS_BrkPedalSt;
	std::uint8_t VCU_EMS_BrkPedalStVD;
	std::uint8_t VCU_EMS_AccPedalActPstVD;
	std::uint16_t VCU_DCU_ActRotSpd;
	std::uint16_t BCS_VehSpd;
	std::uint16_t BCS_TargetRecpTorqRq;
	std::uint8_t BCS_TargetRecpTorqRqSt;
	std::uint8_t BCS_VCUReqConDecActiveVehhold;
	std::uint8_t BCS_VCUReqConDecActive;
	std::uint8_t BCS_VCUReqConDecAvailable;
	std::uint8_t BCS_CrbsActive;
	std::uint8_t BCS_VCUReqConDecFail;
/*
	BDCVCUPerf() {}
	~BDCVCUPerf() {}
	BDCVCUPerf(const std::uint8_t _VCU_VehDrvMod,const std::uint8_t _VCU_IpedalModeAvail,const std::uint8_t _VCU_CrntGearLvl,const std::uint8_t _VCU_GearPosition,const std::uint8_t _VCU_EMS_AccPedalActPst,const std::uint8_t _EMS_GasPedalActPstforMRR,const std::uint8_t _VCU_EMS_BrkNomalCloseSwitchSt,const std::uint8_t _VCU_EMS_BrkPedalSt,const std::uint8_t _VCU_EMS_BrkPedalStVD,const std::uint8_t _VCU_EMS_AccPedalActPstVD,const std::uint16_t _VCU_DCU_ActRotSpd,const std::uint16_t _BCS_VehSpd,const std::uint16_t _BCS_TargetRecpTorqRq,const std::uint8_t _BCS_TargetRecpTorqRqSt,const std::uint8_t _BCS_VCUReqConDecActiveVehhold,const std::uint8_t _BCS_VCUReqConDecActive,const std::uint8_t _BCS_VCUReqConDecAvailable,const std::uint8_t _BCS_CrbsActive,const std::uint8_t _BCS_VCUReqConDecFail):VCU_VehDrvMod(_VCU_VehDrvMod),VCU_IpedalModeAvail(_VCU_IpedalModeAvail),VCU_CrntGearLvl(_VCU_CrntGearLvl),VCU_GearPosition(_VCU_GearPosition),VCU_EMS_AccPedalActPst(_VCU_EMS_AccPedalActPst),EMS_GasPedalActPstforMRR(_EMS_GasPedalActPstforMRR),VCU_EMS_BrkNomalCloseSwitchSt(_VCU_EMS_BrkNomalCloseSwitchSt),VCU_EMS_BrkPedalSt(_VCU_EMS_BrkPedalSt),VCU_EMS_BrkPedalStVD(_VCU_EMS_BrkPedalStVD),VCU_EMS_AccPedalActPstVD(_VCU_EMS_AccPedalActPstVD),VCU_DCU_ActRotSpd(_VCU_DCU_ActRotSpd),BCS_VehSpd(_BCS_VehSpd),BCS_TargetRecpTorqRq(_BCS_TargetRecpTorqRq),BCS_TargetRecpTorqRqSt(_BCS_TargetRecpTorqRqSt),BCS_VCUReqConDecActiveVehhold(_BCS_VCUReqConDecActiveVehhold),BCS_VCUReqConDecActive(_BCS_VCUReqConDecActive),BCS_VCUReqConDecAvailable(_BCS_VCUReqConDecAvailable),BCS_CrbsActive(_BCS_CrbsActive),BCS_VCUReqConDecFail(_BCS_VCUReqConDecFail) {}
	BDCVCUPerf(const BDCVCUPerf &_x){
		VCU_VehDrvMod = _x.VCU_VehDrvMod;
		VCU_IpedalModeAvail = _x.VCU_IpedalModeAvail;
		VCU_CrntGearLvl = _x.VCU_CrntGearLvl;
		VCU_GearPosition = _x.VCU_GearPosition;
		VCU_EMS_AccPedalActPst = _x.VCU_EMS_AccPedalActPst;
		EMS_GasPedalActPstforMRR = _x.EMS_GasPedalActPstforMRR;
		VCU_EMS_BrkNomalCloseSwitchSt = _x.VCU_EMS_BrkNomalCloseSwitchSt;
		VCU_EMS_BrkPedalSt = _x.VCU_EMS_BrkPedalSt;
		VCU_EMS_BrkPedalStVD = _x.VCU_EMS_BrkPedalStVD;
		VCU_EMS_AccPedalActPstVD = _x.VCU_EMS_AccPedalActPstVD;
		VCU_DCU_ActRotSpd = _x.VCU_DCU_ActRotSpd;
		BCS_VehSpd = _x.BCS_VehSpd;
		BCS_TargetRecpTorqRq = _x.BCS_TargetRecpTorqRq;
		BCS_TargetRecpTorqRqSt = _x.BCS_TargetRecpTorqRqSt;
		BCS_VCUReqConDecActiveVehhold = _x.BCS_VCUReqConDecActiveVehhold;
		BCS_VCUReqConDecActive = _x.BCS_VCUReqConDecActive;
		BCS_VCUReqConDecAvailable = _x.BCS_VCUReqConDecAvailable;
		BCS_CrbsActive = _x.BCS_CrbsActive;
		BCS_VCUReqConDecFail = _x.BCS_VCUReqConDecFail;
	}
	BDCVCUPerf(BDCVCUPerf &&_x){
		VCU_VehDrvMod = std::move(_x.VCU_VehDrvMod);
		VCU_IpedalModeAvail = std::move(_x.VCU_IpedalModeAvail);
		VCU_CrntGearLvl = std::move(_x.VCU_CrntGearLvl);
		VCU_GearPosition = std::move(_x.VCU_GearPosition);
		VCU_EMS_AccPedalActPst = std::move(_x.VCU_EMS_AccPedalActPst);
		EMS_GasPedalActPstforMRR = std::move(_x.EMS_GasPedalActPstforMRR);
		VCU_EMS_BrkNomalCloseSwitchSt = std::move(_x.VCU_EMS_BrkNomalCloseSwitchSt);
		VCU_EMS_BrkPedalSt = std::move(_x.VCU_EMS_BrkPedalSt);
		VCU_EMS_BrkPedalStVD = std::move(_x.VCU_EMS_BrkPedalStVD);
		VCU_EMS_AccPedalActPstVD = std::move(_x.VCU_EMS_AccPedalActPstVD);
		VCU_DCU_ActRotSpd = std::move(_x.VCU_DCU_ActRotSpd);
		BCS_VehSpd = std::move(_x.BCS_VehSpd);
		BCS_TargetRecpTorqRq = std::move(_x.BCS_TargetRecpTorqRq);
		BCS_TargetRecpTorqRqSt = std::move(_x.BCS_TargetRecpTorqRqSt);
		BCS_VCUReqConDecActiveVehhold = std::move(_x.BCS_VCUReqConDecActiveVehhold);
		BCS_VCUReqConDecActive = std::move(_x.BCS_VCUReqConDecActive);
		BCS_VCUReqConDecAvailable = std::move(_x.BCS_VCUReqConDecAvailable);
		BCS_CrbsActive = std::move(_x.BCS_CrbsActive);
		BCS_VCUReqConDecFail = std::move(_x.BCS_VCUReqConDecFail);
	}
	BDCVCUPerf& operator=(const BDCVCUPerf &_x){
		VCU_VehDrvMod = _x.VCU_VehDrvMod;
		VCU_IpedalModeAvail = _x.VCU_IpedalModeAvail;
		VCU_CrntGearLvl = _x.VCU_CrntGearLvl;
		VCU_GearPosition = _x.VCU_GearPosition;
		VCU_EMS_AccPedalActPst = _x.VCU_EMS_AccPedalActPst;
		EMS_GasPedalActPstforMRR = _x.EMS_GasPedalActPstforMRR;
		VCU_EMS_BrkNomalCloseSwitchSt = _x.VCU_EMS_BrkNomalCloseSwitchSt;
		VCU_EMS_BrkPedalSt = _x.VCU_EMS_BrkPedalSt;
		VCU_EMS_BrkPedalStVD = _x.VCU_EMS_BrkPedalStVD;
		VCU_EMS_AccPedalActPstVD = _x.VCU_EMS_AccPedalActPstVD;
		VCU_DCU_ActRotSpd = _x.VCU_DCU_ActRotSpd;
		BCS_VehSpd = _x.BCS_VehSpd;
		BCS_TargetRecpTorqRq = _x.BCS_TargetRecpTorqRq;
		BCS_TargetRecpTorqRqSt = _x.BCS_TargetRecpTorqRqSt;
		BCS_VCUReqConDecActiveVehhold = _x.BCS_VCUReqConDecActiveVehhold;
		BCS_VCUReqConDecActive = _x.BCS_VCUReqConDecActive;
		BCS_VCUReqConDecAvailable = _x.BCS_VCUReqConDecAvailable;
		BCS_CrbsActive = _x.BCS_CrbsActive;
		BCS_VCUReqConDecFail = _x.BCS_VCUReqConDecFail;
		return *this;
	}
	BDCVCUPerf& operator=(BDCVCUPerf &&_x){
		VCU_VehDrvMod = std::move(_x.VCU_VehDrvMod);
		VCU_IpedalModeAvail = std::move(_x.VCU_IpedalModeAvail);
		VCU_CrntGearLvl = std::move(_x.VCU_CrntGearLvl);
		VCU_GearPosition = std::move(_x.VCU_GearPosition);
		VCU_EMS_AccPedalActPst = std::move(_x.VCU_EMS_AccPedalActPst);
		EMS_GasPedalActPstforMRR = std::move(_x.EMS_GasPedalActPstforMRR);
		VCU_EMS_BrkNomalCloseSwitchSt = std::move(_x.VCU_EMS_BrkNomalCloseSwitchSt);
		VCU_EMS_BrkPedalSt = std::move(_x.VCU_EMS_BrkPedalSt);
		VCU_EMS_BrkPedalStVD = std::move(_x.VCU_EMS_BrkPedalStVD);
		VCU_EMS_AccPedalActPstVD = std::move(_x.VCU_EMS_AccPedalActPstVD);
		VCU_DCU_ActRotSpd = std::move(_x.VCU_DCU_ActRotSpd);
		BCS_VehSpd = std::move(_x.BCS_VehSpd);
		BCS_TargetRecpTorqRq = std::move(_x.BCS_TargetRecpTorqRq);
		BCS_TargetRecpTorqRqSt = std::move(_x.BCS_TargetRecpTorqRqSt);
		BCS_VCUReqConDecActiveVehhold = std::move(_x.BCS_VCUReqConDecActiveVehhold);
		BCS_VCUReqConDecActive = std::move(_x.BCS_VCUReqConDecActive);
		BCS_VCUReqConDecAvailable = std::move(_x.BCS_VCUReqConDecAvailable);
		BCS_CrbsActive = std::move(_x.BCS_CrbsActive);
		BCS_VCUReqConDecFail = std::move(_x.BCS_VCUReqConDecFail);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(VCU_VehDrvMod);
		fun(VCU_IpedalModeAvail);
		fun(VCU_CrntGearLvl);
		fun(VCU_GearPosition);
		fun(VCU_EMS_AccPedalActPst);
		fun(EMS_GasPedalActPstforMRR);
		fun(VCU_EMS_BrkNomalCloseSwitchSt);
		fun(VCU_EMS_BrkPedalSt);
		fun(VCU_EMS_BrkPedalStVD);
		fun(VCU_EMS_AccPedalActPstVD);
		fun(VCU_DCU_ActRotSpd);
		fun(BCS_VehSpd);
		fun(BCS_TargetRecpTorqRq);
		fun(BCS_TargetRecpTorqRqSt);
		fun(BCS_VCUReqConDecActiveVehhold);
		fun(BCS_VCUReqConDecActive);
		fun(BCS_VCUReqConDecAvailable);
		fun(BCS_CrbsActive);
		fun(BCS_VCUReqConDecFail);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(VCU_VehDrvMod);
		fun(VCU_IpedalModeAvail);
		fun(VCU_CrntGearLvl);
		fun(VCU_GearPosition);
		fun(VCU_EMS_AccPedalActPst);
		fun(EMS_GasPedalActPstforMRR);
		fun(VCU_EMS_BrkNomalCloseSwitchSt);
		fun(VCU_EMS_BrkPedalSt);
		fun(VCU_EMS_BrkPedalStVD);
		fun(VCU_EMS_AccPedalActPstVD);
		fun(VCU_DCU_ActRotSpd);
		fun(BCS_VehSpd);
		fun(BCS_TargetRecpTorqRq);
		fun(BCS_TargetRecpTorqRqSt);
		fun(BCS_VCUReqConDecActiveVehhold);
		fun(BCS_VCUReqConDecActive);
		fun(BCS_VCUReqConDecAvailable);
		fun(BCS_CrbsActive);
		fun(BCS_VCUReqConDecFail);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (VCU_VehDrvMod);
		fun << (VCU_IpedalModeAvail);
		fun << (VCU_CrntGearLvl);
		fun << (VCU_GearPosition);
		fun << (VCU_EMS_AccPedalActPst);
		fun << (EMS_GasPedalActPstforMRR);
		fun << (VCU_EMS_BrkNomalCloseSwitchSt);
		fun << (VCU_EMS_BrkPedalSt);
		fun << (VCU_EMS_BrkPedalStVD);
		fun << (VCU_EMS_AccPedalActPstVD);
		fun << (VCU_DCU_ActRotSpd);
		fun << (BCS_VehSpd);
		fun << (BCS_TargetRecpTorqRq);
		fun << (BCS_TargetRecpTorqRqSt);
		fun << (BCS_VCUReqConDecActiveVehhold);
		fun << (BCS_VCUReqConDecActive);
		fun << (BCS_VCUReqConDecAvailable);
		fun << (BCS_CrbsActive);
		fun << (BCS_VCUReqConDecFail);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (VCU_VehDrvMod);
		fun >> (VCU_IpedalModeAvail);
		fun >> (VCU_CrntGearLvl);
		fun >> (VCU_GearPosition);
		fun >> (VCU_EMS_AccPedalActPst);
		fun >> (EMS_GasPedalActPstforMRR);
		fun >> (VCU_EMS_BrkNomalCloseSwitchSt);
		fun >> (VCU_EMS_BrkPedalSt);
		fun >> (VCU_EMS_BrkPedalStVD);
		fun >> (VCU_EMS_AccPedalActPstVD);
		fun >> (VCU_DCU_ActRotSpd);
		fun >> (BCS_VehSpd);
		fun >> (BCS_TargetRecpTorqRq);
		fun >> (BCS_TargetRecpTorqRqSt);
		fun >> (BCS_VCUReqConDecActiveVehhold);
		fun >> (BCS_VCUReqConDecActive);
		fun >> (BCS_VCUReqConDecAvailable);
		fun >> (BCS_CrbsActive);
		fun >> (BCS_VCUReqConDecFail);
	}
};

#endif //____BDCVCUPERF_H__
