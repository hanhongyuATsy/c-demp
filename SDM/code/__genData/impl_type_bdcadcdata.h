#ifndef ____BDCADCDATA_H__
#define ____BDCADCDATA_H__


#include "cstdint"






struct BDCADCData {
public:
	std::uint8_t ADC_ThmPostRun;
	std::uint8_t ADC_FlowReq;
/*
	BDCADCData() {}
	~BDCADCData() {}
	BDCADCData(const std::uint8_t _ADC_ThmPostRun,const std::uint8_t _ADC_FlowReq):ADC_ThmPostRun(_ADC_ThmPostRun),ADC_FlowReq(_ADC_FlowReq) {}
	BDCADCData(const BDCADCData &_x){
		ADC_ThmPostRun = _x.ADC_ThmPostRun;
		ADC_FlowReq = _x.ADC_FlowReq;
	}
	BDCADCData(BDCADCData &&_x){
		ADC_ThmPostRun = std::move(_x.ADC_ThmPostRun);
		ADC_FlowReq = std::move(_x.ADC_FlowReq);
	}
	BDCADCData& operator=(const BDCADCData &_x){
		ADC_ThmPostRun = _x.ADC_ThmPostRun;
		ADC_FlowReq = _x.ADC_FlowReq;
		return *this;
	}
	BDCADCData& operator=(BDCADCData &&_x){
		ADC_ThmPostRun = std::move(_x.ADC_ThmPostRun);
		ADC_FlowReq = std::move(_x.ADC_FlowReq);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(ADC_ThmPostRun);
		fun(ADC_FlowReq);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(ADC_ThmPostRun);
		fun(ADC_FlowReq);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (ADC_ThmPostRun);
		fun << (ADC_FlowReq);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (ADC_ThmPostRun);
		fun >> (ADC_FlowReq);
	}
};

#endif //____BDCADCDATA_H__
