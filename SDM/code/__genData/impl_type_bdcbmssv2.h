#ifndef ____BDCBMSSV2_H__
#define ____BDCBMSSV2_H__


#include "cstdint"






struct BDCBMSSV2 {
public:
	std::uint32_t BMS_SV;
/*
	BDCBMSSV2() {}
	~BDCBMSSV2() {}
	BDCBMSSV2(const std::uint32_t _BMS_SV):BMS_SV(_BMS_SV) {}
	BDCBMSSV2(const BDCBMSSV2 &_x){
		BMS_SV = _x.BMS_SV;
	}
	BDCBMSSV2(BDCBMSSV2 &&_x){
		BMS_SV = std::move(_x.BMS_SV);
	}
	BDCBMSSV2& operator=(const BDCBMSSV2 &_x){
		BMS_SV = _x.BMS_SV;
		return *this;
	}
	BDCBMSSV2& operator=(BDCBMSSV2 &&_x){
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

#endif //____BDCBMSSV2_H__
