#ifndef ____STRUCT_PERSONBEHAVIOR_H__
#define ____STRUCT_PERSONBEHAVIOR_H__


#include "cstdint"






struct Struct_PersonBehavior {
public:
	std::uint8_t Uint8_SeatPositionID;
	std::uint8_t Uint8_Smoking;
	std::uint8_t Uint8_Phoning;
	std::uint8_t Uint8_Drinking;
/*
	Struct_PersonBehavior() {}
	~Struct_PersonBehavior() {}
	Struct_PersonBehavior(const std::uint8_t _Uint8_SeatPositionID,const std::uint8_t _Uint8_Smoking,const std::uint8_t _Uint8_Phoning,const std::uint8_t _Uint8_Drinking):Uint8_SeatPositionID(_Uint8_SeatPositionID),Uint8_Smoking(_Uint8_Smoking),Uint8_Phoning(_Uint8_Phoning),Uint8_Drinking(_Uint8_Drinking) {}
	Struct_PersonBehavior(const Struct_PersonBehavior &_x){
		Uint8_SeatPositionID = _x.Uint8_SeatPositionID;
		Uint8_Smoking = _x.Uint8_Smoking;
		Uint8_Phoning = _x.Uint8_Phoning;
		Uint8_Drinking = _x.Uint8_Drinking;
	}
	Struct_PersonBehavior(Struct_PersonBehavior &&_x){
		Uint8_SeatPositionID = std::move(_x.Uint8_SeatPositionID);
		Uint8_Smoking = std::move(_x.Uint8_Smoking);
		Uint8_Phoning = std::move(_x.Uint8_Phoning);
		Uint8_Drinking = std::move(_x.Uint8_Drinking);
	}
	Struct_PersonBehavior& operator=(const Struct_PersonBehavior &_x){
		Uint8_SeatPositionID = _x.Uint8_SeatPositionID;
		Uint8_Smoking = _x.Uint8_Smoking;
		Uint8_Phoning = _x.Uint8_Phoning;
		Uint8_Drinking = _x.Uint8_Drinking;
		return *this;
	}
	Struct_PersonBehavior& operator=(Struct_PersonBehavior &&_x){
		Uint8_SeatPositionID = std::move(_x.Uint8_SeatPositionID);
		Uint8_Smoking = std::move(_x.Uint8_Smoking);
		Uint8_Phoning = std::move(_x.Uint8_Phoning);
		Uint8_Drinking = std::move(_x.Uint8_Drinking);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(Uint8_SeatPositionID);
		fun(Uint8_Smoking);
		fun(Uint8_Phoning);
		fun(Uint8_Drinking);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(Uint8_SeatPositionID);
		fun(Uint8_Smoking);
		fun(Uint8_Phoning);
		fun(Uint8_Drinking);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (Uint8_SeatPositionID);
		fun << (Uint8_Smoking);
		fun << (Uint8_Phoning);
		fun << (Uint8_Drinking);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (Uint8_SeatPositionID);
		fun >> (Uint8_Smoking);
		fun >> (Uint8_Phoning);
		fun >> (Uint8_Drinking);
	}
};

#endif //____STRUCT_PERSONBEHAVIOR_H__
