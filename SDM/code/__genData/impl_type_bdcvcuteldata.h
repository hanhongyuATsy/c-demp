#ifndef ____BDCVCUTELDATA_H__
#define ____BDCVCUTELDATA_H__


#include "cstdint"






struct BDCVCUTELDATA {
public:
	std::uint64_t TEL_Longitude;
	std::uint64_t TEL_Latitude;
/*
	BDCVCUTELDATA() {}
	~BDCVCUTELDATA() {}
	BDCVCUTELDATA(const std::uint64_t _TEL_Longitude,const std::uint64_t _TEL_Latitude):TEL_Longitude(_TEL_Longitude),TEL_Latitude(_TEL_Latitude) {}
	BDCVCUTELDATA(const BDCVCUTELDATA &_x){
		TEL_Longitude = _x.TEL_Longitude;
		TEL_Latitude = _x.TEL_Latitude;
	}
	BDCVCUTELDATA(BDCVCUTELDATA &&_x){
		TEL_Longitude = std::move(_x.TEL_Longitude);
		TEL_Latitude = std::move(_x.TEL_Latitude);
	}
	BDCVCUTELDATA& operator=(const BDCVCUTELDATA &_x){
		TEL_Longitude = _x.TEL_Longitude;
		TEL_Latitude = _x.TEL_Latitude;
		return *this;
	}
	BDCVCUTELDATA& operator=(BDCVCUTELDATA &&_x){
		TEL_Longitude = std::move(_x.TEL_Longitude);
		TEL_Latitude = std::move(_x.TEL_Latitude);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(TEL_Longitude);
		fun(TEL_Latitude);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(TEL_Longitude);
		fun(TEL_Latitude);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (TEL_Longitude);
		fun << (TEL_Latitude);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (TEL_Longitude);
		fun >> (TEL_Latitude);
	}
};

#endif //____BDCVCUTELDATA_H__
