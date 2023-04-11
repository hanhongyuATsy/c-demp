#ifndef ____STRUCT_CHILDST_H__
#define ____STRUCT_CHILDST_H__


#include "cstdint"






struct Struct_ChildSt {
public:
	std::uint8_t Uint8_SeatPositionID;
	bool Child;
/*
	Struct_ChildSt() {}
	~Struct_ChildSt() {}
	Struct_ChildSt(const std::uint8_t _Uint8_SeatPositionID,const bool _Child):Uint8_SeatPositionID(_Uint8_SeatPositionID),Child(_Child) {}
	Struct_ChildSt(const Struct_ChildSt &_x){
		Uint8_SeatPositionID = _x.Uint8_SeatPositionID;
		Child = _x.Child;
	}
	Struct_ChildSt(Struct_ChildSt &&_x){
		Uint8_SeatPositionID = std::move(_x.Uint8_SeatPositionID);
		Child = std::move(_x.Child);
	}
	Struct_ChildSt& operator=(const Struct_ChildSt &_x){
		Uint8_SeatPositionID = _x.Uint8_SeatPositionID;
		Child = _x.Child;
		return *this;
	}
	Struct_ChildSt& operator=(Struct_ChildSt &&_x){
		Uint8_SeatPositionID = std::move(_x.Uint8_SeatPositionID);
		Child = std::move(_x.Child);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(Uint8_SeatPositionID);
		fun(Child);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(Uint8_SeatPositionID);
		fun(Child);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (Uint8_SeatPositionID);
		fun << (Child);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (Uint8_SeatPositionID);
		fun >> (Child);
	}
};

#endif //____STRUCT_CHILDST_H__
