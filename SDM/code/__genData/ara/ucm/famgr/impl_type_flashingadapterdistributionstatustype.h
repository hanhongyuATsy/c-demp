#ifndef __ARA_UCM_FAMGR__FLASHINGADAPTERDISTRIBUTIONSTATUSTYPE_H__
#define __ARA_UCM_FAMGR__FLASHINGADAPTERDISTRIBUTIONSTATUSTYPE_H__


#include "impl_type_string.h"
#include "cstdint"





namespace ara
{
namespace ucm
{
namespace famgr
{

struct FlashingAdapterDistributionStatusType {
public:
	String ecuReqId;
	std::uint8_t instCondition;
	std::uint8_t distributionType;
	std::uint8_t powerFlag;
	std::uint32_t rechargeStartSoc;
	std::uint32_t RechargeEndSoc;
	std::uint32_t RechargeDurationSoc;
	std::uint16_t duration;
/*
	FlashingAdapterDistributionStatusType() {}
	~FlashingAdapterDistributionStatusType() {}
	FlashingAdapterDistributionStatusType(const String _ecuReqId,const std::uint8_t _instCondition,const std::uint8_t _distributionType,const std::uint8_t _powerFlag,const std::uint32_t _rechargeStartSoc,const std::uint32_t _RechargeEndSoc,const std::uint32_t _RechargeDurationSoc,const std::uint16_t _duration):ecuReqId(_ecuReqId),instCondition(_instCondition),distributionType(_distributionType),powerFlag(_powerFlag),rechargeStartSoc(_rechargeStartSoc),RechargeEndSoc(_RechargeEndSoc),RechargeDurationSoc(_RechargeDurationSoc),duration(_duration) {}
	FlashingAdapterDistributionStatusType(const FlashingAdapterDistributionStatusType &_x){
		ecuReqId = _x.ecuReqId;
		instCondition = _x.instCondition;
		distributionType = _x.distributionType;
		powerFlag = _x.powerFlag;
		rechargeStartSoc = _x.rechargeStartSoc;
		RechargeEndSoc = _x.RechargeEndSoc;
		RechargeDurationSoc = _x.RechargeDurationSoc;
		duration = _x.duration;
	}
	FlashingAdapterDistributionStatusType(FlashingAdapterDistributionStatusType &&_x){
		ecuReqId = std::move(_x.ecuReqId);
		instCondition = std::move(_x.instCondition);
		distributionType = std::move(_x.distributionType);
		powerFlag = std::move(_x.powerFlag);
		rechargeStartSoc = std::move(_x.rechargeStartSoc);
		RechargeEndSoc = std::move(_x.RechargeEndSoc);
		RechargeDurationSoc = std::move(_x.RechargeDurationSoc);
		duration = std::move(_x.duration);
	}
	FlashingAdapterDistributionStatusType& operator=(const FlashingAdapterDistributionStatusType &_x){
		ecuReqId = _x.ecuReqId;
		instCondition = _x.instCondition;
		distributionType = _x.distributionType;
		powerFlag = _x.powerFlag;
		rechargeStartSoc = _x.rechargeStartSoc;
		RechargeEndSoc = _x.RechargeEndSoc;
		RechargeDurationSoc = _x.RechargeDurationSoc;
		duration = _x.duration;
		return *this;
	}
	FlashingAdapterDistributionStatusType& operator=(FlashingAdapterDistributionStatusType &&_x){
		ecuReqId = std::move(_x.ecuReqId);
		instCondition = std::move(_x.instCondition);
		distributionType = std::move(_x.distributionType);
		powerFlag = std::move(_x.powerFlag);
		rechargeStartSoc = std::move(_x.rechargeStartSoc);
		RechargeEndSoc = std::move(_x.RechargeEndSoc);
		RechargeDurationSoc = std::move(_x.RechargeDurationSoc);
		duration = std::move(_x.duration);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(ecuReqId);
		fun(instCondition);
		fun(distributionType);
		fun(powerFlag);
		fun(rechargeStartSoc);
		fun(RechargeEndSoc);
		fun(RechargeDurationSoc);
		fun(duration);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(ecuReqId);
		fun(instCondition);
		fun(distributionType);
		fun(powerFlag);
		fun(rechargeStartSoc);
		fun(RechargeEndSoc);
		fun(RechargeDurationSoc);
		fun(duration);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (ecuReqId);
		fun << (instCondition);
		fun << (distributionType);
		fun << (powerFlag);
		fun << (rechargeStartSoc);
		fun << (RechargeEndSoc);
		fun << (RechargeDurationSoc);
		fun << (duration);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (ecuReqId);
		fun >> (instCondition);
		fun >> (distributionType);
		fun >> (powerFlag);
		fun >> (rechargeStartSoc);
		fun >> (RechargeEndSoc);
		fun >> (RechargeDurationSoc);
		fun >> (duration);
	}
};

}//ara
}//ucm
}//famgr
#endif //__ARA_UCM_FAMGR__FLASHINGADAPTERDISTRIBUTIONSTATUSTYPE_H__
