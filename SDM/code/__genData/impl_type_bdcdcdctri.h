#ifndef ____BDCDCDCTRI_H__
#define ____BDCDCDCTRI_H__


#include "cstdint"






struct BDCDCDCTri {
public:
	std::uint16_t DCDC_CurrHvAct;
	std::uint16_t DCDC_CurrLvAct;
	std::uint16_t DCDC_VoltHvAct;
	std::uint16_t DCDC_VoltLvAct;
	std::uint8_t DCDC_ModeSt;
	std::uint16_t DCDC_KL30Volt;
/*
	BDCDCDCTri() {}
	~BDCDCDCTri() {}
	BDCDCDCTri(const std::uint16_t _DCDC_CurrHvAct,const std::uint16_t _DCDC_CurrLvAct,const std::uint16_t _DCDC_VoltHvAct,const std::uint16_t _DCDC_VoltLvAct,const std::uint8_t _DCDC_ModeSt,const std::uint16_t _DCDC_KL30Volt):DCDC_CurrHvAct(_DCDC_CurrHvAct),DCDC_CurrLvAct(_DCDC_CurrLvAct),DCDC_VoltHvAct(_DCDC_VoltHvAct),DCDC_VoltLvAct(_DCDC_VoltLvAct),DCDC_ModeSt(_DCDC_ModeSt),DCDC_KL30Volt(_DCDC_KL30Volt) {}
	BDCDCDCTri(const BDCDCDCTri &_x){
		DCDC_CurrHvAct = _x.DCDC_CurrHvAct;
		DCDC_CurrLvAct = _x.DCDC_CurrLvAct;
		DCDC_VoltHvAct = _x.DCDC_VoltHvAct;
		DCDC_VoltLvAct = _x.DCDC_VoltLvAct;
		DCDC_ModeSt = _x.DCDC_ModeSt;
		DCDC_KL30Volt = _x.DCDC_KL30Volt;
	}
	BDCDCDCTri(BDCDCDCTri &&_x){
		DCDC_CurrHvAct = std::move(_x.DCDC_CurrHvAct);
		DCDC_CurrLvAct = std::move(_x.DCDC_CurrLvAct);
		DCDC_VoltHvAct = std::move(_x.DCDC_VoltHvAct);
		DCDC_VoltLvAct = std::move(_x.DCDC_VoltLvAct);
		DCDC_ModeSt = std::move(_x.DCDC_ModeSt);
		DCDC_KL30Volt = std::move(_x.DCDC_KL30Volt);
	}
	BDCDCDCTri& operator=(const BDCDCDCTri &_x){
		DCDC_CurrHvAct = _x.DCDC_CurrHvAct;
		DCDC_CurrLvAct = _x.DCDC_CurrLvAct;
		DCDC_VoltHvAct = _x.DCDC_VoltHvAct;
		DCDC_VoltLvAct = _x.DCDC_VoltLvAct;
		DCDC_ModeSt = _x.DCDC_ModeSt;
		DCDC_KL30Volt = _x.DCDC_KL30Volt;
		return *this;
	}
	BDCDCDCTri& operator=(BDCDCDCTri &&_x){
		DCDC_CurrHvAct = std::move(_x.DCDC_CurrHvAct);
		DCDC_CurrLvAct = std::move(_x.DCDC_CurrLvAct);
		DCDC_VoltHvAct = std::move(_x.DCDC_VoltHvAct);
		DCDC_VoltLvAct = std::move(_x.DCDC_VoltLvAct);
		DCDC_ModeSt = std::move(_x.DCDC_ModeSt);
		DCDC_KL30Volt = std::move(_x.DCDC_KL30Volt);
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
		fun(DCDC_KL30Volt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(DCDC_CurrHvAct);
		fun(DCDC_CurrLvAct);
		fun(DCDC_VoltHvAct);
		fun(DCDC_VoltLvAct);
		fun(DCDC_ModeSt);
		fun(DCDC_KL30Volt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (DCDC_CurrHvAct);
		fun << (DCDC_CurrLvAct);
		fun << (DCDC_VoltHvAct);
		fun << (DCDC_VoltLvAct);
		fun << (DCDC_ModeSt);
		fun << (DCDC_KL30Volt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (DCDC_CurrHvAct);
		fun >> (DCDC_CurrLvAct);
		fun >> (DCDC_VoltHvAct);
		fun >> (DCDC_VoltLvAct);
		fun >> (DCDC_ModeSt);
		fun >> (DCDC_KL30Volt);
	}
};

#endif //____BDCDCDCTRI_H__
