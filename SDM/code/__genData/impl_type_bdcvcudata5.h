#ifndef ____BDCVCUDATA5_H__
#define ____BDCVCUDATA5_H__


#include "cstdint"






struct BDCVCUDATA5 {
public:
	std::uint64_t VCU_DCU_CoolantTemp;
/*
	BDCVCUDATA5() {}
	~BDCVCUDATA5() {}
	BDCVCUDATA5(const std::uint64_t _VCU_DCU_CoolantTemp):VCU_DCU_CoolantTemp(_VCU_DCU_CoolantTemp) {}
	BDCVCUDATA5(const BDCVCUDATA5 &_x){
		VCU_DCU_CoolantTemp = _x.VCU_DCU_CoolantTemp;
	}
	BDCVCUDATA5(BDCVCUDATA5 &&_x){
		VCU_DCU_CoolantTemp = std::move(_x.VCU_DCU_CoolantTemp);
	}
	BDCVCUDATA5& operator=(const BDCVCUDATA5 &_x){
		VCU_DCU_CoolantTemp = _x.VCU_DCU_CoolantTemp;
		return *this;
	}
	BDCVCUDATA5& operator=(BDCVCUDATA5 &&_x){
		VCU_DCU_CoolantTemp = std::move(_x.VCU_DCU_CoolantTemp);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(VCU_DCU_CoolantTemp);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(VCU_DCU_CoolantTemp);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (VCU_DCU_CoolantTemp);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (VCU_DCU_CoolantTemp);
	}
};

#endif //____BDCVCUDATA5_H__
