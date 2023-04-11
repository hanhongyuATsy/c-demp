#ifndef ____BDCSR_H__
#define ____BDCSR_H__


#include "cstdint"






struct BDCSR {
public:
	std::uint8_t SR_SunroofCurrentPst;
	std::uint8_t SR_SunroofOpeationSt;
	std::uint8_t SR_SunroofThermalProtSt;
	std::uint8_t SR_RMSwitchSt;
	std::uint8_t SR_RMParameterCheckFaultSt;
	std::uint8_t SR_RMHallSensorErr;
	std::uint8_t SR_RMStickySwitchErr;
	std::uint8_t SR_RMMotorRelayErr;
	std::uint8_t SR_RMVoltageFaultSt;
	std::uint8_t SR_RMResponseErr;
	std::uint8_t SR_RMDeInitializeReason;
	std::uint8_t SunroofLearningStuFbk;
	std::uint8_t SunroofRespErr;
	std::uint8_t SR_SMSwitchSt;
	std::uint8_t SR_SunshadeCurrentPst;
	std::uint8_t SR_SunshadeOpeationSt;
	std::uint8_t SR_SunshadeThermalProtSt;
	std::uint8_t SR_SMHallSensorErr;
	std::uint8_t SR_SMStickySwitchErr;
	std::uint8_t SR_SMMotorRelayErr;
	std::uint8_t SR_SMVoltageFaultSt;
	std::uint8_t SR_SMResponseErr;
	std::uint8_t SR_SMParameterCheckFaultSt;
/*
	BDCSR() {}
	~BDCSR() {}
	BDCSR(const std::uint8_t _SR_SunroofCurrentPst,const std::uint8_t _SR_SunroofOpeationSt,const std::uint8_t _SR_SunroofThermalProtSt,const std::uint8_t _SR_RMSwitchSt,const std::uint8_t _SR_RMParameterCheckFaultSt,const std::uint8_t _SR_RMHallSensorErr,const std::uint8_t _SR_RMStickySwitchErr,const std::uint8_t _SR_RMMotorRelayErr,const std::uint8_t _SR_RMVoltageFaultSt,const std::uint8_t _SR_RMResponseErr,const std::uint8_t _SR_RMDeInitializeReason,const std::uint8_t _SunroofLearningStuFbk,const std::uint8_t _SunroofRespErr,const std::uint8_t _SR_SMSwitchSt,const std::uint8_t _SR_SunshadeCurrentPst,const std::uint8_t _SR_SunshadeOpeationSt,const std::uint8_t _SR_SunshadeThermalProtSt,const std::uint8_t _SR_SMHallSensorErr,const std::uint8_t _SR_SMStickySwitchErr,const std::uint8_t _SR_SMMotorRelayErr,const std::uint8_t _SR_SMVoltageFaultSt,const std::uint8_t _SR_SMResponseErr,const std::uint8_t _SR_SMParameterCheckFaultSt):SR_SunroofCurrentPst(_SR_SunroofCurrentPst),SR_SunroofOpeationSt(_SR_SunroofOpeationSt),SR_SunroofThermalProtSt(_SR_SunroofThermalProtSt),SR_RMSwitchSt(_SR_RMSwitchSt),SR_RMParameterCheckFaultSt(_SR_RMParameterCheckFaultSt),SR_RMHallSensorErr(_SR_RMHallSensorErr),SR_RMStickySwitchErr(_SR_RMStickySwitchErr),SR_RMMotorRelayErr(_SR_RMMotorRelayErr),SR_RMVoltageFaultSt(_SR_RMVoltageFaultSt),SR_RMResponseErr(_SR_RMResponseErr),SR_RMDeInitializeReason(_SR_RMDeInitializeReason),SunroofLearningStuFbk(_SunroofLearningStuFbk),SunroofRespErr(_SunroofRespErr),SR_SMSwitchSt(_SR_SMSwitchSt),SR_SunshadeCurrentPst(_SR_SunshadeCurrentPst),SR_SunshadeOpeationSt(_SR_SunshadeOpeationSt),SR_SunshadeThermalProtSt(_SR_SunshadeThermalProtSt),SR_SMHallSensorErr(_SR_SMHallSensorErr),SR_SMStickySwitchErr(_SR_SMStickySwitchErr),SR_SMMotorRelayErr(_SR_SMMotorRelayErr),SR_SMVoltageFaultSt(_SR_SMVoltageFaultSt),SR_SMResponseErr(_SR_SMResponseErr),SR_SMParameterCheckFaultSt(_SR_SMParameterCheckFaultSt) {}
	BDCSR(const BDCSR &_x){
		SR_SunroofCurrentPst = _x.SR_SunroofCurrentPst;
		SR_SunroofOpeationSt = _x.SR_SunroofOpeationSt;
		SR_SunroofThermalProtSt = _x.SR_SunroofThermalProtSt;
		SR_RMSwitchSt = _x.SR_RMSwitchSt;
		SR_RMParameterCheckFaultSt = _x.SR_RMParameterCheckFaultSt;
		SR_RMHallSensorErr = _x.SR_RMHallSensorErr;
		SR_RMStickySwitchErr = _x.SR_RMStickySwitchErr;
		SR_RMMotorRelayErr = _x.SR_RMMotorRelayErr;
		SR_RMVoltageFaultSt = _x.SR_RMVoltageFaultSt;
		SR_RMResponseErr = _x.SR_RMResponseErr;
		SR_RMDeInitializeReason = _x.SR_RMDeInitializeReason;
		SunroofLearningStuFbk = _x.SunroofLearningStuFbk;
		SunroofRespErr = _x.SunroofRespErr;
		SR_SMSwitchSt = _x.SR_SMSwitchSt;
		SR_SunshadeCurrentPst = _x.SR_SunshadeCurrentPst;
		SR_SunshadeOpeationSt = _x.SR_SunshadeOpeationSt;
		SR_SunshadeThermalProtSt = _x.SR_SunshadeThermalProtSt;
		SR_SMHallSensorErr = _x.SR_SMHallSensorErr;
		SR_SMStickySwitchErr = _x.SR_SMStickySwitchErr;
		SR_SMMotorRelayErr = _x.SR_SMMotorRelayErr;
		SR_SMVoltageFaultSt = _x.SR_SMVoltageFaultSt;
		SR_SMResponseErr = _x.SR_SMResponseErr;
		SR_SMParameterCheckFaultSt = _x.SR_SMParameterCheckFaultSt;
	}
	BDCSR(BDCSR &&_x){
		SR_SunroofCurrentPst = std::move(_x.SR_SunroofCurrentPst);
		SR_SunroofOpeationSt = std::move(_x.SR_SunroofOpeationSt);
		SR_SunroofThermalProtSt = std::move(_x.SR_SunroofThermalProtSt);
		SR_RMSwitchSt = std::move(_x.SR_RMSwitchSt);
		SR_RMParameterCheckFaultSt = std::move(_x.SR_RMParameterCheckFaultSt);
		SR_RMHallSensorErr = std::move(_x.SR_RMHallSensorErr);
		SR_RMStickySwitchErr = std::move(_x.SR_RMStickySwitchErr);
		SR_RMMotorRelayErr = std::move(_x.SR_RMMotorRelayErr);
		SR_RMVoltageFaultSt = std::move(_x.SR_RMVoltageFaultSt);
		SR_RMResponseErr = std::move(_x.SR_RMResponseErr);
		SR_RMDeInitializeReason = std::move(_x.SR_RMDeInitializeReason);
		SunroofLearningStuFbk = std::move(_x.SunroofLearningStuFbk);
		SunroofRespErr = std::move(_x.SunroofRespErr);
		SR_SMSwitchSt = std::move(_x.SR_SMSwitchSt);
		SR_SunshadeCurrentPst = std::move(_x.SR_SunshadeCurrentPst);
		SR_SunshadeOpeationSt = std::move(_x.SR_SunshadeOpeationSt);
		SR_SunshadeThermalProtSt = std::move(_x.SR_SunshadeThermalProtSt);
		SR_SMHallSensorErr = std::move(_x.SR_SMHallSensorErr);
		SR_SMStickySwitchErr = std::move(_x.SR_SMStickySwitchErr);
		SR_SMMotorRelayErr = std::move(_x.SR_SMMotorRelayErr);
		SR_SMVoltageFaultSt = std::move(_x.SR_SMVoltageFaultSt);
		SR_SMResponseErr = std::move(_x.SR_SMResponseErr);
		SR_SMParameterCheckFaultSt = std::move(_x.SR_SMParameterCheckFaultSt);
	}
	BDCSR& operator=(const BDCSR &_x){
		SR_SunroofCurrentPst = _x.SR_SunroofCurrentPst;
		SR_SunroofOpeationSt = _x.SR_SunroofOpeationSt;
		SR_SunroofThermalProtSt = _x.SR_SunroofThermalProtSt;
		SR_RMSwitchSt = _x.SR_RMSwitchSt;
		SR_RMParameterCheckFaultSt = _x.SR_RMParameterCheckFaultSt;
		SR_RMHallSensorErr = _x.SR_RMHallSensorErr;
		SR_RMStickySwitchErr = _x.SR_RMStickySwitchErr;
		SR_RMMotorRelayErr = _x.SR_RMMotorRelayErr;
		SR_RMVoltageFaultSt = _x.SR_RMVoltageFaultSt;
		SR_RMResponseErr = _x.SR_RMResponseErr;
		SR_RMDeInitializeReason = _x.SR_RMDeInitializeReason;
		SunroofLearningStuFbk = _x.SunroofLearningStuFbk;
		SunroofRespErr = _x.SunroofRespErr;
		SR_SMSwitchSt = _x.SR_SMSwitchSt;
		SR_SunshadeCurrentPst = _x.SR_SunshadeCurrentPst;
		SR_SunshadeOpeationSt = _x.SR_SunshadeOpeationSt;
		SR_SunshadeThermalProtSt = _x.SR_SunshadeThermalProtSt;
		SR_SMHallSensorErr = _x.SR_SMHallSensorErr;
		SR_SMStickySwitchErr = _x.SR_SMStickySwitchErr;
		SR_SMMotorRelayErr = _x.SR_SMMotorRelayErr;
		SR_SMVoltageFaultSt = _x.SR_SMVoltageFaultSt;
		SR_SMResponseErr = _x.SR_SMResponseErr;
		SR_SMParameterCheckFaultSt = _x.SR_SMParameterCheckFaultSt;
		return *this;
	}
	BDCSR& operator=(BDCSR &&_x){
		SR_SunroofCurrentPst = std::move(_x.SR_SunroofCurrentPst);
		SR_SunroofOpeationSt = std::move(_x.SR_SunroofOpeationSt);
		SR_SunroofThermalProtSt = std::move(_x.SR_SunroofThermalProtSt);
		SR_RMSwitchSt = std::move(_x.SR_RMSwitchSt);
		SR_RMParameterCheckFaultSt = std::move(_x.SR_RMParameterCheckFaultSt);
		SR_RMHallSensorErr = std::move(_x.SR_RMHallSensorErr);
		SR_RMStickySwitchErr = std::move(_x.SR_RMStickySwitchErr);
		SR_RMMotorRelayErr = std::move(_x.SR_RMMotorRelayErr);
		SR_RMVoltageFaultSt = std::move(_x.SR_RMVoltageFaultSt);
		SR_RMResponseErr = std::move(_x.SR_RMResponseErr);
		SR_RMDeInitializeReason = std::move(_x.SR_RMDeInitializeReason);
		SunroofLearningStuFbk = std::move(_x.SunroofLearningStuFbk);
		SunroofRespErr = std::move(_x.SunroofRespErr);
		SR_SMSwitchSt = std::move(_x.SR_SMSwitchSt);
		SR_SunshadeCurrentPst = std::move(_x.SR_SunshadeCurrentPst);
		SR_SunshadeOpeationSt = std::move(_x.SR_SunshadeOpeationSt);
		SR_SunshadeThermalProtSt = std::move(_x.SR_SunshadeThermalProtSt);
		SR_SMHallSensorErr = std::move(_x.SR_SMHallSensorErr);
		SR_SMStickySwitchErr = std::move(_x.SR_SMStickySwitchErr);
		SR_SMMotorRelayErr = std::move(_x.SR_SMMotorRelayErr);
		SR_SMVoltageFaultSt = std::move(_x.SR_SMVoltageFaultSt);
		SR_SMResponseErr = std::move(_x.SR_SMResponseErr);
		SR_SMParameterCheckFaultSt = std::move(_x.SR_SMParameterCheckFaultSt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(SR_SunroofCurrentPst);
		fun(SR_SunroofOpeationSt);
		fun(SR_SunroofThermalProtSt);
		fun(SR_RMSwitchSt);
		fun(SR_RMParameterCheckFaultSt);
		fun(SR_RMHallSensorErr);
		fun(SR_RMStickySwitchErr);
		fun(SR_RMMotorRelayErr);
		fun(SR_RMVoltageFaultSt);
		fun(SR_RMResponseErr);
		fun(SR_RMDeInitializeReason);
		fun(SunroofLearningStuFbk);
		fun(SunroofRespErr);
		fun(SR_SMSwitchSt);
		fun(SR_SunshadeCurrentPst);
		fun(SR_SunshadeOpeationSt);
		fun(SR_SunshadeThermalProtSt);
		fun(SR_SMHallSensorErr);
		fun(SR_SMStickySwitchErr);
		fun(SR_SMMotorRelayErr);
		fun(SR_SMVoltageFaultSt);
		fun(SR_SMResponseErr);
		fun(SR_SMParameterCheckFaultSt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(SR_SunroofCurrentPst);
		fun(SR_SunroofOpeationSt);
		fun(SR_SunroofThermalProtSt);
		fun(SR_RMSwitchSt);
		fun(SR_RMParameterCheckFaultSt);
		fun(SR_RMHallSensorErr);
		fun(SR_RMStickySwitchErr);
		fun(SR_RMMotorRelayErr);
		fun(SR_RMVoltageFaultSt);
		fun(SR_RMResponseErr);
		fun(SR_RMDeInitializeReason);
		fun(SunroofLearningStuFbk);
		fun(SunroofRespErr);
		fun(SR_SMSwitchSt);
		fun(SR_SunshadeCurrentPst);
		fun(SR_SunshadeOpeationSt);
		fun(SR_SunshadeThermalProtSt);
		fun(SR_SMHallSensorErr);
		fun(SR_SMStickySwitchErr);
		fun(SR_SMMotorRelayErr);
		fun(SR_SMVoltageFaultSt);
		fun(SR_SMResponseErr);
		fun(SR_SMParameterCheckFaultSt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (SR_SunroofCurrentPst);
		fun << (SR_SunroofOpeationSt);
		fun << (SR_SunroofThermalProtSt);
		fun << (SR_RMSwitchSt);
		fun << (SR_RMParameterCheckFaultSt);
		fun << (SR_RMHallSensorErr);
		fun << (SR_RMStickySwitchErr);
		fun << (SR_RMMotorRelayErr);
		fun << (SR_RMVoltageFaultSt);
		fun << (SR_RMResponseErr);
		fun << (SR_RMDeInitializeReason);
		fun << (SunroofLearningStuFbk);
		fun << (SunroofRespErr);
		fun << (SR_SMSwitchSt);
		fun << (SR_SunshadeCurrentPst);
		fun << (SR_SunshadeOpeationSt);
		fun << (SR_SunshadeThermalProtSt);
		fun << (SR_SMHallSensorErr);
		fun << (SR_SMStickySwitchErr);
		fun << (SR_SMMotorRelayErr);
		fun << (SR_SMVoltageFaultSt);
		fun << (SR_SMResponseErr);
		fun << (SR_SMParameterCheckFaultSt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (SR_SunroofCurrentPst);
		fun >> (SR_SunroofOpeationSt);
		fun >> (SR_SunroofThermalProtSt);
		fun >> (SR_RMSwitchSt);
		fun >> (SR_RMParameterCheckFaultSt);
		fun >> (SR_RMHallSensorErr);
		fun >> (SR_RMStickySwitchErr);
		fun >> (SR_RMMotorRelayErr);
		fun >> (SR_RMVoltageFaultSt);
		fun >> (SR_RMResponseErr);
		fun >> (SR_RMDeInitializeReason);
		fun >> (SunroofLearningStuFbk);
		fun >> (SunroofRespErr);
		fun >> (SR_SMSwitchSt);
		fun >> (SR_SunshadeCurrentPst);
		fun >> (SR_SunshadeOpeationSt);
		fun >> (SR_SunshadeThermalProtSt);
		fun >> (SR_SMHallSensorErr);
		fun >> (SR_SMStickySwitchErr);
		fun >> (SR_SMMotorRelayErr);
		fun >> (SR_SMVoltageFaultSt);
		fun >> (SR_SMResponseErr);
		fun >> (SR_SMParameterCheckFaultSt);
	}
};

#endif //____BDCSR_H__
