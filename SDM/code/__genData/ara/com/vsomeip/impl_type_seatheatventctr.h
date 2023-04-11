#ifndef __ARA_COM_VSOMEIP__SEATHEATVENTCTR_H__
#define __ARA_COM_VSOMEIP__SEATHEATVENTCTR_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct SeatHeatVentCtr {
public:
	std::uint8_t FLSeatHeatVent;
	std::uint8_t FRSeatHeatVent;
	std::uint8_t RLSeatHeatVent;
	std::uint8_t RRSeatHeatVent;
/*
	SeatHeatVentCtr() {}
	~SeatHeatVentCtr() {}
	SeatHeatVentCtr(const std::uint8_t _FLSeatHeatVent,const std::uint8_t _FRSeatHeatVent,const std::uint8_t _RLSeatHeatVent,const std::uint8_t _RRSeatHeatVent):FLSeatHeatVent(_FLSeatHeatVent),FRSeatHeatVent(_FRSeatHeatVent),RLSeatHeatVent(_RLSeatHeatVent),RRSeatHeatVent(_RRSeatHeatVent) {}
	SeatHeatVentCtr(const SeatHeatVentCtr &_x){
		FLSeatHeatVent = _x.FLSeatHeatVent;
		FRSeatHeatVent = _x.FRSeatHeatVent;
		RLSeatHeatVent = _x.RLSeatHeatVent;
		RRSeatHeatVent = _x.RRSeatHeatVent;
	}
	SeatHeatVentCtr(SeatHeatVentCtr &&_x){
		FLSeatHeatVent = std::move(_x.FLSeatHeatVent);
		FRSeatHeatVent = std::move(_x.FRSeatHeatVent);
		RLSeatHeatVent = std::move(_x.RLSeatHeatVent);
		RRSeatHeatVent = std::move(_x.RRSeatHeatVent);
	}
	SeatHeatVentCtr& operator=(const SeatHeatVentCtr &_x){
		FLSeatHeatVent = _x.FLSeatHeatVent;
		FRSeatHeatVent = _x.FRSeatHeatVent;
		RLSeatHeatVent = _x.RLSeatHeatVent;
		RRSeatHeatVent = _x.RRSeatHeatVent;
		return *this;
	}
	SeatHeatVentCtr& operator=(SeatHeatVentCtr &&_x){
		FLSeatHeatVent = std::move(_x.FLSeatHeatVent);
		FRSeatHeatVent = std::move(_x.FRSeatHeatVent);
		RLSeatHeatVent = std::move(_x.RLSeatHeatVent);
		RRSeatHeatVent = std::move(_x.RRSeatHeatVent);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(FLSeatHeatVent);
		fun(FRSeatHeatVent);
		fun(RLSeatHeatVent);
		fun(RRSeatHeatVent);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(FLSeatHeatVent);
		fun(FRSeatHeatVent);
		fun(RLSeatHeatVent);
		fun(RRSeatHeatVent);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (FLSeatHeatVent);
		fun << (FRSeatHeatVent);
		fun << (RLSeatHeatVent);
		fun << (RRSeatHeatVent);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (FLSeatHeatVent);
		fun >> (FRSeatHeatVent);
		fun >> (RLSeatHeatVent);
		fun >> (RRSeatHeatVent);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__SEATHEATVENTCTR_H__
