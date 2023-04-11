#ifndef __ARA_COM_VSOMEIP__VRCAUTOCHARGECONFIG_H__
#define __ARA_COM_VSOMEIP__VRCAUTOCHARGECONFIG_H__


#include "ara/com/vsomeip/impl_type_vrctime.h"
#include "ara/com/vsomeip/impl_type_vrcrepeatstate.h"
#include "ara/com/vsomeip/impl_type_vrcrepeatsch.h"
#include "ara/com/vsomeip/impl_type_vautochargeendtype.h"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct vRCAutoChargeConfig {
public:
	ara::com::vsomeip::vRCTime StartTime;
	ara::com::vsomeip::vRCTime EndTime;
	ara::com::vsomeip::vRCRepeatState RCRepeatState;
	ara::com::vsomeip::vRCRepeatSch RCRepeatSch;
	ara::com::vsomeip::vAutoChargeEndType AutoChargeEndType;
/*
	vRCAutoChargeConfig() {}
	~vRCAutoChargeConfig() {}
	vRCAutoChargeConfig(const ara::com::vsomeip::vRCTime _StartTime,const ara::com::vsomeip::vRCTime _EndTime,const ara::com::vsomeip::vRCRepeatState _RCRepeatState,const ara::com::vsomeip::vRCRepeatSch _RCRepeatSch,const ara::com::vsomeip::vAutoChargeEndType _AutoChargeEndType):StartTime(_StartTime),EndTime(_EndTime),RCRepeatState(_RCRepeatState),RCRepeatSch(_RCRepeatSch),AutoChargeEndType(_AutoChargeEndType) {}
	vRCAutoChargeConfig(const vRCAutoChargeConfig &_x){
		StartTime = _x.StartTime;
		EndTime = _x.EndTime;
		RCRepeatState = _x.RCRepeatState;
		RCRepeatSch = _x.RCRepeatSch;
		AutoChargeEndType = _x.AutoChargeEndType;
	}
	vRCAutoChargeConfig(vRCAutoChargeConfig &&_x){
		StartTime = std::move(_x.StartTime);
		EndTime = std::move(_x.EndTime);
		RCRepeatState = std::move(_x.RCRepeatState);
		RCRepeatSch = std::move(_x.RCRepeatSch);
		AutoChargeEndType = std::move(_x.AutoChargeEndType);
	}
	vRCAutoChargeConfig& operator=(const vRCAutoChargeConfig &_x){
		StartTime = _x.StartTime;
		EndTime = _x.EndTime;
		RCRepeatState = _x.RCRepeatState;
		RCRepeatSch = _x.RCRepeatSch;
		AutoChargeEndType = _x.AutoChargeEndType;
		return *this;
	}
	vRCAutoChargeConfig& operator=(vRCAutoChargeConfig &&_x){
		StartTime = std::move(_x.StartTime);
		EndTime = std::move(_x.EndTime);
		RCRepeatState = std::move(_x.RCRepeatState);
		RCRepeatSch = std::move(_x.RCRepeatSch);
		AutoChargeEndType = std::move(_x.AutoChargeEndType);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(StartTime);
		fun(EndTime);
		fun(RCRepeatState);
		fun(RCRepeatSch);
		fun(AutoChargeEndType);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(StartTime);
		fun(EndTime);
		fun(RCRepeatState);
		fun(RCRepeatSch);
		fun(AutoChargeEndType);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (StartTime);
		fun << (EndTime);
		fun << (RCRepeatState);
		fun << (RCRepeatSch);
		fun << (AutoChargeEndType);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (StartTime);
		fun >> (EndTime);
		fun >> (RCRepeatState);
		fun >> (RCRepeatSch);
		fun >> (AutoChargeEndType);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__VRCAUTOCHARGECONFIG_H__
