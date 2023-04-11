#ifndef ____STRUCT_PERSONATTRIBUTES_H__
#define ____STRUCT_PERSONATTRIBUTES_H__


#include "cstdint"
#include "impl_type_struct_rect_t.h"






struct Struct_PersonAttributes {
public:
	std::uint8_t Uint8_SeatPositionID;
	std::uint8_t Uint8_Gender;
	float Float_Age;
	std::uint8_t Uint8_Emotion;
	Struct_Rect_t Struct_Rect;
/*
	Struct_PersonAttributes() {}
	~Struct_PersonAttributes() {}
	Struct_PersonAttributes(const std::uint8_t _Uint8_SeatPositionID,const std::uint8_t _Uint8_Gender,const float _Float_Age,const std::uint8_t _Uint8_Emotion,const Struct_Rect_t _Struct_Rect):Uint8_SeatPositionID(_Uint8_SeatPositionID),Uint8_Gender(_Uint8_Gender),Float_Age(_Float_Age),Uint8_Emotion(_Uint8_Emotion),Struct_Rect(_Struct_Rect) {}
	Struct_PersonAttributes(const Struct_PersonAttributes &_x){
		Uint8_SeatPositionID = _x.Uint8_SeatPositionID;
		Uint8_Gender = _x.Uint8_Gender;
		Float_Age = _x.Float_Age;
		Uint8_Emotion = _x.Uint8_Emotion;
		Struct_Rect = _x.Struct_Rect;
	}
	Struct_PersonAttributes(Struct_PersonAttributes &&_x){
		Uint8_SeatPositionID = std::move(_x.Uint8_SeatPositionID);
		Uint8_Gender = std::move(_x.Uint8_Gender);
		Float_Age = std::move(_x.Float_Age);
		Uint8_Emotion = std::move(_x.Uint8_Emotion);
		Struct_Rect = std::move(_x.Struct_Rect);
	}
	Struct_PersonAttributes& operator=(const Struct_PersonAttributes &_x){
		Uint8_SeatPositionID = _x.Uint8_SeatPositionID;
		Uint8_Gender = _x.Uint8_Gender;
		Float_Age = _x.Float_Age;
		Uint8_Emotion = _x.Uint8_Emotion;
		Struct_Rect = _x.Struct_Rect;
		return *this;
	}
	Struct_PersonAttributes& operator=(Struct_PersonAttributes &&_x){
		Uint8_SeatPositionID = std::move(_x.Uint8_SeatPositionID);
		Uint8_Gender = std::move(_x.Uint8_Gender);
		Float_Age = std::move(_x.Float_Age);
		Uint8_Emotion = std::move(_x.Uint8_Emotion);
		Struct_Rect = std::move(_x.Struct_Rect);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(Uint8_SeatPositionID);
		fun(Uint8_Gender);
		fun(Float_Age);
		fun(Uint8_Emotion);
		fun(Struct_Rect);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(Uint8_SeatPositionID);
		fun(Uint8_Gender);
		fun(Float_Age);
		fun(Uint8_Emotion);
		fun(Struct_Rect);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (Uint8_SeatPositionID);
		fun << (Uint8_Gender);
		fun << (Float_Age);
		fun << (Uint8_Emotion);
		fun << (Struct_Rect);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (Uint8_SeatPositionID);
		fun >> (Uint8_Gender);
		fun >> (Float_Age);
		fun >> (Uint8_Emotion);
		fun >> (Struct_Rect);
	}
};

#endif //____STRUCT_PERSONATTRIBUTES_H__
