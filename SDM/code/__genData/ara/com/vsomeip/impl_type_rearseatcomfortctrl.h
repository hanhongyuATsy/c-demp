#ifndef __ARA_COM_VSOMEIP__REARSEATCOMFORTCTRL_H__
#define __ARA_COM_VSOMEIP__REARSEATCOMFORTCTRL_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct RearSeatComfortCtrl {
public:
	std::uint8_t RLSeat;
	std::uint8_t RRSeat;
/*
	RearSeatComfortCtrl() {}
	~RearSeatComfortCtrl() {}
	RearSeatComfortCtrl(const std::uint8_t _RLSeat,const std::uint8_t _RRSeat):RLSeat(_RLSeat),RRSeat(_RRSeat) {}
	RearSeatComfortCtrl(const RearSeatComfortCtrl &_x){
		RLSeat = _x.RLSeat;
		RRSeat = _x.RRSeat;
	}
	RearSeatComfortCtrl(RearSeatComfortCtrl &&_x){
		RLSeat = std::move(_x.RLSeat);
		RRSeat = std::move(_x.RRSeat);
	}
	RearSeatComfortCtrl& operator=(const RearSeatComfortCtrl &_x){
		RLSeat = _x.RLSeat;
		RRSeat = _x.RRSeat;
		return *this;
	}
	RearSeatComfortCtrl& operator=(RearSeatComfortCtrl &&_x){
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
#endif //__ARA_COM_VSOMEIP__REARSEATCOMFORTCTRL_H__
