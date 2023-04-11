#ifndef ____STRUCT_DRIVERFACERECTANGLE_H__
#define ____STRUCT_DRIVERFACERECTANGLE_H__


#include "impl_type_struct_rect_t.h"






struct Struct_DriverFaceRectangle {
public:
	Struct_Rect_t Struct_DriverFaceRect;
/*
	Struct_DriverFaceRectangle() {}
	~Struct_DriverFaceRectangle() {}
	Struct_DriverFaceRectangle(const Struct_Rect_t _Struct_DriverFaceRect):Struct_DriverFaceRect(_Struct_DriverFaceRect) {}
	Struct_DriverFaceRectangle(const Struct_DriverFaceRectangle &_x){
		Struct_DriverFaceRect = _x.Struct_DriverFaceRect;
	}
	Struct_DriverFaceRectangle(Struct_DriverFaceRectangle &&_x){
		Struct_DriverFaceRect = std::move(_x.Struct_DriverFaceRect);
	}
	Struct_DriverFaceRectangle& operator=(const Struct_DriverFaceRectangle &_x){
		Struct_DriverFaceRect = _x.Struct_DriverFaceRect;
		return *this;
	}
	Struct_DriverFaceRectangle& operator=(Struct_DriverFaceRectangle &&_x){
		Struct_DriverFaceRect = std::move(_x.Struct_DriverFaceRect);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(Struct_DriverFaceRect);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(Struct_DriverFaceRect);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (Struct_DriverFaceRect);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (Struct_DriverFaceRect);
	}
};

#endif //____STRUCT_DRIVERFACERECTANGLE_H__
