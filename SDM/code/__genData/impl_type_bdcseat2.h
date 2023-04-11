#ifndef ____BDCSEAT2_H__
#define ____BDCSEAT2_H__


#include "cstdint"






struct BDCSeat2 {
public:
	std::uint8_t SSW_FLSeatHeatingSt;
	std::uint8_t SSW_FLSeatVentSt;
	std::uint8_t SSW_FRSeatVentSt;
	std::uint8_t SSW_FRSeatHeatingSt;
/*
	BDCSeat2() {}
	~BDCSeat2() {}
	BDCSeat2(const std::uint8_t _SSW_FLSeatHeatingSt,const std::uint8_t _SSW_FLSeatVentSt,const std::uint8_t _SSW_FRSeatVentSt,const std::uint8_t _SSW_FRSeatHeatingSt):SSW_FLSeatHeatingSt(_SSW_FLSeatHeatingSt),SSW_FLSeatVentSt(_SSW_FLSeatVentSt),SSW_FRSeatVentSt(_SSW_FRSeatVentSt),SSW_FRSeatHeatingSt(_SSW_FRSeatHeatingSt) {}
	BDCSeat2(const BDCSeat2 &_x){
		SSW_FLSeatHeatingSt = _x.SSW_FLSeatHeatingSt;
		SSW_FLSeatVentSt = _x.SSW_FLSeatVentSt;
		SSW_FRSeatVentSt = _x.SSW_FRSeatVentSt;
		SSW_FRSeatHeatingSt = _x.SSW_FRSeatHeatingSt;
	}
	BDCSeat2(BDCSeat2 &&_x){
		SSW_FLSeatHeatingSt = std::move(_x.SSW_FLSeatHeatingSt);
		SSW_FLSeatVentSt = std::move(_x.SSW_FLSeatVentSt);
		SSW_FRSeatVentSt = std::move(_x.SSW_FRSeatVentSt);
		SSW_FRSeatHeatingSt = std::move(_x.SSW_FRSeatHeatingSt);
	}
	BDCSeat2& operator=(const BDCSeat2 &_x){
		SSW_FLSeatHeatingSt = _x.SSW_FLSeatHeatingSt;
		SSW_FLSeatVentSt = _x.SSW_FLSeatVentSt;
		SSW_FRSeatVentSt = _x.SSW_FRSeatVentSt;
		SSW_FRSeatHeatingSt = _x.SSW_FRSeatHeatingSt;
		return *this;
	}
	BDCSeat2& operator=(BDCSeat2 &&_x){
		SSW_FLSeatHeatingSt = std::move(_x.SSW_FLSeatHeatingSt);
		SSW_FLSeatVentSt = std::move(_x.SSW_FLSeatVentSt);
		SSW_FRSeatVentSt = std::move(_x.SSW_FRSeatVentSt);
		SSW_FRSeatHeatingSt = std::move(_x.SSW_FRSeatHeatingSt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(SSW_FLSeatHeatingSt);
		fun(SSW_FLSeatVentSt);
		fun(SSW_FRSeatVentSt);
		fun(SSW_FRSeatHeatingSt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(SSW_FLSeatHeatingSt);
		fun(SSW_FLSeatVentSt);
		fun(SSW_FRSeatVentSt);
		fun(SSW_FRSeatHeatingSt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (SSW_FLSeatHeatingSt);
		fun << (SSW_FLSeatVentSt);
		fun << (SSW_FRSeatVentSt);
		fun << (SSW_FRSeatHeatingSt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (SSW_FLSeatHeatingSt);
		fun >> (SSW_FLSeatVentSt);
		fun >> (SSW_FRSeatVentSt);
		fun >> (SSW_FRSeatHeatingSt);
	}
};

#endif //____BDCSEAT2_H__
