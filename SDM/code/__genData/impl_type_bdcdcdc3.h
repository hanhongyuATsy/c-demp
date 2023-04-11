#ifndef ____BDCDCDC3_H__
#define ____BDCDCDC3_H__


#include "cstdint"






struct BDCDCDC3 {
public:
	std::uint16_t DCDC_CurrHvAct;
	std::uint16_t DCDC_CurrLvAct;
	std::uint16_t DCDC_VoltHvAct;
	std::uint16_t DCDC_VoltLvAct;
	std::uint8_t DCDC_ModeSt;
	std::uint16_t DCDC_SwVersion;
	std::uint8_t VCU_IPS_DCDCModeReq;
	std::uint16_t DCDC_KL30Volt;
	std::uint8_t DCDC_TempAct;
/*
	BDCDCDC3() {}
	~BDCDCDC3() {}
	BDCDCDC3(const std::uint16_t _DCDC_CurrHvAct,const std::uint16_t _DCDC_CurrLvAct,const std::uint16_t _DCDC_VoltHvAct,const std::uint16_t _DCDC_VoltLvAct,const std::uint8_t _DCDC_ModeSt,const std::uint16_t _DCDC_SwVersion,const std::uint8_t _VCU_IPS_DCDCModeReq,const std::uint16_t _DCDC_KL30Volt,const std::uint8_t _DCDC_TempAct):DCDC_CurrHvAct(_DCDC_CurrHvAct),DCDC_CurrLvAct(_DCDC_CurrLvAct),DCDC_VoltHvAct(_DCDC_VoltHvAct),DCDC_VoltLvAct(_DCDC_VoltLvAct),DCDC_ModeSt(_DCDC_ModeSt),DCDC_SwVersion(_DCDC_SwVersion),VCU_IPS_DCDCModeReq(_VCU_IPS_DCDCModeReq),DCDC_KL30Volt(_DCDC_KL30Volt),DCDC_TempAct(_DCDC_TempAct) {}
	BDCDCDC3(const BDCDCDC3 &_x){
		DCDC_CurrHvAct = _x.DCDC_CurrHvAct;
		DCDC_CurrLvAct = _x.DCDC_CurrLvAct;
		DCDC_VoltHvAct = _x.DCDC_VoltHvAct;
		DCDC_VoltLvAct = _x.DCDC_VoltLvAct;
		DCDC_ModeSt = _x.DCDC_ModeSt;
		DCDC_SwVersion = _x.DCDC_SwVersion;
		VCU_IPS_DCDCModeReq = _x.VCU_IPS_DCDCModeReq;
		DCDC_KL30Volt = _x.DCDC_KL30Volt;
		DCDC_TempAct = _x.DCDC_TempAct;
	}
	BDCDCDC3(BDCDCDC3 &&_x){
		DCDC_CurrHvAct = std::move(_x.DCDC_CurrHvAct);
		DCDC_CurrLvAct = std::move(_x.DCDC_CurrLvAct);
		DCDC_VoltHvAct = std::move(_x.DCDC_VoltHvAct);
		DCDC_VoltLvAct = std::move(_x.DCDC_VoltLvAct);
		DCDC_ModeSt = std::move(_x.DCDC_ModeSt);
		DCDC_SwVersion = std::move(_x.DCDC_SwVersion);
		VCU_IPS_DCDCModeReq = std::move(_x.VCU_IPS_DCDCModeReq);
		DCDC_KL30Volt = std::move(_x.DCDC_KL30Volt);
		DCDC_TempAct = std::move(_x.DCDC_TempAct);
	}
	BDCDCDC3& operator=(const BDCDCDC3 &_x){
		DCDC_CurrHvAct = _x.DCDC_CurrHvAct;
		DCDC_CurrLvAct = _x.DCDC_CurrLvAct;
		DCDC_VoltHvAct = _x.DCDC_VoltHvAct;
		DCDC_VoltLvAct = _x.DCDC_VoltLvAct;
		DCDC_ModeSt = _x.DCDC_ModeSt;
		DCDC_SwVersion = _x.DCDC_SwVersion;
		VCU_IPS_DCDCModeReq = _x.VCU_IPS_DCDCModeReq;
		DCDC_KL30Volt = _x.DCDC_KL30Volt;
		DCDC_TempAct = _x.DCDC_TempAct;
		return *this;
	}
	BDCDCDC3& operator=(BDCDCDC3 &&_x){
		DCDC_CurrHvAct = std::move(_x.DCDC_CurrHvAct);
		DCDC_CurrLvAct = std::move(_x.DCDC_CurrLvAct);
		DCDC_VoltHvAct = std::move(_x.DCDC_VoltHvAct);
		DCDC_VoltLvAct = std::move(_x.DCDC_VoltLvAct);
		DCDC_ModeSt = std::move(_x.DCDC_ModeSt);
		DCDC_SwVersion = std::move(_x.DCDC_SwVersion);
		VCU_IPS_DCDCModeReq = std::move(_x.VCU_IPS_DCDCModeReq);
		DCDC_KL30Volt = std::move(_x.DCDC_KL30Volt);
		DCDC_TempAct = std::move(_x.DCDC_TempAct);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(DCDC_CurrHvAct);
		fun(DCDC_CurrLvAct);
		fun(DCDC_VoltHvAct);
		fun(DCDC_VoltLvAct);
		fun(DCDC_ModeSt);
		fun(DCDC_SwVersion);
		fun(VCU_IPS_DCDCModeReq);
		fun(DCDC_KL30Volt);
		fun(DCDC_TempAct);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(DCDC_CurrHvAct);
		fun(DCDC_CurrLvAct);
		fun(DCDC_VoltHvAct);
		fun(DCDC_VoltLvAct);
		fun(DCDC_ModeSt);
		fun(DCDC_SwVersion);
		fun(VCU_IPS_DCDCModeReq);
		fun(DCDC_KL30Volt);
		fun(DCDC_TempAct);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (DCDC_CurrHvAct);
		fun << (DCDC_CurrLvAct);
		fun << (DCDC_VoltHvAct);
		fun << (DCDC_VoltLvAct);
		fun << (DCDC_ModeSt);
		fun << (DCDC_SwVersion);
		fun << (VCU_IPS_DCDCModeReq);
		fun << (DCDC_KL30Volt);
		fun << (DCDC_TempAct);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (DCDC_CurrHvAct);
		fun >> (DCDC_CurrLvAct);
		fun >> (DCDC_VoltHvAct);
		fun >> (DCDC_VoltLvAct);
		fun >> (DCDC_ModeSt);
		fun >> (DCDC_SwVersion);
		fun >> (VCU_IPS_DCDCModeReq);
		fun >> (DCDC_KL30Volt);
		fun >> (DCDC_TempAct);
	}
};

#endif //____BDCDCDC3_H__
