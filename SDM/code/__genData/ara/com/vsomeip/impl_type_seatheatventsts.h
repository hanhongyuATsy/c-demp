#ifndef __ARA_COM_VSOMEIP__SEATHEATVENTSTS_H__
#define __ARA_COM_VSOMEIP__SEATHEATVENTSTS_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct SeatHeatVentSts {
public:
	std::uint8_t FLSeatHeat;
	std::uint8_t FLSeatVent;
	std::uint8_t FRSeatHeat;
	std::uint8_t FRSeatVent;
	std::uint8_t RLSeatHeat;
	std::uint8_t RLSeatVent;
	std::uint8_t RRSeatHeat;
	std::uint8_t RRSeatVent;
/*
	SeatHeatVentSts() {}
	~SeatHeatVentSts() {}
	SeatHeatVentSts(const std::uint8_t _FLSeatHeat,const std::uint8_t _FLSeatVent,const std::uint8_t _FRSeatHeat,const std::uint8_t _FRSeatVent,const std::uint8_t _RLSeatHeat,const std::uint8_t _RLSeatVent,const std::uint8_t _RRSeatHeat,const std::uint8_t _RRSeatVent):FLSeatHeat(_FLSeatHeat),FLSeatVent(_FLSeatVent),FRSeatHeat(_FRSeatHeat),FRSeatVent(_FRSeatVent),RLSeatHeat(_RLSeatHeat),RLSeatVent(_RLSeatVent),RRSeatHeat(_RRSeatHeat),RRSeatVent(_RRSeatVent) {}
	SeatHeatVentSts(const SeatHeatVentSts &_x){
		FLSeatHeat = _x.FLSeatHeat;
		FLSeatVent = _x.FLSeatVent;
		FRSeatHeat = _x.FRSeatHeat;
		FRSeatVent = _x.FRSeatVent;
		RLSeatHeat = _x.RLSeatHeat;
		RLSeatVent = _x.RLSeatVent;
		RRSeatHeat = _x.RRSeatHeat;
		RRSeatVent = _x.RRSeatVent;
	}
	SeatHeatVentSts(SeatHeatVentSts &&_x){
		FLSeatHeat = std::move(_x.FLSeatHeat);
		FLSeatVent = std::move(_x.FLSeatVent);
		FRSeatHeat = std::move(_x.FRSeatHeat);
		FRSeatVent = std::move(_x.FRSeatVent);
		RLSeatHeat = std::move(_x.RLSeatHeat);
		RLSeatVent = std::move(_x.RLSeatVent);
		RRSeatHeat = std::move(_x.RRSeatHeat);
		RRSeatVent = std::move(_x.RRSeatVent);
	}
	SeatHeatVentSts& operator=(const SeatHeatVentSts &_x){
		FLSeatHeat = _x.FLSeatHeat;
		FLSeatVent = _x.FLSeatVent;
		FRSeatHeat = _x.FRSeatHeat;
		FRSeatVent = _x.FRSeatVent;
		RLSeatHeat = _x.RLSeatHeat;
		RLSeatVent = _x.RLSeatVent;
		RRSeatHeat = _x.RRSeatHeat;
		RRSeatVent = _x.RRSeatVent;
		return *this;
	}
	SeatHeatVentSts& operator=(SeatHeatVentSts &&_x){
		FLSeatHeat = std::move(_x.FLSeatHeat);
		FLSeatVent = std::move(_x.FLSeatVent);
		FRSeatHeat = std::move(_x.FRSeatHeat);
		FRSeatVent = std::move(_x.FRSeatVent);
		RLSeatHeat = std::move(_x.RLSeatHeat);
		RLSeatVent = std::move(_x.RLSeatVent);
		RRSeatHeat = std::move(_x.RRSeatHeat);
		RRSeatVent = std::move(_x.RRSeatVent);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(FLSeatHeat);
		fun(FLSeatVent);
		fun(FRSeatHeat);
		fun(FRSeatVent);
		fun(RLSeatHeat);
		fun(RLSeatVent);
		fun(RRSeatHeat);
		fun(RRSeatVent);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(FLSeatHeat);
		fun(FLSeatVent);
		fun(FRSeatHeat);
		fun(FRSeatVent);
		fun(RLSeatHeat);
		fun(RLSeatVent);
		fun(RRSeatHeat);
		fun(RRSeatVent);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (FLSeatHeat);
		fun << (FLSeatVent);
		fun << (FRSeatHeat);
		fun << (FRSeatVent);
		fun << (RLSeatHeat);
		fun << (RLSeatVent);
		fun << (RRSeatHeat);
		fun << (RRSeatVent);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (FLSeatHeat);
		fun >> (FLSeatVent);
		fun >> (FRSeatHeat);
		fun >> (FRSeatVent);
		fun >> (RLSeatHeat);
		fun >> (RLSeatVent);
		fun >> (RRSeatHeat);
		fun >> (RRSeatVent);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__SEATHEATVENTSTS_H__
