#ifndef __ARA_COM_VSOMEIP__SEATPOSSTS_H__
#define __ARA_COM_VSOMEIP__SEATPOSSTS_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct SeatPosSts {
public:
	std::uint8_t FLSeatSlide;
	std::uint8_t FLSeatHeight;
	std::uint8_t FLSeatBackrest;
	std::uint8_t FLSeatTilt;
	std::uint8_t FLSeatCushion;
	std::uint8_t FLSeatOttoman;
	std::uint8_t FLSeatOttomanAngle;
	std::uint8_t FLSeatOttomanExtent;
	std::uint8_t FRSeatSlide;
	std::uint8_t FRSeatHeight;
	std::uint8_t FRSeatBackrest;
	std::uint8_t FRSeatTilt;
	std::uint8_t FRSeatCushion;
	std::uint8_t FRSeatOttoman;
	std::uint8_t FRSeatOttomanAngle;
	std::uint8_t FRSeatOttomanExtent;
	std::uint8_t RLSeatXSlide;
	std::uint8_t RLSeatYSlide;
	std::uint8_t RLSeatHeight;
	std::uint8_t RLSeatBackrest;
	std::uint8_t RLSeatTilt;
	std::uint8_t RLSeatCushion;
	std::uint8_t RLSeatOttoman;
	std::uint8_t RLSeatOttomanAngle;
	std::uint8_t RLSeatOttomanExtent;
	std::uint8_t RRSeatXSlide;
	std::uint8_t RRSeatYSlide;
	std::uint8_t RRSeatHeight;
	std::uint8_t RRSeatBackrest;
	std::uint8_t RRSeatTilt;
	std::uint8_t RRSeatCushion;
	std::uint8_t RRSeatOttoman;
	std::uint8_t RRSeatOttomanAngle;
	std::uint8_t RRSeatOttomanExtent;
	std::uint8_t ThirdLeftBackrest;
	std::uint8_t ThirdRightBackrest;
