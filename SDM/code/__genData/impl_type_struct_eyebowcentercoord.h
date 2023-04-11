#ifndef ____STRUCT_EYEBOWCENTERCOORD_H__
#define ____STRUCT_EYEBOWCENTERCOORD_H__


#include "cstdint"






struct Struct_EyeBowCenterCoord {
public:
	std::uint8_t Uint8_IsValid;
	float Float_Coord_x;
	float Float_Coord_y;
	float Float_Coord_z;
/*
	Struct_EyeBowCenterCoord() {}
	~Struct_EyeBowCenterCoord() {}
	Struct_EyeBowCenterCoord(const std::uint8_t _Uint8_IsValid,const float _Float_Coord_x,const float _Float_Coord_y,const float _Float_Coord_z):Uint8_IsValid(_Uint8_IsValid),Float_Coord_x(_Float_Coord_x),Float_Coord_y(_Float_Coord_y),Float_Coord_z(_Float_Coord_z) {}
	Struct_EyeBowCenterCoord(const Struct_EyeBowCenterCoord &_x){
		Uint8_IsValid = _x.Uint8_IsValid;
		Float_Coord_x = _x.Float_Coord_x;
		Float_Coord_y = _x.Float_Coord_y;
		Float_Coord_z = _x.Float_Coord_z;
	}
	Struct_EyeBowCenterCoord(Struct_EyeBowCenterCoord &&_x){
		Uint8_IsValid = std::move(_x.Uint8_IsValid);
		Float_Coord_x = std::move(_x.Float_Coord_x);
		Float_Coord_y = std::move(_x.Float_Coord_y);
		Float_Coord_z = std::move(_x.Float_Coord_z);
	}
	Struct_EyeBowCenterCoord& operator=(const Struct_EyeBowCenterCoord &_x){
		Uint8_IsValid = _x.Uint8_IsValid;
		Float_Coord_x = _x.Float_Coord_x;
		Float_Coord_y = _x.Float_Coord_y;
		Float_Coord_z = _x.Float_Coord_z;
		return *this;
	}
	Struct_EyeBowCenterCoord& operator=(Struct_EyeBowCenterCoord &&_x){
		Uint8_IsValid = std::move(_x.Uint8_IsValid);
		Float_Coord_x = std::move(_x.Float_Coord_x);
		Float_Coord_y = std::move(_x.Float_Coord_y);
		Float_Coord_z = std::move(_x.Float_Coord_z);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(Uint8_IsValid);
		fun(Float_Coord_x);
		fun(Float_Coord_y);
		fun(Float_Coord_z);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(Uint8_IsValid);
		fun(Float_Coord_x);
		fun(Float_Coord_y);
		fun(Float_Coord_z);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (Uint8_IsValid);
		fun << (Float_Coord_x);
		fun << (Float_Coord_y);
		fun << (Float_Coord_z);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (Uint8_IsValid);
		fun >> (Float_Coord_x);
		fun >> (Float_Coord_y);
		fun >> (Float_Coord_z);
	}
};

#endif //____STRUCT_EYEBOWCENTERCOORD_H__
