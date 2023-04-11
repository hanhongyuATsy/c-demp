#ifndef __ARA_COM_VSOMEIP__SEATADJMODECFG_H__
#define __ARA_COM_VSOMEIP__SEATADJMODECFG_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct SeatAdjModeCfg {
public:
	std::uint8_t Sleep_Mode;
	std::uint8_t Nap_Mode;
	std::uint8_t Reset_Mode;
	std::uint8_t Mode_1;
	std::uint8_t Mode_2;
	std::uint8_t Mode_3;
	std::uint8_t Mode_4;
	std::uint8_t Mode_5;
/*
	SeatAdjModeCfg() {}
	~SeatAdjModeCfg() {}
	SeatAdjModeCfg(const std::uint8_t _Sleep_Mode,const std::uint8_t _Nap_Mode,const std::uint8_t _Reset_Mode,const std::uint8_t _Mode_1,const std::uint8_t _Mode_2,const std::uint8_t _Mode_3,const std::uint8_t _Mode_4,const std::uint8_t _Mode_5):Sleep_Mode(_Sleep_Mode),Nap_Mode(_Nap_Mode),Reset_Mode(_Reset_Mode),Mode_1(_Mode_1),Mode_2(_Mode_2),Mode_3(_Mode_3),Mode_4(_Mode_4),Mode_5(_Mode_5) {}
	SeatAdjModeCfg(const SeatAdjModeCfg &_x){
		Sleep_Mode = _x.Sleep_Mode;
		Nap_Mode = _x.Nap_Mode;
		Reset_Mode = _x.Reset_Mode;
		Mode_1 = _x.Mode_1;
		Mode_2 = _x.Mode_2;
		Mode_3 = _x.Mode_3;
		Mode_4 = _x.Mode_4;
		Mode_5 = _x.Mode_5;
	}
	SeatAdjModeCfg(SeatAdjModeCfg &&_x){
		Sleep_Mode = std::move(_x.Sleep_Mode);
		Nap_Mode = std::move(_x.Nap_Mode);
		Reset_Mode = std::move(_x.Reset_Mode);
		Mode_1 = std::move(_x.Mode_1);
		Mode_2 = std::move(_x.Mode_2);
		Mode_3 = std::move(_x.Mode_3);
		Mode_4 = std::move(_x.Mode_4);
		Mode_5 = std::move(_x.Mode_5);
	}
	SeatAdjModeCfg& operator=(const SeatAdjModeCfg &_x){
		Sleep_Mode = _x.Sleep_Mode;
		Nap_Mode = _x.Nap_Mode;
		Reset_Mode = _x.Reset_Mode;
		Mode_1 = _x.Mode_1;
		Mode_2 = _x.Mode_2;
		Mode_3 = _x.Mode_3;
		Mode_4 = _x.Mode_4;
		Mode_5 = _x.Mode_5;
		return *this;
	}
	SeatAdjModeCfg& operator=(SeatAdjModeCfg &&_x){
		Sleep_Mode = std::move(_x.Sleep_Mode);
		Nap_Mode = std::move(_x.Nap_Mode);
		Reset_Mode = std::move(_x.Reset_Mode);
		Mode_1 = std::move(_x.Mode_1);
		Mode_2 = std::move(_x.Mode_2);
		Mode_3 = std::move(_x.Mode_3);
		Mode_4 = std::move(_x.Mode_4);
		Mode_5 = std::move(_x.Mode_5);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(Sleep_Mode);
		fun(Nap_Mode);
		fun(Reset_Mode);
		fun(Mode_1);
		fun(Mode_2);
		fun(Mode_3);
		fun(Mode_4);
		fun(Mode_5);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(Sleep_Mode);
		fun(Nap_Mode);
		fun(Reset_Mode);
		fun(Mode_1);
		fun(Mode_2);
		fun(Mode_3);
		fun(Mode_4);
		fun(Mode_5);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (Sleep_Mode);
		fun << (Nap_Mode);
		fun << (Reset_Mode);
		fun << (Mode_1);
		fun << (Mode_2);
		fun << (Mode_3);
		fun << (Mode_4);
		fun << (Mode_5);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (Sleep_Mode);
		fun >> (Nap_Mode);
		fun >> (Reset_Mode);
		fun >> (Mode_1);
		fun >> (Mode_2);
		fun >> (Mode_3);
		fun >> (Mode_4);
		fun >> (Mode_5);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__SEATADJMODECFG_H__