/*
	SeatPosSts() {}
	~SeatPosSts() {}
	SeatPosSts(const std::uint8_t _FLSeatSlide,const std::uint8_t _FLSeatHeight,const std::uint8_t _FLSeatBackrest,const std::uint8_t _FLSeatTilt,const std::uint8_t _FLSeatCushion,const std::uint8_t _FLSeatOttoman,const std::uint8_t _FLSeatOttomanAngle,const std::uint8_t _FLSeatOttomanExtent,const std::uint8_t _FRSeatSlide,const std::uint8_t _FRSeatHeight,const std::uint8_t _FRSeatBackrest,const std::uint8_t _FRSeatTilt,const std::uint8_t _FRSeatCushion,const std::uint8_t _FRSeatOttoman,const std::uint8_t _FRSeatOttomanAngle,const std::uint8_t _FRSeatOttomanExtent,const std::uint8_t _RLSeatXSlide,const std::uint8_t _RLSeatYSlide,const std::uint8_t _RLSeatHeight,const std::uint8_t _RLSeatBackrest,const std::uint8_t _RLSeatTilt,const std::uint8_t _RLSeatCushion,const std::uint8_t _RLSeatOttoman,const std::uint8_t _RLSeatOttomanAngle,const std::uint8_t _RLSeatOttomanExtent,const std::uint8_t _RRSeatXSlide,const std::uint8_t _RRSeatYSlide,const std::uint8_t _RRSeatHeight,const std::uint8_t _RRSeatBackrest,const std::uint8_t _RRSeatTilt,const std::uint8_t _RRSeatCushion,const std::uint8_t _RRSeatOttoman,const std::uint8_t _RRSeatOttomanAngle,const std::uint8_t _RRSeatOttomanExtent,const std::uint8_t _ThirdLeftBackrest,const std::uint8_t _ThirdRightBackrest):FLSeatSlide(_FLSeatSlide),FLSeatHeight(_FLSeatHeight),FLSeatBackrest(_FLSeatBackrest),FLSeatTilt(_FLSeatTilt),FLSeatCushion(_FLSeatCushion),FLSeatOttoman(_FLSeatOttoman),FLSeatOttomanAngle(_FLSeatOttomanAngle),FLSeatOttomanExtent(_FLSeatOttomanExtent),FRSeatSlide(_FRSeatSlide),FRSeatHeight(_FRSeatHeight),FRSeatBackrest(_FRSeatBackrest),FRSeatTilt(_FRSeatTilt),FRSeatCushion(_FRSeatCushion),FRSeatOttoman(_FRSeatOttoman),FRSeatOttomanAngle(_FRSeatOttomanAngle),FRSeatOttomanExtent(_FRSeatOttomanExtent),RLSeatXSlide(_RLSeatXSlide),RLSeatYSlide(_RLSeatYSlide),RLSeatHeight(_RLSeatHeight),RLSeatBackrest(_RLSeatBackrest),RLSeatTilt(_RLSeatTilt),RLSeatCushion(_RLSeatCushion),RLSeatOttoman(_RLSeatOttoman),RLSeatOttomanAngle(_RLSeatOttomanAngle),RLSeatOttomanExtent(_RLSeatOttomanExtent),RRSeatXSlide(_RRSeatXSlide),RRSeatYSlide(_RRSeatYSlide),RRSeatHeight(_RRSeatHeight),RRSeatBackrest(_RRSeatBackrest),RRSeatTilt(_RRSeatTilt),RRSeatCushion(_RRSeatCushion),RRSeatOttoman(_RRSeatOttoman),RRSeatOttomanAngle(_RRSeatOttomanAngle),RRSeatOttomanExtent(_RRSeatOttomanExtent),ThirdLeftBackrest(_ThirdLeftBackrest),ThirdRightBackrest(_ThirdRightBackrest) {}
	SeatPosSts(const SeatPosSts &_x){
		FLSeatSlide = _x.FLSeatSlide;
		FLSeatHeight = _x.FLSeatHeight;
		FLSeatBackrest = _x.FLSeatBackrest;
		FLSeatTilt = _x.FLSeatTilt;
		FLSeatCushion = _x.FLSeatCushion;
		FLSeatOttoman = _x.FLSeatOttoman;
		FLSeatOttomanAngle = _x.FLSeatOttomanAngle;
		FLSeatOttomanExtent = _x.FLSeatOttomanExtent;
		FRSeatSlide = _x.FRSeatSlide;
		FRSeatHeight = _x.FRSeatHeight;
		FRSeatBackrest = _x.FRSeatBackrest;
		FRSeatTilt = _x.FRSeatTilt;
		FRSeatCushion = _x.FRSeatCushion;
		FRSeatOttoman = _x.FRSeatOttoman;
		FRSeatOttomanAngle = _x.FRSeatOttomanAngle;
		FRSeatOttomanExtent = _x.FRSeatOttomanExtent;
		RLSeatXSlide = _x.RLSeatXSlide;
		RLSeatYSlide = _x.RLSeatYSlide;
		RLSeatHeight = _x.RLSeatHeight;
		RLSeatBackrest = _x.RLSeatBackrest;
		RLSeatTilt = _x.RLSeatTilt;
		RLSeatCushion = _x.RLSeatCushion;
		RLSeatOttoman = _x.RLSeatOttoman;
		RLSeatOttomanAngle = _x.RLSeatOttomanAngle;
		RLSeatOttomanExtent = _x.RLSeatOttomanExtent;
		RRSeatXSlide = _x.RRSeatXSlide;
		RRSeatYSlide = _x.RRSeatYSlide;
		RRSeatHeight = _x.RRSeatHeight;
		RRSeatBackrest = _x.RRSeatBackrest;
		RRSeatTilt = _x.RRSeatTilt;
		RRSeatCushion = _x.RRSeatCushion;
		RRSeatOttoman = _x.RRSeatOttoman;
		RRSeatOttomanAngle = _x.RRSeatOttomanAngle;
		RRSeatOttomanExtent = _x.RRSeatOttomanExtent;
		ThirdLeftBackrest = _x.ThirdLeftBackrest;
		ThirdRightBackrest = _x.ThirdRightBackrest;
	}
	SeatPosSts(SeatPosSts &&_x){
		FLSeatSlide = std::move(_x.FLSeatSlide);
		FLSeatHeight = std::move(_x.FLSeatHeight);
		FLSeatBackrest = std::move(_x.FLSeatBackrest);
		FLSeatTilt = std::move(_x.FLSeatTilt);
		FLSeatCushion = std::move(_x.FLSeatCushion);
		FLSeatOttoman = std::move(_x.FLSeatOttoman);
		FLSeatOttomanAngle = std::move(_x.FLSeatOttomanAngle);
		FLSeatOttomanExtent = std::move(_x.FLSeatOttomanExtent);
		FRSeatSlide = std::move(_x.FRSeatSlide);
		FRSeatHeight = std::move(_x.FRSeatHeight);
		FRSeatBackrest = std::move(_x.FRSeatBackrest);
		FRSeatTilt = std::move(_x.FRSeatTilt);
		FRSeatCushion = std::move(_x.FRSeatCushion);
		FRSeatOttoman = std::move(_x.FRSeatOttoman);
		FRSeatOttomanAngle = std::move(_x.FRSeatOttomanAngle);
		FRSeatOttomanExtent = std::move(_x.FRSeatOttomanExtent);
		RLSeatXSlide = std::move(_x.RLSeatXSlide);
		RLSeatYSlide = std::move(_x.RLSeatYSlide);
		RLSeatHeight = std::move(_x.RLSeatHeight);
		RLSeatBackrest = std::move(_x.RLSeatBackrest);
		RLSeatTilt = std::move(_x.RLSeatTilt);
		RLSeatCushion = std::move(_x.RLSeatCushion);
		RLSeatOttoman = std::move(_x.RLSeatOttoman);
		RLSeatOttomanAngle = std::move(_x.RLSeatOttomanAngle);
		RLSeatOttomanExtent = std::move(_x.RLSeatOttomanExtent);
		RRSeatXSlide = std::move(_x.RRSeatXSlide);
		RRSeatYSlide = std::move(_x.RRSeatYSlide);
		RRSeatHeight = std::move(_x.RRSeatHeight);
		RRSeatBackrest = std::move(_x.RRSeatBackrest);
		RRSeatTilt = std::move(_x.RRSeatTilt);
		RRSeatCushion = std::move(_x.RRSeatCushion);
		RRSeatOttoman = std::move(_x.RRSeatOttoman);
		RRSeatOttomanAngle = std::move(_x.RRSeatOttomanAngle);
		RRSeatOttomanExtent = std::move(_x.RRSeatOttomanExtent);
		ThirdLeftBackrest = std::move(_x.ThirdLeftBackrest);
		ThirdRightBackrest = std::move(_x.ThirdRightBackrest);
	}
	SeatPosSts& operator=(const SeatPosSts &_x){
		FLSeatSlide = _x.FLSeatSlide;
		FLSeatHeight = _x.FLSeatHeight;
		FLSeatBackrest = _x.FLSeatBackrest;
		FLSeatTilt = _x.FLSeatTilt;
		FLSeatCushion = _x.FLSeatCushion;
		FLSeatOttoman = _x.FLSeatOttoman;
		FLSeatOttomanAngle = _x.FLSeatOttomanAngle;
		FLSeatOttomanExtent = _x.FLSeatOttomanExtent;
		FRSeatSlide = _x.FRSeatSlide;
		FRSeatHeight = _x.FRSeatHeight;
		FRSeatBackrest = _x.FRSeatBackrest;
		FRSeatTilt = _x.FRSeatTilt;
		FRSeatCushion = _x.FRSeatCushion;
		FRSeatOttoman = _x.FRSeatOttoman;
		FRSeatOttomanAngle = _x.FRSeatOttomanAngle;
		FRSeatOttomanExtent = _x.FRSeatOttomanExtent;
		RLSeatXSlide = _x.RLSeatXSlide;
		RLSeatYSlide = _x.RLSeatYSlide;
		RLSeatHeight = _x.RLSeatHeight;
		RLSeatBackrest = _x.RLSeatBackrest;
		RLSeatTilt = _x.RLSeatTilt;
		RLSeatCushion = _x.RLSeatCushion;
		RLSeatOttoman = _x.RLSeatOttoman;
		RLSeatOttomanAngle = _x.RLSeatOttomanAngle;
		RLSeatOttomanExtent = _x.RLSeatOttomanExtent;
		RRSeatXSlide = _x.RRSeatXSlide;
		RRSeatYSlide = _x.RRSeatYSlide;
		RRSeatHeight = _x.RRSeatHeight;
		RRSeatBackrest = _x.RRSeatBackrest;
		RRSeatTilt = _x.RRSeatTilt;
		RRSeatCushion = _x.RRSeatCushion;
		RRSeatOttoman = _x.RRSeatOttoman;
		RRSeatOttomanAngle = _x.RRSeatOttomanAngle;
		RRSeatOttomanExtent = _x.RRSeatOttomanExtent;
		ThirdLeftBackrest = _x.ThirdLeftBackrest;
		ThirdRightBackrest = _x.ThirdRightBackrest;
		return *this;
	}
	SeatPosSts& operator=(SeatPosSts &&_x){
		FLSeatSlide = std::move(_x.FLSeatSlide);
		FLSeatHeight = std::move(_x.FLSeatHeight);
		FLSeatBackrest = std::move(_x.FLSeatBackrest);
		FLSeatTilt = std::move(_x.FLSeatTilt);
		FLSeatCushion = std::move(_x.FLSeatCushion);
		FLSeatOttoman = std::move(_x.FLSeatOttoman);
		FLSeatOttomanAngle = std::move(_x.FLSeatOttomanAngle);
		FLSeatOttomanExtent = std::move(_x.FLSeatOttomanExtent);
		FRSeatSlide = std::move(_x.FRSeatSlide);
		FRSeatHeight = std::move(_x.FRSeatHeight);
		FRSeatBackrest = std::move(_x.FRSeatBackrest);
		FRSeatTilt = std::move(_x.FRSeatTilt);
		FRSeatCushion = std::move(_x.FRSeatCushion);
		FRSeatOttoman = std::move(_x.FRSeatOttoman);
		FRSeatOttomanAngle = std::move(_x.FRSeatOttomanAngle);
		FRSeatOttomanExtent = std::move(_x.FRSeatOttomanExtent);
		RLSeatXSlide = std::move(_x.RLSeatXSlide);
		RLSeatYSlide = std::move(_x.RLSeatYSlide);
		RLSeatHeight = std::move(_x.RLSeatHeight);
		RLSeatBackrest = std::move(_x.RLSeatBackrest);
		RLSeatTilt = std::move(_x.RLSeatTilt);
		RLSeatCushion = std::move(_x.RLSeatCushion);
		RLSeatOttoman = std::move(_x.RLSeatOttoman);
		RLSeatOttomanAngle = std::move(_x.RLSeatOttomanAngle);
		RLSeatOttomanExtent = std::move(_x.RLSeatOttomanExtent);
		RRSeatXSlide = std::move(_x.RRSeatXSlide);
		RRSeatYSlide = std::move(_x.RRSeatYSlide);
		RRSeatHeight = std::move(_x.RRSeatHeight);
		RRSeatBackrest = std::move(_x.RRSeatBackrest);
		RRSeatTilt = std::move(_x.RRSeatTilt);
		RRSeatCushion = std::move(_x.RRSeatCushion);
		RRSeatOttoman = std::move(_x.RRSeatOttoman);
		RRSeatOttomanAngle = std::move(_x.RRSeatOttomanAngle);
		RRSeatOttomanExtent = std::move(_x.RRSeatOttomanExtent);
		ThirdLeftBackrest = std::move(_x.ThirdLeftBackrest);
		ThirdRightBackrest = std::move(_x.ThirdRightBackrest);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(FLSeatSlide);
		fun(FLSeatHeight);
		fun(FLSeatBackrest);
		fun(FLSeatTilt);
		fun(FLSeatCushion);
		fun(FLSeatOttoman);
		fun(FLSeatOttomanAngle);
		fun(FLSeatOttomanExtent);
		fun(FRSeatSlide);
		fun(FRSeatHeight);
		fun(FRSeatBackrest);
		fun(FRSeatTilt);
		fun(FRSeatCushion);
		fun(FRSeatOttoman);
		fun(FRSeatOttomanAngle);
		fun(FRSeatOttomanExtent);
		fun(RLSeatXSlide);
		fun(RLSeatYSlide);
		fun(RLSeatHeight);
		fun(RLSeatBackrest);
		fun(RLSeatTilt);
		fun(RLSeatCushion);
		fun(RLSeatOttoman);
		fun(RLSeatOttomanAngle);
		fun(RLSeatOttomanExtent);
		fun(RRSeatXSlide);
		fun(RRSeatYSlide);
		fun(RRSeatHeight);
		fun(RRSeatBackrest);
		fun(RRSeatTilt);
		fun(RRSeatCushion);
		fun(RRSeatOttoman);
		fun(RRSeatOttomanAngle);
		fun(RRSeatOttomanExtent);
		fun(ThirdLeftBackrest);
		fun(ThirdRightBackrest);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(FLSeatSlide);
		fun(FLSeatHeight);
		fun(FLSeatBackrest);
		fun(FLSeatTilt);
		fun(FLSeatCushion);
		fun(FLSeatOttoman);
		fun(FLSeatOttomanAngle);
		fun(FLSeatOttomanExtent);
		fun(FRSeatSlide);
		fun(FRSeatHeight);
		fun(FRSeatBackrest);
		fun(FRSeatTilt);
		fun(FRSeatCushion);
		fun(FRSeatOttoman);
		fun(FRSeatOttomanAngle);
		fun(FRSeatOttomanExtent);
		fun(RLSeatXSlide);
		fun(RLSeatYSlide);
		fun(RLSeatHeight);
		fun(RLSeatBackrest);
		fun(RLSeatTilt);
		fun(RLSeatCushion);
		fun(RLSeatOttoman);
		fun(RLSeatOttomanAngle);
		fun(RLSeatOttomanExtent);
		fun(RRSeatXSlide);
		fun(RRSeatYSlide);
		fun(RRSeatHeight);
		fun(RRSeatBackrest);
		fun(RRSeatTilt);
		fun(RRSeatCushion);
		fun(RRSeatOttoman);
		fun(RRSeatOttomanAngle);
		fun(RRSeatOttomanExtent);
		fun(ThirdLeftBackrest);
		fun(ThirdRightBackrest);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (FLSeatSlide);
		fun << (FLSeatHeight);
		fun << (FLSeatBackrest);
		fun << (FLSeatTilt);
		fun << (FLSeatCushion);
		fun << (FLSeatOttoman);
		fun << (FLSeatOttomanAngle);
		fun << (FLSeatOttomanExtent);
		fun << (FRSeatSlide);
		fun << (FRSeatHeight);
		fun << (FRSeatBackrest);
		fun << (FRSeatTilt);
		fun << (FRSeatCushion);
		fun << (FRSeatOttoman);
		fun << (FRSeatOttomanAngle);
		fun << (FRSeatOttomanExtent);
		fun << (RLSeatXSlide);
		fun << (RLSeatYSlide);
		fun << (RLSeatHeight);
		fun << (RLSeatBackrest);
		fun << (RLSeatTilt);
		fun << (RLSeatCushion);
		fun << (RLSeatOttoman);
		fun << (RLSeatOttomanAngle);
		fun << (RLSeatOttomanExtent);
		fun << (RRSeatXSlide);
		fun << (RRSeatYSlide);
		fun << (RRSeatHeight);
		fun << (RRSeatBackrest);
		fun << (RRSeatTilt);
		fun << (RRSeatCushion);
		fun << (RRSeatOttoman);
		fun << (RRSeatOttomanAngle);
		fun << (RRSeatOttomanExtent);
		fun << (ThirdLeftBackrest);
		fun << (ThirdRightBackrest);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (FLSeatSlide);
		fun >> (FLSeatHeight);
		fun >> (FLSeatBackrest);
		fun >> (FLSeatTilt);
		fun >> (FLSeatCushion);
		fun >> (FLSeatOttoman);
		fun >> (FLSeatOttomanAngle);
		fun >> (FLSeatOttomanExtent);
		fun >> (FRSeatSlide);
		fun >> (FRSeatHeight);
		fun >> (FRSeatBackrest);
		fun >> (FRSeatTilt);
		fun >> (FRSeatCushion);
		fun >> (FRSeatOttoman);
		fun >> (FRSeatOttomanAngle);
		fun >> (FRSeatOttomanExtent);
		fun >> (RLSeatXSlide);
		fun >> (RLSeatYSlide);
		fun >> (RLSeatHeight);
		fun >> (RLSeatBackrest);
		fun >> (RLSeatTilt);
		fun >> (RLSeatCushion);
		fun >> (RLSeatOttoman);
		fun >> (RLSeatOttomanAngle);
		fun >> (RLSeatOttomanExtent);
		fun >> (RRSeatXSlide);
		fun >> (RRSeatYSlide);
		fun >> (RRSeatHeight);
		fun >> (RRSeatBackrest);
		fun >> (RRSeatTilt);
		fun >> (RRSeatCushion);
		fun >> (RRSeatOttoman);
		fun >> (RRSeatOttomanAngle);
		fun >> (RRSeatOttomanExtent);
		fun >> (ThirdLeftBackrest);
		fun >> (ThirdRightBackrest);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__SEATPOSSTS_H__
