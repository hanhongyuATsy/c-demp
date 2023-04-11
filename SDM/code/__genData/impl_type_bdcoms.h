#ifndef ____BDCOMS_H__
#define ____BDCOMS_H__


#include "cstdint"






struct BDCOMS {
public:
	std::uint8_t DriverDistractionSt;
	std::uint8_t L3DriverDistractionSt;
	std::uint8_t DriverFatigueSt;
	std::uint8_t L3DriverFatigueSt;
/*
	BDCOMS() {}
	~BDCOMS() {}
	BDCOMS(const std::uint8_t _DriverDistractionSt,const std::uint8_t _L3DriverDistractionSt,const std::uint8_t _DriverFatigueSt,const std::uint8_t _L3DriverFatigueSt):DriverDistractionSt(_DriverDistractionSt),L3DriverDistractionSt(_L3DriverDistractionSt),DriverFatigueSt(_DriverFatigueSt),L3DriverFatigueSt(_L3DriverFatigueSt) {}
	BDCOMS(const BDCOMS &_x){
		DriverDistractionSt = _x.DriverDistractionSt;
		L3DriverDistractionSt = _x.L3DriverDistractionSt;
		DriverFatigueSt = _x.DriverFatigueSt;
		L3DriverFatigueSt = _x.L3DriverFatigueSt;
	}
	BDCOMS(BDCOMS &&_x){
		DriverDistractionSt = std::move(_x.DriverDistractionSt);
		L3DriverDistractionSt = std::move(_x.L3DriverDistractionSt);
		DriverFatigueSt = std::move(_x.DriverFatigueSt);
		L3DriverFatigueSt = std::move(_x.L3DriverFatigueSt);
	}
	BDCOMS& operator=(const BDCOMS &_x){
		DriverDistractionSt = _x.DriverDistractionSt;
		L3DriverDistractionSt = _x.L3DriverDistractionSt;
		DriverFatigueSt = _x.DriverFatigueSt;
		L3DriverFatigueSt = _x.L3DriverFatigueSt;
		return *this;
	}
	BDCOMS& operator=(BDCOMS &&_x){
		DriverDistractionSt = std::move(_x.DriverDistractionSt);
		L3DriverDistractionSt = std::move(_x.L3DriverDistractionSt);
		DriverFatigueSt = std::move(_x.DriverFatigueSt);
		L3DriverFatigueSt = std::move(_x.L3DriverFatigueSt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(DriverDistractionSt);
		fun(L3DriverDistractionSt);
		fun(DriverFatigueSt);
		fun(L3DriverFatigueSt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(DriverDistractionSt);
		fun(L3DriverDistractionSt);
		fun(DriverFatigueSt);
		fun(L3DriverFatigueSt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (DriverDistractionSt);
		fun << (L3DriverDistractionSt);
		fun << (DriverFatigueSt);
		fun << (L3DriverFatigueSt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (DriverDistractionSt);
		fun >> (L3DriverDistractionSt);
		fun >> (DriverFatigueSt);
		fun >> (L3DriverFatigueSt);
	}
};

#endif //____BDCOMS_H__
