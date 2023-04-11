#ifndef ____BDCEBSTSOC_H__
#define ____BDCEBSTSOC_H__


#include "cstdint"






struct BDCEBSTSOC {
public:
	std::uint8_t EBST_SOC;
	std::uint8_t EBST_SOC_STATE;
/*
	BDCEBSTSOC() {}
	~BDCEBSTSOC() {}
	BDCEBSTSOC(const std::uint8_t _EBST_SOC,const std::uint8_t _EBST_SOC_STATE):EBST_SOC(_EBST_SOC),EBST_SOC_STATE(_EBST_SOC_STATE) {}
	BDCEBSTSOC(const BDCEBSTSOC &_x){
		EBST_SOC = _x.EBST_SOC;
		EBST_SOC_STATE = _x.EBST_SOC_STATE;
	}
	BDCEBSTSOC(BDCEBSTSOC &&_x){
		EBST_SOC = std::move(_x.EBST_SOC);
		EBST_SOC_STATE = std::move(_x.EBST_SOC_STATE);
	}
	BDCEBSTSOC& operator=(const BDCEBSTSOC &_x){
		EBST_SOC = _x.EBST_SOC;
		EBST_SOC_STATE = _x.EBST_SOC_STATE;
		return *this;
	}
	BDCEBSTSOC& operator=(BDCEBSTSOC &&_x){
		EBST_SOC = std::move(_x.EBST_SOC);
		EBST_SOC_STATE = std::move(_x.EBST_SOC_STATE);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(EBST_SOC);
		fun(EBST_SOC_STATE);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(EBST_SOC);
		fun(EBST_SOC_STATE);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (EBST_SOC);
		fun << (EBST_SOC_STATE);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (EBST_SOC);
		fun >> (EBST_SOC_STATE);
	}
};

#endif //____BDCEBSTSOC_H__
