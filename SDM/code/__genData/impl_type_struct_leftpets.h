#ifndef ____STRUCT_LEFTPETS_H__
#define ____STRUCT_LEFTPETS_H__


#include "cstdint"
#include "impl_type_struct_rect_t.h"






struct Struct_LeftPets {
public:
	std::uint8_t Uint8_IsValid;
	std::uint8_t Uint8_PetType;
	Struct_Rect_t Struct_Rect;
/*
	Struct_LeftPets() {}
	~Struct_LeftPets() {}
	Struct_LeftPets(const std::uint8_t _Uint8_IsValid,const std::uint8_t _Uint8_PetType,const Struct_Rect_t _Struct_Rect):Uint8_IsValid(_Uint8_IsValid),Uint8_PetType(_Uint8_PetType),Struct_Rect(_Struct_Rect) {}
	Struct_LeftPets(const Struct_LeftPets &_x){
		Uint8_IsValid = _x.Uint8_IsValid;
		Uint8_PetType = _x.Uint8_PetType;
		Struct_Rect = _x.Struct_Rect;
	}
	Struct_LeftPets(Struct_LeftPets &&_x){
		Uint8_IsValid = std::move(_x.Uint8_IsValid);
		Uint8_PetType = std::move(_x.Uint8_PetType);
		Struct_Rect = std::move(_x.Struct_Rect);
	}
	Struct_LeftPets& operator=(const Struct_LeftPets &_x){
		Uint8_IsValid = _x.Uint8_IsValid;
		Uint8_PetType = _x.Uint8_PetType;
		Struct_Rect = _x.Struct_Rect;
		return *this;
	}
	Struct_LeftPets& operator=(Struct_LeftPets &&_x){
		Uint8_IsValid = std::move(_x.Uint8_IsValid);
		Uint8_PetType = std::move(_x.Uint8_PetType);
		Struct_Rect = std::move(_x.Struct_Rect);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(Uint8_IsValid);
		fun(Uint8_PetType);
		fun(Struct_Rect);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(Uint8_IsValid);
		fun(Uint8_PetType);
		fun(Struct_Rect);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (Uint8_IsValid);
		fun << (Uint8_PetType);
		fun << (Struct_Rect);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (Uint8_IsValid);
		fun >> (Uint8_PetType);
		fun >> (Struct_Rect);
	}
};

#endif //____STRUCT_LEFTPETS_H__
