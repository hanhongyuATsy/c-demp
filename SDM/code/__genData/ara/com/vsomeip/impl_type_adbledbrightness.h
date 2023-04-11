#ifndef __ARA_COM_VSOMEIP__ADBLEDBRIGHTNESS_H__
#define __ARA_COM_VSOMEIP__ADBLEDBRIGHTNESS_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct ADBLEDBrightness {
public:
	std::uint8_t LED1;
	std::uint8_t LED2;
	std::uint8_t LED3;
	std::uint8_t LED4;
	std::uint8_t LED5;
	std::uint8_t LED6;
	std::uint8_t LED7;
	std::uint8_t LED8;
	std::uint8_t LED9;
	std::uint8_t LED10;
	std::uint8_t LED11;
	std::uint8_t LED12;
	std::uint8_t LED13;
	std::uint8_t LED14;
	std::uint8_t LED15;
	std::uint8_t LED16;
	std::uint8_t LED17;
	std::uint8_t LED18;
	std::uint8_t LED19;
	std::uint8_t LED20;
	std::uint8_t LED21;
	std::uint8_t LED22;
	std::uint8_t LED23;
	std::uint8_t LED24;
	std::uint8_t LED25;
	std::uint8_t LED26;
	std::uint8_t LED27;
	std::uint8_t LED28;
	std::uint8_t LED29;
	std::uint8_t LED30;
	std::uint8_t LED31;
	std::uint8_t LED32;
