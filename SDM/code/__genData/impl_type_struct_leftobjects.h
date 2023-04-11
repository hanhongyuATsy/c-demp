#ifndef ____STRUCT_LEFTOBJECTS_H__
#define ____STRUCT_LEFTOBJECTS_H__


#include "cstdint"
#include "impl_type_struct_rect_t.h"






struct Struct_LeftObjects {
public:
	std::uint8_t Uint8_IsValid;
	std::uint8_t Uint8_ObjectsType;
	Struct_Rect_t Struct_Rect;
/*
	Struct_LeftObjects() {}
	~Struct_LeftObjects() {}
	Struct_LeftObjects(const std::uint8_t _Uint8_IsValid,const std::uint8_t _Uint8_ObjectsType,const Struct_Rect_t _Struct_Rect):Uint8_IsValid(_Uint8_IsValid),Uint8_ObjectsType(_Uint8_ObjectsType),Struct_Rect(_Struct_Rect) {}
	Struct_LeftObjects(const Struct_LeftObjects &_x){
		Uint8_IsValid = _x.Uint8_IsValid;
		Uint8_ObjectsType = _x.Uint8_ObjectsType;
		Struct_Rect = _x.Struct_Rect;
	}
	Struct_LeftObjects(Struct_LeftObjects &&_x){
		Uint8_IsValid = std::move(_x.Uint8_IsValid);
		Uint8_ObjectsType = std::move(_x.Uint8_ObjectsType);
		Struct_Rect = std::move(_x.Struct_Rect);
	}
	Struct_LeftObjects& operator=(const Struct_LeftObjects &_x){
		Uint8_IsValid = _x.Uint8_IsValid;
		Uint8_ObjectsType = _x.Uint8_ObjectsType;
		Struct_Rect = _x.Struct_Rect;
		return *this;
	}
	Struct_LeftObjects& operator=(Struct_LeftObjects &&_x){
		Uint8_IsValid = std::move(_x.Uint8_IsValid);
		Uint8_ObjectsType = std::move(_x.Uint8_ObjectsType);
		Struct_Rect = std::move(_x.Struct_Rect);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(Uint8_IsValid);
		fun(Uint8_ObjectsType);
		fun(Struct_Rect);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(Uint8_IsValid);
		fun(Uint8_ObjectsType);
		fun(Struct_Rect);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (Uint8_IsValid);
		fun << (Uint8_ObjectsType);
		fun << (Struct_Rect);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (Uint8_IsValid);
		fun >> (Uint8_ObjectsType);
		fun >> (Struct_Rect);
	}
};

#endif //____STRUCT_LEFTOBJECTS_H__
