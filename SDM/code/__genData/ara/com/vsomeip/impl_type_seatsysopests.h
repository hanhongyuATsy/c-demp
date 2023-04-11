#ifndef __ARA_COM_VSOMEIP__SEATSYSOPESTS_H__
#define __ARA_COM_VSOMEIP__SEATSYSOPESTS_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct SeatSysOpeSts {
public:
	std::uint8_t FLSeatSystem;
	std::uint8_t FRSeatSystem;
	std::uint8_t RLSeatSystem;
	std::uint8_t RRSeatSystem;
	std::uint8_t ThirdLeftSeatSystem;
	std::uint8_t ThirdRightSeatSystem;
	std::uint8_t SteerSystem;
/*
	SeatSysOpeSts() {}
	~SeatSysOpeSts() {}
	SeatSysOpeSts(const std::uint8_t _FLSeatSystem,const std::uint8_t _FRSeatSystem,const std::uint8_t _RLSeatSystem,const std::uint8_t _RRSeatSystem,const std::uint8_t _ThirdLeftSeatSystem,const std::uint8_t _ThirdRightSeatSystem,const std::uint8_t _SteerSystem):FLSeatSystem(_FLSeatSystem),FRSeatSystem(_FRSeatSystem),RLSeatSystem(_RLSeatSystem),RRSeatSystem(_RRSeatSystem),ThirdLeftSeatSystem(_ThirdLeftSeatSystem),ThirdRightSeatSystem(_ThirdRightSeatSystem),SteerSystem(_SteerSystem) {}
	SeatSysOpeSts(const SeatSysOpeSts &_x){
		FLSeatSystem = _x.FLSeatSystem;
		FRSeatSystem = _x.FRSeatSystem;
		RLSeatSystem = _x.RLSeatSystem;
		RRSeatSystem = _x.RRSeatSystem;
		ThirdLeftSeatSystem = _x.ThirdLeftSeatSystem;
		ThirdRightSeatSystem = _x.ThirdRightSeatSystem;
		SteerSystem = _x.SteerSystem;
	}
	SeatSysOpeSts(SeatSysOpeSts &&_x){
		FLSeatSystem = std::move(_x.FLSeatSystem);
		FRSeatSystem = std::move(_x.FRSeatSystem);
		RLSeatSystem = std::move(_x.RLSeatSystem);
		RRSeatSystem = std::move(_x.RRSeatSystem);
		ThirdLeftSeatSystem = std::move(_x.ThirdLeftSeatSystem);
		ThirdRightSeatSystem = std::move(_x.ThirdRightSeatSystem);
		SteerSystem = std::move(_x.SteerSystem);
	}
	SeatSysOpeSts& operator=(const SeatSysOpeSts &_x){
		FLSeatSystem = _x.FLSeatSystem;
		FRSeatSystem = _x.FRSeatSystem;
		RLSeatSystem = _x.RLSeatSystem;
		RRSeatSystem = _x.RRSeatSystem;
		ThirdLeftSeatSystem = _x.ThirdLeftSeatSystem;
		ThirdRightSeatSystem = _x.ThirdRightSeatSystem;
		SteerSystem = _x.SteerSystem;
		return *this;
	}
	SeatSysOpeSts& operator=(SeatSysOpeSts &&_x){
		FLSeatSystem = std::move(_x.FLSeatSystem);
		FRSeatSystem = std::move(_x.FRSeatSystem);
		RLSeatSystem = std::move(_x.RLSeatSystem);
		RRSeatSystem = std::move(_x.RRSeatSystem);
		ThirdLeftSeatSystem = std::move(_x.ThirdLeftSeatSystem);
		ThirdRightSeatSystem = std::move(_x.ThirdRightSeatSystem);
		SteerSystem = std::move(_x.SteerSystem);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(FLSeatSystem);
		fun(FRSeatSystem);
		fun(RLSeatSystem);
		fun(RRSeatSystem);
		fun(ThirdLeftSeatSystem);
		fun(ThirdRightSeatSystem);
		fun(SteerSystem);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(FLSeatSystem);
		fun(FRSeatSystem);
		fun(RLSeatSystem);
		fun(RRSeatSystem);
		fun(ThirdLeftSeatSystem);
		fun(ThirdRightSeatSystem);
		fun(SteerSystem);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (FLSeatSystem);
		fun << (FRSeatSystem);
		fun << (RLSeatSystem);
		fun << (RRSeatSystem);
		fun << (ThirdLeftSeatSystem);
		fun << (ThirdRightSeatSystem);
		fun << (SteerSystem);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (FLSeatSystem);
		fun >> (FRSeatSystem);
		fun >> (RLSeatSystem);
		fun >> (RRSeatSystem);
		fun >> (ThirdLeftSeatSystem);
		fun >> (ThirdRightSeatSystem);
		fun >> (SteerSystem);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__SEATSYSOPESTS_H__
