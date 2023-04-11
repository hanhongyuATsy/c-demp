#ifndef ____BDCEOP_H__
#define ____BDCEOP_H__


#include "cstdint"






struct BDCEOP {
public:
	std::uint64_t EOP_1_RollingCounter;
	std::uint64_t EOP_1_Checksum;
	std::uint16_t EOP_SpdAct;
	std::uint8_t EOP_IdcAct;
	std::uint16_t EOP_IphAct;
	std::uint8_t EOP_UdcAct;
	std::uint8_t EOP_Status;
	std::uint8_t EOP_ErrLevel;
	std::uint8_t EOP_duty;
	std::uint64_t EOP_1_FreshnessValue;
	std::uint64_t EOP_1_MAC_Check;
/*
	BDCEOP() {}
	~BDCEOP() {}
	BDCEOP(const std::uint64_t _EOP_1_RollingCounter,const std::uint64_t _EOP_1_Checksum,const std::uint16_t _EOP_SpdAct,const std::uint8_t _EOP_IdcAct,const std::uint16_t _EOP_IphAct,const std::uint8_t _EOP_UdcAct,const std::uint8_t _EOP_Status,const std::uint8_t _EOP_ErrLevel,const std::uint8_t _EOP_duty,const std::uint64_t _EOP_1_FreshnessValue,const std::uint64_t _EOP_1_MAC_Check):EOP_1_RollingCounter(_EOP_1_RollingCounter),EOP_1_Checksum(_EOP_1_Checksum),EOP_SpdAct(_EOP_SpdAct),EOP_IdcAct(_EOP_IdcAct),EOP_IphAct(_EOP_IphAct),EOP_UdcAct(_EOP_UdcAct),EOP_Status(_EOP_Status),EOP_ErrLevel(_EOP_ErrLevel),EOP_duty(_EOP_duty),EOP_1_FreshnessValue(_EOP_1_FreshnessValue),EOP_1_MAC_Check(_EOP_1_MAC_Check) {}
	BDCEOP(const BDCEOP &_x){
		EOP_1_RollingCounter = _x.EOP_1_RollingCounter;
		EOP_1_Checksum = _x.EOP_1_Checksum;
		EOP_SpdAct = _x.EOP_SpdAct;
		EOP_IdcAct = _x.EOP_IdcAct;
		EOP_IphAct = _x.EOP_IphAct;
		EOP_UdcAct = _x.EOP_UdcAct;
		EOP_Status = _x.EOP_Status;
		EOP_ErrLevel = _x.EOP_ErrLevel;
		EOP_duty = _x.EOP_duty;
		EOP_1_FreshnessValue = _x.EOP_1_FreshnessValue;
		EOP_1_MAC_Check = _x.EOP_1_MAC_Check;
	}
	BDCEOP(BDCEOP &&_x){
		EOP_1_RollingCounter = std::move(_x.EOP_1_RollingCounter);
		EOP_1_Checksum = std::move(_x.EOP_1_Checksum);
		EOP_SpdAct = std::move(_x.EOP_SpdAct);
		EOP_IdcAct = std::move(_x.EOP_IdcAct);
		EOP_IphAct = std::move(_x.EOP_IphAct);
		EOP_UdcAct = std::move(_x.EOP_UdcAct);
		EOP_Status = std::move(_x.EOP_Status);
		EOP_ErrLevel = std::move(_x.EOP_ErrLevel);
		EOP_duty = std::move(_x.EOP_duty);
		EOP_1_FreshnessValue = std::move(_x.EOP_1_FreshnessValue);
		EOP_1_MAC_Check = std::move(_x.EOP_1_MAC_Check);
	}
	BDCEOP& operator=(const BDCEOP &_x){
		EOP_1_RollingCounter = _x.EOP_1_RollingCounter;
		EOP_1_Checksum = _x.EOP_1_Checksum;
		EOP_SpdAct = _x.EOP_SpdAct;
		EOP_IdcAct = _x.EOP_IdcAct;
		EOP_IphAct = _x.EOP_IphAct;
		EOP_UdcAct = _x.EOP_UdcAct;
		EOP_Status = _x.EOP_Status;
		EOP_ErrLevel = _x.EOP_ErrLevel;
		EOP_duty = _x.EOP_duty;
		EOP_1_FreshnessValue = _x.EOP_1_FreshnessValue;
		EOP_1_MAC_Check = _x.EOP_1_MAC_Check;
		return *this;
	}
	BDCEOP& operator=(BDCEOP &&_x){
		EOP_1_RollingCounter = std::move(_x.EOP_1_RollingCounter);
		EOP_1_Checksum = std::move(_x.EOP_1_Checksum);
		EOP_SpdAct = std::move(_x.EOP_SpdAct);
		EOP_IdcAct = std::move(_x.EOP_IdcAct);
		EOP_IphAct = std::move(_x.EOP_IphAct);
		EOP_UdcAct = std::move(_x.EOP_UdcAct);
		EOP_Status = std::move(_x.EOP_Status);
		EOP_ErrLevel = std::move(_x.EOP_ErrLevel);
		EOP_duty = std::move(_x.EOP_duty);
		EOP_1_FreshnessValue = std::move(_x.EOP_1_FreshnessValue);
		EOP_1_MAC_Check = std::move(_x.EOP_1_MAC_Check);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(EOP_1_RollingCounter);
		fun(EOP_1_Checksum);
		fun(EOP_SpdAct);
		fun(EOP_IdcAct);
		fun(EOP_IphAct);
		fun(EOP_UdcAct);
		fun(EOP_Status);
		fun(EOP_ErrLevel);
		fun(EOP_duty);
		fun(EOP_1_FreshnessValue);
		fun(EOP_1_MAC_Check);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(EOP_1_RollingCounter);
		fun(EOP_1_Checksum);
		fun(EOP_SpdAct);
		fun(EOP_IdcAct);
		fun(EOP_IphAct);
		fun(EOP_UdcAct);
		fun(EOP_Status);
		fun(EOP_ErrLevel);
		fun(EOP_duty);
		fun(EOP_1_FreshnessValue);
		fun(EOP_1_MAC_Check);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (EOP_1_RollingCounter);
		fun << (EOP_1_Checksum);
		fun << (EOP_SpdAct);
		fun << (EOP_IdcAct);
		fun << (EOP_IphAct);
		fun << (EOP_UdcAct);
		fun << (EOP_Status);
		fun << (EOP_ErrLevel);
		fun << (EOP_duty);
		fun << (EOP_1_FreshnessValue);
		fun << (EOP_1_MAC_Check);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (EOP_1_RollingCounter);
		fun >> (EOP_1_Checksum);
		fun >> (EOP_SpdAct);
		fun >> (EOP_IdcAct);
		fun >> (EOP_IphAct);
		fun >> (EOP_UdcAct);
		fun >> (EOP_Status);
		fun >> (EOP_ErrLevel);
		fun >> (EOP_duty);
		fun >> (EOP_1_FreshnessValue);
		fun >> (EOP_1_MAC_Check);
	}
};

#endif //____BDCEOP_H__
