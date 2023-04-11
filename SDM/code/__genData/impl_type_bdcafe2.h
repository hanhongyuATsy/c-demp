#ifndef ____BDCAFE2_H__
#define ____BDCAFE2_H__


#include "cstdint"






struct BDCAFE2 {
public:
	std::uint8_t AFE15_BalStatus_01;
	std::uint8_t AFE15_BalStatus_02;
	std::uint8_t AFE15_BalStatus_03;
	std::uint8_t AFE15_BalStatus_04;
	std::uint8_t AFE15_BalStatus_05;
	std::uint8_t AFE15_BalStatus_06;
	std::uint8_t AFE15_BalStatus_07;
	std::uint8_t AFE15_BalStatus_08;
	std::uint8_t AFE15_BalStatus_09;
	std::uint8_t AFE15_BalStatus_10;
	std::uint8_t AFE15_BalStatus_11;
	std::uint8_t AFE15_BalStatus_12;
	std::uint8_t AFE15_BalStatus_13;
	std::uint8_t AFE15_BalStatus_14;
	std::uint8_t AFE15_BalStatus_15;
	std::uint8_t AFE15_BalStatus_16;
	std::uint8_t AFE16_BalStatus_01;
	std::uint8_t AFE16_BalStatus_02;
	std::uint8_t AFE16_BalStatus_03;
	std::uint8_t AFE16_BalStatus_04;
	std::uint8_t AFE16_BalStatus_05;
	std::uint8_t AFE16_BalStatus_06;
	std::uint8_t AFE16_BalStatus_07;
	std::uint8_t AFE16_BalStatus_08;
	std::uint8_t AFE16_BalStatus_09;
	std::uint8_t AFE16_BalStatus_10;
	std::uint8_t AFE16_BalStatus_11;
	std::uint8_t AFE16_BalStatus_12;
	std::uint8_t AFE16_BalStatus_13;
	std::uint8_t AFE16_BalStatus_14;
	std::uint8_t AFE16_BalStatus_15;
	std::uint8_t AFE16_BalStatus_16;
/*
	BDCAFE2() {}
	~BDCAFE2() {}
	BDCAFE2(const std::uint8_t _AFE15_BalStatus_01,const std::uint8_t _AFE15_BalStatus_02,const std::uint8_t _AFE15_BalStatus_03,const std::uint8_t _AFE15_BalStatus_04,const std::uint8_t _AFE15_BalStatus_05,const std::uint8_t _AFE15_BalStatus_06,const std::uint8_t _AFE15_BalStatus_07,const std::uint8_t _AFE15_BalStatus_08,const std::uint8_t _AFE15_BalStatus_09,const std::uint8_t _AFE15_BalStatus_10,const std::uint8_t _AFE15_BalStatus_11,const std::uint8_t _AFE15_BalStatus_12,const std::uint8_t _AFE15_BalStatus_13,const std::uint8_t _AFE15_BalStatus_14,const std::uint8_t _AFE15_BalStatus_15,const std::uint8_t _AFE15_BalStatus_16,const std::uint8_t _AFE16_BalStatus_01,const std::uint8_t _AFE16_BalStatus_02,const std::uint8_t _AFE16_BalStatus_03,const std::uint8_t _AFE16_BalStatus_04,const std::uint8_t _AFE16_BalStatus_05,const std::uint8_t _AFE16_BalStatus_06,const std::uint8_t _AFE16_BalStatus_07,const std::uint8_t _AFE16_BalStatus_08,const std::uint8_t _AFE16_BalStatus_09,const std::uint8_t _AFE16_BalStatus_10,const std::uint8_t _AFE16_BalStatus_11,const std::uint8_t _AFE16_BalStatus_12,const std::uint8_t _AFE16_BalStatus_13,const std::uint8_t _AFE16_BalStatus_14,const std::uint8_t _AFE16_BalStatus_15,const std::uint8_t _AFE16_BalStatus_16):AFE15_BalStatus_01(_AFE15_BalStatus_01),AFE15_BalStatus_02(_AFE15_BalStatus_02),AFE15_BalStatus_03(_AFE15_BalStatus_03),AFE15_BalStatus_04(_AFE15_BalStatus_04),AFE15_BalStatus_05(_AFE15_BalStatus_05),AFE15_BalStatus_06(_AFE15_BalStatus_06),AFE15_BalStatus_07(_AFE15_BalStatus_07),AFE15_BalStatus_08(_AFE15_BalStatus_08),AFE15_BalStatus_09(_AFE15_BalStatus_09),AFE15_BalStatus_10(_AFE15_BalStatus_10),AFE15_BalStatus_11(_AFE15_BalStatus_11),AFE15_BalStatus_12(_AFE15_BalStatus_12),AFE15_BalStatus_13(_AFE15_BalStatus_13),AFE15_BalStatus_14(_AFE15_BalStatus_14),AFE15_BalStatus_15(_AFE15_BalStatus_15),AFE15_BalStatus_16(_AFE15_BalStatus_16),AFE16_BalStatus_01(_AFE16_BalStatus_01),AFE16_BalStatus_02(_AFE16_BalStatus_02),AFE16_BalStatus_03(_AFE16_BalStatus_03),AFE16_BalStatus_04(_AFE16_BalStatus_04),AFE16_BalStatus_05(_AFE16_BalStatus_05),AFE16_BalStatus_06(_AFE16_BalStatus_06),AFE16_BalStatus_07(_AFE16_BalStatus_07),AFE16_BalStatus_08(_AFE16_BalStatus_08),AFE16_BalStatus_09(_AFE16_BalStatus_09),AFE16_BalStatus_10(_AFE16_BalStatus_10),AFE16_BalStatus_11(_AFE16_BalStatus_11),AFE16_BalStatus_12(_AFE16_BalStatus_12),AFE16_BalStatus_13(_AFE16_BalStatus_13),AFE16_BalStatus_14(_AFE16_BalStatus_14),AFE16_BalStatus_15(_AFE16_BalStatus_15),AFE16_BalStatus_16(_AFE16_BalStatus_16) {}
	BDCAFE2(const BDCAFE2 &_x){
		AFE15_BalStatus_01 = _x.AFE15_BalStatus_01;
		AFE15_BalStatus_02 = _x.AFE15_BalStatus_02;
		AFE15_BalStatus_03 = _x.AFE15_BalStatus_03;
		AFE15_BalStatus_04 = _x.AFE15_BalStatus_04;
		AFE15_BalStatus_05 = _x.AFE15_BalStatus_05;
		AFE15_BalStatus_06 = _x.AFE15_BalStatus_06;
		AFE15_BalStatus_07 = _x.AFE15_BalStatus_07;
		AFE15_BalStatus_08 = _x.AFE15_BalStatus_08;
		AFE15_BalStatus_09 = _x.AFE15_BalStatus_09;
		AFE15_BalStatus_10 = _x.AFE15_BalStatus_10;
		AFE15_BalStatus_11 = _x.AFE15_BalStatus_11;
		AFE15_BalStatus_12 = _x.AFE15_BalStatus_12;
		AFE15_BalStatus_13 = _x.AFE15_BalStatus_13;
		AFE15_BalStatus_14 = _x.AFE15_BalStatus_14;
		AFE15_BalStatus_15 = _x.AFE15_BalStatus_15;
		AFE15_BalStatus_16 = _x.AFE15_BalStatus_16;
		AFE16_BalStatus_01 = _x.AFE16_BalStatus_01;
		AFE16_BalStatus_02 = _x.AFE16_BalStatus_02;
		AFE16_BalStatus_03 = _x.AFE16_BalStatus_03;
		AFE16_BalStatus_04 = _x.AFE16_BalStatus_04;
		AFE16_BalStatus_05 = _x.AFE16_BalStatus_05;
		AFE16_BalStatus_06 = _x.AFE16_BalStatus_06;
		AFE16_BalStatus_07 = _x.AFE16_BalStatus_07;
		AFE16_BalStatus_08 = _x.AFE16_BalStatus_08;
		AFE16_BalStatus_09 = _x.AFE16_BalStatus_09;
		AFE16_BalStatus_10 = _x.AFE16_BalStatus_10;
		AFE16_BalStatus_11 = _x.AFE16_BalStatus_11;
		AFE16_BalStatus_12 = _x.AFE16_BalStatus_12;
		AFE16_BalStatus_13 = _x.AFE16_BalStatus_13;
		AFE16_BalStatus_14 = _x.AFE16_BalStatus_14;
		AFE16_BalStatus_15 = _x.AFE16_BalStatus_15;
		AFE16_BalStatus_16 = _x.AFE16_BalStatus_16;
	}
	BDCAFE2(BDCAFE2 &&_x){
		AFE15_BalStatus_01 = std::move(_x.AFE15_BalStatus_01);
		AFE15_BalStatus_02 = std::move(_x.AFE15_BalStatus_02);
		AFE15_BalStatus_03 = std::move(_x.AFE15_BalStatus_03);
		AFE15_BalStatus_04 = std::move(_x.AFE15_BalStatus_04);
		AFE15_BalStatus_05 = std::move(_x.AFE15_BalStatus_05);
		AFE15_BalStatus_06 = std::move(_x.AFE15_BalStatus_06);
		AFE15_BalStatus_07 = std::move(_x.AFE15_BalStatus_07);
		AFE15_BalStatus_08 = std::move(_x.AFE15_BalStatus_08);
		AFE15_BalStatus_09 = std::move(_x.AFE15_BalStatus_09);
		AFE15_BalStatus_10 = std::move(_x.AFE15_BalStatus_10);
		AFE15_BalStatus_11 = std::move(_x.AFE15_BalStatus_11);
		AFE15_BalStatus_12 = std::move(_x.AFE15_BalStatus_12);
		AFE15_BalStatus_13 = std::move(_x.AFE15_BalStatus_13);
		AFE15_BalStatus_14 = std::move(_x.AFE15_BalStatus_14);
		AFE15_BalStatus_15 = std::move(_x.AFE15_BalStatus_15);
		AFE15_BalStatus_16 = std::move(_x.AFE15_BalStatus_16);
		AFE16_BalStatus_01 = std::move(_x.AFE16_BalStatus_01);
		AFE16_BalStatus_02 = std::move(_x.AFE16_BalStatus_02);
		AFE16_BalStatus_03 = std::move(_x.AFE16_BalStatus_03);
		AFE16_BalStatus_04 = std::move(_x.AFE16_BalStatus_04);
		AFE16_BalStatus_05 = std::move(_x.AFE16_BalStatus_05);
		AFE16_BalStatus_06 = std::move(_x.AFE16_BalStatus_06);
		AFE16_BalStatus_07 = std::move(_x.AFE16_BalStatus_07);
		AFE16_BalStatus_08 = std::move(_x.AFE16_BalStatus_08);
		AFE16_BalStatus_09 = std::move(_x.AFE16_BalStatus_09);
		AFE16_BalStatus_10 = std::move(_x.AFE16_BalStatus_10);
		AFE16_BalStatus_11 = std::move(_x.AFE16_BalStatus_11);
		AFE16_BalStatus_12 = std::move(_x.AFE16_BalStatus_12);
		AFE16_BalStatus_13 = std::move(_x.AFE16_BalStatus_13);
		AFE16_BalStatus_14 = std::move(_x.AFE16_BalStatus_14);
		AFE16_BalStatus_15 = std::move(_x.AFE16_BalStatus_15);
		AFE16_BalStatus_16 = std::move(_x.AFE16_BalStatus_16);
	}
	BDCAFE2& operator=(const BDCAFE2 &_x){
		AFE15_BalStatus_01 = _x.AFE15_BalStatus_01;
		AFE15_BalStatus_02 = _x.AFE15_BalStatus_02;
		AFE15_BalStatus_03 = _x.AFE15_BalStatus_03;
		AFE15_BalStatus_04 = _x.AFE15_BalStatus_04;
		AFE15_BalStatus_05 = _x.AFE15_BalStatus_05;
		AFE15_BalStatus_06 = _x.AFE15_BalStatus_06;
		AFE15_BalStatus_07 = _x.AFE15_BalStatus_07;
		AFE15_BalStatus_08 = _x.AFE15_BalStatus_08;
		AFE15_BalStatus_09 = _x.AFE15_BalStatus_09;
		AFE15_BalStatus_10 = _x.AFE15_BalStatus_10;
		AFE15_BalStatus_11 = _x.AFE15_BalStatus_11;
		AFE15_BalStatus_12 = _x.AFE15_BalStatus_12;
		AFE15_BalStatus_13 = _x.AFE15_BalStatus_13;
		AFE15_BalStatus_14 = _x.AFE15_BalStatus_14;
		AFE15_BalStatus_15 = _x.AFE15_BalStatus_15;
		AFE15_BalStatus_16 = _x.AFE15_BalStatus_16;
		AFE16_BalStatus_01 = _x.AFE16_BalStatus_01;
		AFE16_BalStatus_02 = _x.AFE16_BalStatus_02;
		AFE16_BalStatus_03 = _x.AFE16_BalStatus_03;
		AFE16_BalStatus_04 = _x.AFE16_BalStatus_04;
		AFE16_BalStatus_05 = _x.AFE16_BalStatus_05;
		AFE16_BalStatus_06 = _x.AFE16_BalStatus_06;
		AFE16_BalStatus_07 = _x.AFE16_BalStatus_07;
		AFE16_BalStatus_08 = _x.AFE16_BalStatus_08;
		AFE16_BalStatus_09 = _x.AFE16_BalStatus_09;
		AFE16_BalStatus_10 = _x.AFE16_BalStatus_10;
		AFE16_BalStatus_11 = _x.AFE16_BalStatus_11;
		AFE16_BalStatus_12 = _x.AFE16_BalStatus_12;
		AFE16_BalStatus_13 = _x.AFE16_BalStatus_13;
		AFE16_BalStatus_14 = _x.AFE16_BalStatus_14;
		AFE16_BalStatus_15 = _x.AFE16_BalStatus_15;
		AFE16_BalStatus_16 = _x.AFE16_BalStatus_16;
		return *this;
	}
	BDCAFE2& operator=(BDCAFE2 &&_x){
		AFE15_BalStatus_01 = std::move(_x.AFE15_BalStatus_01);
		AFE15_BalStatus_02 = std::move(_x.AFE15_BalStatus_02);
		AFE15_BalStatus_03 = std::move(_x.AFE15_BalStatus_03);
		AFE15_BalStatus_04 = std::move(_x.AFE15_BalStatus_04);
		AFE15_BalStatus_05 = std::move(_x.AFE15_BalStatus_05);
		AFE15_BalStatus_06 = std::move(_x.AFE15_BalStatus_06);
		AFE15_BalStatus_07 = std::move(_x.AFE15_BalStatus_07);
		AFE15_BalStatus_08 = std::move(_x.AFE15_BalStatus_08);
		AFE15_BalStatus_09 = std::move(_x.AFE15_BalStatus_09);
		AFE15_BalStatus_10 = std::move(_x.AFE15_BalStatus_10);
		AFE15_BalStatus_11 = std::move(_x.AFE15_BalStatus_11);
		AFE15_BalStatus_12 = std::move(_x.AFE15_BalStatus_12);
		AFE15_BalStatus_13 = std::move(_x.AFE15_BalStatus_13);
		AFE15_BalStatus_14 = std::move(_x.AFE15_BalStatus_14);
		AFE15_BalStatus_15 = std::move(_x.AFE15_BalStatus_15);
		AFE15_BalStatus_16 = std::move(_x.AFE15_BalStatus_16);
		AFE16_BalStatus_01 = std::move(_x.AFE16_BalStatus_01);
		AFE16_BalStatus_02 = std::move(_x.AFE16_BalStatus_02);
		AFE16_BalStatus_03 = std::move(_x.AFE16_BalStatus_03);
		AFE16_BalStatus_04 = std::move(_x.AFE16_BalStatus_04);
		AFE16_BalStatus_05 = std::move(_x.AFE16_BalStatus_05);
		AFE16_BalStatus_06 = std::move(_x.AFE16_BalStatus_06);
		AFE16_BalStatus_07 = std::move(_x.AFE16_BalStatus_07);
		AFE16_BalStatus_08 = std::move(_x.AFE16_BalStatus_08);
		AFE16_BalStatus_09 = std::move(_x.AFE16_BalStatus_09);
		AFE16_BalStatus_10 = std::move(_x.AFE16_BalStatus_10);
		AFE16_BalStatus_11 = std::move(_x.AFE16_BalStatus_11);
		AFE16_BalStatus_12 = std::move(_x.AFE16_BalStatus_12);
		AFE16_BalStatus_13 = std::move(_x.AFE16_BalStatus_13);
		AFE16_BalStatus_14 = std::move(_x.AFE16_BalStatus_14);
		AFE16_BalStatus_15 = std::move(_x.AFE16_BalStatus_15);
		AFE16_BalStatus_16 = std::move(_x.AFE16_BalStatus_16);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(AFE15_BalStatus_01);
		fun(AFE15_BalStatus_02);
		fun(AFE15_BalStatus_03);
		fun(AFE15_BalStatus_04);
		fun(AFE15_BalStatus_05);
		fun(AFE15_BalStatus_06);
		fun(AFE15_BalStatus_07);
		fun(AFE15_BalStatus_08);
		fun(AFE15_BalStatus_09);
		fun(AFE15_BalStatus_10);
		fun(AFE15_BalStatus_11);
		fun(AFE15_BalStatus_12);
		fun(AFE15_BalStatus_13);
		fun(AFE15_BalStatus_14);
		fun(AFE15_BalStatus_15);
		fun(AFE15_BalStatus_16);
		fun(AFE16_BalStatus_01);
		fun(AFE16_BalStatus_02);
		fun(AFE16_BalStatus_03);
		fun(AFE16_BalStatus_04);
		fun(AFE16_BalStatus_05);
		fun(AFE16_BalStatus_06);
		fun(AFE16_BalStatus_07);
		fun(AFE16_BalStatus_08);
		fun(AFE16_BalStatus_09);
		fun(AFE16_BalStatus_10);
		fun(AFE16_BalStatus_11);
		fun(AFE16_BalStatus_12);
		fun(AFE16_BalStatus_13);
		fun(AFE16_BalStatus_14);
		fun(AFE16_BalStatus_15);
		fun(AFE16_BalStatus_16);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(AFE15_BalStatus_01);
		fun(AFE15_BalStatus_02);
		fun(AFE15_BalStatus_03);
		fun(AFE15_BalStatus_04);
		fun(AFE15_BalStatus_05);
		fun(AFE15_BalStatus_06);
		fun(AFE15_BalStatus_07);
		fun(AFE15_BalStatus_08);
		fun(AFE15_BalStatus_09);
		fun(AFE15_BalStatus_10);
		fun(AFE15_BalStatus_11);
		fun(AFE15_BalStatus_12);
		fun(AFE15_BalStatus_13);
		fun(AFE15_BalStatus_14);
		fun(AFE15_BalStatus_15);
		fun(AFE15_BalStatus_16);
		fun(AFE16_BalStatus_01);
		fun(AFE16_BalStatus_02);
		fun(AFE16_BalStatus_03);
		fun(AFE16_BalStatus_04);
		fun(AFE16_BalStatus_05);
		fun(AFE16_BalStatus_06);
		fun(AFE16_BalStatus_07);
		fun(AFE16_BalStatus_08);
		fun(AFE16_BalStatus_09);
		fun(AFE16_BalStatus_10);
		fun(AFE16_BalStatus_11);
		fun(AFE16_BalStatus_12);
		fun(AFE16_BalStatus_13);
		fun(AFE16_BalStatus_14);
		fun(AFE16_BalStatus_15);
		fun(AFE16_BalStatus_16);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (AFE15_BalStatus_01);
		fun << (AFE15_BalStatus_02);
		fun << (AFE15_BalStatus_03);
		fun << (AFE15_BalStatus_04);
		fun << (AFE15_BalStatus_05);
		fun << (AFE15_BalStatus_06);
		fun << (AFE15_BalStatus_07);
		fun << (AFE15_BalStatus_08);
		fun << (AFE15_BalStatus_09);
		fun << (AFE15_BalStatus_10);
		fun << (AFE15_BalStatus_11);
		fun << (AFE15_BalStatus_12);
		fun << (AFE15_BalStatus_13);
		fun << (AFE15_BalStatus_14);
		fun << (AFE15_BalStatus_15);
		fun << (AFE15_BalStatus_16);
		fun << (AFE16_BalStatus_01);
		fun << (AFE16_BalStatus_02);
		fun << (AFE16_BalStatus_03);
		fun << (AFE16_BalStatus_04);
		fun << (AFE16_BalStatus_05);
		fun << (AFE16_BalStatus_06);
		fun << (AFE16_BalStatus_07);
		fun << (AFE16_BalStatus_08);
		fun << (AFE16_BalStatus_09);
		fun << (AFE16_BalStatus_10);
		fun << (AFE16_BalStatus_11);
		fun << (AFE16_BalStatus_12);
		fun << (AFE16_BalStatus_13);
		fun << (AFE16_BalStatus_14);
		fun << (AFE16_BalStatus_15);
		fun << (AFE16_BalStatus_16);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (AFE15_BalStatus_01);
		fun >> (AFE15_BalStatus_02);
		fun >> (AFE15_BalStatus_03);
		fun >> (AFE15_BalStatus_04);
		fun >> (AFE15_BalStatus_05);
		fun >> (AFE15_BalStatus_06);
		fun >> (AFE15_BalStatus_07);
		fun >> (AFE15_BalStatus_08);
		fun >> (AFE15_BalStatus_09);
		fun >> (AFE15_BalStatus_10);
		fun >> (AFE15_BalStatus_11);
		fun >> (AFE15_BalStatus_12);
		fun >> (AFE15_BalStatus_13);
		fun >> (AFE15_BalStatus_14);
		fun >> (AFE15_BalStatus_15);
		fun >> (AFE15_BalStatus_16);
		fun >> (AFE16_BalStatus_01);
		fun >> (AFE16_BalStatus_02);
		fun >> (AFE16_BalStatus_03);
		fun >> (AFE16_BalStatus_04);
		fun >> (AFE16_BalStatus_05);
		fun >> (AFE16_BalStatus_06);
		fun >> (AFE16_BalStatus_07);
		fun >> (AFE16_BalStatus_08);
		fun >> (AFE16_BalStatus_09);
		fun >> (AFE16_BalStatus_10);
		fun >> (AFE16_BalStatus_11);
		fun >> (AFE16_BalStatus_12);
		fun >> (AFE16_BalStatus_13);
		fun >> (AFE16_BalStatus_14);
		fun >> (AFE16_BalStatus_15);
		fun >> (AFE16_BalStatus_16);
	}
};

#endif //____BDCAFE2_H__
