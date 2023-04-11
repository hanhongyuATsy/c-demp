#ifndef ____BDCHVACBAT_H__
#define ____BDCHVACBAT_H__


#include "cstdint"






struct BDCHVACBAT {
public:
	std::uint8_t HVAC_BatEVATsh;
/*
	BDCHVACBAT() {}
	~BDCHVACBAT() {}
	BDCHVACBAT(const std::uint8_t _HVAC_BatEVATsh):HVAC_BatEVATsh(_HVAC_BatEVATsh) {}
	BDCHVACBAT(const BDCHVACBAT &_x){
		HVAC_BatEVATsh = _x.HVAC_BatEVATsh;
	}
	BDCHVACBAT(BDCHVACBAT &&_x){
		HVAC_BatEVATsh = std::move(_x.HVAC_BatEVATsh);
	}
	BDCHVACBAT& operator=(const BDCHVACBAT &_x){
		HVAC_BatEVATsh = _x.HVAC_BatEVATsh;
		return *this;
	}
	BDCHVACBAT& operator=(BDCHVACBAT &&_x){
		HVAC_BatEVATsh = std::move(_x.HVAC_BatEVATsh);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(HVAC_BatEVATsh);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(HVAC_BatEVATsh);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (HVAC_BatEVATsh);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (HVAC_BatEVATsh);
	}
};

#endif //____BDCHVACBAT_H__
