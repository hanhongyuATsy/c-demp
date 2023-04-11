#ifndef __ARA_COM_VSOMEIP__LUMBARMASSAGEOBJECT_H__
#define __ARA_COM_VSOMEIP__LUMBARMASSAGEOBJECT_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct LumbarMassageObject {
public:
	std::uint8_t FLSeat;
	std::uint8_t FRSeat;
/*
	LumbarMassageObject() {}
	~LumbarMassageObject() {}
	LumbarMassageObject(const std::uint8_t _FLSeat,const std::uint8_t _FRSeat):FLSeat(_FLSeat),FRSeat(_FRSeat) {}
	LumbarMassageObject(const LumbarMassageObject &_x){
		FLSeat = _x.FLSeat;
		FRSeat = _x.FRSeat;
	}
	LumbarMassageObject(LumbarMassageObject &&_x){
		FLSeat = std::move(_x.FLSeat);
		FRSeat = std::move(_x.FRSeat);
	}
	LumbarMassageObject& operator=(const LumbarMassageObject &_x){
		FLSeat = _x.FLSeat;
		FRSeat = _x.FRSeat;
		return *this;
	}
	LumbarMassageObject& operator=(LumbarMassageObject &&_x){
		FLSeat = std::move(_x.FLSeat);
		FRSeat = std::move(_x.FRSeat);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(FLSeat);
		fun(FRSeat);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(FLSeat);
		fun(FRSeat);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (FLSeat);
		fun << (FRSeat);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (FLSeat);
		fun >> (FRSeat);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__LUMBARMASSAGEOBJECT_H__
