#ifndef __ARA_COM_VSOMEIP__AIRBAGOBJECT_H__
#define __ARA_COM_VSOMEIP__AIRBAGOBJECT_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct AirBagObject {
public:
	std::uint8_t Airbag1;
	std::uint8_t Airbag2;
	std::uint8_t Airbag3;
	std::uint8_t Airbag4;
	std::uint8_t Airbag5;
	std::uint8_t Airbag6;
	std::uint8_t Airbag7;
	std::uint8_t Airbag8;
	std::uint8_t Airbag9;
	std::uint8_t Airbag10;
	std::uint8_t Airbag11;
	std::uint8_t Airbag12;
	std::uint8_t Airbag13;
	std::uint8_t Airbag14;
	std::uint8_t Airbag15;
	std::uint8_t Airbag16;
	std::uint8_t Airbag17;
	std::uint8_t Airbag18;
	std::uint8_t Airbag19;
	std::uint8_t Airbag20;
	std::uint8_t LumbarAirBag1;
	std::uint8_t LumbarAirBag2;
/*
	AirBagObject() {}
	~AirBagObject() {}
	AirBagObject(const std::uint8_t _Airbag1,const std::uint8_t _Airbag2,const std::uint8_t _Airbag3,const std::uint8_t _Airbag4,const std::uint8_t _Airbag5,const std::uint8_t _Airbag6,const std::uint8_t _Airbag7,const std::uint8_t _Airbag8,const std::uint8_t _Airbag9,const std::uint8_t _Airbag10,const std::uint8_t _Airbag11,const std::uint8_t _Airbag12,const std::uint8_t _Airbag13,const std::uint8_t _Airbag14,const std::uint8_t _Airbag15,const std::uint8_t _Airbag16,const std::uint8_t _Airbag17,const std::uint8_t _Airbag18,const std::uint8_t _Airbag19,const std::uint8_t _Airbag20,const std::uint8_t _LumbarAirBag1,const std::uint8_t _LumbarAirBag2):Airbag1(_Airbag1),Airbag2(_Airbag2),Airbag3(_Airbag3),Airbag4(_Airbag4),Airbag5(_Airbag5),Airbag6(_Airbag6),Airbag7(_Airbag7),Airbag8(_Airbag8),Airbag9(_Airbag9),Airbag10(_Airbag10),Airbag11(_Airbag11),Airbag12(_Airbag12),Airbag13(_Airbag13),Airbag14(_Airbag14),Airbag15(_Airbag15),Airbag16(_Airbag16),Airbag17(_Airbag17),Airbag18(_Airbag18),Airbag19(_Airbag19),Airbag20(_Airbag20),LumbarAirBag1(_LumbarAirBag1),LumbarAirBag2(_LumbarAirBag2) {}
	AirBagObject(const AirBagObject &_x){
		Airbag1 = _x.Airbag1;
		Airbag2 = _x.Airbag2;
		Airbag3 = _x.Airbag3;
		Airbag4 = _x.Airbag4;
		Airbag5 = _x.Airbag5;
		Airbag6 = _x.Airbag6;
		Airbag7 = _x.Airbag7;
		Airbag8 = _x.Airbag8;
		Airbag9 = _x.Airbag9;
		Airbag10 = _x.Airbag10;
		Airbag11 = _x.Airbag11;
		Airbag12 = _x.Airbag12;
		Airbag13 = _x.Airbag13;
		Airbag14 = _x.Airbag14;
		Airbag15 = _x.Airbag15;
		Airbag16 = _x.Airbag16;
		Airbag17 = _x.Airbag17;
		Airbag18 = _x.Airbag18;
		Airbag19 = _x.Airbag19;
		Airbag20 = _x.Airbag20;
		LumbarAirBag1 = _x.LumbarAirBag1;
		LumbarAirBag2 = _x.LumbarAirBag2;
	}
	AirBagObject(AirBagObject &&_x){
		Airbag1 = std::move(_x.Airbag1);
		Airbag2 = std::move(_x.Airbag2);
		Airbag3 = std::move(_x.Airbag3);
		Airbag4 = std::move(_x.Airbag4);
		Airbag5 = std::move(_x.Airbag5);
		Airbag6 = std::move(_x.Airbag6);
		Airbag7 = std::move(_x.Airbag7);
		Airbag8 = std::move(_x.Airbag8);
		Airbag9 = std::move(_x.Airbag9);
		Airbag10 = std::move(_x.Airbag10);
		Airbag11 = std::move(_x.Airbag11);
		Airbag12 = std::move(_x.Airbag12);
		Airbag13 = std::move(_x.Airbag13);
		Airbag14 = std::move(_x.Airbag14);
		Airbag15 = std::move(_x.Airbag15);
		Airbag16 = std::move(_x.Airbag16);
		Airbag17 = std::move(_x.Airbag17);
		Airbag18 = std::move(_x.Airbag18);
		Airbag19 = std::move(_x.Airbag19);
		Airbag20 = std::move(_x.Airbag20);
		LumbarAirBag1 = std::move(_x.LumbarAirBag1);
		LumbarAirBag2 = std::move(_x.LumbarAirBag2);
	}
	AirBagObject& operator=(const AirBagObject &_x){
		Airbag1 = _x.Airbag1;
		Airbag2 = _x.Airbag2;
		Airbag3 = _x.Airbag3;
		Airbag4 = _x.Airbag4;
		Airbag5 = _x.Airbag5;
		Airbag6 = _x.Airbag6;
		Airbag7 = _x.Airbag7;
		Airbag8 = _x.Airbag8;
		Airbag9 = _x.Airbag9;
		Airbag10 = _x.Airbag10;
		Airbag11 = _x.Airbag11;
		Airbag12 = _x.Airbag12;
		Airbag13 = _x.Airbag13;
		Airbag14 = _x.Airbag14;
		Airbag15 = _x.Airbag15;
		Airbag16 = _x.Airbag16;
		Airbag17 = _x.Airbag17;
		Airbag18 = _x.Airbag18;
		Airbag19 = _x.Airbag19;
		Airbag20 = _x.Airbag20;
		LumbarAirBag1 = _x.LumbarAirBag1;
		LumbarAirBag2 = _x.LumbarAirBag2;
		return *this;
	}
	AirBagObject& operator=(AirBagObject &&_x){
		Airbag1 = std::move(_x.Airbag1);
		Airbag2 = std::move(_x.Airbag2);
		Airbag3 = std::move(_x.Airbag3);
		Airbag4 = std::move(_x.Airbag4);
		Airbag5 = std::move(_x.Airbag5);
		Airbag6 = std::move(_x.Airbag6);
		Airbag7 = std::move(_x.Airbag7);
		Airbag8 = std::move(_x.Airbag8);
		Airbag9 = std::move(_x.Airbag9);
		Airbag10 = std::move(_x.Airbag10);
		Airbag11 = std::move(_x.Airbag11);
		Airbag12 = std::move(_x.Airbag12);
		Airbag13 = std::move(_x.Airbag13);
		Airbag14 = std::move(_x.Airbag14);
		Airbag15 = std::move(_x.Airbag15);
		Airbag16 = std::move(_x.Airbag16);
		Airbag17 = std::move(_x.Airbag17);
		Airbag18 = std::move(_x.Airbag18);
		Airbag19 = std::move(_x.Airbag19);
		Airbag20 = std::move(_x.Airbag20);
		LumbarAirBag1 = std::move(_x.LumbarAirBag1);
		LumbarAirBag2 = std::move(_x.LumbarAirBag2);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(Airbag1);
		fun(Airbag2);
		fun(Airbag3);
		fun(Airbag4);
		fun(Airbag5);
		fun(Airbag6);
		fun(Airbag7);
		fun(Airbag8);
		fun(Airbag9);
		fun(Airbag10);
		fun(Airbag11);
		fun(Airbag12);
		fun(Airbag13);
		fun(Airbag14);
		fun(Airbag15);
		fun(Airbag16);
		fun(Airbag17);
		fun(Airbag18);
		fun(Airbag19);
		fun(Airbag20);
		fun(LumbarAirBag1);
		fun(LumbarAirBag2);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(Airbag1);
		fun(Airbag2);
		fun(Airbag3);
		fun(Airbag4);
		fun(Airbag5);
		fun(Airbag6);
		fun(Airbag7);
		fun(Airbag8);
		fun(Airbag9);
		fun(Airbag10);
		fun(Airbag11);
		fun(Airbag12);
		fun(Airbag13);
		fun(Airbag14);
		fun(Airbag15);
		fun(Airbag16);
		fun(Airbag17);
		fun(Airbag18);
		fun(Airbag19);
		fun(Airbag20);
		fun(LumbarAirBag1);
		fun(LumbarAirBag2);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (Airbag1);
		fun << (Airbag2);
		fun << (Airbag3);
		fun << (Airbag4);
		fun << (Airbag5);
		fun << (Airbag6);
		fun << (Airbag7);
		fun << (Airbag8);
		fun << (Airbag9);
		fun << (Airbag10);
		fun << (Airbag11);
		fun << (Airbag12);
		fun << (Airbag13);
		fun << (Airbag14);
		fun << (Airbag15);
		fun << (Airbag16);
		fun << (Airbag17);
		fun << (Airbag18);
		fun << (Airbag19);
		fun << (Airbag20);
		fun << (LumbarAirBag1);
		fun << (LumbarAirBag2);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (Airbag1);
		fun >> (Airbag2);
		fun >> (Airbag3);
		fun >> (Airbag4);
		fun >> (Airbag5);
		fun >> (Airbag6);
		fun >> (Airbag7);
		fun >> (Airbag8);
		fun >> (Airbag9);
		fun >> (Airbag10);
		fun >> (Airbag11);
		fun >> (Airbag12);
		fun >> (Airbag13);
		fun >> (Airbag14);
		fun >> (Airbag15);
		fun >> (Airbag16);
		fun >> (Airbag17);
		fun >> (Airbag18);
		fun >> (Airbag19);
		fun >> (Airbag20);
		fun >> (LumbarAirBag1);
		fun >> (LumbarAirBag2);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__AIRBAGOBJECT_H__
