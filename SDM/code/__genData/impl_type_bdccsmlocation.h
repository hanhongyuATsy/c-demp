#ifndef ____BDCCSMLOCATION_H__
#define ____BDCCSMLOCATION_H__


#include "cstdint"






struct BDCCSMLOCATION {
public:
	std::uint8_t State;
	std::uint8_t GNSSValidFlag;
	double Longitude;
	double Latitude;
/*
	BDCCSMLOCATION() {}
	~BDCCSMLOCATION() {}
	BDCCSMLOCATION(const std::uint8_t _State,const std::uint8_t _GNSSValidFlag,const double _Longitude,const double _Latitude):State(_State),GNSSValidFlag(_GNSSValidFlag),Longitude(_Longitude),Latitude(_Latitude) {}
	BDCCSMLOCATION(const BDCCSMLOCATION &_x){
		State = _x.State;
		GNSSValidFlag = _x.GNSSValidFlag;
		Longitude = _x.Longitude;
		Latitude = _x.Latitude;
	}
	BDCCSMLOCATION(BDCCSMLOCATION &&_x){
		State = std::move(_x.State);
		GNSSValidFlag = std::move(_x.GNSSValidFlag);
		Longitude = std::move(_x.Longitude);
		Latitude = std::move(_x.Latitude);
	}
	BDCCSMLOCATION& operator=(const BDCCSMLOCATION &_x){
		State = _x.State;
		GNSSValidFlag = _x.GNSSValidFlag;
		Longitude = _x.Longitude;
		Latitude = _x.Latitude;
		return *this;
	}
	BDCCSMLOCATION& operator=(BDCCSMLOCATION &&_x){
		State = std::move(_x.State);
		GNSSValidFlag = std::move(_x.GNSSValidFlag);
		Longitude = std::move(_x.Longitude);
		Latitude = std::move(_x.Latitude);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(State);
		fun(GNSSValidFlag);
		fun(Longitude);
		fun(Latitude);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(State);
		fun(GNSSValidFlag);
		fun(Longitude);
		fun(Latitude);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (State);
		fun << (GNSSValidFlag);
		fun << (Longitude);
		fun << (Latitude);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (State);
		fun >> (GNSSValidFlag);
		fun >> (Longitude);
		fun >> (Latitude);
	}
};

#endif //____BDCCSMLOCATION_H__
