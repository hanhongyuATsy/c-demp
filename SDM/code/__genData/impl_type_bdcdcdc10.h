#ifndef ____BDCDCDC10_H__
#define ____BDCDCDC10_H__


#include "cstdint"






struct BDCDCDC10 {
public:
	std::uint8_t DCDC_TempAct;
	std::uint16_t DCDC_SwVersion;
/*
	BDCDCDC10() {}
	~BDCDCDC10() {}
	BDCDCDC10(const std::uint8_t _DCDC_TempAct,const std::uint16_t _DCDC_SwVersion):DCDC_TempAct(_DCDC_TempAct),DCDC_SwVersion(_DCDC_SwVersion) {}
	BDCDCDC10(const BDCDCDC10 &_x){
		DCDC_TempAct = _x.DCDC_TempAct;
		DCDC_SwVersion = _x.DCDC_SwVersion;
	}
	BDCDCDC10(BDCDCDC10 &&_x){
		DCDC_TempAct = std::move(_x.DCDC_TempAct);
		DCDC_SwVersion = std::move(_x.DCDC_SwVersion);
	}
	BDCDCDC10& operator=(const BDCDCDC10 &_x){
		DCDC_TempAct = _x.DCDC_TempAct;
		DCDC_SwVersion = _x.DCDC_SwVersion;
		return *this;
	}
	BDCDCDC10& operator=(BDCDCDC10 &&_x){
		DCDC_TempAct = std::move(_x.DCDC_TempAct);
		DCDC_SwVersion = std::move(_x.DCDC_SwVersion);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(DCDC_TempAct);
		fun(DCDC_SwVersion);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(DCDC_TempAct);
		fun(DCDC_SwVersion);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (DCDC_TempAct);
		fun << (DCDC_SwVersion);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (DCDC_TempAct);
		fun >> (DCDC_SwVersion);
	}
};

#endif //____BDCDCDC10_H__