/*
	ADBLEDBrightness() {}
	~ADBLEDBrightness() {}
	ADBLEDBrightness(const std::uint8_t _LED1,const std::uint8_t _LED2,const std::uint8_t _LED3,const std::uint8_t _LED4,const std::uint8_t _LED5,const std::uint8_t _LED6,const std::uint8_t _LED7,const std::uint8_t _LED8,const std::uint8_t _LED9,const std::uint8_t _LED10,const std::uint8_t _LED11,const std::uint8_t _LED12,const std::uint8_t _LED13,const std::uint8_t _LED14,const std::uint8_t _LED15,const std::uint8_t _LED16,const std::uint8_t _LED17,const std::uint8_t _LED18,const std::uint8_t _LED19,const std::uint8_t _LED20,const std::uint8_t _LED21,const std::uint8_t _LED22,const std::uint8_t _LED23,const std::uint8_t _LED24,const std::uint8_t _LED25,const std::uint8_t _LED26,const std::uint8_t _LED27,const std::uint8_t _LED28,const std::uint8_t _LED29,const std::uint8_t _LED30,const std::uint8_t _LED31,const std::uint8_t _LED32):LED1(_LED1),LED2(_LED2),LED3(_LED3),LED4(_LED4),LED5(_LED5),LED6(_LED6),LED7(_LED7),LED8(_LED8),LED9(_LED9),LED10(_LED10),LED11(_LED11),LED12(_LED12),LED13(_LED13),LED14(_LED14),LED15(_LED15),LED16(_LED16),LED17(_LED17),LED18(_LED18),LED19(_LED19),LED20(_LED20),LED21(_LED21),LED22(_LED22),LED23(_LED23),LED24(_LED24),LED25(_LED25),LED26(_LED26),LED27(_LED27),LED28(_LED28),LED29(_LED29),LED30(_LED30),LED31(_LED31),LED32(_LED32) {}
	ADBLEDBrightness(const ADBLEDBrightness &_x){
		LED1 = _x.LED1;
		LED2 = _x.LED2;
		LED3 = _x.LED3;
		LED4 = _x.LED4;
		LED5 = _x.LED5;
		LED6 = _x.LED6;
		LED7 = _x.LED7;
		LED8 = _x.LED8;
		LED9 = _x.LED9;
		LED10 = _x.LED10;
		LED11 = _x.LED11;
		LED12 = _x.LED12;
		LED13 = _x.LED13;
		LED14 = _x.LED14;
		LED15 = _x.LED15;
		LED16 = _x.LED16;
		LED17 = _x.LED17;
		LED18 = _x.LED18;
		LED19 = _x.LED19;
		LED20 = _x.LED20;
		LED21 = _x.LED21;
		LED22 = _x.LED22;
		LED23 = _x.LED23;
		LED24 = _x.LED24;
		LED25 = _x.LED25;
		LED26 = _x.LED26;
		LED27 = _x.LED27;
		LED28 = _x.LED28;
		LED29 = _x.LED29;
		LED30 = _x.LED30;
		LED31 = _x.LED31;
		LED32 = _x.LED32;
	}
	ADBLEDBrightness(ADBLEDBrightness &&_x){
		LED1 = std::move(_x.LED1);
		LED2 = std::move(_x.LED2);
		LED3 = std::move(_x.LED3);
		LED4 = std::move(_x.LED4);
		LED5 = std::move(_x.LED5);
		LED6 = std::move(_x.LED6);
		LED7 = std::move(_x.LED7);
		LED8 = std::move(_x.LED8);
		LED9 = std::move(_x.LED9);
		LED10 = std::move(_x.LED10);
		LED11 = std::move(_x.LED11);
		LED12 = std::move(_x.LED12);
		LED13 = std::move(_x.LED13);
		LED14 = std::move(_x.LED14);
		LED15 = std::move(_x.LED15);
		LED16 = std::move(_x.LED16);
		LED17 = std::move(_x.LED17);
		LED18 = std::move(_x.LED18);
		LED19 = std::move(_x.LED19);
		LED20 = std::move(_x.LED20);
		LED21 = std::move(_x.LED21);
		LED22 = std::move(_x.LED22);
		LED23 = std::move(_x.LED23);
		LED24 = std::move(_x.LED24);
		LED25 = std::move(_x.LED25);
		LED26 = std::move(_x.LED26);
		LED27 = std::move(_x.LED27);
		LED28 = std::move(_x.LED28);
		LED29 = std::move(_x.LED29);
		LED30 = std::move(_x.LED30);
		LED31 = std::move(_x.LED31);
		LED32 = std::move(_x.LED32);
	}
	ADBLEDBrightness& operator=(const ADBLEDBrightness &_x){
		LED1 = _x.LED1;
		LED2 = _x.LED2;
		LED3 = _x.LED3;
		LED4 = _x.LED4;
		LED5 = _x.LED5;
		LED6 = _x.LED6;
		LED7 = _x.LED7;
		LED8 = _x.LED8;
		LED9 = _x.LED9;
		LED10 = _x.LED10;
		LED11 = _x.LED11;
		LED12 = _x.LED12;
		LED13 = _x.LED13;
		LED14 = _x.LED14;
		LED15 = _x.LED15;
		LED16 = _x.LED16;
		LED17 = _x.LED17;
		LED18 = _x.LED18;
		LED19 = _x.LED19;
		LED20 = _x.LED20;
		LED21 = _x.LED21;
		LED22 = _x.LED22;
		LED23 = _x.LED23;
		LED24 = _x.LED24;
		LED25 = _x.LED25;
		LED26 = _x.LED26;
		LED27 = _x.LED27;
		LED28 = _x.LED28;
		LED29 = _x.LED29;
		LED30 = _x.LED30;
		LED31 = _x.LED31;
		LED32 = _x.LED32;
		return *this;
	}
	ADBLEDBrightness& operator=(ADBLEDBrightness &&_x){
		LED1 = std::move(_x.LED1);
		LED2 = std::move(_x.LED2);
		LED3 = std::move(_x.LED3);
		LED4 = std::move(_x.LED4);
		LED5 = std::move(_x.LED5);
		LED6 = std::move(_x.LED6);
		LED7 = std::move(_x.LED7);
		LED8 = std::move(_x.LED8);
		LED9 = std::move(_x.LED9);
		LED10 = std::move(_x.LED10);
		LED11 = std::move(_x.LED11);
		LED12 = std::move(_x.LED12);
		LED13 = std::move(_x.LED13);
		LED14 = std::move(_x.LED14);
		LED15 = std::move(_x.LED15);
		LED16 = std::move(_x.LED16);
		LED17 = std::move(_x.LED17);
		LED18 = std::move(_x.LED18);
		LED19 = std::move(_x.LED19);
		LED20 = std::move(_x.LED20);
		LED21 = std::move(_x.LED21);
		LED22 = std::move(_x.LED22);
		LED23 = std::move(_x.LED23);
		LED24 = std::move(_x.LED24);
		LED25 = std::move(_x.LED25);
		LED26 = std::move(_x.LED26);
		LED27 = std::move(_x.LED27);
		LED28 = std::move(_x.LED28);
		LED29 = std::move(_x.LED29);
		LED30 = std::move(_x.LED30);
		LED31 = std::move(_x.LED31);
		LED32 = std::move(_x.LED32);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(LED1);
		fun(LED2);
		fun(LED3);
		fun(LED4);
		fun(LED5);
		fun(LED6);
		fun(LED7);
		fun(LED8);
		fun(LED9);
		fun(LED10);
		fun(LED11);
		fun(LED12);
		fun(LED13);
		fun(LED14);
		fun(LED15);
		fun(LED16);
		fun(LED17);
		fun(LED18);
		fun(LED19);
		fun(LED20);
		fun(LED21);
		fun(LED22);
		fun(LED23);
		fun(LED24);
		fun(LED25);
		fun(LED26);
		fun(LED27);
		fun(LED28);
		fun(LED29);
		fun(LED30);
		fun(LED31);
		fun(LED32);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(LED1);
		fun(LED2);
		fun(LED3);
		fun(LED4);
		fun(LED5);
		fun(LED6);
		fun(LED7);
		fun(LED8);
		fun(LED9);
		fun(LED10);
		fun(LED11);
		fun(LED12);
		fun(LED13);
		fun(LED14);
		fun(LED15);
		fun(LED16);
		fun(LED17);
		fun(LED18);
		fun(LED19);
		fun(LED20);
		fun(LED21);
		fun(LED22);
		fun(LED23);
		fun(LED24);
		fun(LED25);
		fun(LED26);
		fun(LED27);
		fun(LED28);
		fun(LED29);
		fun(LED30);
		fun(LED31);
		fun(LED32);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (LED1);
		fun << (LED2);
		fun << (LED3);
		fun << (LED4);
		fun << (LED5);
		fun << (LED6);
		fun << (LED7);
		fun << (LED8);
		fun << (LED9);
		fun << (LED10);
		fun << (LED11);
		fun << (LED12);
		fun << (LED13);
		fun << (LED14);
		fun << (LED15);
		fun << (LED16);
		fun << (LED17);
		fun << (LED18);
		fun << (LED19);
		fun << (LED20);
		fun << (LED21);
		fun << (LED22);
		fun << (LED23);
		fun << (LED24);
		fun << (LED25);
		fun << (LED26);
		fun << (LED27);
		fun << (LED28);
		fun << (LED29);
		fun << (LED30);
		fun << (LED31);
		fun << (LED32);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (LED1);
		fun >> (LED2);
		fun >> (LED3);
		fun >> (LED4);
		fun >> (LED5);
		fun >> (LED6);
		fun >> (LED7);
		fun >> (LED8);
		fun >> (LED9);
		fun >> (LED10);
		fun >> (LED11);
		fun >> (LED12);
		fun >> (LED13);
		fun >> (LED14);
		fun >> (LED15);
		fun >> (LED16);
		fun >> (LED17);
		fun >> (LED18);
		fun >> (LED19);
		fun >> (LED20);
		fun >> (LED21);
		fun >> (LED22);
		fun >> (LED23);
		fun >> (LED24);
		fun >> (LED25);
		fun >> (LED26);
		fun >> (LED27);
		fun >> (LED28);
		fun >> (LED29);
		fun >> (LED30);
		fun >> (LED31);
		fun >> (LED32);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__ADBLEDBRIGHTNESS_H__
