#ifndef ____BDCDCDCTRI1_H__
#define ____BDCDCDCTRI1_H__


#include "cstdint"






struct BDCDCDCTri1 {
public:
	std::uint8_t DCDC_TempAct;
/*
	BDCDCDCTri1() {}
	~BDCDCDCTri1() {}
	BDCDCDCTri1(const std::uint8_t _DCDC_TempAct):DCDC_TempAct(_DCDC_TempAct) {}
	BDCDCDCTri1(const BDCDCDCTri1 &_x){
		DCDC_TempAct = _x.DCDC_TempAct;
	}
	BDCDCDCTri1(BDCDCDCTri1 &&_x){
		DCDC_TempAct = std::move(_x.DCDC_TempAct);
	}
	BDCDCDCTri1& operator=(const BDCDCDCTri1 &_x){
		DCDC_TempAct = _x.DCDC_TempAct;
		return *this;
	}
	BDCDCDCTri1& operator=(BDCDCDCTri1 &&_x){
		DCDC_TempAct = std::move(_x.DCDC_TempAct);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(DCDC_TempAct);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(DCDC_TempAct);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (DCDC_TempAct);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (DCDC_TempAct);
	}
};

#endif //____BDCDCDCTRI1_H__
