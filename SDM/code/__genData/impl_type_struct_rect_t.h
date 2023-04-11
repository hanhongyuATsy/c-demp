#ifndef ____STRUCT_RECT_T_H__
#define ____STRUCT_RECT_T_H__


#include "cstdint"






struct Struct_Rect_t {
public:
	std::uint8_t Uint8_IsValid;
	std::int16_t Doulbe_Coord_x;
	std::int16_t Doulbe_Coord_y;
	std::int16_t Doulbe_width;
	std::int16_t Doulbe_height;
/*
	Struct_Rect_t() {}
	~Struct_Rect_t() {}
	Struct_Rect_t(const std::uint8_t _Uint8_IsValid,const std::int16_t _Doulbe_Coord_x,const std::int16_t _Doulbe_Coord_y,const std::int16_t _Doulbe_width,const std::int16_t _Doulbe_height):Uint8_IsValid(_Uint8_IsValid),Doulbe_Coord_x(_Doulbe_Coord_x),Doulbe_Coord_y(_Doulbe_Coord_y),Doulbe_width(_Doulbe_width),Doulbe_height(_Doulbe_height) {}
	Struct_Rect_t(const Struct_Rect_t &_x){
		Uint8_IsValid = _x.Uint8_IsValid;
		Doulbe_Coord_x = _x.Doulbe_Coord_x;
		Doulbe_Coord_y = _x.Doulbe_Coord_y;
		Doulbe_width = _x.Doulbe_width;
		Doulbe_height = _x.Doulbe_height;
	}
	Struct_Rect_t(Struct_Rect_t &&_x){
		Uint8_IsValid = std::move(_x.Uint8_IsValid);
		Doulbe_Coord_x = std::move(_x.Doulbe_Coord_x);
		Doulbe_Coord_y = std::move(_x.Doulbe_Coord_y);
		Doulbe_width = std::move(_x.Doulbe_width);
		Doulbe_height = std::move(_x.Doulbe_height);
	}
	Struct_Rect_t& operator=(const Struct_Rect_t &_x){
		Uint8_IsValid = _x.Uint8_IsValid;
		Doulbe_Coord_x = _x.Doulbe_Coord_x;
		Doulbe_Coord_y = _x.Doulbe_Coord_y;
		Doulbe_width = _x.Doulbe_width;
		Doulbe_height = _x.Doulbe_height;
		return *this;
	}
	Struct_Rect_t& operator=(Struct_Rect_t &&_x){
		Uint8_IsValid = std::move(_x.Uint8_IsValid);
		Doulbe_Coord_x = std::move(_x.Doulbe_Coord_x);
		Doulbe_Coord_y = std::move(_x.Doulbe_Coord_y);
		Doulbe_width = std::move(_x.Doulbe_width);
		Doulbe_height = std::move(_x.Doulbe_height);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(Uint8_IsValid);
		fun(Doulbe_Coord_x);
		fun(Doulbe_Coord_y);
		fun(Doulbe_width);
		fun(Doulbe_height);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(Uint8_IsValid);
		fun(Doulbe_Coord_x);
		fun(Doulbe_Coord_y);
		fun(Doulbe_width);
		fun(Doulbe_height);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (Uint8_IsValid);
		fun << (Doulbe_Coord_x);
		fun << (Doulbe_Coord_y);
		fun << (Doulbe_width);
		fun << (Doulbe_height);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (Uint8_IsValid);
		fun >> (Doulbe_Coord_x);
		fun >> (Doulbe_Coord_y);
		fun >> (Doulbe_width);
		fun >> (Doulbe_height);
	}
};

#endif //____STRUCT_RECT_T_H__
