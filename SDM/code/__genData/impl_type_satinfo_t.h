#ifndef ____SATINFO_T_H__
#define ____SATINFO_T_H__


#include "cstdint"






struct SatInfo_t {
public:
	std::uint16_t PRN;
	float Elevation;
	float Azimuth;
	std::uint8_t SNR;
/*
	SatInfo_t() {}
	~SatInfo_t() {}
	SatInfo_t(const std::uint16_t _PRN,const float _Elevation,const float _Azimuth,const std::uint8_t _SNR):PRN(_PRN),Elevation(_Elevation),Azimuth(_Azimuth),SNR(_SNR) {}
	SatInfo_t(const SatInfo_t &_x){
		PRN = _x.PRN;
		Elevation = _x.Elevation;
		Azimuth = _x.Azimuth;
		SNR = _x.SNR;
	}
	SatInfo_t(SatInfo_t &&_x){
		PRN = std::move(_x.PRN);
		Elevation = std::move(_x.Elevation);
		Azimuth = std::move(_x.Azimuth);
		SNR = std::move(_x.SNR);
	}
	SatInfo_t& operator=(const SatInfo_t &_x){
		PRN = _x.PRN;
		Elevation = _x.Elevation;
		Azimuth = _x.Azimuth;
		SNR = _x.SNR;
		return *this;
	}
	SatInfo_t& operator=(SatInfo_t &&_x){
		PRN = std::move(_x.PRN);
		Elevation = std::move(_x.Elevation);
		Azimuth = std::move(_x.Azimuth);
		SNR = std::move(_x.SNR);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(PRN);
		fun(Elevation);
		fun(Azimuth);
		fun(SNR);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(PRN);
		fun(Elevation);
		fun(Azimuth);
		fun(SNR);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (PRN);
		fun << (Elevation);
		fun << (Azimuth);
		fun << (SNR);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (PRN);
		fun >> (Elevation);
		fun >> (Azimuth);
		fun >> (SNR);
	}
};

#endif //____SATINFO_T_H__
