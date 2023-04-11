#ifndef ____STRUCT_PERSONSEATBELTST_H__
#define ____STRUCT_PERSONSEATBELTST_H__


#include "cstdint"






struct Struct_PersonSeatBeltSt {
public:
	std::uint8_t Uint8_SeatPositionID;
	bool Bool_PersonSeatBeltSt;
/*
	Struct_PersonSeatBeltSt() {}
	~Struct_PersonSeatBeltSt() {}
	Struct_PersonSeatBeltSt(const std::uint8_t _Uint8_SeatPositionID,const bool _Bool_PersonSeatBeltSt):Uint8_SeatPositionID(_Uint8_SeatPositionID),Bool_PersonSeatBeltSt(_Bool_PersonSeatBeltSt) {}
	Struct_PersonSeatBeltSt(const Struct_PersonSeatBeltSt &_x){
		Uint8_SeatPositionID = _x.Uint8_SeatPositionID;
		Bool_PersonSeatBeltSt = _x.Bool_PersonSeatBeltSt;
	}
	Struct_PersonSeatBeltSt(Struct_PersonSeatBeltSt &&_x){
		Uint8_SeatPositionID = std::move(_x.Uint8_SeatPositionID);
		Bool_PersonSeatBeltSt = std::move(_x.Bool_PersonSeatBeltSt);
	}
	Struct_PersonSeatBeltSt& operator=(const Struct_PersonSeatBeltSt &_x){
		Uint8_SeatPositionID = _x.Uint8_SeatPositionID;
		Bool_PersonSeatBeltSt = _x.Bool_PersonSeatBeltSt;
		return *this;
	}
	Struct_PersonSeatBeltSt& operator=(Struct_PersonSeatBeltSt &&_x){
		Uint8_SeatPositionID = std::move(_x.Uint8_SeatPositionID);
		Bool_PersonSeatBeltSt = std::move(_x.Bool_PersonSeatBeltSt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(Uint8_SeatPositionID);
		fun(Bool_PersonSeatBeltSt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(Uint8_SeatPositionID);
		fun(Bool_PersonSeatBeltSt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (Uint8_SeatPositionID);
		fun << (Bool_PersonSeatBeltSt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (Uint8_SeatPositionID);
		fun >> (Bool_PersonSeatBeltSt);
	}
};

#endif //____STRUCT_PERSONSEATBELTST_H__
