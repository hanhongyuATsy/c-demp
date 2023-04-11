#ifndef ____BDCEEMDATA1_H__
#define ____BDCEEMDATA1_H__


#include "cstdint"






struct BDCEEMDATA1 {
public:
	std::uint16_t BMS_BattCurr;
/*
	BDCEEMDATA1() {}
	~BDCEEMDATA1() {}
	BDCEEMDATA1(const std::uint16_t _BMS_BattCurr):BMS_BattCurr(_BMS_BattCurr) {}
	BDCEEMDATA1(const BDCEEMDATA1 &_x){
		BMS_BattCurr = _x.BMS_BattCurr;
	}
	BDCEEMDATA1(BDCEEMDATA1 &&_x){
		BMS_BattCurr = std::move(_x.BMS_BattCurr);
	}
	BDCEEMDATA1& operator=(const BDCEEMDATA1 &_x){
		BMS_BattCurr = _x.BMS_BattCurr;
		return *this;
	}
	BDCEEMDATA1& operator=(BDCEEMDATA1 &&_x){
		BMS_BattCurr = std::move(_x.BMS_BattCurr);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(BMS_BattCurr);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(BMS_BattCurr);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (BMS_BattCurr);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (BMS_BattCurr);
	}
};

#endif //____BDCEEMDATA1_H__
