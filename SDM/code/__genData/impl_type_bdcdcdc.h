#ifndef ____BDCDCDC_H__
#define ____BDCDCDC_H__


#include "cstdint"






struct BDCDCDC {
public:
	std::uint8_t DCDC_DiagErrCode;
	std::uint8_t DCDC_HVDCHVilSt;
	std::uint8_t DCDC_FaultLampInd;
	std::uint16_t DCDC_KL30Volt;
/*
	BDCDCDC() {}
	~BDCDCDC() {}
	BDCDCDC(const std::uint8_t _DCDC_DiagErrCode,const std::uint8_t _DCDC_HVDCHVilSt,const std::uint8_t _DCDC_FaultLampInd,const std::uint16_t _DCDC_KL30Volt):DCDC_DiagErrCode(_DCDC_DiagErrCode),DCDC_HVDCHVilSt(_DCDC_HVDCHVilSt),DCDC_FaultLampInd(_DCDC_FaultLampInd),DCDC_KL30Volt(_DCDC_KL30Volt) {}
	BDCDCDC(const BDCDCDC &_x){
		DCDC_DiagErrCode = _x.DCDC_DiagErrCode;
		DCDC_HVDCHVilSt = _x.DCDC_HVDCHVilSt;
		DCDC_FaultLampInd = _x.DCDC_FaultLampInd;
		DCDC_KL30Volt = _x.DCDC_KL30Volt;
	}
	BDCDCDC(BDCDCDC &&_x){
		DCDC_DiagErrCode = std::move(_x.DCDC_DiagErrCode);
		DCDC_HVDCHVilSt = std::move(_x.DCDC_HVDCHVilSt);
		DCDC_FaultLampInd = std::move(_x.DCDC_FaultLampInd);
		DCDC_KL30Volt = std::move(_x.DCDC_KL30Volt);
	}
	BDCDCDC& operator=(const BDCDCDC &_x){
		DCDC_DiagErrCode = _x.DCDC_DiagErrCode;
		DCDC_HVDCHVilSt = _x.DCDC_HVDCHVilSt;
		DCDC_FaultLampInd = _x.DCDC_FaultLampInd;
		DCDC_KL30Volt = _x.DCDC_KL30Volt;
		return *this;
	}
	BDCDCDC& operator=(BDCDCDC &&_x){
		DCDC_DiagErrCode = std::move(_x.DCDC_DiagErrCode);
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
		fun(DCDC_HVDCHVilSt);
		fun(DCDC_FaultLampInd);
		fun(DCDC_KL30Volt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(DCDC_DiagErrCode);
		fun(DCDC_HVDCHVilSt);
		fun(DCDC_FaultLampInd);
		fun(DCDC_KL30Volt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (DCDC_DiagErrCode);
		fun << (DCDC_HVDCHVilSt);
		fun << (DCDC_FaultLampInd);
		fun << (DCDC_KL30Volt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (DCDC_DiagErrCode);
		fun >> (DCDC_HVDCHVilSt);
		fun >> (DCDC_FaultLampInd);
		fun >> (DCDC_KL30Volt);
	}
};

#endif //____BDCDCDC_H__
