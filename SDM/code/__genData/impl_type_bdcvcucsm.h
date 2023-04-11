#ifndef ____BDCVCUCSM_H__
#define ____BDCVCUCSM_H__


#include "cstdint"






struct BDCVCUCSM {
public:
	std::uint64_t WCC_IPSWakeupSource;
	std::uint64_t VCU_ShdSwapComn;
	std::uint64_t VCU_CCUDCUPowerSup;
	std::uint64_t VCU_CCUAGSPowerSup;
	std::uint64_t VCU_CCUSRSPowerSup;
	std::uint64_t VCU_AcChPlgSt;
	std::uint64_t VCU_NMVCUGlobalKeepAwakeFlag;
	std::uint64_t VCU_NMVCUChargingKeepAwakeFlag;
	std::uint64_t CSM_RC_HVReq;
	std::uint8_t CSM_RC_AuthSt;
	std::uint64_t CSM_RC_AutoChargeSt;
	std::uint64_t CSM_RC_Charging;
	std::uint64_t CSM_RC_PrecoolPreheat;
	std::uint64_t CSM_RC_ChargeGunReq;
	std::uint8_t UMM_CrankReq;
/*
	BDCVCUCSM() {}
	~BDCVCUCSM() {}
	BDCVCUCSM(const std::uint64_t _WCC_IPSWakeupSource,const std::uint64_t _VCU_ShdSwapComn,const std::uint64_t _VCU_CCUDCUPowerSup,const std::uint64_t _VCU_CCUAGSPowerSup,const std::uint64_t _VCU_CCUSRSPowerSup,const std::uint64_t _VCU_AcChPlgSt,const std::uint64_t _VCU_NMVCUGlobalKeepAwakeFlag,const std::uint64_t _VCU_NMVCUChargingKeepAwakeFlag,const std::uint64_t _CSM_RC_HVReq,const std::uint8_t _CSM_RC_AuthSt,const std::uint64_t _CSM_RC_AutoChargeSt,const std::uint64_t _CSM_RC_Charging,const std::uint64_t _CSM_RC_PrecoolPreheat,const std::uint64_t _CSM_RC_ChargeGunReq,const std::uint8_t _UMM_CrankReq):WCC_IPSWakeupSource(_WCC_IPSWakeupSource),VCU_ShdSwapComn(_VCU_ShdSwapComn),VCU_CCUDCUPowerSup(_VCU_CCUDCUPowerSup),VCU_CCUAGSPowerSup(_VCU_CCUAGSPowerSup),VCU_CCUSRSPowerSup(_VCU_CCUSRSPowerSup),VCU_AcChPlgSt(_VCU_AcChPlgSt),VCU_NMVCUGlobalKeepAwakeFlag(_VCU_NMVCUGlobalKeepAwakeFlag),VCU_NMVCUChargingKeepAwakeFlag(_VCU_NMVCUChargingKeepAwakeFlag),CSM_RC_HVReq(_CSM_RC_HVReq),CSM_RC_AuthSt(_CSM_RC_AuthSt),CSM_RC_AutoChargeSt(_CSM_RC_AutoChargeSt),CSM_RC_Charging(_CSM_RC_Charging),CSM_RC_PrecoolPreheat(_CSM_RC_PrecoolPreheat),CSM_RC_ChargeGunReq(_CSM_RC_ChargeGunReq),UMM_CrankReq(_UMM_CrankReq) {}
	BDCVCUCSM(const BDCVCUCSM &_x){
		WCC_IPSWakeupSource = _x.WCC_IPSWakeupSource;
		VCU_ShdSwapComn = _x.VCU_ShdSwapComn;
		VCU_CCUDCUPowerSup = _x.VCU_CCUDCUPowerSup;
		VCU_CCUAGSPowerSup = _x.VCU_CCUAGSPowerSup;
		VCU_CCUSRSPowerSup = _x.VCU_CCUSRSPowerSup;
		VCU_AcChPlgSt = _x.VCU_AcChPlgSt;
		VCU_NMVCUGlobalKeepAwakeFlag = _x.VCU_NMVCUGlobalKeepAwakeFlag;
		VCU_NMVCUChargingKeepAwakeFlag = _x.VCU_NMVCUChargingKeepAwakeFlag;
		CSM_RC_HVReq = _x.CSM_RC_HVReq;
		CSM_RC_AuthSt = _x.CSM_RC_AuthSt;
		CSM_RC_AutoChargeSt = _x.CSM_RC_AutoChargeSt;
		CSM_RC_Charging = _x.CSM_RC_Charging;
		CSM_RC_PrecoolPreheat = _x.CSM_RC_PrecoolPreheat;
		CSM_RC_ChargeGunReq = _x.CSM_RC_ChargeGunReq;
		UMM_CrankReq = _x.UMM_CrankReq;
	}
	BDCVCUCSM(BDCVCUCSM &&_x){
		WCC_IPSWakeupSource = std::move(_x.WCC_IPSWakeupSource);
		VCU_ShdSwapComn = std::move(_x.VCU_ShdSwapComn);
		VCU_CCUDCUPowerSup = std::move(_x.VCU_CCUDCUPowerSup);
		VCU_CCUAGSPowerSup = std::move(_x.VCU_CCUAGSPowerSup);
		VCU_CCUSRSPowerSup = std::move(_x.VCU_CCUSRSPowerSup);
		VCU_AcChPlgSt = std::move(_x.VCU_AcChPlgSt);
		VCU_NMVCUGlobalKeepAwakeFlag = std::move(_x.VCU_NMVCUGlobalKeepAwakeFlag);
		VCU_NMVCUChargingKeepAwakeFlag = std::move(_x.VCU_NMVCUChargingKeepAwakeFlag);
		CSM_RC_HVReq = std::move(_x.CSM_RC_HVReq);
		CSM_RC_AuthSt = std::move(_x.CSM_RC_AuthSt);
		CSM_RC_AutoChargeSt = std::move(_x.CSM_RC_AutoChargeSt);
		CSM_RC_Charging = std::move(_x.CSM_RC_Charging);
		CSM_RC_PrecoolPreheat = std::move(_x.CSM_RC_PrecoolPreheat);
		CSM_RC_ChargeGunReq = std::move(_x.CSM_RC_ChargeGunReq);
		UMM_CrankReq = std::move(_x.UMM_CrankReq);
	}
	BDCVCUCSM& operator=(const BDCVCUCSM &_x){
		WCC_IPSWakeupSource = _x.WCC_IPSWakeupSource;
		VCU_ShdSwapComn = _x.VCU_ShdSwapComn;
		VCU_CCUDCUPowerSup = _x.VCU_CCUDCUPowerSup;
		VCU_CCUAGSPowerSup = _x.VCU_CCUAGSPowerSup;
		VCU_CCUSRSPowerSup = _x.VCU_CCUSRSPowerSup;
		VCU_AcChPlgSt = _x.VCU_AcChPlgSt;
		VCU_NMVCUGlobalKeepAwakeFlag = _x.VCU_NMVCUGlobalKeepAwakeFlag;
		VCU_NMVCUChargingKeepAwakeFlag = _x.VCU_NMVCUChargingKeepAwakeFlag;
		CSM_RC_HVReq = _x.CSM_RC_HVReq;
		CSM_RC_AuthSt = _x.CSM_RC_AuthSt;
		CSM_RC_AutoChargeSt = _x.CSM_RC_AutoChargeSt;
		CSM_RC_Charging = _x.CSM_RC_Charging;
		CSM_RC_PrecoolPreheat = _x.CSM_RC_PrecoolPreheat;
		CSM_RC_ChargeGunReq = _x.CSM_RC_ChargeGunReq;
		UMM_CrankReq = _x.UMM_CrankReq;
		return *this;
	}
	BDCVCUCSM& operator=(BDCVCUCSM &&_x){
		WCC_IPSWakeupSource = std::move(_x.WCC_IPSWakeupSource);
		VCU_ShdSwapComn = std::move(_x.VCU_ShdSwapComn);
		VCU_CCUDCUPowerSup = std::move(_x.VCU_CCUDCUPowerSup);
		VCU_CCUAGSPowerSup = std::move(_x.VCU_CCUAGSPowerSup);
		VCU_CCUSRSPowerSup = std::move(_x.VCU_CCUSRSPowerSup);
		VCU_AcChPlgSt = std::move(_x.VCU_AcChPlgSt);
		VCU_NMVCUGlobalKeepAwakeFlag = std::move(_x.VCU_NMVCUGlobalKeepAwakeFlag);
		VCU_NMVCUChargingKeepAwakeFlag = std::move(_x.VCU_NMVCUChargingKeepAwakeFlag);
		CSM_RC_HVReq = std::move(_x.CSM_RC_HVReq);
		CSM_RC_AuthSt = std::move(_x.CSM_RC_AuthSt);
		CSM_RC_AutoChargeSt = std::move(_x.CSM_RC_AutoChargeSt);
		CSM_RC_Charging = std::move(_x.CSM_RC_Charging);
		CSM_RC_PrecoolPreheat = std::move(_x.CSM_RC_PrecoolPreheat);
		CSM_RC_ChargeGunReq = std::move(_x.CSM_RC_ChargeGunReq);
		UMM_CrankReq = std::move(_x.UMM_CrankReq);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(WCC_IPSWakeupSource);
		fun(VCU_ShdSwapComn);
		fun(VCU_CCUDCUPowerSup);
		fun(VCU_CCUAGSPowerSup);
		fun(VCU_CCUSRSPowerSup);
		fun(VCU_AcChPlgSt);
		fun(VCU_NMVCUGlobalKeepAwakeFlag);
		fun(VCU_NMVCUChargingKeepAwakeFlag);
		fun(CSM_RC_HVReq);
		fun(CSM_RC_AuthSt);
		fun(CSM_RC_AutoChargeSt);
		fun(CSM_RC_Charging);
		fun(CSM_RC_PrecoolPreheat);
		fun(CSM_RC_ChargeGunReq);
		fun(UMM_CrankReq);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(WCC_IPSWakeupSource);
		fun(VCU_ShdSwapComn);
		fun(VCU_CCUDCUPowerSup);
		fun(VCU_CCUAGSPowerSup);
		fun(VCU_CCUSRSPowerSup);
		fun(VCU_AcChPlgSt);
		fun(VCU_NMVCUGlobalKeepAwakeFlag);
		fun(VCU_NMVCUChargingKeepAwakeFlag);
		fun(CSM_RC_HVReq);
		fun(CSM_RC_AuthSt);
		fun(CSM_RC_AutoChargeSt);
		fun(CSM_RC_Charging);
		fun(CSM_RC_PrecoolPreheat);
		fun(CSM_RC_ChargeGunReq);
		fun(UMM_CrankReq);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (WCC_IPSWakeupSource);
		fun << (VCU_ShdSwapComn);
		fun << (VCU_CCUDCUPowerSup);
		fun << (VCU_CCUAGSPowerSup);
		fun << (VCU_CCUSRSPowerSup);
		fun << (VCU_AcChPlgSt);
		fun << (VCU_NMVCUGlobalKeepAwakeFlag);
		fun << (VCU_NMVCUChargingKeepAwakeFlag);
		fun << (CSM_RC_HVReq);
		fun << (CSM_RC_AuthSt);
		fun << (CSM_RC_AutoChargeSt);
		fun << (CSM_RC_Charging);
		fun << (CSM_RC_PrecoolPreheat);
		fun << (CSM_RC_ChargeGunReq);
		fun << (UMM_CrankReq);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (WCC_IPSWakeupSource);
		fun >> (VCU_ShdSwapComn);
		fun >> (VCU_CCUDCUPowerSup);
		fun >> (VCU_CCUAGSPowerSup);
		fun >> (VCU_CCUSRSPowerSup);
		fun >> (VCU_AcChPlgSt);
		fun >> (VCU_NMVCUGlobalKeepAwakeFlag);
		fun >> (VCU_NMVCUChargingKeepAwakeFlag);
		fun >> (CSM_RC_HVReq);
		fun >> (CSM_RC_AuthSt);
		fun >> (CSM_RC_AutoChargeSt);
		fun >> (CSM_RC_Charging);
		fun >> (CSM_RC_PrecoolPreheat);
		fun >> (CSM_RC_ChargeGunReq);
		fun >> (UMM_CrankReq);
	}
};

#endif //____BDCVCUCSM_H__
