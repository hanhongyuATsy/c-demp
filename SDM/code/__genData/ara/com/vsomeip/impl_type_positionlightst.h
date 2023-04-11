#ifndef __ARA_COM_VSOMEIP__POSITIONLIGHTST_H__
#define __ARA_COM_VSOMEIP__POSITIONLIGHTST_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct PositionLightSt {
public:
	std::uint8_t FLPositionLightSt;
	std::uint8_t FRPositionLightSt;
	std::uint8_t RLPositionLightSt;
	std::uint8_t RRPositionLightSt;
/*
	PositionLightSt() {}
	~PositionLightSt() {}
	PositionLightSt(const std::uint8_t _FLPositionLightSt,const std::uint8_t _FRPositionLightSt,const std::uint8_t _RLPositionLightSt,const std::uint8_t _RRPositionLightSt):FLPositionLightSt(_FLPositionLightSt),FRPositionLightSt(_FRPositionLightSt),RLPositionLightSt(_RLPositionLightSt),RRPositionLightSt(_RRPositionLightSt) {}
	PositionLightSt(const PositionLightSt &_x){
		FLPositionLightSt = _x.FLPositionLightSt;
		FRPositionLightSt = _x.FRPositionLightSt;
		RLPositionLightSt = _x.RLPositionLightSt;
		RRPositionLightSt = _x.RRPositionLightSt;
	}
	PositionLightSt(PositionLightSt &&_x){
		FLPositionLightSt = std::move(_x.FLPositionLightSt);
		FRPositionLightSt = std::move(_x.FRPositionLightSt);
		RLPositionLightSt = std::move(_x.RLPositionLightSt);
		RRPositionLightSt = std::move(_x.RRPositionLightSt);
	}
	PositionLightSt& operator=(const PositionLightSt &_x){
		FLPositionLightSt = _x.FLPositionLightSt;
		FRPositionLightSt = _x.FRPositionLightSt;
		RLPositionLightSt = _x.RLPositionLightSt;
		RRPositionLightSt = _x.RRPositionLightSt;
		return *this;
	}
	PositionLightSt& operator=(PositionLightSt &&_x){
		FLPositionLightSt = std::move(_x.FLPositionLightSt);
		FRPositionLightSt = std::move(_x.FRPositionLightSt);
		RLPositionLightSt = std::move(_x.RLPositionLightSt);
		RRPositionLightSt = std::move(_x.RRPositionLightSt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(FLPositionLightSt);
		fun(FRPositionLightSt);
		fun(RLPositionLightSt);
		fun(RRPositionLightSt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(FLPositionLightSt);
		fun(FRPositionLightSt);
		fun(RLPositionLightSt);
		fun(RRPositionLightSt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (FLPositionLightSt);
		fun << (FRPositionLightSt);
		fun << (RLPositionLightSt);
		fun << (RRPositionLightSt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (FLPositionLightSt);
		fun >> (FRPositionLightSt);
		fun >> (RLPositionLightSt);
		fun >> (RRPositionLightSt);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__POSITIONLIGHTST_H__
