#ifndef ____BDCBMCHVAC2_H__
#define ____BDCBMCHVAC2_H__


#include "cstdint"






struct BDCBMCHVAC2 {
public:
	std::uint8_t VCU_HVAC_InterCirReq;
	std::uint8_t VCU_HVAC_CabinCoolHeatOffReq;
	std::uint8_t VCU_BattCoolPwrReq;
	std::uint8_t VCU_PwrHeatEn;
	std::uint8_t VCU_HVBatHeatPrioReq;
	std::uint8_t VCU_PwrCoolEn;
	std::uint8_t VCU_HVACPwrLimit;
	std::uint8_t VCU_HVACPwrLimitAct;
	std::uint8_t VCU_HVACEcoModeReq;
	std::uint8_t VCU_HVAC_PTCdelayEn;
	std::uint8_t VCU_HVBatCoolPrioReq;
	std::uint8_t VCU_HVAC_PTCShutImme;
	std::uint8_t VCU_HeatRecEnChiller;
	std::uint8_t VCU_HVACHeatPowerSup;
	std::uint8_t VCU_HVACCoolPowerSup;
	std::uint8_t HVAC_PTCHeatingReq;
	std::uint8_t VCU_AutoCalibReq_1;
	std::uint8_t VCU_TorqueBoostReq_1;
	std::uint8_t VCU_TorqueBoostReq_2;
	std::uint8_t VCU_TargetPosReq_1;
	std::uint8_t VCU_TargetPosReq_2;
	std::uint8_t VCU_AutoCalibReq_2;
/*
	BDCBMCHVAC2() {}
	~BDCBMCHVAC2() {}
	BDCBMCHVAC2(const std::uint8_t _VCU_HVAC_InterCirReq,const std::uint8_t _VCU_HVAC_CabinCoolHeatOffReq,const std::uint8_t _VCU_BattCoolPwrReq,const std::uint8_t _VCU_PwrHeatEn,const std::uint8_t _VCU_HVBatHeatPrioReq,const std::uint8_t _VCU_PwrCoolEn,const std::uint8_t _VCU_HVACPwrLimit,const std::uint8_t _VCU_HVACPwrLimitAct,const std::uint8_t _VCU_HVACEcoModeReq,const std::uint8_t _VCU_HVAC_PTCdelayEn,const std::uint8_t _VCU_HVBatCoolPrioReq,const std::uint8_t _VCU_HVAC_PTCShutImme,const std::uint8_t _VCU_HeatRecEnChiller,const std::uint8_t _VCU_HVACHeatPowerSup,const std::uint8_t _VCU_HVACCoolPowerSup,const std::uint8_t _HVAC_PTCHeatingReq,const std::uint8_t _VCU_AutoCalibReq_1,const std::uint8_t _VCU_TorqueBoostReq_1,const std::uint8_t _VCU_TorqueBoostReq_2,const std::uint8_t _VCU_TargetPosReq_1,const std::uint8_t _VCU_TargetPosReq_2,const std::uint8_t _VCU_AutoCalibReq_2):VCU_HVAC_InterCirReq(_VCU_HVAC_InterCirReq),VCU_HVAC_CabinCoolHeatOffReq(_VCU_HVAC_CabinCoolHeatOffReq),VCU_BattCoolPwrReq(_VCU_BattCoolPwrReq),VCU_PwrHeatEn(_VCU_PwrHeatEn),VCU_HVBatHeatPrioReq(_VCU_HVBatHeatPrioReq),VCU_PwrCoolEn(_VCU_PwrCoolEn),VCU_HVACPwrLimit(_VCU_HVACPwrLimit),VCU_HVACPwrLimitAct(_VCU_HVACPwrLimitAct),VCU_HVACEcoModeReq(_VCU_HVACEcoModeReq),VCU_HVAC_PTCdelayEn(_VCU_HVAC_PTCdelayEn),VCU_HVBatCoolPrioReq(_VCU_HVBatCoolPrioReq),VCU_HVAC_PTCShutImme(_VCU_HVAC_PTCShutImme),VCU_HeatRecEnChiller(_VCU_HeatRecEnChiller),VCU_HVACHeatPowerSup(_VCU_HVACHeatPowerSup),VCU_HVACCoolPowerSup(_VCU_HVACCoolPowerSup),HVAC_PTCHeatingReq(_HVAC_PTCHeatingReq),VCU_AutoCalibReq_1(_VCU_AutoCalibReq_1),VCU_TorqueBoostReq_1(_VCU_TorqueBoostReq_1),VCU_TorqueBoostReq_2(_VCU_TorqueBoostReq_2),VCU_TargetPosReq_1(_VCU_TargetPosReq_1),VCU_TargetPosReq_2(_VCU_TargetPosReq_2),VCU_AutoCalibReq_2(_VCU_AutoCalibReq_2) {}
	BDCBMCHVAC2(const BDCBMCHVAC2 &_x){
		VCU_HVAC_InterCirReq = _x.VCU_HVAC_InterCirReq;
		VCU_HVAC_CabinCoolHeatOffReq = _x.VCU_HVAC_CabinCoolHeatOffReq;
		VCU_BattCoolPwrReq = _x.VCU_BattCoolPwrReq;
		VCU_PwrHeatEn = _x.VCU_PwrHeatEn;
		VCU_HVBatHeatPrioReq = _x.VCU_HVBatHeatPrioReq;
		VCU_PwrCoolEn = _x.VCU_PwrCoolEn;
		VCU_HVACPwrLimit = _x.VCU_HVACPwrLimit;
		VCU_HVACPwrLimitAct = _x.VCU_HVACPwrLimitAct;
		VCU_HVACEcoModeReq = _x.VCU_HVACEcoModeReq;
		VCU_HVAC_PTCdelayEn = _x.VCU_HVAC_PTCdelayEn;
		VCU_HVBatCoolPrioReq = _x.VCU_HVBatCoolPrioReq;
		VCU_HVAC_PTCShutImme = _x.VCU_HVAC_PTCShutImme;
		VCU_HeatRecEnChiller = _x.VCU_HeatRecEnChiller;
		VCU_HVACHeatPowerSup = _x.VCU_HVACHeatPowerSup;
		VCU_HVACCoolPowerSup = _x.VCU_HVACCoolPowerSup;
		HVAC_PTCHeatingReq = _x.HVAC_PTCHeatingReq;
		VCU_AutoCalibReq_1 = _x.VCU_AutoCalibReq_1;
		VCU_TorqueBoostReq_1 = _x.VCU_TorqueBoostReq_1;
		VCU_TorqueBoostReq_2 = _x.VCU_TorqueBoostReq_2;
		VCU_TargetPosReq_1 = _x.VCU_TargetPosReq_1;
		VCU_TargetPosReq_2 = _x.VCU_TargetPosReq_2;
		VCU_AutoCalibReq_2 = _x.VCU_AutoCalibReq_2;
	}
	BDCBMCHVAC2(BDCBMCHVAC2 &&_x){
		VCU_HVAC_InterCirReq = std::move(_x.VCU_HVAC_InterCirReq);
		VCU_HVAC_CabinCoolHeatOffReq = std::move(_x.VCU_HVAC_CabinCoolHeatOffReq);
		VCU_BattCoolPwrReq = std::move(_x.VCU_BattCoolPwrReq);
		VCU_PwrHeatEn = std::move(_x.VCU_PwrHeatEn);
		VCU_HVBatHeatPrioReq = std::move(_x.VCU_HVBatHeatPrioReq);
		VCU_PwrCoolEn = std::move(_x.VCU_PwrCoolEn);
		VCU_HVACPwrLimit = std::move(_x.VCU_HVACPwrLimit);
		VCU_HVACPwrLimitAct = std::move(_x.VCU_HVACPwrLimitAct);
		VCU_HVACEcoModeReq = std::move(_x.VCU_HVACEcoModeReq);
		VCU_HVAC_PTCdelayEn = std::move(_x.VCU_HVAC_PTCdelayEn);
		VCU_HVBatCoolPrioReq = std::move(_x.VCU_HVBatCoolPrioReq);
		VCU_HVAC_PTCShutImme = std::move(_x.VCU_HVAC_PTCShutImme);
		VCU_HeatRecEnChiller = std::move(_x.VCU_HeatRecEnChiller);
		VCU_HVACHeatPowerSup = std::move(_x.VCU_HVACHeatPowerSup);
		VCU_HVACCoolPowerSup = std::move(_x.VCU_HVACCoolPowerSup);
		HVAC_PTCHeatingReq = std::move(_x.HVAC_PTCHeatingReq);
		VCU_AutoCalibReq_1 = std::move(_x.VCU_AutoCalibReq_1);
		VCU_TorqueBoostReq_1 = std::move(_x.VCU_TorqueBoostReq_1);
		VCU_TorqueBoostReq_2 = std::move(_x.VCU_TorqueBoostReq_2);
		VCU_TargetPosReq_1 = std::move(_x.VCU_TargetPosReq_1);
		VCU_TargetPosReq_2 = std::move(_x.VCU_TargetPosReq_2);
		VCU_AutoCalibReq_2 = std::move(_x.VCU_AutoCalibReq_2);
	}
	BDCBMCHVAC2& operator=(const BDCBMCHVAC2 &_x){
		VCU_HVAC_InterCirReq = _x.VCU_HVAC_InterCirReq;
		VCU_HVAC_CabinCoolHeatOffReq = _x.VCU_HVAC_CabinCoolHeatOffReq;
		VCU_BattCoolPwrReq = _x.VCU_BattCoolPwrReq;
		VCU_PwrHeatEn = _x.VCU_PwrHeatEn;
		VCU_HVBatHeatPrioReq = _x.VCU_HVBatHeatPrioReq;
		VCU_PwrCoolEn = _x.VCU_PwrCoolEn;
		VCU_HVACPwrLimit = _x.VCU_HVACPwrLimit;
		VCU_HVACPwrLimitAct = _x.VCU_HVACPwrLimitAct;
		VCU_HVACEcoModeReq = _x.VCU_HVACEcoModeReq;
		VCU_HVAC_PTCdelayEn = _x.VCU_HVAC_PTCdelayEn;
		VCU_HVBatCoolPrioReq = _x.VCU_HVBatCoolPrioReq;
		VCU_HVAC_PTCShutImme = _x.VCU_HVAC_PTCShutImme;
		VCU_HeatRecEnChiller = _x.VCU_HeatRecEnChiller;
		VCU_HVACHeatPowerSup = _x.VCU_HVACHeatPowerSup;
		VCU_HVACCoolPowerSup = _x.VCU_HVACCoolPowerSup;
		HVAC_PTCHeatingReq = _x.HVAC_PTCHeatingReq;
		VCU_AutoCalibReq_1 = _x.VCU_AutoCalibReq_1;
		VCU_TorqueBoostReq_1 = _x.VCU_TorqueBoostReq_1;
		VCU_TorqueBoostReq_2 = _x.VCU_TorqueBoostReq_2;
		VCU_TargetPosReq_1 = _x.VCU_TargetPosReq_1;
		VCU_TargetPosReq_2 = _x.VCU_TargetPosReq_2;
		VCU_AutoCalibReq_2 = _x.VCU_AutoCalibReq_2;
		return *this;
	}
	BDCBMCHVAC2& operator=(BDCBMCHVAC2 &&_x){
		VCU_HVAC_InterCirReq = std::move(_x.VCU_HVAC_InterCirReq);
		VCU_HVAC_CabinCoolHeatOffReq = std::move(_x.VCU_HVAC_CabinCoolHeatOffReq);
		VCU_BattCoolPwrReq = std::move(_x.VCU_BattCoolPwrReq);
		VCU_PwrHeatEn = std::move(_x.VCU_PwrHeatEn);
		VCU_HVBatHeatPrioReq = std::move(_x.VCU_HVBatHeatPrioReq);
		VCU_PwrCoolEn = std::move(_x.VCU_PwrCoolEn);
		VCU_HVACPwrLimit = std::move(_x.VCU_HVACPwrLimit);
		VCU_HVACPwrLimitAct = std::move(_x.VCU_HVACPwrLimitAct);
		VCU_HVACEcoModeReq = std::move(_x.VCU_HVACEcoModeReq);
		VCU_HVAC_PTCdelayEn = std::move(_x.VCU_HVAC_PTCdelayEn);
		VCU_HVBatCoolPrioReq = std::move(_x.VCU_HVBatCoolPrioReq);
		VCU_HVAC_PTCShutImme = std::move(_x.VCU_HVAC_PTCShutImme);
		VCU_HeatRecEnChiller = std::move(_x.VCU_HeatRecEnChiller);
		VCU_HVACHeatPowerSup = std::move(_x.VCU_HVACHeatPowerSup);
		VCU_HVACCoolPowerSup = std::move(_x.VCU_HVACCoolPowerSup);
		HVAC_PTCHeatingReq = std::move(_x.HVAC_PTCHeatingReq);
		VCU_AutoCalibReq_1 = std::move(_x.VCU_AutoCalibReq_1);
		VCU_TorqueBoostReq_1 = std::move(_x.VCU_TorqueBoostReq_1);
		VCU_TorqueBoostReq_2 = std::move(_x.VCU_TorqueBoostReq_2);
		VCU_TargetPosReq_1 = std::move(_x.VCU_TargetPosReq_1);
		VCU_TargetPosReq_2 = std::move(_x.VCU_TargetPosReq_2);
		VCU_AutoCalibReq_2 = std::move(_x.VCU_AutoCalibReq_2);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(VCU_HVAC_InterCirReq);
		fun(VCU_HVAC_CabinCoolHeatOffReq);
		fun(VCU_BattCoolPwrReq);
		fun(VCU_PwrHeatEn);
		fun(VCU_HVBatHeatPrioReq);
		fun(VCU_PwrCoolEn);
		fun(VCU_HVACPwrLimit);
		fun(VCU_HVACPwrLimitAct);
		fun(VCU_HVACEcoModeReq);
		fun(VCU_HVAC_PTCdelayEn);
		fun(VCU_HVBatCoolPrioReq);
		fun(VCU_HVAC_PTCShutImme);
		fun(VCU_HeatRecEnChiller);
		fun(VCU_HVACHeatPowerSup);
		fun(VCU_HVACCoolPowerSup);
		fun(HVAC_PTCHeatingReq);
		fun(VCU_AutoCalibReq_1);
		fun(VCU_TorqueBoostReq_1);
		fun(VCU_TorqueBoostReq_2);
		fun(VCU_TargetPosReq_1);
		fun(VCU_TargetPosReq_2);
		fun(VCU_AutoCalibReq_2);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(VCU_HVAC_InterCirReq);
		fun(VCU_HVAC_CabinCoolHeatOffReq);
		fun(VCU_BattCoolPwrReq);
		fun(VCU_PwrHeatEn);
		fun(VCU_HVBatHeatPrioReq);
		fun(VCU_PwrCoolEn);
		fun(VCU_HVACPwrLimit);
		fun(VCU_HVACPwrLimitAct);
		fun(VCU_HVACEcoModeReq);
		fun(VCU_HVAC_PTCdelayEn);
		fun(VCU_HVBatCoolPrioReq);
		fun(VCU_HVAC_PTCShutImme);
		fun(VCU_HeatRecEnChiller);
		fun(VCU_HVACHeatPowerSup);
		fun(VCU_HVACCoolPowerSup);
		fun(HVAC_PTCHeatingReq);
		fun(VCU_AutoCalibReq_1);
		fun(VCU_TorqueBoostReq_1);
		fun(VCU_TorqueBoostReq_2);
		fun(VCU_TargetPosReq_1);
		fun(VCU_TargetPosReq_2);
		fun(VCU_AutoCalibReq_2);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (VCU_HVAC_InterCirReq);
		fun << (VCU_HVAC_CabinCoolHeatOffReq);
		fun << (VCU_BattCoolPwrReq);
		fun << (VCU_PwrHeatEn);
		fun << (VCU_HVBatHeatPrioReq);
		fun << (VCU_PwrCoolEn);
		fun << (VCU_HVACPwrLimit);
		fun << (VCU_HVACPwrLimitAct);
		fun << (VCU_HVACEcoModeReq);
		fun << (VCU_HVAC_PTCdelayEn);
		fun << (VCU_HVBatCoolPrioReq);
		fun << (VCU_HVAC_PTCShutImme);
		fun << (VCU_HeatRecEnChiller);
		fun << (VCU_HVACHeatPowerSup);
		fun << (VCU_HVACCoolPowerSup);
		fun << (HVAC_PTCHeatingReq);
		fun << (VCU_AutoCalibReq_1);
		fun << (VCU_TorqueBoostReq_1);
		fun << (VCU_TorqueBoostReq_2);
		fun << (VCU_TargetPosReq_1);
		fun << (VCU_TargetPosReq_2);
		fun << (VCU_AutoCalibReq_2);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (VCU_HVAC_InterCirReq);
		fun >> (VCU_HVAC_CabinCoolHeatOffReq);
		fun >> (VCU_BattCoolPwrReq);
		fun >> (VCU_PwrHeatEn);
		fun >> (VCU_HVBatHeatPrioReq);
		fun >> (VCU_PwrCoolEn);
		fun >> (VCU_HVACPwrLimit);
		fun >> (VCU_HVACPwrLimitAct);
		fun >> (VCU_HVACEcoModeReq);
		fun >> (VCU_HVAC_PTCdelayEn);
		fun >> (VCU_HVBatCoolPrioReq);
		fun >> (VCU_HVAC_PTCShutImme);
		fun >> (VCU_HeatRecEnChiller);
		fun >> (VCU_HVACHeatPowerSup);
		fun >> (VCU_HVACCoolPowerSup);
		fun >> (HVAC_PTCHeatingReq);
		fun >> (VCU_AutoCalibReq_1);
		fun >> (VCU_TorqueBoostReq_1);
		fun >> (VCU_TorqueBoostReq_2);
		fun >> (VCU_TargetPosReq_1);
		fun >> (VCU_TargetPosReq_2);
		fun >> (VCU_AutoCalibReq_2);
	}
};

#endif //____BDCBMCHVAC2_H__
