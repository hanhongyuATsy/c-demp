#ifndef __ARA_COM_VSOMEIP__TURNLIGHTFAULTST_H__
#define __ARA_COM_VSOMEIP__TURNLIGHTFAULTST_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct TurnLightFaultSt {
public:
	std::uint8_t FLTurnLightFaultSt;
	std::uint8_t FRTurnLightFaultSt;
	std::uint8_t MLTurnLightFaultSt;
	std::uint8_t MRTurnLightFaultSt;
	std::uint8_t RLTurnLightFaultSt;
	std::uint8_t RRTurnLightFaultSt;
/*
	TurnLightFaultSt() {}
	~TurnLightFaultSt() {}
	TurnLightFaultSt(const std::uint8_t _FLTurnLightFaultSt,const std::uint8_t _FRTurnLightFaultSt,const std::uint8_t _MLTurnLightFaultSt,const std::uint8_t _MRTurnLightFaultSt,const std::uint8_t _RLTurnLightFaultSt,const std::uint8_t _RRTurnLightFaultSt):FLTurnLightFaultSt(_FLTurnLightFaultSt),FRTurnLightFaultSt(_FRTurnLightFaultSt),MLTurnLightFaultSt(_MLTurnLightFaultSt),MRTurnLightFaultSt(_MRTurnLightFaultSt),RLTurnLightFaultSt(_RLTurnLightFaultSt),RRTurnLightFaultSt(_RRTurnLightFaultSt) {}
	TurnLightFaultSt(const TurnLightFaultSt &_x){
		FLTurnLightFaultSt = _x.FLTurnLightFaultSt;
		FRTurnLightFaultSt = _x.FRTurnLightFaultSt;
		MLTurnLightFaultSt = _x.MLTurnLightFaultSt;
		MRTurnLightFaultSt = _x.MRTurnLightFaultSt;
		RLTurnLightFaultSt = _x.RLTurnLightFaultSt;
		RRTurnLightFaultSt = _x.RRTurnLightFaultSt;
	}
	TurnLightFaultSt(TurnLightFaultSt &&_x){
		FLTurnLightFaultSt = std::move(_x.FLTurnLightFaultSt);
		FRTurnLightFaultSt = std::move(_x.FRTurnLightFaultSt);
		MLTurnLightFaultSt = std::move(_x.MLTurnLightFaultSt);
		MRTurnLightFaultSt = std::move(_x.MRTurnLightFaultSt);
		RLTurnLightFaultSt = std::move(_x.RLTurnLightFaultSt);
		RRTurnLightFaultSt = std::move(_x.RRTurnLightFaultSt);
	}
	TurnLightFaultSt& operator=(const TurnLightFaultSt &_x){
		FLTurnLightFaultSt = _x.FLTurnLightFaultSt;
		FRTurnLightFaultSt = _x.FRTurnLightFaultSt;
		MLTurnLightFaultSt = _x.MLTurnLightFaultSt;
		MRTurnLightFaultSt = _x.MRTurnLightFaultSt;
		RLTurnLightFaultSt = _x.RLTurnLightFaultSt;
		RRTurnLightFaultSt = _x.RRTurnLightFaultSt;
		return *this;
	}
	TurnLightFaultSt& operator=(TurnLightFaultSt &&_x){
		FLTurnLightFaultSt = std::move(_x.FLTurnLightFaultSt);
		FRTurnLightFaultSt = std::move(_x.FRTurnLightFaultSt);
		MLTurnLightFaultSt = std::move(_x.MLTurnLightFaultSt);
		MRTurnLightFaultSt = std::move(_x.MRTurnLightFaultSt);
		RLTurnLightFaultSt = std::move(_x.RLTurnLightFaultSt);
		RRTurnLightFaultSt = std::move(_x.RRTurnLightFaultSt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(FLTurnLightFaultSt);
		fun(FRTurnLightFaultSt);
		fun(MLTurnLightFaultSt);
		fun(MRTurnLightFaultSt);
		fun(RLTurnLightFaultSt);
		fun(RRTurnLightFaultSt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(FLTurnLightFaultSt);
		fun(FRTurnLightFaultSt);
		fun(MLTurnLightFaultSt);
		fun(MRTurnLightFaultSt);
		fun(RLTurnLightFaultSt);
		fun(RRTurnLightFaultSt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (FLTurnLightFaultSt);
		fun << (FRTurnLightFaultSt);
		fun << (MLTurnLightFaultSt);
		fun << (MRTurnLightFaultSt);
		fun << (RLTurnLightFaultSt);
		fun << (RRTurnLightFaultSt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (FLTurnLightFaultSt);
		fun >> (FRTurnLightFaultSt);
		fun >> (MLTurnLightFaultSt);
		fun >> (MRTurnLightFaultSt);
		fun >> (RLTurnLightFaultSt);
		fun >> (RRTurnLightFaultSt);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__TURNLIGHTFAULTST_H__
