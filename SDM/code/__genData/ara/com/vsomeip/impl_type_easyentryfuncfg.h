#ifndef __ARA_COM_VSOMEIP__EASYENTRYFUNCFG_H__
#define __ARA_COM_VSOMEIP__EASYENTRYFUNCFG_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct EasyEntryFunCfg {
public:
	std::uint8_t FLSeatEasyEntry;
	std::uint8_t FRSeatEasyEntry;
	std::uint8_t SteerEasyEntry;
/*
	EasyEntryFunCfg() {}
	~EasyEntryFunCfg() {}
	EasyEntryFunCfg(const std::uint8_t _FLSeatEasyEntry,const std::uint8_t _FRSeatEasyEntry,const std::uint8_t _SteerEasyEntry):FLSeatEasyEntry(_FLSeatEasyEntry),FRSeatEasyEntry(_FRSeatEasyEntry),SteerEasyEntry(_SteerEasyEntry) {}
	EasyEntryFunCfg(const EasyEntryFunCfg &_x){
		FLSeatEasyEntry = _x.FLSeatEasyEntry;
		FRSeatEasyEntry = _x.FRSeatEasyEntry;
		SteerEasyEntry = _x.SteerEasyEntry;
	}
	EasyEntryFunCfg(EasyEntryFunCfg &&_x){
		FLSeatEasyEntry = std::move(_x.FLSeatEasyEntry);
		FRSeatEasyEntry = std::move(_x.FRSeatEasyEntry);
		SteerEasyEntry = std::move(_x.SteerEasyEntry);
	}
	EasyEntryFunCfg& operator=(const EasyEntryFunCfg &_x){
		FLSeatEasyEntry = _x.FLSeatEasyEntry;
		FRSeatEasyEntry = _x.FRSeatEasyEntry;
		SteerEasyEntry = _x.SteerEasyEntry;
		return *this;
	}
	EasyEntryFunCfg& operator=(EasyEntryFunCfg &&_x){
		FLSeatEasyEntry = std::move(_x.FLSeatEasyEntry);
		FRSeatEasyEntry = std::move(_x.FRSeatEasyEntry);
		SteerEasyEntry = std::move(_x.SteerEasyEntry);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(FLSeatEasyEntry);
		fun(FRSeatEasyEntry);
		fun(SteerEasyEntry);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(FLSeatEasyEntry);
		fun(FRSeatEasyEntry);
		fun(SteerEasyEntry);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (FLSeatEasyEntry);
		fun << (FRSeatEasyEntry);
		fun << (SteerEasyEntry);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (FLSeatEasyEntry);
		fun >> (FRSeatEasyEntry);
		fun >> (SteerEasyEntry);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__EASYENTRYFUNCFG_H__
