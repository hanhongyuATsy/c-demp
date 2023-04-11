#ifndef __ARA_COM_VSOMEIP__REARCOMFORTST_H__
#define __ARA_COM_VSOMEIP__REARCOMFORTST_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct RearComfortSt {
public:
	std::uint8_t RLSeat;
	std::uint8_t RRSeat;
/*
	RearComfortSt() {}
	~RearComfortSt() {}
	RearComfortSt(const std::uint8_t _RLSeat,const std::uint8_t _RRSeat):RLSeat(_RLSeat),RRSeat(_RRSeat) {}
	RearComfortSt(const RearComfortSt &_x){
		RLSeat = _x.RLSeat;
		RRSeat = _x.RRSeat;
	}
	RearComfortSt(RearComfortSt &&_x){
		RLSeat = std::move(_x.RLSeat);
		RRSeat = std::move(_x.RRSeat);
	}
	RearComfortSt& operator=(const RearComfortSt &_x){
		RLSeat = _x.RLSeat;
		RRSeat = _x.RRSeat;
		return *this;
	}
	RearComfortSt& operator=(RearComfortSt &&_x){
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
#endif //__ARA_COM_VSOMEIP__REARCOMFORTST_H__
