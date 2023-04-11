#ifndef ____BDCDCDC2_H__
#define ____BDCDCDC2_H__


#include "cstdint"






struct BDCDCDC2 {
public:
	std::uint8_t DCDC_DCDCState1;
	std::uint8_t DCDC_DCDCState2;
	std::uint8_t DCDC_DCDCState3;
	std::uint8_t DCDC_DCDCState4;
	std::uint8_t DCDC_DCDCState5;
/*
	BDCDCDC2() {}
	~BDCDCDC2() {}
	BDCDCDC2(const std::uint8_t _DCDC_DCDCState1,const std::uint8_t _DCDC_DCDCState2,const std::uint8_t _DCDC_DCDCState3,const std::uint8_t _DCDC_DCDCState4,const std::uint8_t _DCDC_DCDCState5):DCDC_DCDCState1(_DCDC_DCDCState1),DCDC_DCDCState2(_DCDC_DCDCState2),DCDC_DCDCState3(_DCDC_DCDCState3),DCDC_DCDCState4(_DCDC_DCDCState4),DCDC_DCDCState5(_DCDC_DCDCState5) {}
	BDCDCDC2(const BDCDCDC2 &_x){
		DCDC_DCDCState1 = _x.DCDC_DCDCState1;
		DCDC_DCDCState2 = _x.DCDC_DCDCState2;
		DCDC_DCDCState3 = _x.DCDC_DCDCState3;
		DCDC_DCDCState4 = _x.DCDC_DCDCState4;
		DCDC_DCDCState5 = _x.DCDC_DCDCState5;
	}
	BDCDCDC2(BDCDCDC2 &&_x){
		DCDC_DCDCState1 = std::move(_x.DCDC_DCDCState1);
		DCDC_DCDCState2 = std::move(_x.DCDC_DCDCState2);
		DCDC_DCDCState3 = std::move(_x.DCDC_DCDCState3);
		DCDC_DCDCState4 = std::move(_x.DCDC_DCDCState4);
		DCDC_DCDCState5 = std::move(_x.DCDC_DCDCState5);
	}
	BDCDCDC2& operator=(const BDCDCDC2 &_x){
		DCDC_DCDCState1 = _x.DCDC_DCDCState1;
		DCDC_DCDCState2 = _x.DCDC_DCDCState2;
		DCDC_DCDCState3 = _x.DCDC_DCDCState3;
		DCDC_DCDCState4 = _x.DCDC_DCDCState4;
		DCDC_DCDCState5 = _x.DCDC_DCDCState5;
		return *this;
	}
	BDCDCDC2& operator=(BDCDCDC2 &&_x){
		DCDC_DCDCState1 = std::move(_x.DCDC_DCDCState1);
		DCDC_DCDCState2 = std::move(_x.DCDC_DCDCState2);
		DCDC_DCDCState3 = std::move(_x.DCDC_DCDCState3);
		DCDC_DCDCState4 = std::move(_x.DCDC_DCDCState4);
		DCDC_DCDCState5 = std::move(_x.DCDC_DCDCState5);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(DCDC_DCDCState1);
		fun(DCDC_DCDCState2);
		fun(DCDC_DCDCState3);
		fun(DCDC_DCDCState4);
		fun(DCDC_DCDCState5);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(DCDC_DCDCState1);
		fun(DCDC_DCDCState2);
		fun(DCDC_DCDCState3);
		fun(DCDC_DCDCState4);
		fun(DCDC_DCDCState5);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (DCDC_DCDCState1);
		fun << (DCDC_DCDCState2);
		fun << (DCDC_DCDCState3);
		fun << (DCDC_DCDCState4);
		fun << (DCDC_DCDCState5);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (DCDC_DCDCState1);
		fun >> (DCDC_DCDCState2);
		fun >> (DCDC_DCDCState3);
		fun >> (DCDC_DCDCState4);
		fun >> (DCDC_DCDCState5);
	}
};

#endif //____BDCDCDC2_H__
