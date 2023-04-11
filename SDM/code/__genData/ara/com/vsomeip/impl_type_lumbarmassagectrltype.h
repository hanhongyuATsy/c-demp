#ifndef __ARA_COM_VSOMEIP__LUMBARMASSAGECTRLTYPE_H__
#define __ARA_COM_VSOMEIP__LUMBARMASSAGECTRLTYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct LumbarMassageCtrlType {
public:
	std::uint8_t FLSeatLumbarMassage;
	std::uint8_t FRSeatLumbarMassage;
/*
	LumbarMassageCtrlType() {}
	~LumbarMassageCtrlType() {}
	LumbarMassageCtrlType(const std::uint8_t _FLSeatLumbarMassage,const std::uint8_t _FRSeatLumbarMassage):FLSeatLumbarMassage(_FLSeatLumbarMassage),FRSeatLumbarMassage(_FRSeatLumbarMassage) {}
	LumbarMassageCtrlType(const LumbarMassageCtrlType &_x){
		FLSeatLumbarMassage = _x.FLSeatLumbarMassage;
		FRSeatLumbarMassage = _x.FRSeatLumbarMassage;
	}
	LumbarMassageCtrlType(LumbarMassageCtrlType &&_x){
		FLSeatLumbarMassage = std::move(_x.FLSeatLumbarMassage);
		FRSeatLumbarMassage = std::move(_x.FRSeatLumbarMassage);
	}
	LumbarMassageCtrlType& operator=(const LumbarMassageCtrlType &_x){
		FLSeatLumbarMassage = _x.FLSeatLumbarMassage;
		FRSeatLumbarMassage = _x.FRSeatLumbarMassage;
		return *this;
	}
	LumbarMassageCtrlType& operator=(LumbarMassageCtrlType &&_x){
		FLSeatLumbarMassage = std::move(_x.FLSeatLumbarMassage);
		FRSeatLumbarMassage = std::move(_x.FRSeatLumbarMassage);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(FLSeatLumbarMassage);
		fun(FRSeatLumbarMassage);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(FLSeatLumbarMassage);
		fun(FRSeatLumbarMassage);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (FLSeatLumbarMassage);
		fun << (FRSeatLumbarMassage);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (FLSeatLumbarMassage);
		fun >> (FRSeatLumbarMassage);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__LUMBARMASSAGECTRLTYPE_H__
