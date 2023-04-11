#ifndef ____BDCESM_H__
#define ____BDCESM_H__


#include "cstdint"






struct BDCESM {
public:
	std::uint8_t ESM_Control;
	std::uint8_t ESM_ControlVD;
	std::uint8_t BAM_ESMSystemSt;
	std::uint8_t ESM_TravelPst;
	std::uint8_t ESM_PstSt;
	std::uint8_t ESM_InitializeSt;
	std::uint8_t ESM_ParameterCheckFaultSt;
	std::uint8_t ESM_LiftHallSensorErr;
	std::uint8_t ESM_WingHallSensorErr;
	std::uint8_t ESM_MotorHeatProtSt;
	std::uint8_t ESM_OvertravelSt;
	std::uint8_t ESM_VoltageFaultSt;
	std::uint8_t ESM_LiftMotorFaultSt;
	std::uint8_t ESM_WingMotorFaultSt;
	std::uint8_t ESM_ResponseErr;
	std::uint8_t ESM_IceBreakErr;
	std::uint8_t ESM_DeInitializeReason;
	std::uint8_t ESM_WingSt;
/*
	BDCESM() {}
	~BDCESM() {}
	BDCESM(const std::uint8_t _ESM_Control,const std::uint8_t _ESM_ControlVD,const std::uint8_t _BAM_ESMSystemSt,const std::uint8_t _ESM_TravelPst,const std::uint8_t _ESM_PstSt,const std::uint8_t _ESM_InitializeSt,const std::uint8_t _ESM_ParameterCheckFaultSt,const std::uint8_t _ESM_LiftHallSensorErr,const std::uint8_t _ESM_WingHallSensorErr,const std::uint8_t _ESM_MotorHeatProtSt,const std::uint8_t _ESM_OvertravelSt,const std::uint8_t _ESM_VoltageFaultSt,const std::uint8_t _ESM_LiftMotorFaultSt,const std::uint8_t _ESM_WingMotorFaultSt,const std::uint8_t _ESM_ResponseErr,const std::uint8_t _ESM_IceBreakErr,const std::uint8_t _ESM_DeInitializeReason,const std::uint8_t _ESM_WingSt):ESM_Control(_ESM_Control),ESM_ControlVD(_ESM_ControlVD),BAM_ESMSystemSt(_BAM_ESMSystemSt),ESM_TravelPst(_ESM_TravelPst),ESM_PstSt(_ESM_PstSt),ESM_InitializeSt(_ESM_InitializeSt),ESM_ParameterCheckFaultSt(_ESM_ParameterCheckFaultSt),ESM_LiftHallSensorErr(_ESM_LiftHallSensorErr),ESM_WingHallSensorErr(_ESM_WingHallSensorErr),ESM_MotorHeatProtSt(_ESM_MotorHeatProtSt),ESM_OvertravelSt(_ESM_OvertravelSt),ESM_VoltageFaultSt(_ESM_VoltageFaultSt),ESM_LiftMotorFaultSt(_ESM_LiftMotorFaultSt),ESM_WingMotorFaultSt(_ESM_WingMotorFaultSt),ESM_ResponseErr(_ESM_ResponseErr),ESM_IceBreakErr(_ESM_IceBreakErr),ESM_DeInitializeReason(_ESM_DeInitializeReason),ESM_WingSt(_ESM_WingSt) {}
	BDCESM(const BDCESM &_x){
		ESM_Control = _x.ESM_Control;
		ESM_ControlVD = _x.ESM_ControlVD;
		BAM_ESMSystemSt = _x.BAM_ESMSystemSt;
		ESM_TravelPst = _x.ESM_TravelPst;
		ESM_PstSt = _x.ESM_PstSt;
		ESM_InitializeSt = _x.ESM_InitializeSt;
		ESM_ParameterCheckFaultSt = _x.ESM_ParameterCheckFaultSt;
		ESM_LiftHallSensorErr = _x.ESM_LiftHallSensorErr;
		ESM_WingHallSensorErr = _x.ESM_WingHallSensorErr;
		ESM_MotorHeatProtSt = _x.ESM_MotorHeatProtSt;
		ESM_OvertravelSt = _x.ESM_OvertravelSt;
		ESM_VoltageFaultSt = _x.ESM_VoltageFaultSt;
		ESM_LiftMotorFaultSt = _x.ESM_LiftMotorFaultSt;
		ESM_WingMotorFaultSt = _x.ESM_WingMotorFaultSt;
		ESM_ResponseErr = _x.ESM_ResponseErr;
		ESM_IceBreakErr = _x.ESM_IceBreakErr;
		ESM_DeInitializeReason = _x.ESM_DeInitializeReason;
		ESM_WingSt = _x.ESM_WingSt;
	}
	BDCESM(BDCESM &&_x){
		ESM_Control = std::move(_x.ESM_Control);
		ESM_ControlVD = std::move(_x.ESM_ControlVD);
		BAM_ESMSystemSt = std::move(_x.BAM_ESMSystemSt);
		ESM_TravelPst = std::move(_x.ESM_TravelPst);
		ESM_PstSt = std::move(_x.ESM_PstSt);
		ESM_InitializeSt = std::move(_x.ESM_InitializeSt);
		ESM_ParameterCheckFaultSt = std::move(_x.ESM_ParameterCheckFaultSt);
		ESM_LiftHallSensorErr = std::move(_x.ESM_LiftHallSensorErr);
		ESM_WingHallSensorErr = std::move(_x.ESM_WingHallSensorErr);
		ESM_MotorHeatProtSt = std::move(_x.ESM_MotorHeatProtSt);
		ESM_OvertravelSt = std::move(_x.ESM_OvertravelSt);
		ESM_VoltageFaultSt = std::move(_x.ESM_VoltageFaultSt);
		ESM_LiftMotorFaultSt = std::move(_x.ESM_LiftMotorFaultSt);
		ESM_WingMotorFaultSt = std::move(_x.ESM_WingMotorFaultSt);
		ESM_ResponseErr = std::move(_x.ESM_ResponseErr);
		ESM_IceBreakErr = std::move(_x.ESM_IceBreakErr);
		ESM_DeInitializeReason = std::move(_x.ESM_DeInitializeReason);
		ESM_WingSt = std::move(_x.ESM_WingSt);
	}
	BDCESM& operator=(const BDCESM &_x){
		ESM_Control = _x.ESM_Control;
		ESM_ControlVD = _x.ESM_ControlVD;
		BAM_ESMSystemSt = _x.BAM_ESMSystemSt;
		ESM_TravelPst = _x.ESM_TravelPst;
		ESM_PstSt = _x.ESM_PstSt;
		ESM_InitializeSt = _x.ESM_InitializeSt;
		ESM_ParameterCheckFaultSt = _x.ESM_ParameterCheckFaultSt;
		ESM_LiftHallSensorErr = _x.ESM_LiftHallSensorErr;
		ESM_WingHallSensorErr = _x.ESM_WingHallSensorErr;
		ESM_MotorHeatProtSt = _x.ESM_MotorHeatProtSt;
		ESM_OvertravelSt = _x.ESM_OvertravelSt;
		ESM_VoltageFaultSt = _x.ESM_VoltageFaultSt;
		ESM_LiftMotorFaultSt = _x.ESM_LiftMotorFaultSt;
		ESM_WingMotorFaultSt = _x.ESM_WingMotorFaultSt;
		ESM_ResponseErr = _x.ESM_ResponseErr;
		ESM_IceBreakErr = _x.ESM_IceBreakErr;
		ESM_DeInitializeReason = _x.ESM_DeInitializeReason;
		ESM_WingSt = _x.ESM_WingSt;
		return *this;
	}
	BDCESM& operator=(BDCESM &&_x){
		ESM_Control = std::move(_x.ESM_Control);
		ESM_ControlVD = std::move(_x.ESM_ControlVD);
		BAM_ESMSystemSt = std::move(_x.BAM_ESMSystemSt);
		ESM_TravelPst = std::move(_x.ESM_TravelPst);
		ESM_PstSt = std::move(_x.ESM_PstSt);
		ESM_InitializeSt = std::move(_x.ESM_InitializeSt);
		ESM_ParameterCheckFaultSt = std::move(_x.ESM_ParameterCheckFaultSt);
		ESM_LiftHallSensorErr = std::move(_x.ESM_LiftHallSensorErr);
		ESM_WingHallSensorErr = std::move(_x.ESM_WingHallSensorErr);
		ESM_MotorHeatProtSt = std::move(_x.ESM_MotorHeatProtSt);
		ESM_OvertravelSt = std::move(_x.ESM_OvertravelSt);
		ESM_VoltageFaultSt = std::move(_x.ESM_VoltageFaultSt);
		ESM_LiftMotorFaultSt = std::move(_x.ESM_LiftMotorFaultSt);
		ESM_WingMotorFaultSt = std::move(_x.ESM_WingMotorFaultSt);
		ESM_ResponseErr = std::move(_x.ESM_ResponseErr);
		ESM_IceBreakErr = std::move(_x.ESM_IceBreakErr);
		ESM_DeInitializeReason = std::move(_x.ESM_DeInitializeReason);
		ESM_WingSt = std::move(_x.ESM_WingSt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(ESM_Control);
		fun(ESM_ControlVD);
		fun(BAM_ESMSystemSt);
		fun(ESM_TravelPst);
		fun(ESM_PstSt);
		fun(ESM_InitializeSt);
		fun(ESM_ParameterCheckFaultSt);
		fun(ESM_LiftHallSensorErr);
		fun(ESM_WingHallSensorErr);
		fun(ESM_MotorHeatProtSt);
		fun(ESM_OvertravelSt);
		fun(ESM_VoltageFaultSt);
		fun(ESM_LiftMotorFaultSt);
		fun(ESM_WingMotorFaultSt);
		fun(ESM_ResponseErr);
		fun(ESM_IceBreakErr);
		fun(ESM_DeInitializeReason);
		fun(ESM_WingSt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(ESM_Control);
		fun(ESM_ControlVD);
		fun(BAM_ESMSystemSt);
		fun(ESM_TravelPst);
		fun(ESM_PstSt);
		fun(ESM_InitializeSt);
		fun(ESM_ParameterCheckFaultSt);
		fun(ESM_LiftHallSensorErr);
		fun(ESM_WingHallSensorErr);
		fun(ESM_MotorHeatProtSt);
		fun(ESM_OvertravelSt);
		fun(ESM_VoltageFaultSt);
		fun(ESM_LiftMotorFaultSt);
		fun(ESM_WingMotorFaultSt);
		fun(ESM_ResponseErr);
		fun(ESM_IceBreakErr);
		fun(ESM_DeInitializeReason);
		fun(ESM_WingSt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (ESM_Control);
		fun << (ESM_ControlVD);
		fun << (BAM_ESMSystemSt);
		fun << (ESM_TravelPst);
		fun << (ESM_PstSt);
		fun << (ESM_InitializeSt);
		fun << (ESM_ParameterCheckFaultSt);
		fun << (ESM_LiftHallSensorErr);
		fun << (ESM_WingHallSensorErr);
		fun << (ESM_MotorHeatProtSt);
		fun << (ESM_OvertravelSt);
		fun << (ESM_VoltageFaultSt);
		fun << (ESM_LiftMotorFaultSt);
		fun << (ESM_WingMotorFaultSt);
		fun << (ESM_ResponseErr);
		fun << (ESM_IceBreakErr);
		fun << (ESM_DeInitializeReason);
		fun << (ESM_WingSt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (ESM_Control);
		fun >> (ESM_ControlVD);
		fun >> (BAM_ESMSystemSt);
		fun >> (ESM_TravelPst);
		fun >> (ESM_PstSt);
		fun >> (ESM_InitializeSt);
		fun >> (ESM_ParameterCheckFaultSt);
		fun >> (ESM_LiftHallSensorErr);
		fun >> (ESM_WingHallSensorErr);
		fun >> (ESM_MotorHeatProtSt);
		fun >> (ESM_OvertravelSt);
		fun >> (ESM_VoltageFaultSt);
		fun >> (ESM_LiftMotorFaultSt);
		fun >> (ESM_WingMotorFaultSt);
		fun >> (ESM_ResponseErr);
		fun >> (ESM_IceBreakErr);
		fun >> (ESM_DeInitializeReason);
		fun >> (ESM_WingSt);
	}
};

#endif //____BDCESM_H__
