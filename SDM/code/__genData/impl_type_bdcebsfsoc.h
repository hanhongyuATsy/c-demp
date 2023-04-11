#ifndef ____BDCEBSFSOC_H__
#define ____BDCEBSFSOC_H__


#include "cstdint"






struct BDCEBSFSOC {
public:
	std::uint8_t EBSF_SOC;
	std::uint8_t EBSF_SOC_STATE;
/*
	BDCEBSFSOC() {}
	~BDCEBSFSOC() {}
	BDCEBSFSOC(const std::uint8_t _EBSF_SOC,const std::uint8_t _EBSF_SOC_STATE):EBSF_SOC(_EBSF_SOC),EBSF_SOC_STATE(_EBSF_SOC_STATE) {}
	BDCEBSFSOC(const BDCEBSFSOC &_x){
		EBSF_SOC = _x.EBSF_SOC;
		EBSF_SOC_STATE = _x.EBSF_SOC_STATE;
	}
	BDCEBSFSOC(BDCEBSFSOC &&_x){
		EBSF_SOC = std::move(_x.EBSF_SOC);
		EBSF_SOC_STATE = std::move(_x.EBSF_SOC_STATE);
	}
	BDCEBSFSOC& operator=(const BDCEBSFSOC &_x){
		EBSF_SOC = _x.EBSF_SOC;
		EBSF_SOC_STATE = _x.EBSF_SOC_STATE;
		return *this;
	}
	BDCEBSFSOC& operator=(BDCEBSFSOC &&_x){
		EBSF_SOC = std::move(_x.EBSF_SOC);
		EBSF_SOC_STATE = std::move(_x.EBSF_SOC_STATE);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(EBSF_SOC);
		fun(EBSF_SOC_STATE);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(EBSF_SOC);
		fun(EBSF_SOC_STATE);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (EBSF_SOC);
		fun << (EBSF_SOC_STATE);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (EBSF_SOC);
		fun >> (EBSF_SOC_STATE);
	}
};

#endif //____BDCEBSFSOC_H__
