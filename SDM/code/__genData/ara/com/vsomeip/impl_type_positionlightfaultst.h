#ifndef __ARA_COM_VSOMEIP__POSITIONLIGHTFAULTST_H__
#define __ARA_COM_VSOMEIP__POSITIONLIGHTFAULTST_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct PositionLightFaultSt {
public:
	std::uint8_t FLPositionLightFaultSt;
	std::uint8_t FRPositionLightFaultSt;
	std::uint8_t RLPositionLightFaultSt;
	std::uint8_t RRPositionLightFaultSt;
/*
	PositionLightFaultSt() {}
	~PositionLightFaultSt() {}
	PositionLightFaultSt(const std::uint8_t _FLPositionLightFaultSt,const std::uint8_t _FRPositionLightFaultSt,const std::uint8_t _RLPositionLightFaultSt,const std::uint8_t _RRPositionLightFaultSt):FLPositionLightFaultSt(_FLPositionLightFaultSt),FRPositionLightFaultSt(_FRPositionLightFaultSt),RLPositionLightFaultSt(_RLPositionLightFaultSt),RRPositionLightFaultSt(_RRPositionLightFaultSt) {}
	PositionLightFaultSt(const PositionLightFaultSt &_x){
		FLPositionLightFaultSt = _x.FLPositionLightFaultSt;
		FRPositionLightFaultSt = _x.FRPositionLightFaultSt;
		RLPositionLightFaultSt = _x.RLPositionLightFaultSt;
		RRPositionLightFaultSt = _x.RRPositionLightFaultSt;
	}
	PositionLightFaultSt(PositionLightFaultSt &&_x){
		FLPositionLightFaultSt = std::move(_x.FLPositionLightFaultSt);
		FRPositionLightFaultSt = std::move(_x.FRPositionLightFaultSt);
		RLPositionLightFaultSt = std::move(_x.RLPositionLightFaultSt);
		RRPositionLightFaultSt = std::move(_x.RRPositionLightFaultSt);
	}
	PositionLightFaultSt& operator=(const PositionLightFaultSt &_x){
		FLPositionLightFaultSt = _x.FLPositionLightFaultSt;
		FRPositionLightFaultSt = _x.FRPositionLightFaultSt;
		RLPositionLightFaultSt = _x.RLPositionLightFaultSt;
		RRPositionLightFaultSt = _x.RRPositionLightFaultSt;
		return *this;
	}
	PositionLightFaultSt& operator=(PositionLightFaultSt &&_x){
		FLPositionLightFaultSt = std::move(_x.FLPositionLightFaultSt);
		FRPositionLightFaultSt = std::move(_x.FRPositionLightFaultSt);
		RLPositionLightFaultSt = std::move(_x.RLPositionLightFaultSt);
		RRPositionLightFaultSt = std::move(_x.RRPositionLightFaultSt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(FLPositionLightFaultSt);
		fun(FRPositionLightFaultSt);
		fun(RLPositionLightFaultSt);
		fun(RRPositionLightFaultSt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(FLPositionLightFaultSt);
		fun(FRPositionLightFaultSt);
		fun(RLPositionLightFaultSt);
		fun(RRPositionLightFaultSt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (FLPositionLightFaultSt);
		fun << (FRPositionLightFaultSt);
		fun << (RLPositionLightFaultSt);
		fun << (RRPositionLightFaultSt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (FLPositionLightFaultSt);
		fun >> (FRPositionLightFaultSt);
		fun >> (RLPositionLightFaultSt);
		fun >> (RRPositionLightFaultSt);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__POSITIONLIGHTFAULTST_H__
