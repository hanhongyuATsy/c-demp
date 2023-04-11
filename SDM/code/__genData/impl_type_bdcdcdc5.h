#ifndef ____BDCDCDC5_H__
#define ____BDCDCDC5_H__


#include "cstdint"






struct BDCDCDC5 {
public:
	std::uint16_t DCDC_CurrHvAct;
	std::uint16_t DCDC_CurrLvAct;
	std::uint16_t DCDC_VoltHvAct;
	std::uint16_t DCDC_VoltLvAct;
	std::uint8_t DCDC_ModeSt;
	std::uint8_t DCDC_FlowReq;
	std::uint8_t VCU_DCDCModeReq;
/*
	BDCDCDC5() {}
	~BDCDCDC5() {}
	BDCDCDC5(const std::uint16_t _DCDC_CurrHvAct,const std::uint16_t _DCDC_CurrLvAct,const std::uint16_t _DCDC_VoltHvAct,const std::uint16_t _DCDC_VoltLvAct,const std::uint8_t _DCDC_ModeSt,const std::uint8_t _DCDC_FlowReq,const std::uint8_t _VCU_DCDCModeReq):DCDC_CurrHvAct(_DCDC_CurrHvAct),DCDC_CurrLvAct(_DCDC_CurrLvAct),DCDC_VoltHvAct(_DCDC_VoltHvAct),DCDC_VoltLvAct(_DCDC_VoltLvAct),DCDC_ModeSt(_DCDC_ModeSt),DCDC_FlowReq(_DCDC_FlowReq),VCU_DCDCModeReq(_VCU_DCDCModeReq) {}
	BDCDCDC5(const BDCDCDC5 &_x){
		DCDC_CurrHvAct = _x.DCDC_CurrHvAct;
		DCDC_CurrLvAct = _x.DCDC_CurrLvAct;
		DCDC_VoltHvAct = _x.DCDC_VoltHvAct;
		DCDC_VoltLvAct = _x.DCDC_VoltLvAct;
		DCDC_ModeSt = _x.DCDC_ModeSt;
		DCDC_FlowReq = _x.DCDC_FlowReq;
		VCU_DCDCModeReq = _x.VCU_DCDCModeReq;
	}
	BDCDCDC5(BDCDCDC5 &&_x){
		DCDC_CurrHvAct = std::move(_x.DCDC_CurrHvAct);
		DCDC_CurrLvAct = std::move(_x.DCDC_CurrLvAct);
		DCDC_VoltHvAct = std::move(_x.DCDC_VoltHvAct);
		DCDC_VoltLvAct = std::move(_x.DCDC_VoltLvAct);
		DCDC_ModeSt = std::move(_x.DCDC_ModeSt);
		DCDC_FlowReq = std::move(_x.DCDC_FlowReq);
		VCU_DCDCModeReq = std::move(_x.VCU_DCDCModeReq);
	}
	BDCDCDC5& operator=(const BDCDCDC5 &_x){
		DCDC_CurrHvAct = _x.DCDC_CurrHvAct;
		DCDC_CurrLvAct = _x.DCDC_CurrLvAct;
		DCDC_VoltHvAct = _x.DCDC_VoltHvAct;
		DCDC_VoltLvAct = _x.DCDC_VoltLvAct;
		DCDC_ModeSt = _x.DCDC_ModeSt;
		DCDC_FlowReq = _x.DCDC_FlowReq;
		VCU_DCDCModeReq = _x.VCU_DCDCModeReq;
		return *this;
	}
	BDCDCDC5& operator=(BDCDCDC5 &&_x){
		DCDC_CurrHvAct = std::move(_x.DCDC_CurrHvAct);
		DCDC_CurrLvAct = std::move(_x.DCDC_CurrLvAct);
		DCDC_VoltHvAct = std::move(_x.DCDC_VoltHvAct);
		DCDC_VoltLvAct = std::move(_x.DCDC_VoltLvAct);
		DCDC_ModeSt = std::move(_x.DCDC_ModeSt);
		DCDC_FlowReq = std::move(_x.DCDC_FlowReq);
		VCU_DCDCModeReq = std::move(_x.VCU_DCDCModeReq);
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
		fun(DCDC_FlowReq);
		fun(VCU_DCDCModeReq);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(DCDC_CurrHvAct);
		fun(DCDC_CurrLvAct);
		fun(DCDC_VoltHvAct);
		fun(DCDC_VoltLvAct);
		fun(DCDC_ModeSt);
		fun(DCDC_FlowReq);
		fun(VCU_DCDCModeReq);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (DCDC_CurrHvAct);
		fun << (DCDC_CurrLvAct);
		fun << (DCDC_VoltHvAct);
		fun << (DCDC_VoltLvAct);
		fun << (DCDC_ModeSt);
		fun << (DCDC_FlowReq);
		fun << (VCU_DCDCModeReq);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (DCDC_CurrHvAct);
		fun >> (DCDC_CurrLvAct);
		fun >> (DCDC_VoltHvAct);
		fun >> (DCDC_VoltLvAct);
		fun >> (DCDC_ModeSt);
		fun >> (DCDC_FlowReq);
		fun >> (VCU_DCDCModeReq);
	}
};

#endif //____BDCDCDC5_H__
