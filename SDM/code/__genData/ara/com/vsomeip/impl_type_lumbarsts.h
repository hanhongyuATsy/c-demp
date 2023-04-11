#ifndef __ARA_COM_VSOMEIP__LUMBARSTS_H__
#define __ARA_COM_VSOMEIP__LUMBARSTS_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct LumbarSts {
public:
	std::uint8_t FLSeatLumbar;
	std::uint8_t FRSeatLumbar;
/*
	LumbarSts() {}
	~LumbarSts() {}
	LumbarSts(const std::uint8_t _FLSeatLumbar,const std::uint8_t _FRSeatLumbar):FLSeatLumbar(_FLSeatLumbar),FRSeatLumbar(_FRSeatLumbar) {}
	LumbarSts(const LumbarSts &_x){
		FLSeatLumbar = _x.FLSeatLumbar;
		FRSeatLumbar = _x.FRSeatLumbar;
	}
	LumbarSts(LumbarSts &&_x){
		FLSeatLumbar = std::move(_x.FLSeatLumbar);
		FRSeatLumbar = std::move(_x.FRSeatLumbar);
	}
	LumbarSts& operator=(const LumbarSts &_x){
		FLSeatLumbar = _x.FLSeatLumbar;
		FRSeatLumbar = _x.FRSeatLumbar;
		return *this;
	}
	LumbarSts& operator=(LumbarSts &&_x){
		FLSeatLumbar = std::move(_x.FLSeatLumbar);
		FRSeatLumbar = std::move(_x.FRSeatLumbar);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(FLSeatLumbar);
		fun(FRSeatLumbar);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(FLSeatLumbar);
		fun(FRSeatLumbar);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (FLSeatLumbar);
		fun << (FRSeatLumbar);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (FLSeatLumbar);
		fun >> (FRSeatLumbar);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__LUMBARSTS_H__
