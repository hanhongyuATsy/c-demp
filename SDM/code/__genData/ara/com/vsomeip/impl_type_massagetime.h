#ifndef __ARA_COM_VSOMEIP__MASSAGETIME_H__
#define __ARA_COM_VSOMEIP__MASSAGETIME_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct MassageTime {
public:
	std::uint8_t FLSeat;
	std::uint8_t FRSeat;
	std::uint8_t RLSeat;
	std::uint8_t RRSeat;
/*
	MassageTime() {}
	~MassageTime() {}
	MassageTime(const std::uint8_t _FLSeat,const std::uint8_t _FRSeat,const std::uint8_t _RLSeat,const std::uint8_t _RRSeat):FLSeat(_FLSeat),FRSeat(_FRSeat),RLSeat(_RLSeat),RRSeat(_RRSeat) {}
	MassageTime(const MassageTime &_x){
		FLSeat = _x.FLSeat;
		FRSeat = _x.FRSeat;
		RLSeat = _x.RLSeat;
		RRSeat = _x.RRSeat;
	}
	MassageTime(MassageTime &&_x){
		FLSeat = std::move(_x.FLSeat);
		FRSeat = std::move(_x.FRSeat);
		RLSeat = std::move(_x.RLSeat);
		RRSeat = std::move(_x.RRSeat);
	}
	MassageTime& operator=(const MassageTime &_x){
		FLSeat = _x.FLSeat;
		FRSeat = _x.FRSeat;
		RLSeat = _x.RLSeat;
		RRSeat = _x.RRSeat;
		return *this;
	}
	MassageTime& operator=(MassageTime &&_x){
		FLSeat = std::move(_x.FLSeat);
		FRSeat = std::move(_x.FRSeat);
		RLSeat = std::move(_x.RLSeat);
		RRSeat = std::move(_x.RRSeat);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(FLSeat);
		fun(FRSeat);
		fun(RLSeat);
		fun(RRSeat);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(FLSeat);
		fun(FRSeat);
		fun(RLSeat);
		fun(RRSeat);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (FLSeat);
		fun << (FRSeat);
		fun << (RLSeat);
		fun << (RRSeat);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (FLSeat);
		fun >> (FRSeat);
		fun >> (RLSeat);
		fun >> (RRSeat);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__MASSAGETIME_H__
