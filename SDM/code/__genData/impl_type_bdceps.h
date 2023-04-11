#ifndef ____BDCEPS_H__
#define ____BDCEPS_H__


#include "cstdint"






struct BDCEPS {
public:
	std::uint8_t EPS_AssistRatio;
	std::uint8_t EPS_ThermalSt;
	std::uint8_t EPS_WarnLamp;
	std::uint8_t EPS_AssistPercentage;
	std::uint16_t EPS_StrngWhlTorq;
	std::uint8_t EPS_FunctionStyleSt;
	std::uint64_t EPS_ElecPowerConsumptionVD;
	std::uint64_t EPS_ElecPowerConsumption;
	std::uint64_t EPS_SupplyVoltDtc;
/*
	BDCEPS() {}
	~BDCEPS() {}
	BDCEPS(const std::uint8_t _EPS_AssistRatio,const std::uint8_t _EPS_ThermalSt,const std::uint8_t _EPS_WarnLamp,const std::uint8_t _EPS_AssistPercentage,const std::uint16_t _EPS_StrngWhlTorq,const std::uint8_t _EPS_FunctionStyleSt,const std::uint64_t _EPS_ElecPowerConsumptionVD,const std::uint64_t _EPS_ElecPowerConsumption,const std::uint64_t _EPS_SupplyVoltDtc):EPS_AssistRatio(_EPS_AssistRatio),EPS_ThermalSt(_EPS_ThermalSt),EPS_WarnLamp(_EPS_WarnLamp),EPS_AssistPercentage(_EPS_AssistPercentage),EPS_StrngWhlTorq(_EPS_StrngWhlTorq),EPS_FunctionStyleSt(_EPS_FunctionStyleSt),EPS_ElecPowerConsumptionVD(_EPS_ElecPowerConsumptionVD),EPS_ElecPowerConsumption(_EPS_ElecPowerConsumption),EPS_SupplyVoltDtc(_EPS_SupplyVoltDtc) {}
	BDCEPS(const BDCEPS &_x){
		EPS_AssistRatio = _x.EPS_AssistRatio;
		EPS_ThermalSt = _x.EPS_ThermalSt;
		EPS_WarnLamp = _x.EPS_WarnLamp;
		EPS_AssistPercentage = _x.EPS_AssistPercentage;
		EPS_StrngWhlTorq = _x.EPS_StrngWhlTorq;
		EPS_FunctionStyleSt = _x.EPS_FunctionStyleSt;
		EPS_ElecPowerConsumptionVD = _x.EPS_ElecPowerConsumptionVD;
		EPS_ElecPowerConsumption = _x.EPS_ElecPowerConsumption;
		EPS_SupplyVoltDtc = _x.EPS_SupplyVoltDtc;
	}
	BDCEPS(BDCEPS &&_x){
		EPS_AssistRatio = std::move(_x.EPS_AssistRatio);
		EPS_ThermalSt = std::move(_x.EPS_ThermalSt);
		EPS_WarnLamp = std::move(_x.EPS_WarnLamp);
		EPS_AssistPercentage = std::move(_x.EPS_AssistPercentage);
		EPS_StrngWhlTorq = std::move(_x.EPS_StrngWhlTorq);
		EPS_FunctionStyleSt = std::move(_x.EPS_FunctionStyleSt);
		EPS_ElecPowerConsumptionVD = std::move(_x.EPS_ElecPowerConsumptionVD);
		EPS_ElecPowerConsumption = std::move(_x.EPS_ElecPowerConsumption);
		EPS_SupplyVoltDtc = std::move(_x.EPS_SupplyVoltDtc);
	}
	BDCEPS& operator=(const BDCEPS &_x){
		EPS_AssistRatio = _x.EPS_AssistRatio;
		EPS_ThermalSt = _x.EPS_ThermalSt;
		EPS_WarnLamp = _x.EPS_WarnLamp;
		EPS_AssistPercentage = _x.EPS_AssistPercentage;
		EPS_StrngWhlTorq = _x.EPS_StrngWhlTorq;
		EPS_FunctionStyleSt = _x.EPS_FunctionStyleSt;
		EPS_ElecPowerConsumptionVD = _x.EPS_ElecPowerConsumptionVD;
		EPS_ElecPowerConsumption = _x.EPS_ElecPowerConsumption;
		EPS_SupplyVoltDtc = _x.EPS_SupplyVoltDtc;
		return *this;
	}
	BDCEPS& operator=(BDCEPS &&_x){
		EPS_AssistRatio = std::move(_x.EPS_AssistRatio);
		EPS_ThermalSt = std::move(_x.EPS_ThermalSt);
		EPS_WarnLamp = std::move(_x.EPS_WarnLamp);
		EPS_AssistPercentage = std::move(_x.EPS_AssistPercentage);
		EPS_StrngWhlTorq = std::move(_x.EPS_StrngWhlTorq);
		EPS_FunctionStyleSt = std::move(_x.EPS_FunctionStyleSt);
		EPS_ElecPowerConsumptionVD = std::move(_x.EPS_ElecPowerConsumptionVD);
		EPS_ElecPowerConsumption = std::move(_x.EPS_ElecPowerConsumption);
		EPS_SupplyVoltDtc = std::move(_x.EPS_SupplyVoltDtc);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(EPS_AssistRatio);
		fun(EPS_ThermalSt);
		fun(EPS_WarnLamp);
		fun(EPS_AssistPercentage);
		fun(EPS_StrngWhlTorq);
		fun(EPS_FunctionStyleSt);
		fun(EPS_ElecPowerConsumptionVD);
		fun(EPS_ElecPowerConsumption);
		fun(EPS_SupplyVoltDtc);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(EPS_AssistRatio);
		fun(EPS_ThermalSt);
		fun(EPS_WarnLamp);
		fun(EPS_AssistPercentage);
		fun(EPS_StrngWhlTorq);
		fun(EPS_FunctionStyleSt);
		fun(EPS_ElecPowerConsumptionVD);
		fun(EPS_ElecPowerConsumption);
		fun(EPS_SupplyVoltDtc);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (EPS_AssistRatio);
		fun << (EPS_ThermalSt);
		fun << (EPS_WarnLamp);
		fun << (EPS_AssistPercentage);
		fun << (EPS_StrngWhlTorq);
		fun << (EPS_FunctionStyleSt);
		fun << (EPS_ElecPowerConsumptionVD);
		fun << (EPS_ElecPowerConsumption);
		fun << (EPS_SupplyVoltDtc);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (EPS_AssistRatio);
		fun >> (EPS_ThermalSt);
		fun >> (EPS_WarnLamp);
		fun >> (EPS_AssistPercentage);
		fun >> (EPS_StrngWhlTorq);
		fun >> (EPS_FunctionStyleSt);
		fun >> (EPS_ElecPowerConsumptionVD);
		fun >> (EPS_ElecPowerConsumption);
		fun >> (EPS_SupplyVoltDtc);
	}
};

#endif //____BDCEPS_H__
