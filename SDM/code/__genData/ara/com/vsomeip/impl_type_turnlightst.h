#ifndef __ARA_COM_VSOMEIP__TURNLIGHTST_H__
#define __ARA_COM_VSOMEIP__TURNLIGHTST_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct TurnLightSt {
public:
	std::uint8_t FLTurnLightSt;
	std::uint8_t FRTurnLightSt;
	std::uint8_t MLTurnLightSt;
	std::uint8_t MRTurnLightSt;
	std::uint8_t RLTurnLightSt;
	std::uint8_t RRTurnLightSt;
/*
	TurnLightSt() {}
	~TurnLightSt() {}
	TurnLightSt(const std::uint8_t _FLTurnLightSt,const std::uint8_t _FRTurnLightSt,const std::uint8_t _MLTurnLightSt,const std::uint8_t _MRTurnLightSt,const std::uint8_t _RLTurnLightSt,const std::uint8_t _RRTurnLightSt):FLTurnLightSt(_FLTurnLightSt),FRTurnLightSt(_FRTurnLightSt),MLTurnLightSt(_MLTurnLightSt),MRTurnLightSt(_MRTurnLightSt),RLTurnLightSt(_RLTurnLightSt),RRTurnLightSt(_RRTurnLightSt) {}
	TurnLightSt(const TurnLightSt &_x){
		FLTurnLightSt = _x.FLTurnLightSt;
		FRTurnLightSt = _x.FRTurnLightSt;
		MLTurnLightSt = _x.MLTurnLightSt;
		MRTurnLightSt = _x.MRTurnLightSt;
		RLTurnLightSt = _x.RLTurnLightSt;
		RRTurnLightSt = _x.RRTurnLightSt;
	}
	TurnLightSt(TurnLightSt &&_x){
		FLTurnLightSt = std::move(_x.FLTurnLightSt);
		FRTurnLightSt = std::move(_x.FRTurnLightSt);
		MLTurnLightSt = std::move(_x.MLTurnLightSt);
		MRTurnLightSt = std::move(_x.MRTurnLightSt);
		RLTurnLightSt = std::move(_x.RLTurnLightSt);
		RRTurnLightSt = std::move(_x.RRTurnLightSt);
	}
	TurnLightSt& operator=(const TurnLightSt &_x){
		FLTurnLightSt = _x.FLTurnLightSt;
		FRTurnLightSt = _x.FRTurnLightSt;
		MLTurnLightSt = _x.MLTurnLightSt;
		MRTurnLightSt = _x.MRTurnLightSt;
		RLTurnLightSt = _x.RLTurnLightSt;
		RRTurnLightSt = _x.RRTurnLightSt;
		return *this;
	}
	TurnLightSt& operator=(TurnLightSt &&_x){
		FLTurnLightSt = std::move(_x.FLTurnLightSt);
		FRTurnLightSt = std::move(_x.FRTurnLightSt);
		MLTurnLightSt = std::move(_x.MLTurnLightSt);
		MRTurnLightSt = std::move(_x.MRTurnLightSt);
		RLTurnLightSt = std::move(_x.RLTurnLightSt);
		RRTurnLightSt = std::move(_x.RRTurnLightSt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(FLTurnLightSt);
		fun(FRTurnLightSt);
		fun(MLTurnLightSt);
		fun(MRTurnLightSt);
		fun(RLTurnLightSt);
		fun(RRTurnLightSt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(FLTurnLightSt);
		fun(FRTurnLightSt);
		fun(MLTurnLightSt);
		fun(MRTurnLightSt);
		fun(RLTurnLightSt);
		fun(RRTurnLightSt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (FLTurnLightSt);
		fun << (FRTurnLightSt);
		fun << (MLTurnLightSt);
		fun << (MRTurnLightSt);
		fun << (RLTurnLightSt);
		fun << (RRTurnLightSt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (FLTurnLightSt);
		fun >> (FRTurnLightSt);
		fun >> (MLTurnLightSt);
		fun >> (MRTurnLightSt);
		fun >> (RLTurnLightSt);
		fun >> (RRTurnLightSt);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__TURNLIGHTST_H__
