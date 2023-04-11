#ifndef ____BDCVCUDATA4_H__
#define ____BDCVCUDATA4_H__


#include "cstdint"






struct BDCVCUDATA4 {
public:
	std::uint64_t HVACF_CorrectedExterTemp;
	std::uint64_t HVACF_RawCabinTemp;
	std::uint64_t HVACF_DriverTempSelect;
	std::uint64_t HVACF_PsnTempSelect;
	std::uint8_t VCU_ExterTemp;
/*
	BDCVCUDATA4() {}
	~BDCVCUDATA4() {}
	BDCVCUDATA4(const std::uint64_t _HVACF_CorrectedExterTemp,const std::uint64_t _HVACF_RawCabinTemp,const std::uint64_t _HVACF_DriverTempSelect,const std::uint64_t _HVACF_PsnTempSelect,const std::uint8_t _VCU_ExterTemp):HVACF_CorrectedExterTemp(_HVACF_CorrectedExterTemp),HVACF_RawCabinTemp(_HVACF_RawCabinTemp),HVACF_DriverTempSelect(_HVACF_DriverTempSelect),HVACF_PsnTempSelect(_HVACF_PsnTempSelect),VCU_ExterTemp(_VCU_ExterTemp) {}
	BDCVCUDATA4(const BDCVCUDATA4 &_x){
		HVACF_CorrectedExterTemp = _x.HVACF_CorrectedExterTemp;
		HVACF_RawCabinTemp = _x.HVACF_RawCabinTemp;
		HVACF_DriverTempSelect = _x.HVACF_DriverTempSelect;
		HVACF_PsnTempSelect = _x.HVACF_PsnTempSelect;
		VCU_ExterTemp = _x.VCU_ExterTemp;
	}
	BDCVCUDATA4(BDCVCUDATA4 &&_x){
		HVACF_CorrectedExterTemp = std::move(_x.HVACF_CorrectedExterTemp);
		HVACF_RawCabinTemp = std::move(_x.HVACF_RawCabinTemp);
		HVACF_DriverTempSelect = std::move(_x.HVACF_DriverTempSelect);
		HVACF_PsnTempSelect = std::move(_x.HVACF_PsnTempSelect);
		VCU_ExterTemp = std::move(_x.VCU_ExterTemp);
	}
	BDCVCUDATA4& operator=(const BDCVCUDATA4 &_x){
		HVACF_CorrectedExterTemp = _x.HVACF_CorrectedExterTemp;
		HVACF_RawCabinTemp = _x.HVACF_RawCabinTemp;
		HVACF_DriverTempSelect = _x.HVACF_DriverTempSelect;
		HVACF_PsnTempSelect = _x.HVACF_PsnTempSelect;
		VCU_ExterTemp = _x.VCU_ExterTemp;
		return *this;
	}
	BDCVCUDATA4& operator=(BDCVCUDATA4 &&_x){
		HVACF_CorrectedExterTemp = std::move(_x.HVACF_CorrectedExterTemp);
		HVACF_RawCabinTemp = std::move(_x.HVACF_RawCabinTemp);
		HVACF_DriverTempSelect = std::move(_x.HVACF_DriverTempSelect);
		HVACF_PsnTempSelect = std::move(_x.HVACF_PsnTempSelect);
		VCU_ExterTemp = std::move(_x.VCU_ExterTemp);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(HVACF_CorrectedExterTemp);
		fun(HVACF_RawCabinTemp);
		fun(HVACF_DriverTempSelect);
		fun(HVACF_PsnTempSelect);
		fun(VCU_ExterTemp);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(HVACF_CorrectedExterTemp);
		fun(HVACF_RawCabinTemp);
		fun(HVACF_DriverTempSelect);
		fun(HVACF_PsnTempSelect);
		fun(VCU_ExterTemp);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (HVACF_CorrectedExterTemp);
		fun << (HVACF_RawCabinTemp);
		fun << (HVACF_DriverTempSelect);
		fun << (HVACF_PsnTempSelect);
		fun << (VCU_ExterTemp);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (HVACF_CorrectedExterTemp);
		fun >> (HVACF_RawCabinTemp);
		fun >> (HVACF_DriverTempSelect);
		fun >> (HVACF_PsnTempSelect);
		fun >> (VCU_ExterTemp);
	}
};

#endif //____BDCVCUDATA4_H__
