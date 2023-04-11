#ifndef ____BDCDCDC1_H__
#define ____BDCDCDC1_H__


#include "cstdint"






struct BDCDCDC1 {
public:
	std::uint8_t DCDC_DiagErrCode;
	std::uint8_t DCDC_DCDCState1;
	std::uint8_t DCDC_DCDCState2;
	std::uint8_t DCDC_DCDCState3;
	std::uint8_t DCDC_DCDCState4;
	std::uint8_t DCDC_DCDCState5;
	std::uint8_t DCDC_HVDCHVilSt;
	std::uint8_t DCDC_FaultLampInd;
	std::uint16_t DCDC_KL30Volt;
/*
	BDCDCDC1() {}
	~BDCDCDC1() {}
	BDCDCDC1(const std::uint8_t _DCDC_DiagErrCode,const std::uint8_t _DCDC_DCDCState1,const std::uint8_t _DCDC_DCDCState2,const std::uint8_t _DCDC_DCDCState3,const std::uint8_t _DCDC_DCDCState4,const std::uint8_t _DCDC_DCDCState5,const std::uint8_t _DCDC_HVDCHVilSt,const std::uint8_t _DCDC_FaultLampInd,const std::uint16_t _DCDC_KL30Volt):DCDC_DiagErrCode(_DCDC_DiagErrCode),DCDC_DCDCState1(_DCDC_DCDCState1),DCDC_DCDCState2(_DCDC_DCDCState2),DCDC_DCDCState3(_DCDC_DCDCState3),DCDC_DCDCState4(_DCDC_DCDCState4),DCDC_DCDCState5(_DCDC_DCDCState5),DCDC_HVDCHVilSt(_DCDC_HVDCHVilSt),DCDC_FaultLampInd(_DCDC_FaultLampInd),DCDC_KL30Volt(_DCDC_KL30Volt) {}
	BDCDCDC1(const BDCDCDC1 &_x){
		DCDC_DiagErrCode = _x.DCDC_DiagErrCode;
		DCDC_DCDCState1 = _x.DCDC_DCDCState1;
		DCDC_DCDCState2 = _x.DCDC_DCDCState2;
		DCDC_DCDCState3 = _x.DCDC_DCDCState3;
		DCDC_DCDCState4 = _x.DCDC_DCDCState4;
		DCDC_DCDCState5 = _x.DCDC_DCDCState5;
		DCDC_HVDCHVilSt = _x.DCDC_HVDCHVilSt;
		DCDC_FaultLampInd = _x.DCDC_FaultLampInd;
		DCDC_KL30Volt = _x.DCDC_KL30Volt;
	}
	BDCDCDC1(BDCDCDC1 &&_x){
		DCDC_DiagErrCode = std::move(_x.DCDC_DiagErrCode);
		DCDC_DCDCState1 = std::move(_x.DCDC_DCDCState1);
		DCDC_DCDCState2 = std::move(_x.DCDC_DCDCState2);
		DCDC_DCDCState3 = std::move(_x.DCDC_DCDCState3);
		DCDC_DCDCState4 = std::move(_x.DCDC_DCDCState4);
		DCDC_DCDCState5 = std::move(_x.DCDC_DCDCState5);
		DCDC_HVDCHVilSt = std::move(_x.DCDC_HVDCHVilSt);
		DCDC_FaultLampInd = std::move(_x.DCDC_FaultLampInd);
		DCDC_KL30Volt = std::move(_x.DCDC_KL30Volt);
	}
	BDCDCDC1& operator=(const BDCDCDC1 &_x){
		DCDC_DiagErrCode = _x.DCDC_DiagErrCode;
		DCDC_DCDCState1 = _x.DCDC_DCDCState1;
		DCDC_DCDCState2 = _x.DCDC_DCDCState2;
		DCDC_DCDCState3 = _x.DCDC_DCDCState3;
		DCDC_DCDCState4 = _x.DCDC_DCDCState4;
		DCDC_DCDCState5 = _x.DCDC_DCDCState5;
		DCDC_HVDCHVilSt = _x.DCDC_HVDCHVilSt;
		DCDC_FaultLampInd = _x.DCDC_FaultLampInd;
		DCDC_KL30Volt = _x.DCDC_KL30Volt;
		return *this;
	}
	BDCDCDC1& operator=(BDCDCDC1 &&_x){
		DCDC_DiagErrCode = std::move(_x.DCDC_DiagErrCode);
		DCDC_DCDCState1 = std::move(_x.DCDC_DCDCState1);
		DCDC_DCDCState2 = std::move(_x.DCDC_DCDCState2);
		DCDC_DCDCState3 = std::move(_x.DCDC_DCDCState3);
		DCDC_DCDCState4 = std::move(_x.DCDC_DCDCState4);
		DCDC_DCDCState5 = std::move(_x.DCDC_DCDCState5);
		DCDC_HVDCHVilSt = std::move(_x.DCDC_HVDCHVilSt);
		DCDC_FaultLampInd = std::move(_x.DCDC_FaultLampInd);
		DCDC_KL30Volt = std::move(_x.DCDC_KL30Volt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(DCDC_DiagErrCode);
		fun(DCDC_DCDCState1);
		fun(DCDC_DCDCState2);
		fun(DCDC_DCDCState3);
		fun(DCDC_DCDCState4);
		fun(DCDC_DCDCState5);
		fun(DCDC_HVDCHVilSt);
		fun(DCDC_FaultLampInd);
		fun(DCDC_KL30Volt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(DCDC_DiagErrCode);
		fun(DCDC_DCDCState1);
		fun(DCDC_DCDCState2);
		fun(DCDC_DCDCState3);
		fun(DCDC_DCDCState4);
		fun(DCDC_DCDCState5);
		fun(DCDC_HVDCHVilSt);
		fun(DCDC_FaultLampInd);
		fun(DCDC_KL30Volt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (DCDC_DiagErrCode);
		fun << (DCDC_DCDCState1);
		fun << (DCDC_DCDCState2);
		fun << (DCDC_DCDCState3);
		fun << (DCDC_DCDCState4);
		fun << (DCDC_DCDCState5);
		fun << (DCDC_HVDCHVilSt);
		fun << (DCDC_FaultLampInd);
		fun << (DCDC_KL30Volt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (DCDC_DiagErrCode);
		fun >> (DCDC_DCDCState1);
		fun >> (DCDC_DCDCState2);
		fun >> (DCDC_DCDCState3);
		fun >> (DCDC_DCDCState4);
		fun >> (DCDC_DCDCState5);
		fun >> (DCDC_HVDCHVilSt);
		fun >> (DCDC_FaultLampInd);
		fun >> (DCDC_KL30Volt);
	}
};

#endif //____BDCDCDC1_H__
