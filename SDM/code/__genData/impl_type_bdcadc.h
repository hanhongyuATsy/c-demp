#ifndef ____BDCADC_H__
#define ____BDCADC_H__


#include "cstdint"






struct BDCADC {
public:
	std::uint8_t ADC_NDASt;
	std::uint8_t ADC_NDATORType;
	std::uint8_t ADC_NDADecideResult;
	std::uint16_t ADC_LatVMC_A0;
	std::uint16_t ADC_LatVMC_A1;
	std::uint16_t ADC_LatVMC_A2;
	std::uint16_t ADC_LatVMC_A3;
	std::uint8_t ADC_LatVMC_conf;
	std::uint16_t ADC_RLnMrking_A2;
	std::uint8_t ADC_RlnMrkingDispSt;
	std::uint8_t ADC_RLnMrking_conf;
	std::uint16_t ADC_RLnMrking_Range;
	std::uint8_t ADC_RLnMrking_Type;
	std::uint16_t ADC_AdjLLnMrking_A0;
	std::uint16_t ADC_AdjLLnMrking_A1;
	std::uint16_t ADC_AdjLLnMrking_A2;
	std::uint8_t ADC_AdjLLnMrking_conf;
	std::uint16_t ADC_AdjLLnMrking_Range;
	std::uint8_t ADC_AdjLlnMrkingDispSt;
	std::uint8_t ADC_AdjLLnMrking_Type;
	std::uint16_t ADC_AdjRLnMrking_A0;
	std::uint16_t ADC_AdjRLnMrking_A1;
	std::uint16_t ADC_AdjRLnMrking_A2;
	std::uint16_t ADC_AdjRLnMrking_Range;
	std::uint8_t ADC_AdjRLnMrking_conf;
	std::uint8_t ADC_AdjRlnMrkingDispSt;
	std::uint8_t ADC_AdjRLnMrking_Type;
	std::uint8_t ADC_ICMWarnCardSt_B;
	std::uint8_t ADC_ICMPromptWarn_B;
	std::uint16_t ADC_1_B_FreshnessValue;
	std::uint64_t ADC_1_B_MAC_Check;
/*
	BDCADC() {}
	~BDCADC() {}
	BDCADC(const std::uint8_t _ADC_NDASt,const std::uint8_t _ADC_NDATORType,const std::uint8_t _ADC_NDADecideResult,const std::uint16_t _ADC_LatVMC_A0,const std::uint16_t _ADC_LatVMC_A1,const std::uint16_t _ADC_LatVMC_A2,const std::uint16_t _ADC_LatVMC_A3,const std::uint8_t _ADC_LatVMC_conf,const std::uint16_t _ADC_RLnMrking_A2,const std::uint8_t _ADC_RlnMrkingDispSt,const std::uint8_t _ADC_RLnMrking_conf,const std::uint16_t _ADC_RLnMrking_Range,const std::uint8_t _ADC_RLnMrking_Type,const std::uint16_t _ADC_AdjLLnMrking_A0,const std::uint16_t _ADC_AdjLLnMrking_A1,const std::uint16_t _ADC_AdjLLnMrking_A2,const std::uint8_t _ADC_AdjLLnMrking_conf,const std::uint16_t _ADC_AdjLLnMrking_Range,const std::uint8_t _ADC_AdjLlnMrkingDispSt,const std::uint8_t _ADC_AdjLLnMrking_Type,const std::uint16_t _ADC_AdjRLnMrking_A0,const std::uint16_t _ADC_AdjRLnMrking_A1,const std::uint16_t _ADC_AdjRLnMrking_A2,const std::uint16_t _ADC_AdjRLnMrking_Range,const std::uint8_t _ADC_AdjRLnMrking_conf,const std::uint8_t _ADC_AdjRlnMrkingDispSt,const std::uint8_t _ADC_AdjRLnMrking_Type,const std::uint8_t _ADC_ICMWarnCardSt_B,const std::uint8_t _ADC_ICMPromptWarn_B,const std::uint16_t _ADC_1_B_FreshnessValue,const std::uint64_t _ADC_1_B_MAC_Check):ADC_NDASt(_ADC_NDASt),ADC_NDATORType(_ADC_NDATORType),ADC_NDADecideResult(_ADC_NDADecideResult),ADC_LatVMC_A0(_ADC_LatVMC_A0),ADC_LatVMC_A1(_ADC_LatVMC_A1),ADC_LatVMC_A2(_ADC_LatVMC_A2),ADC_LatVMC_A3(_ADC_LatVMC_A3),ADC_LatVMC_conf(_ADC_LatVMC_conf),ADC_RLnMrking_A2(_ADC_RLnMrking_A2),ADC_RlnMrkingDispSt(_ADC_RlnMrkingDispSt),ADC_RLnMrking_conf(_ADC_RLnMrking_conf),ADC_RLnMrking_Range(_ADC_RLnMrking_Range),ADC_RLnMrking_Type(_ADC_RLnMrking_Type),ADC_AdjLLnMrking_A0(_ADC_AdjLLnMrking_A0),ADC_AdjLLnMrking_A1(_ADC_AdjLLnMrking_A1),ADC_AdjLLnMrking_A2(_ADC_AdjLLnMrking_A2),ADC_AdjLLnMrking_conf(_ADC_AdjLLnMrking_conf),ADC_AdjLLnMrking_Range(_ADC_AdjLLnMrking_Range),ADC_AdjLlnMrkingDispSt(_ADC_AdjLlnMrkingDispSt),ADC_AdjLLnMrking_Type(_ADC_AdjLLnMrking_Type),ADC_AdjRLnMrking_A0(_ADC_AdjRLnMrking_A0),ADC_AdjRLnMrking_A1(_ADC_AdjRLnMrking_A1),ADC_AdjRLnMrking_A2(_ADC_AdjRLnMrking_A2),ADC_AdjRLnMrking_Range(_ADC_AdjRLnMrking_Range),ADC_AdjRLnMrking_conf(_ADC_AdjRLnMrking_conf),ADC_AdjRlnMrkingDispSt(_ADC_AdjRlnMrkingDispSt),ADC_AdjRLnMrking_Type(_ADC_AdjRLnMrking_Type),ADC_ICMWarnCardSt_B(_ADC_ICMWarnCardSt_B),ADC_ICMPromptWarn_B(_ADC_ICMPromptWarn_B),ADC_1_B_FreshnessValue(_ADC_1_B_FreshnessValue),ADC_1_B_MAC_Check(_ADC_1_B_MAC_Check) {}
	BDCADC(const BDCADC &_x){
		ADC_NDASt = _x.ADC_NDASt;
		ADC_NDATORType = _x.ADC_NDATORType;
		ADC_NDADecideResult = _x.ADC_NDADecideResult;
		ADC_LatVMC_A0 = _x.ADC_LatVMC_A0;
		ADC_LatVMC_A1 = _x.ADC_LatVMC_A1;
		ADC_LatVMC_A2 = _x.ADC_LatVMC_A2;
		ADC_LatVMC_A3 = _x.ADC_LatVMC_A3;
		ADC_LatVMC_conf = _x.ADC_LatVMC_conf;
		ADC_RLnMrking_A2 = _x.ADC_RLnMrking_A2;
		ADC_RlnMrkingDispSt = _x.ADC_RlnMrkingDispSt;
		ADC_RLnMrking_conf = _x.ADC_RLnMrking_conf;
		ADC_RLnMrking_Range = _x.ADC_RLnMrking_Range;
		ADC_RLnMrking_Type = _x.ADC_RLnMrking_Type;
		ADC_AdjLLnMrking_A0 = _x.ADC_AdjLLnMrking_A0;
		ADC_AdjLLnMrking_A1 = _x.ADC_AdjLLnMrking_A1;
		ADC_AdjLLnMrking_A2 = _x.ADC_AdjLLnMrking_A2;
		ADC_AdjLLnMrking_conf = _x.ADC_AdjLLnMrking_conf;
		ADC_AdjLLnMrking_Range = _x.ADC_AdjLLnMrking_Range;
		ADC_AdjLlnMrkingDispSt = _x.ADC_AdjLlnMrkingDispSt;
		ADC_AdjLLnMrking_Type = _x.ADC_AdjLLnMrking_Type;
		ADC_AdjRLnMrking_A0 = _x.ADC_AdjRLnMrking_A0;
		ADC_AdjRLnMrking_A1 = _x.ADC_AdjRLnMrking_A1;
		ADC_AdjRLnMrking_A2 = _x.ADC_AdjRLnMrking_A2;
		ADC_AdjRLnMrking_Range = _x.ADC_AdjRLnMrking_Range;
		ADC_AdjRLnMrking_conf = _x.ADC_AdjRLnMrking_conf;
		ADC_AdjRlnMrkingDispSt = _x.ADC_AdjRlnMrkingDispSt;
		ADC_AdjRLnMrking_Type = _x.ADC_AdjRLnMrking_Type;
		ADC_ICMWarnCardSt_B = _x.ADC_ICMWarnCardSt_B;
		ADC_ICMPromptWarn_B = _x.ADC_ICMPromptWarn_B;
		ADC_1_B_FreshnessValue = _x.ADC_1_B_FreshnessValue;
		ADC_1_B_MAC_Check = _x.ADC_1_B_MAC_Check;
	}
	BDCADC(BDCADC &&_x){
		ADC_NDASt = std::move(_x.ADC_NDASt);
		ADC_NDATORType = std::move(_x.ADC_NDATORType);
		ADC_NDADecideResult = std::move(_x.ADC_NDADecideResult);
		ADC_LatVMC_A0 = std::move(_x.ADC_LatVMC_A0);
		ADC_LatVMC_A1 = std::move(_x.ADC_LatVMC_A1);
		ADC_LatVMC_A2 = std::move(_x.ADC_LatVMC_A2);
		ADC_LatVMC_A3 = std::move(_x.ADC_LatVMC_A3);
		ADC_LatVMC_conf = std::move(_x.ADC_LatVMC_conf);
		ADC_RLnMrking_A2 = std::move(_x.ADC_RLnMrking_A2);
		ADC_RlnMrkingDispSt = std::move(_x.ADC_RlnMrkingDispSt);
		ADC_RLnMrking_conf = std::move(_x.ADC_RLnMrking_conf);
		ADC_RLnMrking_Range = std::move(_x.ADC_RLnMrking_Range);
		ADC_RLnMrking_Type = std::move(_x.ADC_RLnMrking_Type);
		ADC_AdjLLnMrking_A0 = std::move(_x.ADC_AdjLLnMrking_A0);
		ADC_AdjLLnMrking_A1 = std::move(_x.ADC_AdjLLnMrking_A1);
		ADC_AdjLLnMrking_A2 = std::move(_x.ADC_AdjLLnMrking_A2);
		ADC_AdjLLnMrking_conf = std::move(_x.ADC_AdjLLnMrking_conf);
		ADC_AdjLLnMrking_Range = std::move(_x.ADC_AdjLLnMrking_Range);
		ADC_AdjLlnMrkingDispSt = std::move(_x.ADC_AdjLlnMrkingDispSt);
		ADC_AdjLLnMrking_Type = std::move(_x.ADC_AdjLLnMrking_Type);
		ADC_AdjRLnMrking_A0 = std::move(_x.ADC_AdjRLnMrking_A0);
		ADC_AdjRLnMrking_A1 = std::move(_x.ADC_AdjRLnMrking_A1);
		ADC_AdjRLnMrking_A2 = std::move(_x.ADC_AdjRLnMrking_A2);
		ADC_AdjRLnMrking_Range = std::move(_x.ADC_AdjRLnMrking_Range);
		ADC_AdjRLnMrking_conf = std::move(_x.ADC_AdjRLnMrking_conf);
		ADC_AdjRlnMrkingDispSt = std::move(_x.ADC_AdjRlnMrkingDispSt);
		ADC_AdjRLnMrking_Type = std::move(_x.ADC_AdjRLnMrking_Type);
		ADC_ICMWarnCardSt_B = std::move(_x.ADC_ICMWarnCardSt_B);
		ADC_ICMPromptWarn_B = std::move(_x.ADC_ICMPromptWarn_B);
		ADC_1_B_FreshnessValue = std::move(_x.ADC_1_B_FreshnessValue);
		ADC_1_B_MAC_Check = std::move(_x.ADC_1_B_MAC_Check);
	}
	BDCADC& operator=(const BDCADC &_x){
		ADC_NDASt = _x.ADC_NDASt;
		ADC_NDATORType = _x.ADC_NDATORType;
		ADC_NDADecideResult = _x.ADC_NDADecideResult;
		ADC_LatVMC_A0 = _x.ADC_LatVMC_A0;
		ADC_LatVMC_A1 = _x.ADC_LatVMC_A1;
		ADC_LatVMC_A2 = _x.ADC_LatVMC_A2;
		ADC_LatVMC_A3 = _x.ADC_LatVMC_A3;
		ADC_LatVMC_conf = _x.ADC_LatVMC_conf;
		ADC_RLnMrking_A2 = _x.ADC_RLnMrking_A2;
		ADC_RlnMrkingDispSt = _x.ADC_RlnMrkingDispSt;
		ADC_RLnMrking_conf = _x.ADC_RLnMrking_conf;
		ADC_RLnMrking_Range = _x.ADC_RLnMrking_Range;
		ADC_RLnMrking_Type = _x.ADC_RLnMrking_Type;
		ADC_AdjLLnMrking_A0 = _x.ADC_AdjLLnMrking_A0;
		ADC_AdjLLnMrking_A1 = _x.ADC_AdjLLnMrking_A1;
		ADC_AdjLLnMrking_A2 = _x.ADC_AdjLLnMrking_A2;
		ADC_AdjLLnMrking_conf = _x.ADC_AdjLLnMrking_conf;
		ADC_AdjLLnMrking_Range = _x.ADC_AdjLLnMrking_Range;
		ADC_AdjLlnMrkingDispSt = _x.ADC_AdjLlnMrkingDispSt;
		ADC_AdjLLnMrking_Type = _x.ADC_AdjLLnMrking_Type;
		ADC_AdjRLnMrking_A0 = _x.ADC_AdjRLnMrking_A0;
		ADC_AdjRLnMrking_A1 = _x.ADC_AdjRLnMrking_A1;
		ADC_AdjRLnMrking_A2 = _x.ADC_AdjRLnMrking_A2;
		ADC_AdjRLnMrking_Range = _x.ADC_AdjRLnMrking_Range;
		ADC_AdjRLnMrking_conf = _x.ADC_AdjRLnMrking_conf;
		ADC_AdjRlnMrkingDispSt = _x.ADC_AdjRlnMrkingDispSt;
		ADC_AdjRLnMrking_Type = _x.ADC_AdjRLnMrking_Type;
		ADC_ICMWarnCardSt_B = _x.ADC_ICMWarnCardSt_B;
		ADC_ICMPromptWarn_B = _x.ADC_ICMPromptWarn_B;
		ADC_1_B_FreshnessValue = _x.ADC_1_B_FreshnessValue;
		ADC_1_B_MAC_Check = _x.ADC_1_B_MAC_Check;
		return *this;
	}
	BDCADC& operator=(BDCADC &&_x){
		ADC_NDASt = std::move(_x.ADC_NDASt);
		ADC_NDATORType = std::move(_x.ADC_NDATORType);
		ADC_NDADecideResult = std::move(_x.ADC_NDADecideResult);
		ADC_LatVMC_A0 = std::move(_x.ADC_LatVMC_A0);
		ADC_LatVMC_A1 = std::move(_x.ADC_LatVMC_A1);
		ADC_LatVMC_A2 = std::move(_x.ADC_LatVMC_A2);
		ADC_LatVMC_A3 = std::move(_x.ADC_LatVMC_A3);
		ADC_LatVMC_conf = std::move(_x.ADC_LatVMC_conf);
		ADC_RLnMrking_A2 = std::move(_x.ADC_RLnMrking_A2);
		ADC_RlnMrkingDispSt = std::move(_x.ADC_RlnMrkingDispSt);
		ADC_RLnMrking_conf = std::move(_x.ADC_RLnMrking_conf);
		ADC_RLnMrking_Range = std::move(_x.ADC_RLnMrking_Range);
		ADC_RLnMrking_Type = std::move(_x.ADC_RLnMrking_Type);
		ADC_AdjLLnMrking_A0 = std::move(_x.ADC_AdjLLnMrking_A0);
		ADC_AdjLLnMrking_A1 = std::move(_x.ADC_AdjLLnMrking_A1);
		ADC_AdjLLnMrking_A2 = std::move(_x.ADC_AdjLLnMrking_A2);
		ADC_AdjLLnMrking_conf = std::move(_x.ADC_AdjLLnMrking_conf);
		ADC_AdjLLnMrking_Range = std::move(_x.ADC_AdjLLnMrking_Range);
		ADC_AdjLlnMrkingDispSt = std::move(_x.ADC_AdjLlnMrkingDispSt);
		ADC_AdjLLnMrking_Type = std::move(_x.ADC_AdjLLnMrking_Type);
		ADC_AdjRLnMrking_A0 = std::move(_x.ADC_AdjRLnMrking_A0);
		ADC_AdjRLnMrking_A1 = std::move(_x.ADC_AdjRLnMrking_A1);
		ADC_AdjRLnMrking_A2 = std::move(_x.ADC_AdjRLnMrking_A2);
		ADC_AdjRLnMrking_Range = std::move(_x.ADC_AdjRLnMrking_Range);
		ADC_AdjRLnMrking_conf = std::move(_x.ADC_AdjRLnMrking_conf);
		ADC_AdjRlnMrkingDispSt = std::move(_x.ADC_AdjRlnMrkingDispSt);
		ADC_AdjRLnMrking_Type = std::move(_x.ADC_AdjRLnMrking_Type);
		ADC_ICMWarnCardSt_B = std::move(_x.ADC_ICMWarnCardSt_B);
		ADC_ICMPromptWarn_B = std::move(_x.ADC_ICMPromptWarn_B);
		ADC_1_B_FreshnessValue = std::move(_x.ADC_1_B_FreshnessValue);
		ADC_1_B_MAC_Check = std::move(_x.ADC_1_B_MAC_Check);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(ADC_NDASt);
		fun(ADC_NDATORType);
		fun(ADC_NDADecideResult);
		fun(ADC_LatVMC_A0);
		fun(ADC_LatVMC_A1);
		fun(ADC_LatVMC_A2);
		fun(ADC_LatVMC_A3);
		fun(ADC_LatVMC_conf);
		fun(ADC_RLnMrking_A2);
		fun(ADC_RlnMrkingDispSt);
		fun(ADC_RLnMrking_conf);
		fun(ADC_RLnMrking_Range);
		fun(ADC_RLnMrking_Type);
		fun(ADC_AdjLLnMrking_A0);
		fun(ADC_AdjLLnMrking_A1);
		fun(ADC_AdjLLnMrking_A2);
		fun(ADC_AdjLLnMrking_conf);
		fun(ADC_AdjLLnMrking_Range);
		fun(ADC_AdjLlnMrkingDispSt);
		fun(ADC_AdjLLnMrking_Type);
		fun(ADC_AdjRLnMrking_A0);
		fun(ADC_AdjRLnMrking_A1);
		fun(ADC_AdjRLnMrking_A2);
		fun(ADC_AdjRLnMrking_Range);
		fun(ADC_AdjRLnMrking_conf);
		fun(ADC_AdjRlnMrkingDispSt);
		fun(ADC_AdjRLnMrking_Type);
		fun(ADC_ICMWarnCardSt_B);
		fun(ADC_ICMPromptWarn_B);
		fun(ADC_1_B_FreshnessValue);
		fun(ADC_1_B_MAC_Check);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(ADC_NDASt);
		fun(ADC_NDATORType);
		fun(ADC_NDADecideResult);
		fun(ADC_LatVMC_A0);
		fun(ADC_LatVMC_A1);
		fun(ADC_LatVMC_A2);
		fun(ADC_LatVMC_A3);
		fun(ADC_LatVMC_conf);
		fun(ADC_RLnMrking_A2);
		fun(ADC_RlnMrkingDispSt);
		fun(ADC_RLnMrking_conf);
		fun(ADC_RLnMrking_Range);
		fun(ADC_RLnMrking_Type);
		fun(ADC_AdjLLnMrking_A0);
		fun(ADC_AdjLLnMrking_A1);
		fun(ADC_AdjLLnMrking_A2);
		fun(ADC_AdjLLnMrking_conf);
		fun(ADC_AdjLLnMrking_Range);
		fun(ADC_AdjLlnMrkingDispSt);
		fun(ADC_AdjLLnMrking_Type);
		fun(ADC_AdjRLnMrking_A0);
		fun(ADC_AdjRLnMrking_A1);
		fun(ADC_AdjRLnMrking_A2);
		fun(ADC_AdjRLnMrking_Range);
		fun(ADC_AdjRLnMrking_conf);
		fun(ADC_AdjRlnMrkingDispSt);
		fun(ADC_AdjRLnMrking_Type);
		fun(ADC_ICMWarnCardSt_B);
		fun(ADC_ICMPromptWarn_B);
		fun(ADC_1_B_FreshnessValue);
		fun(ADC_1_B_MAC_Check);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (ADC_NDASt);
		fun << (ADC_NDATORType);
		fun << (ADC_NDADecideResult);
		fun << (ADC_LatVMC_A0);
		fun << (ADC_LatVMC_A1);
		fun << (ADC_LatVMC_A2);
		fun << (ADC_LatVMC_A3);
		fun << (ADC_LatVMC_conf);
		fun << (ADC_RLnMrking_A2);
		fun << (ADC_RlnMrkingDispSt);
		fun << (ADC_RLnMrking_conf);
		fun << (ADC_RLnMrking_Range);
		fun << (ADC_RLnMrking_Type);
		fun << (ADC_AdjLLnMrking_A0);
		fun << (ADC_AdjLLnMrking_A1);
		fun << (ADC_AdjLLnMrking_A2);
		fun << (ADC_AdjLLnMrking_conf);
		fun << (ADC_AdjLLnMrking_Range);
		fun << (ADC_AdjLlnMrkingDispSt);
		fun << (ADC_AdjLLnMrking_Type);
		fun << (ADC_AdjRLnMrking_A0);
		fun << (ADC_AdjRLnMrking_A1);
		fun << (ADC_AdjRLnMrking_A2);
		fun << (ADC_AdjRLnMrking_Range);
		fun << (ADC_AdjRLnMrking_conf);
		fun << (ADC_AdjRlnMrkingDispSt);
		fun << (ADC_AdjRLnMrking_Type);
		fun << (ADC_ICMWarnCardSt_B);
		fun << (ADC_ICMPromptWarn_B);
		fun << (ADC_1_B_FreshnessValue);
		fun << (ADC_1_B_MAC_Check);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (ADC_NDASt);
		fun >> (ADC_NDATORType);
		fun >> (ADC_NDADecideResult);
		fun >> (ADC_LatVMC_A0);
		fun >> (ADC_LatVMC_A1);
		fun >> (ADC_LatVMC_A2);
		fun >> (ADC_LatVMC_A3);
		fun >> (ADC_LatVMC_conf);
		fun >> (ADC_RLnMrking_A2);
		fun >> (ADC_RlnMrkingDispSt);
		fun >> (ADC_RLnMrking_conf);
		fun >> (ADC_RLnMrking_Range);
		fun >> (ADC_RLnMrking_Type);
		fun >> (ADC_AdjLLnMrking_A0);
		fun >> (ADC_AdjLLnMrking_A1);
		fun >> (ADC_AdjLLnMrking_A2);
		fun >> (ADC_AdjLLnMrking_conf);
		fun >> (ADC_AdjLLnMrking_Range);
		fun >> (ADC_AdjLlnMrkingDispSt);
		fun >> (ADC_AdjLLnMrking_Type);
		fun >> (ADC_AdjRLnMrking_A0);
		fun >> (ADC_AdjRLnMrking_A1);
		fun >> (ADC_AdjRLnMrking_A2);
		fun >> (ADC_AdjRLnMrking_Range);
		fun >> (ADC_AdjRLnMrking_conf);
		fun >> (ADC_AdjRlnMrkingDispSt);
		fun >> (ADC_AdjRLnMrking_Type);
		fun >> (ADC_ICMWarnCardSt_B);
		fun >> (ADC_ICMPromptWarn_B);
		fun >> (ADC_1_B_FreshnessValue);
		fun >> (ADC_1_B_MAC_Check);
	}
};

#endif //____BDCADC_H__
