#ifndef ____BDCBHS_H__
#define ____BDCBHS_H__


#include "cstdint"






struct BDCBHS {
public:
	std::uint8_t IPDS_KL15L1PowerSup;
	std::uint8_t IPDS_KL15L2PowerSup;
	std::uint8_t CCU_NMWakeupOrigin;
	std::uint8_t VCU_DCU_ModeReq;
	std::uint8_t VCU_HvilSt;
	std::uint8_t VCU_BMS_BatModeReq;
	std::uint8_t VCU_IPS_DCDCModeReq;
	std::uint8_t VCU_IPS_OBCModeReq;
/*
	BDCBHS() {}
	~BDCBHS() {}
	BDCBHS(const std::uint8_t _IPDS_KL15L1PowerSup,const std::uint8_t _IPDS_KL15L2PowerSup,const std::uint8_t _CCU_NMWakeupOrigin,const std::uint8_t _VCU_DCU_ModeReq,const std::uint8_t _VCU_HvilSt,const std::uint8_t _VCU_BMS_BatModeReq,const std::uint8_t _VCU_IPS_DCDCModeReq,const std::uint8_t _VCU_IPS_OBCModeReq):IPDS_KL15L1PowerSup(_IPDS_KL15L1PowerSup),IPDS_KL15L2PowerSup(_IPDS_KL15L2PowerSup),CCU_NMWakeupOrigin(_CCU_NMWakeupOrigin),VCU_DCU_ModeReq(_VCU_DCU_ModeReq),VCU_HvilSt(_VCU_HvilSt),VCU_BMS_BatModeReq(_VCU_BMS_BatModeReq),VCU_IPS_DCDCModeReq(_VCU_IPS_DCDCModeReq),VCU_IPS_OBCModeReq(_VCU_IPS_OBCModeReq) {}
	BDCBHS(const BDCBHS &_x){
		IPDS_KL15L1PowerSup = _x.IPDS_KL15L1PowerSup;
		IPDS_KL15L2PowerSup = _x.IPDS_KL15L2PowerSup;
		CCU_NMWakeupOrigin = _x.CCU_NMWakeupOrigin;
		VCU_DCU_ModeReq = _x.VCU_DCU_ModeReq;
		VCU_HvilSt = _x.VCU_HvilSt;
		VCU_BMS_BatModeReq = _x.VCU_BMS_BatModeReq;
		VCU_IPS_DCDCModeReq = _x.VCU_IPS_DCDCModeReq;
		VCU_IPS_OBCModeReq = _x.VCU_IPS_OBCModeReq;
	}
	BDCBHS(BDCBHS &&_x){
		IPDS_KL15L1PowerSup = std::move(_x.IPDS_KL15L1PowerSup);
		IPDS_KL15L2PowerSup = std::move(_x.IPDS_KL15L2PowerSup);
		CCU_NMWakeupOrigin = std::move(_x.CCU_NMWakeupOrigin);
		VCU_DCU_ModeReq = std::move(_x.VCU_DCU_ModeReq);
		VCU_HvilSt = std::move(_x.VCU_HvilSt);
		VCU_BMS_BatModeReq = std::move(_x.VCU_BMS_BatModeReq);
		VCU_IPS_DCDCModeReq = std::move(_x.VCU_IPS_DCDCModeReq);
		VCU_IPS_OBCModeReq = std::move(_x.VCU_IPS_OBCModeReq);
	}
	BDCBHS& operator=(const BDCBHS &_x){
		IPDS_KL15L1PowerSup = _x.IPDS_KL15L1PowerSup;
		IPDS_KL15L2PowerSup = _x.IPDS_KL15L2PowerSup;
		CCU_NMWakeupOrigin = _x.CCU_NMWakeupOrigin;
		VCU_DCU_ModeReq = _x.VCU_DCU_ModeReq;
		VCU_HvilSt = _x.VCU_HvilSt;
		VCU_BMS_BatModeReq = _x.VCU_BMS_BatModeReq;
		VCU_IPS_DCDCModeReq = _x.VCU_IPS_DCDCModeReq;
		VCU_IPS_OBCModeReq = _x.VCU_IPS_OBCModeReq;
		return *this;
	}
	BDCBHS& operator=(BDCBHS &&_x){
		IPDS_KL15L1PowerSup = std::move(_x.IPDS_KL15L1PowerSup);
		IPDS_KL15L2PowerSup = std::move(_x.IPDS_KL15L2PowerSup);
		CCU_NMWakeupOrigin = std::move(_x.CCU_NMWakeupOrigin);
		VCU_DCU_ModeReq = std::move(_x.VCU_DCU_ModeReq);
		VCU_HvilSt = std::move(_x.VCU_HvilSt);
		VCU_BMS_BatModeReq = std::move(_x.VCU_BMS_BatModeReq);
		VCU_IPS_DCDCModeReq = std::move(_x.VCU_IPS_DCDCModeReq);
		VCU_IPS_OBCModeReq = std::move(_x.VCU_IPS_OBCModeReq);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(IPDS_KL15L1PowerSup);
		fun(IPDS_KL15L2PowerSup);
		fun(CCU_NMWakeupOrigin);
		fun(VCU_DCU_ModeReq);
		fun(VCU_HvilSt);
		fun(VCU_BMS_BatModeReq);
		fun(VCU_IPS_DCDCModeReq);
		fun(VCU_IPS_OBCModeReq);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(IPDS_KL15L1PowerSup);
		fun(IPDS_KL15L2PowerSup);
		fun(CCU_NMWakeupOrigin);
		fun(VCU_DCU_ModeReq);
		fun(VCU_HvilSt);
		fun(VCU_BMS_BatModeReq);
		fun(VCU_IPS_DCDCModeReq);
		fun(VCU_IPS_OBCModeReq);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (IPDS_KL15L1PowerSup);
		fun << (IPDS_KL15L2PowerSup);
		fun << (CCU_NMWakeupOrigin);
		fun << (VCU_DCU_ModeReq);
		fun << (VCU_HvilSt);
		fun << (VCU_BMS_BatModeReq);
		fun << (VCU_IPS_DCDCModeReq);
		fun << (VCU_IPS_OBCModeReq);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (IPDS_KL15L1PowerSup);
		fun >> (IPDS_KL15L2PowerSup);
		fun >> (CCU_NMWakeupOrigin);
		fun >> (VCU_DCU_ModeReq);
		fun >> (VCU_HvilSt);
		fun >> (VCU_BMS_BatModeReq);
		fun >> (VCU_IPS_DCDCModeReq);
		fun >> (VCU_IPS_OBCModeReq);
	}
};

#endif //____BDCBHS_H__
