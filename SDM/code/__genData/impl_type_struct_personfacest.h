#ifndef ____STRUCT_PERSONFACEST_H__
#define ____STRUCT_PERSONFACEST_H__


#include "cstdint"






struct Struct_PersonFaceSt {
public:
	std::uint8_t Uint8_SeatPositionID;
	float Float_MouthSt;
	float Float_EyeOpenSt;
	bool Bool_GlassWearSt;
/*
	Struct_PersonFaceSt() {}
	~Struct_PersonFaceSt() {}
	Struct_PersonFaceSt(const std::uint8_t _Uint8_SeatPositionID,const float _Float_MouthSt,const float _Float_EyeOpenSt,const bool _Bool_GlassWearSt):Uint8_SeatPositionID(_Uint8_SeatPositionID),Float_MouthSt(_Float_MouthSt),Float_EyeOpenSt(_Float_EyeOpenSt),Bool_GlassWearSt(_Bool_GlassWearSt) {}
	Struct_PersonFaceSt(const Struct_PersonFaceSt &_x){
		Uint8_SeatPositionID = _x.Uint8_SeatPositionID;
		Float_MouthSt = _x.Float_MouthSt;
		Float_EyeOpenSt = _x.Float_EyeOpenSt;
		Bool_GlassWearSt = _x.Bool_GlassWearSt;
	}
	Struct_PersonFaceSt(Struct_PersonFaceSt &&_x){
		Uint8_SeatPositionID = std::move(_x.Uint8_SeatPositionID);
		Float_MouthSt = std::move(_x.Float_MouthSt);
		Float_EyeOpenSt = std::move(_x.Float_EyeOpenSt);
		Bool_GlassWearSt = std::move(_x.Bool_GlassWearSt);
	}
	Struct_PersonFaceSt& operator=(const Struct_PersonFaceSt &_x){
		Uint8_SeatPositionID = _x.Uint8_SeatPositionID;
		Float_MouthSt = _x.Float_MouthSt;
		Float_EyeOpenSt = _x.Float_EyeOpenSt;
		Bool_GlassWearSt = _x.Bool_GlassWearSt;
		return *this;
	}
	Struct_PersonFaceSt& operator=(Struct_PersonFaceSt &&_x){
		Uint8_SeatPositionID = std::move(_x.Uint8_SeatPositionID);
		Float_MouthSt = std::move(_x.Float_MouthSt);
		Float_EyeOpenSt = std::move(_x.Float_EyeOpenSt);
		Bool_GlassWearSt = std::move(_x.Bool_GlassWearSt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(Uint8_SeatPositionID);
		fun(Float_MouthSt);
		fun(Float_EyeOpenSt);
		fun(Bool_GlassWearSt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(Uint8_SeatPositionID);
		fun(Float_MouthSt);
		fun(Float_EyeOpenSt);
		fun(Bool_GlassWearSt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (Uint8_SeatPositionID);
		fun << (Float_MouthSt);
		fun << (Float_EyeOpenSt);
		fun << (Bool_GlassWearSt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (Uint8_SeatPositionID);
		fun >> (Float_MouthSt);
		fun >> (Float_EyeOpenSt);
		fun >> (Bool_GlassWearSt);
	}
};

#endif //____STRUCT_PERSONFACEST_H__
