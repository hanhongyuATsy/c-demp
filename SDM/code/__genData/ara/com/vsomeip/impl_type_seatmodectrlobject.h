#ifndef __ARA_COM_VSOMEIP__SEATMODECTRLOBJECT_H__
#define __ARA_COM_VSOMEIP__SEATMODECTRLOBJECT_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct SeatModeCtrlObject {
public:
	std::uint8_t RLSeat;
	std::uint8_t RRSeat;
/*
	SeatModeCtrlObject() {}
	~SeatModeCtrlObject() {}
	SeatModeCtrlObject(const std::uint8_t _RLSeat,const std::uint8_t _RRSeat):RLSeat(_RLSeat),RRSeat(_RRSeat) {}
	SeatModeCtrlObject(const SeatModeCtrlObject &_x){
		RLSeat = _x.RLSeat;
		RRSeat = _x.RRSeat;
	}
	SeatModeCtrlObject(SeatModeCtrlObject &&_x){
		RLSeat = std::move(_x.RLSeat);
		RRSeat = std::move(_x.RRSeat);
	}
	SeatModeCtrlObject& operator=(const SeatModeCtrlObject &_x){
		RLSeat = _x.RLSeat;
		RRSeat = _x.RRSeat;
		return *this;
	}
	SeatModeCtrlObject& operator=(SeatModeCtrlObject &&_x){
		RLSeat = std::move(_x.RLSeat);
		RRSeat = std::move(_x.RRSeat);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(RLSeat);
		fun(RRSeat);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(RLSeat);
		fun(RRSeat);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (RLSeat);
		fun << (RRSeat);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (RLSeat);
		fun >> (RRSeat);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__SEATMODECTRLOBJECT_H__
