#ifndef ____BDCPWLLIN_H__
#define ____BDCPWLLIN_H__


#include "cstdint"






struct BDCPWLLIN {
public:
	std::uint8_t RLS_AutoSRWindowCloseReq;
	std::uint8_t SR_SunroofTargetPstCtr;
	std::uint8_t SR_SunroofOpeCtr;
	std::uint8_t SR_SunshadeTargetPstCtr;
	std::uint8_t SR_SunshadeOpeCtr;
	std::uint8_t SR_SunroofOpenInhibitReq;
	std::uint8_t SR_SunroofCloseInhibitReq;
	std::uint8_t SR_SunshadeOpenInhibitReq;
	std::uint8_t SR_SunshadeCloseInhibitReq;
	std::uint8_t PWL_RainMonitorEnableReq;
/*
	BDCPWLLIN() {}
	~BDCPWLLIN() {}
	BDCPWLLIN(const std::uint8_t _RLS_AutoSRWindowCloseReq,const std::uint8_t _SR_SunroofTargetPstCtr,const std::uint8_t _SR_SunroofOpeCtr,const std::uint8_t _SR_SunshadeTargetPstCtr,const std::uint8_t _SR_SunshadeOpeCtr,const std::uint8_t _SR_SunroofOpenInhibitReq,const std::uint8_t _SR_SunroofCloseInhibitReq,const std::uint8_t _SR_SunshadeOpenInhibitReq,const std::uint8_t _SR_SunshadeCloseInhibitReq,const std::uint8_t _PWL_RainMonitorEnableReq):RLS_AutoSRWindowCloseReq(_RLS_AutoSRWindowCloseReq),SR_SunroofTargetPstCtr(_SR_SunroofTargetPstCtr),SR_SunroofOpeCtr(_SR_SunroofOpeCtr),SR_SunshadeTargetPstCtr(_SR_SunshadeTargetPstCtr),SR_SunshadeOpeCtr(_SR_SunshadeOpeCtr),SR_SunroofOpenInhibitReq(_SR_SunroofOpenInhibitReq),SR_SunroofCloseInhibitReq(_SR_SunroofCloseInhibitReq),SR_SunshadeOpenInhibitReq(_SR_SunshadeOpenInhibitReq),SR_SunshadeCloseInhibitReq(_SR_SunshadeCloseInhibitReq),PWL_RainMonitorEnableReq(_PWL_RainMonitorEnableReq) {}
	BDCPWLLIN(const BDCPWLLIN &_x){
		RLS_AutoSRWindowCloseReq = _x.RLS_AutoSRWindowCloseReq;
		SR_SunroofTargetPstCtr = _x.SR_SunroofTargetPstCtr;
		SR_SunroofOpeCtr = _x.SR_SunroofOpeCtr;
		SR_SunshadeTargetPstCtr = _x.SR_SunshadeTargetPstCtr;
		SR_SunshadeOpeCtr = _x.SR_SunshadeOpeCtr;
		SR_SunroofOpenInhibitReq = _x.SR_SunroofOpenInhibitReq;
		SR_SunroofCloseInhibitReq = _x.SR_SunroofCloseInhibitReq;
		SR_SunshadeOpenInhibitReq = _x.SR_SunshadeOpenInhibitReq;
		SR_SunshadeCloseInhibitReq = _x.SR_SunshadeCloseInhibitReq;
		PWL_RainMonitorEnableReq = _x.PWL_RainMonitorEnableReq;
	}
	BDCPWLLIN(BDCPWLLIN &&_x){
		RLS_AutoSRWindowCloseReq = std::move(_x.RLS_AutoSRWindowCloseReq);
		SR_SunroofTargetPstCtr = std::move(_x.SR_SunroofTargetPstCtr);
		SR_SunroofOpeCtr = std::move(_x.SR_SunroofOpeCtr);
		SR_SunshadeTargetPstCtr = std::move(_x.SR_SunshadeTargetPstCtr);
		SR_SunshadeOpeCtr = std::move(_x.SR_SunshadeOpeCtr);
		SR_SunroofOpenInhibitReq = std::move(_x.SR_SunroofOpenInhibitReq);
		SR_SunroofCloseInhibitReq = std::move(_x.SR_SunroofCloseInhibitReq);
		SR_SunshadeOpenInhibitReq = std::move(_x.SR_SunshadeOpenInhibitReq);
		SR_SunshadeCloseInhibitReq = std::move(_x.SR_SunshadeCloseInhibitReq);
		PWL_RainMonitorEnableReq = std::move(_x.PWL_RainMonitorEnableReq);
	}
	BDCPWLLIN& operator=(const BDCPWLLIN &_x){
		RLS_AutoSRWindowCloseReq = _x.RLS_AutoSRWindowCloseReq;
		SR_SunroofTargetPstCtr = _x.SR_SunroofTargetPstCtr;
		SR_SunroofOpeCtr = _x.SR_SunroofOpeCtr;
		SR_SunshadeTargetPstCtr = _x.SR_SunshadeTargetPstCtr;
		SR_SunshadeOpeCtr = _x.SR_SunshadeOpeCtr;
		SR_SunroofOpenInhibitReq = _x.SR_SunroofOpenInhibitReq;
		SR_SunroofCloseInhibitReq = _x.SR_SunroofCloseInhibitReq;
		SR_SunshadeOpenInhibitReq = _x.SR_SunshadeOpenInhibitReq;
		SR_SunshadeCloseInhibitReq = _x.SR_SunshadeCloseInhibitReq;
		PWL_RainMonitorEnableReq = _x.PWL_RainMonitorEnableReq;
		return *this;
	}
	BDCPWLLIN& operator=(BDCPWLLIN &&_x){
		RLS_AutoSRWindowCloseReq = std::move(_x.RLS_AutoSRWindowCloseReq);
		SR_SunroofTargetPstCtr = std::move(_x.SR_SunroofTargetPstCtr);
		SR_SunroofOpeCtr = std::move(_x.SR_SunroofOpeCtr);
		SR_SunshadeTargetPstCtr = std::move(_x.SR_SunshadeTargetPstCtr);
		SR_SunshadeOpeCtr = std::move(_x.SR_SunshadeOpeCtr);
		SR_SunroofOpenInhibitReq = std::move(_x.SR_SunroofOpenInhibitReq);
		SR_SunroofCloseInhibitReq = std::move(_x.SR_SunroofCloseInhibitReq);
		SR_SunshadeOpenInhibitReq = std::move(_x.SR_SunshadeOpenInhibitReq);
		SR_SunshadeCloseInhibitReq = std::move(_x.SR_SunshadeCloseInhibitReq);
		PWL_RainMonitorEnableReq = std::move(_x.PWL_RainMonitorEnableReq);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(RLS_AutoSRWindowCloseReq);
		fun(SR_SunroofTargetPstCtr);
		fun(SR_SunroofOpeCtr);
		fun(SR_SunshadeTargetPstCtr);
		fun(SR_SunshadeOpeCtr);
		fun(SR_SunroofOpenInhibitReq);
		fun(SR_SunroofCloseInhibitReq);
		fun(SR_SunshadeOpenInhibitReq);
		fun(SR_SunshadeCloseInhibitReq);
		fun(PWL_RainMonitorEnableReq);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(RLS_AutoSRWindowCloseReq);
		fun(SR_SunroofTargetPstCtr);
		fun(SR_SunroofOpeCtr);
		fun(SR_SunshadeTargetPstCtr);
		fun(SR_SunshadeOpeCtr);
		fun(SR_SunroofOpenInhibitReq);
		fun(SR_SunroofCloseInhibitReq);
		fun(SR_SunshadeOpenInhibitReq);
		fun(SR_SunshadeCloseInhibitReq);
		fun(PWL_RainMonitorEnableReq);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (RLS_AutoSRWindowCloseReq);
		fun << (SR_SunroofTargetPstCtr);
		fun << (SR_SunroofOpeCtr);
		fun << (SR_SunshadeTargetPstCtr);
		fun << (SR_SunshadeOpeCtr);
		fun << (SR_SunroofOpenInhibitReq);
		fun << (SR_SunroofCloseInhibitReq);
		fun << (SR_SunshadeOpenInhibitReq);
		fun << (SR_SunshadeCloseInhibitReq);
		fun << (PWL_RainMonitorEnableReq);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (RLS_AutoSRWindowCloseReq);
		fun >> (SR_SunroofTargetPstCtr);
		fun >> (SR_SunroofOpeCtr);
		fun >> (SR_SunshadeTargetPstCtr);
		fun >> (SR_SunshadeOpeCtr);
		fun >> (SR_SunroofOpenInhibitReq);
		fun >> (SR_SunroofCloseInhibitReq);
		fun >> (SR_SunshadeOpenInhibitReq);
		fun >> (SR_SunshadeCloseInhibitReq);
		fun >> (PWL_RainMonitorEnableReq);
	}
};

#endif //____BDCPWLLIN_H__
