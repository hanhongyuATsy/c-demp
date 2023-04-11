#ifndef ____BDCBMSSV_H__
#define ____BDCBMSSV_H__


#include "cstdint"






struct BDCBMSSV {
public:
	std::uint32_t BMS_SV;
/*
	BDCBMSSV() {}
	~BDCBMSSV() {}
	BDCBMSSV(const std::uint32_t _BMS_SV):BMS_SV(_BMS_SV) {}
	BDCBMSSV(const BDCBMSSV &_x){
		BMS_SV = _x.BMS_SV;
	}
	BDCBMSSV(BDCBMSSV &&_x){
		BMS_SV = std::move(_x.BMS_SV);
	}
	BDCBMSSV& operator=(const BDCBMSSV &_x){
		BMS_SV = _x.BMS_SV;
		return *this;
	}
	BDCBMSSV& operator=(BDCBMSSV &&_x){
		BMS_SV = std::move(_x.BMS_SV);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(BMS_SV);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(BMS_SV);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (BMS_SV);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (BMS_SV);
	}
};

#endif //____BDCBMSSV_H__
