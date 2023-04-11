#ifndef ____BDCPWL_H__
#define ____BDCPWL_H__


#include "cstdint"






struct BDCPWL {
public:
	std::uint8_t PWL_FLWinMotorTargetPstCtr;
	std::uint8_t PWL_FLWinMotorOpeCtr;
	std::uint8_t PWL_RLWinMotorTargetPstCtr;
	std::uint8_t PWL_RLWinMotorOpeCtr;
	std::uint8_t PWL_RRWinMotorTargetPstCtr;
	std::uint8_t PWL_RRWinMotorOpeCtr;
	std::uint8_t PWL_FRWinMotorTargetPstCtr;
	std::uint8_t PWL_FRWinMotorOpeCtr;
	std::uint8_t PWL_PowerWinOpenWarn;
	std::uint8_t PWL_PassengerWinLockLedCtr;
	std::uint8_t PWL_APWLEnableSt;
	std::uint8_t PWL_WinCurrentPos_FLWinPst;
	std::uint8_t PWL_WinCurrentPos_RLWinPst;
	std::uint8_t PWL_WinCurrentPos_FRWinPst;
	std::uint8_t PWL_WinCurrentPos_RRWinPst;
	std::uint8_t PWL_WinOpeationSt_FLWinSt;
	std::uint8_t PWL_WinOpeationSt_RLWinSt;
	std::uint8_t PWL_WinOpeationSt_FRWinSt;
	std::uint8_t PWL_WinOpeationSt_RRWinSt;
	std::uint8_t PWL_PassengerWinLockLedSt;
	std::uint8_t PWL_FLWinCurrentOpeSt;
	std::uint8_t PWL_FRWinCurrentOpeSt;
	std::uint8_t PWL_RLWinCurrentOpeSt;
	std::uint8_t PWL_RRWinCurrentOpeSt;
	std::uint8_t PWL_FLWinShortDropSt;
	std::uint8_t PWL_FRWinShortDropSt;
	std::uint8_t PWL_RLWinShortDropSt;
	std::uint8_t PWL_RRWinShortDropSt;
	std::uint8_t PWL_FLWinRelearnReq;
	std::uint8_t PWL_FRWinRelearnReq;
	std::uint8_t PWL_RLWinRelearnReq;
	std::uint8_t PWL_RRWinRelearnReq;
	std::uint8_t PWL_FLWinMotErrSt;
	std::uint8_t PWL_FRWinMotErrSt;
	std::uint8_t PWL_RLWinMotErrSt;
	std::uint8_t PWL_RRWinMotErrSt;
	std::uint8_t PWL_RainCloseWinReqExculSt;
/*
	BDCPWL() {}
	~BDCPWL() {}
	BDCPWL(const std::uint8_t _PWL_FLWinMotorTargetPstCtr,const std::uint8_t _PWL_FLWinMotorOpeCtr,const std::uint8_t _PWL_RLWinMotorTargetPstCtr,const std::uint8_t _PWL_RLWinMotorOpeCtr,const std::uint8_t _PWL_RRWinMotorTargetPstCtr,const std::uint8_t _PWL_RRWinMotorOpeCtr,const std::uint8_t _PWL_FRWinMotorTargetPstCtr,const std::uint8_t _PWL_FRWinMotorOpeCtr,const std::uint8_t _PWL_PowerWinOpenWarn,const std::uint8_t _PWL_PassengerWinLockLedCtr,const std::uint8_t _PWL_APWLEnableSt,const std::uint8_t _PWL_WinCurrentPos_FLWinPst,const std::uint8_t _PWL_WinCurrentPos_RLWinPst,const std::uint8_t _PWL_WinCurrentPos_FRWinPst,const std::uint8_t _PWL_WinCurrentPos_RRWinPst,const std::uint8_t _PWL_WinOpeationSt_FLWinSt,const std::uint8_t _PWL_WinOpeationSt_RLWinSt,const std::uint8_t _PWL_WinOpeationSt_FRWinSt,const std::uint8_t _PWL_WinOpeationSt_RRWinSt,const std::uint8_t _PWL_PassengerWinLockLedSt,const std::uint8_t _PWL_FLWinCurrentOpeSt,const std::uint8_t _PWL_FRWinCurrentOpeSt,const std::uint8_t _PWL_RLWinCurrentOpeSt,const std::uint8_t _PWL_RRWinCurrentOpeSt,const std::uint8_t _PWL_FLWinShortDropSt,const std::uint8_t _PWL_FRWinShortDropSt,const std::uint8_t _PWL_RLWinShortDropSt,const std::uint8_t _PWL_RRWinShortDropSt,const std::uint8_t _PWL_FLWinRelearnReq,const std::uint8_t _PWL_FRWinRelearnReq,const std::uint8_t _PWL_RLWinRelearnReq,const std::uint8_t _PWL_RRWinRelearnReq,const std::uint8_t _PWL_FLWinMotErrSt,const std::uint8_t _PWL_FRWinMotErrSt,const std::uint8_t _PWL_RLWinMotErrSt,const std::uint8_t _PWL_RRWinMotErrSt,const std::uint8_t _PWL_RainCloseWinReqExculSt):PWL_FLWinMotorTargetPstCtr(_PWL_FLWinMotorTargetPstCtr),PWL_FLWinMotorOpeCtr(_PWL_FLWinMotorOpeCtr),PWL_RLWinMotorTargetPstCtr(_PWL_RLWinMotorTargetPstCtr),PWL_RLWinMotorOpeCtr(_PWL_RLWinMotorOpeCtr),PWL_RRWinMotorTargetPstCtr(_PWL_RRWinMotorTargetPstCtr),PWL_RRWinMotorOpeCtr(_PWL_RRWinMotorOpeCtr),PWL_FRWinMotorTargetPstCtr(_PWL_FRWinMotorTargetPstCtr),PWL_FRWinMotorOpeCtr(_PWL_FRWinMotorOpeCtr),PWL_PowerWinOpenWarn(_PWL_PowerWinOpenWarn),PWL_PassengerWinLockLedCtr(_PWL_PassengerWinLockLedCtr),PWL_APWLEnableSt(_PWL_APWLEnableSt),PWL_WinCurrentPos_FLWinPst(_PWL_WinCurrentPos_FLWinPst),PWL_WinCurrentPos_RLWinPst(_PWL_WinCurrentPos_RLWinPst),PWL_WinCurrentPos_FRWinPst(_PWL_WinCurrentPos_FRWinPst),PWL_WinCurrentPos_RRWinPst(_PWL_WinCurrentPos_RRWinPst),PWL_WinOpeationSt_FLWinSt(_PWL_WinOpeationSt_FLWinSt),PWL_WinOpeationSt_RLWinSt(_PWL_WinOpeationSt_RLWinSt),PWL_WinOpeationSt_FRWinSt(_PWL_WinOpeationSt_FRWinSt),PWL_WinOpeationSt_RRWinSt(_PWL_WinOpeationSt_RRWinSt),PWL_PassengerWinLockLedSt(_PWL_PassengerWinLockLedSt),PWL_FLWinCurrentOpeSt(_PWL_FLWinCurrentOpeSt),PWL_FRWinCurrentOpeSt(_PWL_FRWinCurrentOpeSt),PWL_RLWinCurrentOpeSt(_PWL_RLWinCurrentOpeSt),PWL_RRWinCurrentOpeSt(_PWL_RRWinCurrentOpeSt),PWL_FLWinShortDropSt(_PWL_FLWinShortDropSt),PWL_FRWinShortDropSt(_PWL_FRWinShortDropSt),PWL_RLWinShortDropSt(_PWL_RLWinShortDropSt),PWL_RRWinShortDropSt(_PWL_RRWinShortDropSt),PWL_FLWinRelearnReq(_PWL_FLWinRelearnReq),PWL_FRWinRelearnReq(_PWL_FRWinRelearnReq),PWL_RLWinRelearnReq(_PWL_RLWinRelearnReq),PWL_RRWinRelearnReq(_PWL_RRWinRelearnReq),PWL_FLWinMotErrSt(_PWL_FLWinMotErrSt),PWL_FRWinMotErrSt(_PWL_FRWinMotErrSt),PWL_RLWinMotErrSt(_PWL_RLWinMotErrSt),PWL_RRWinMotErrSt(_PWL_RRWinMotErrSt),PWL_RainCloseWinReqExculSt(_PWL_RainCloseWinReqExculSt) {}
	BDCPWL(const BDCPWL &_x){
		PWL_FLWinMotorTargetPstCtr = _x.PWL_FLWinMotorTargetPstCtr;
		PWL_FLWinMotorOpeCtr = _x.PWL_FLWinMotorOpeCtr;
		PWL_RLWinMotorTargetPstCtr = _x.PWL_RLWinMotorTargetPstCtr;
		PWL_RLWinMotorOpeCtr = _x.PWL_RLWinMotorOpeCtr;
		PWL_RRWinMotorTargetPstCtr = _x.PWL_RRWinMotorTargetPstCtr;
		PWL_RRWinMotorOpeCtr = _x.PWL_RRWinMotorOpeCtr;
		PWL_FRWinMotorTargetPstCtr = _x.PWL_FRWinMotorTargetPstCtr;
		PWL_FRWinMotorOpeCtr = _x.PWL_FRWinMotorOpeCtr;
		PWL_PowerWinOpenWarn = _x.PWL_PowerWinOpenWarn;
		PWL_PassengerWinLockLedCtr = _x.PWL_PassengerWinLockLedCtr;
		PWL_APWLEnableSt = _x.PWL_APWLEnableSt;
		PWL_WinCurrentPos_FLWinPst = _x.PWL_WinCurrentPos_FLWinPst;
		PWL_WinCurrentPos_RLWinPst = _x.PWL_WinCurrentPos_RLWinPst;
		PWL_WinCurrentPos_FRWinPst = _x.PWL_WinCurrentPos_FRWinPst;
		PWL_WinCurrentPos_RRWinPst = _x.PWL_WinCurrentPos_RRWinPst;
		PWL_WinOpeationSt_FLWinSt = _x.PWL_WinOpeationSt_FLWinSt;
		PWL_WinOpeationSt_RLWinSt = _x.PWL_WinOpeationSt_RLWinSt;
		PWL_WinOpeationSt_FRWinSt = _x.PWL_WinOpeationSt_FRWinSt;
		PWL_WinOpeationSt_RRWinSt = _x.PWL_WinOpeationSt_RRWinSt;
		PWL_PassengerWinLockLedSt = _x.PWL_PassengerWinLockLedSt;
		PWL_FLWinCurrentOpeSt = _x.PWL_FLWinCurrentOpeSt;
		PWL_FRWinCurrentOpeSt = _x.PWL_FRWinCurrentOpeSt;
		PWL_RLWinCurrentOpeSt = _x.PWL_RLWinCurrentOpeSt;
		PWL_RRWinCurrentOpeSt = _x.PWL_RRWinCurrentOpeSt;
		PWL_FLWinShortDropSt = _x.PWL_FLWinShortDropSt;
		PWL_FRWinShortDropSt = _x.PWL_FRWinShortDropSt;
		PWL_RLWinShortDropSt = _x.PWL_RLWinShortDropSt;
		PWL_RRWinShortDropSt = _x.PWL_RRWinShortDropSt;
		PWL_FLWinRelearnReq = _x.PWL_FLWinRelearnReq;
		PWL_FRWinRelearnReq = _x.PWL_FRWinRelearnReq;
		PWL_RLWinRelearnReq = _x.PWL_RLWinRelearnReq;
		PWL_RRWinRelearnReq = _x.PWL_RRWinRelearnReq;
		PWL_FLWinMotErrSt = _x.PWL_FLWinMotErrSt;
		PWL_FRWinMotErrSt = _x.PWL_FRWinMotErrSt;
		PWL_RLWinMotErrSt = _x.PWL_RLWinMotErrSt;
		PWL_RRWinMotErrSt = _x.PWL_RRWinMotErrSt;
		PWL_RainCloseWinReqExculSt = _x.PWL_RainCloseWinReqExculSt;
	}
	BDCPWL(BDCPWL &&_x){
		PWL_FLWinMotorTargetPstCtr = std::move(_x.PWL_FLWinMotorTargetPstCtr);
		PWL_FLWinMotorOpeCtr = std::move(_x.PWL_FLWinMotorOpeCtr);
		PWL_RLWinMotorTargetPstCtr = std::move(_x.PWL_RLWinMotorTargetPstCtr);
		PWL_RLWinMotorOpeCtr = std::move(_x.PWL_RLWinMotorOpeCtr);
		PWL_RRWinMotorTargetPstCtr = std::move(_x.PWL_RRWinMotorTargetPstCtr);
		PWL_RRWinMotorOpeCtr = std::move(_x.PWL_RRWinMotorOpeCtr);
		PWL_FRWinMotorTargetPstCtr = std::move(_x.PWL_FRWinMotorTargetPstCtr);
		PWL_FRWinMotorOpeCtr = std::move(_x.PWL_FRWinMotorOpeCtr);
		PWL_PowerWinOpenWarn = std::move(_x.PWL_PowerWinOpenWarn);
		PWL_PassengerWinLockLedCtr = std::move(_x.PWL_PassengerWinLockLedCtr);
		PWL_APWLEnableSt = std::move(_x.PWL_APWLEnableSt);
		PWL_WinCurrentPos_FLWinPst = std::move(_x.PWL_WinCurrentPos_FLWinPst);
		PWL_WinCurrentPos_RLWinPst = std::move(_x.PWL_WinCurrentPos_RLWinPst);
		PWL_WinCurrentPos_FRWinPst = std::move(_x.PWL_WinCurrentPos_FRWinPst);
		PWL_WinCurrentPos_RRWinPst = std::move(_x.PWL_WinCurrentPos_RRWinPst);
		PWL_WinOpeationSt_FLWinSt = std::move(_x.PWL_WinOpeationSt_FLWinSt);
		PWL_WinOpeationSt_RLWinSt = std::move(_x.PWL_WinOpeationSt_RLWinSt);
		PWL_WinOpeationSt_FRWinSt = std::move(_x.PWL_WinOpeationSt_FRWinSt);
		PWL_WinOpeationSt_RRWinSt = std::move(_x.PWL_WinOpeationSt_RRWinSt);
		PWL_PassengerWinLockLedSt = std::move(_x.PWL_PassengerWinLockLedSt);
		PWL_FLWinCurrentOpeSt = std::move(_x.PWL_FLWinCurrentOpeSt);
		PWL_FRWinCurrentOpeSt = std::move(_x.PWL_FRWinCurrentOpeSt);
		PWL_RLWinCurrentOpeSt = std::move(_x.PWL_RLWinCurrentOpeSt);
		PWL_RRWinCurrentOpeSt = std::move(_x.PWL_RRWinCurrentOpeSt);
		PWL_FLWinShortDropSt = std::move(_x.PWL_FLWinShortDropSt);
		PWL_FRWinShortDropSt = std::move(_x.PWL_FRWinShortDropSt);
		PWL_RLWinShortDropSt = std::move(_x.PWL_RLWinShortDropSt);
		PWL_RRWinShortDropSt = std::move(_x.PWL_RRWinShortDropSt);
		PWL_FLWinRelearnReq = std::move(_x.PWL_FLWinRelearnReq);
		PWL_FRWinRelearnReq = std::move(_x.PWL_FRWinRelearnReq);
		PWL_RLWinRelearnReq = std::move(_x.PWL_RLWinRelearnReq);
		PWL_RRWinRelearnReq = std::move(_x.PWL_RRWinRelearnReq);
		PWL_FLWinMotErrSt = std::move(_x.PWL_FLWinMotErrSt);
		PWL_FRWinMotErrSt = std::move(_x.PWL_FRWinMotErrSt);
		PWL_RLWinMotErrSt = std::move(_x.PWL_RLWinMotErrSt);
		PWL_RRWinMotErrSt = std::move(_x.PWL_RRWinMotErrSt);
		PWL_RainCloseWinReqExculSt = std::move(_x.PWL_RainCloseWinReqExculSt);
	}
	BDCPWL& operator=(const BDCPWL &_x){
		PWL_FLWinMotorTargetPstCtr = _x.PWL_FLWinMotorTargetPstCtr;
		PWL_FLWinMotorOpeCtr = _x.PWL_FLWinMotorOpeCtr;
		PWL_RLWinMotorTargetPstCtr = _x.PWL_RLWinMotorTargetPstCtr;
		PWL_RLWinMotorOpeCtr = _x.PWL_RLWinMotorOpeCtr;
		PWL_RRWinMotorTargetPstCtr = _x.PWL_RRWinMotorTargetPstCtr;
		PWL_RRWinMotorOpeCtr = _x.PWL_RRWinMotorOpeCtr;
		PWL_FRWinMotorTargetPstCtr = _x.PWL_FRWinMotorTargetPstCtr;
		PWL_FRWinMotorOpeCtr = _x.PWL_FRWinMotorOpeCtr;
		PWL_PowerWinOpenWarn = _x.PWL_PowerWinOpenWarn;
		PWL_PassengerWinLockLedCtr = _x.PWL_PassengerWinLockLedCtr;
		PWL_APWLEnableSt = _x.PWL_APWLEnableSt;
		PWL_WinCurrentPos_FLWinPst = _x.PWL_WinCurrentPos_FLWinPst;
		PWL_WinCurrentPos_RLWinPst = _x.PWL_WinCurrentPos_RLWinPst;
		PWL_WinCurrentPos_FRWinPst = _x.PWL_WinCurrentPos_FRWinPst;
		PWL_WinCurrentPos_RRWinPst = _x.PWL_WinCurrentPos_RRWinPst;
		PWL_WinOpeationSt_FLWinSt = _x.PWL_WinOpeationSt_FLWinSt;
		PWL_WinOpeationSt_RLWinSt = _x.PWL_WinOpeationSt_RLWinSt;
		PWL_WinOpeationSt_FRWinSt = _x.PWL_WinOpeationSt_FRWinSt;
		PWL_WinOpeationSt_RRWinSt = _x.PWL_WinOpeationSt_RRWinSt;
		PWL_PassengerWinLockLedSt = _x.PWL_PassengerWinLockLedSt;
		PWL_FLWinCurrentOpeSt = _x.PWL_FLWinCurrentOpeSt;
		PWL_FRWinCurrentOpeSt = _x.PWL_FRWinCurrentOpeSt;
		PWL_RLWinCurrentOpeSt = _x.PWL_RLWinCurrentOpeSt;
		PWL_RRWinCurrentOpeSt = _x.PWL_RRWinCurrentOpeSt;
		PWL_FLWinShortDropSt = _x.PWL_FLWinShortDropSt;
		PWL_FRWinShortDropSt = _x.PWL_FRWinShortDropSt;
		PWL_RLWinShortDropSt = _x.PWL_RLWinShortDropSt;
		PWL_RRWinShortDropSt = _x.PWL_RRWinShortDropSt;
		PWL_FLWinRelearnReq = _x.PWL_FLWinRelearnReq;
		PWL_FRWinRelearnReq = _x.PWL_FRWinRelearnReq;
		PWL_RLWinRelearnReq = _x.PWL_RLWinRelearnReq;
		PWL_RRWinRelearnReq = _x.PWL_RRWinRelearnReq;
		PWL_FLWinMotErrSt = _x.PWL_FLWinMotErrSt;
		PWL_FRWinMotErrSt = _x.PWL_FRWinMotErrSt;
		PWL_RLWinMotErrSt = _x.PWL_RLWinMotErrSt;
		PWL_RRWinMotErrSt = _x.PWL_RRWinMotErrSt;
		PWL_RainCloseWinReqExculSt = _x.PWL_RainCloseWinReqExculSt;
		return *this;
	}
	BDCPWL& operator=(BDCPWL &&_x){
		PWL_FLWinMotorTargetPstCtr = std::move(_x.PWL_FLWinMotorTargetPstCtr);
		PWL_FLWinMotorOpeCtr = std::move(_x.PWL_FLWinMotorOpeCtr);
		PWL_RLWinMotorTargetPstCtr = std::move(_x.PWL_RLWinMotorTargetPstCtr);
		PWL_RLWinMotorOpeCtr = std::move(_x.PWL_RLWinMotorOpeCtr);
		PWL_RRWinMotorTargetPstCtr = std::move(_x.PWL_RRWinMotorTargetPstCtr);
		PWL_RRWinMotorOpeCtr = std::move(_x.PWL_RRWinMotorOpeCtr);
		PWL_FRWinMotorTargetPstCtr = std::move(_x.PWL_FRWinMotorTargetPstCtr);
		PWL_FRWinMotorOpeCtr = std::move(_x.PWL_FRWinMotorOpeCtr);
		PWL_PowerWinOpenWarn = std::move(_x.PWL_PowerWinOpenWarn);
		PWL_PassengerWinLockLedCtr = std::move(_x.PWL_PassengerWinLockLedCtr);
		PWL_APWLEnableSt = std::move(_x.PWL_APWLEnableSt);
		PWL_WinCurrentPos_FLWinPst = std::move(_x.PWL_WinCurrentPos_FLWinPst);
		PWL_WinCurrentPos_RLWinPst = std::move(_x.PWL_WinCurrentPos_RLWinPst);
		PWL_WinCurrentPos_FRWinPst = std::move(_x.PWL_WinCurrentPos_FRWinPst);
		PWL_WinCurrentPos_RRWinPst = std::move(_x.PWL_WinCurrentPos_RRWinPst);
		PWL_WinOpeationSt_FLWinSt = std::move(_x.PWL_WinOpeationSt_FLWinSt);
		PWL_WinOpeationSt_RLWinSt = std::move(_x.PWL_WinOpeationSt_RLWinSt);
		PWL_WinOpeationSt_FRWinSt = std::move(_x.PWL_WinOpeationSt_FRWinSt);
		PWL_WinOpeationSt_RRWinSt = std::move(_x.PWL_WinOpeationSt_RRWinSt);
		PWL_PassengerWinLockLedSt = std::move(_x.PWL_PassengerWinLockLedSt);
		PWL_FLWinCurrentOpeSt = std::move(_x.PWL_FLWinCurrentOpeSt);
		PWL_FRWinCurrentOpeSt = std::move(_x.PWL_FRWinCurrentOpeSt);
		PWL_RLWinCurrentOpeSt = std::move(_x.PWL_RLWinCurrentOpeSt);
		PWL_RRWinCurrentOpeSt = std::move(_x.PWL_RRWinCurrentOpeSt);
		PWL_FLWinShortDropSt = std::move(_x.PWL_FLWinShortDropSt);
		PWL_FRWinShortDropSt = std::move(_x.PWL_FRWinShortDropSt);
		PWL_RLWinShortDropSt = std::move(_x.PWL_RLWinShortDropSt);
		PWL_RRWinShortDropSt = std::move(_x.PWL_RRWinShortDropSt);
		PWL_FLWinRelearnReq = std::move(_x.PWL_FLWinRelearnReq);
		PWL_FRWinRelearnReq = std::move(_x.PWL_FRWinRelearnReq);
		PWL_RLWinRelearnReq = std::move(_x.PWL_RLWinRelearnReq);
		PWL_RRWinRelearnReq = std::move(_x.PWL_RRWinRelearnReq);
		PWL_FLWinMotErrSt = std::move(_x.PWL_FLWinMotErrSt);
		PWL_FRWinMotErrSt = std::move(_x.PWL_FRWinMotErrSt);
		PWL_RLWinMotErrSt = std::move(_x.PWL_RLWinMotErrSt);
		PWL_RRWinMotErrSt = std::move(_x.PWL_RRWinMotErrSt);
		PWL_RainCloseWinReqExculSt = std::move(_x.PWL_RainCloseWinReqExculSt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(PWL_FLWinMotorTargetPstCtr);
		fun(PWL_FLWinMotorOpeCtr);
		fun(PWL_RLWinMotorTargetPstCtr);
		fun(PWL_RLWinMotorOpeCtr);
		fun(PWL_RRWinMotorTargetPstCtr);
		fun(PWL_RRWinMotorOpeCtr);
		fun(PWL_FRWinMotorTargetPstCtr);
		fun(PWL_FRWinMotorOpeCtr);
		fun(PWL_PowerWinOpenWarn);
		fun(PWL_PassengerWinLockLedCtr);
		fun(PWL_APWLEnableSt);
		fun(PWL_WinCurrentPos_FLWinPst);
		fun(PWL_WinCurrentPos_RLWinPst);
		fun(PWL_WinCurrentPos_FRWinPst);
		fun(PWL_WinCurrentPos_RRWinPst);
		fun(PWL_WinOpeationSt_FLWinSt);
		fun(PWL_WinOpeationSt_RLWinSt);
		fun(PWL_WinOpeationSt_FRWinSt);
		fun(PWL_WinOpeationSt_RRWinSt);
		fun(PWL_PassengerWinLockLedSt);
		fun(PWL_FLWinCurrentOpeSt);
		fun(PWL_FRWinCurrentOpeSt);
		fun(PWL_RLWinCurrentOpeSt);
		fun(PWL_RRWinCurrentOpeSt);
		fun(PWL_FLWinShortDropSt);
		fun(PWL_FRWinShortDropSt);
		fun(PWL_RLWinShortDropSt);
		fun(PWL_RRWinShortDropSt);
		fun(PWL_FLWinRelearnReq);
		fun(PWL_FRWinRelearnReq);
		fun(PWL_RLWinRelearnReq);
		fun(PWL_RRWinRelearnReq);
		fun(PWL_FLWinMotErrSt);
		fun(PWL_FRWinMotErrSt);
		fun(PWL_RLWinMotErrSt);
		fun(PWL_RRWinMotErrSt);
		fun(PWL_RainCloseWinReqExculSt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(PWL_FLWinMotorTargetPstCtr);
		fun(PWL_FLWinMotorOpeCtr);
		fun(PWL_RLWinMotorTargetPstCtr);
		fun(PWL_RLWinMotorOpeCtr);
		fun(PWL_RRWinMotorTargetPstCtr);
		fun(PWL_RRWinMotorOpeCtr);
		fun(PWL_FRWinMotorTargetPstCtr);
		fun(PWL_FRWinMotorOpeCtr);
		fun(PWL_PowerWinOpenWarn);
		fun(PWL_PassengerWinLockLedCtr);
		fun(PWL_APWLEnableSt);
		fun(PWL_WinCurrentPos_FLWinPst);
		fun(PWL_WinCurrentPos_RLWinPst);
		fun(PWL_WinCurrentPos_FRWinPst);
		fun(PWL_WinCurrentPos_RRWinPst);
		fun(PWL_WinOpeationSt_FLWinSt);
		fun(PWL_WinOpeationSt_RLWinSt);
		fun(PWL_WinOpeationSt_FRWinSt);
		fun(PWL_WinOpeationSt_RRWinSt);
		fun(PWL_PassengerWinLockLedSt);
		fun(PWL_FLWinCurrentOpeSt);
		fun(PWL_FRWinCurrentOpeSt);
		fun(PWL_RLWinCurrentOpeSt);
		fun(PWL_RRWinCurrentOpeSt);
		fun(PWL_FLWinShortDropSt);
		fun(PWL_FRWinShortDropSt);
		fun(PWL_RLWinShortDropSt);
		fun(PWL_RRWinShortDropSt);
		fun(PWL_FLWinRelearnReq);
		fun(PWL_FRWinRelearnReq);
		fun(PWL_RLWinRelearnReq);
		fun(PWL_RRWinRelearnReq);
		fun(PWL_FLWinMotErrSt);
		fun(PWL_FRWinMotErrSt);
		fun(PWL_RLWinMotErrSt);
		fun(PWL_RRWinMotErrSt);
		fun(PWL_RainCloseWinReqExculSt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (PWL_FLWinMotorTargetPstCtr);
		fun << (PWL_FLWinMotorOpeCtr);
		fun << (PWL_RLWinMotorTargetPstCtr);
		fun << (PWL_RLWinMotorOpeCtr);
		fun << (PWL_RRWinMotorTargetPstCtr);
		fun << (PWL_RRWinMotorOpeCtr);
		fun << (PWL_FRWinMotorTargetPstCtr);
		fun << (PWL_FRWinMotorOpeCtr);
		fun << (PWL_PowerWinOpenWarn);
		fun << (PWL_PassengerWinLockLedCtr);
		fun << (PWL_APWLEnableSt);
		fun << (PWL_WinCurrentPos_FLWinPst);
		fun << (PWL_WinCurrentPos_RLWinPst);
		fun << (PWL_WinCurrentPos_FRWinPst);
		fun << (PWL_WinCurrentPos_RRWinPst);
		fun << (PWL_WinOpeationSt_FLWinSt);
		fun << (PWL_WinOpeationSt_RLWinSt);
		fun << (PWL_WinOpeationSt_FRWinSt);
		fun << (PWL_WinOpeationSt_RRWinSt);
		fun << (PWL_PassengerWinLockLedSt);
		fun << (PWL_FLWinCurrentOpeSt);
		fun << (PWL_FRWinCurrentOpeSt);
		fun << (PWL_RLWinCurrentOpeSt);
		fun << (PWL_RRWinCurrentOpeSt);
		fun << (PWL_FLWinShortDropSt);
		fun << (PWL_FRWinShortDropSt);
		fun << (PWL_RLWinShortDropSt);
		fun << (PWL_RRWinShortDropSt);
		fun << (PWL_FLWinRelearnReq);
		fun << (PWL_FRWinRelearnReq);
		fun << (PWL_RLWinRelearnReq);
		fun << (PWL_RRWinRelearnReq);
		fun << (PWL_FLWinMotErrSt);
		fun << (PWL_FRWinMotErrSt);
		fun << (PWL_RLWinMotErrSt);
		fun << (PWL_RRWinMotErrSt);
		fun << (PWL_RainCloseWinReqExculSt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (PWL_FLWinMotorTargetPstCtr);
		fun >> (PWL_FLWinMotorOpeCtr);
		fun >> (PWL_RLWinMotorTargetPstCtr);
		fun >> (PWL_RLWinMotorOpeCtr);
		fun >> (PWL_RRWinMotorTargetPstCtr);
		fun >> (PWL_RRWinMotorOpeCtr);
		fun >> (PWL_FRWinMotorTargetPstCtr);
		fun >> (PWL_FRWinMotorOpeCtr);
		fun >> (PWL_PowerWinOpenWarn);
		fun >> (PWL_PassengerWinLockLedCtr);
		fun >> (PWL_APWLEnableSt);
		fun >> (PWL_WinCurrentPos_FLWinPst);
		fun >> (PWL_WinCurrentPos_RLWinPst);
		fun >> (PWL_WinCurrentPos_FRWinPst);
		fun >> (PWL_WinCurrentPos_RRWinPst);
		fun >> (PWL_WinOpeationSt_FLWinSt);
		fun >> (PWL_WinOpeationSt_RLWinSt);
		fun >> (PWL_WinOpeationSt_FRWinSt);
		fun >> (PWL_WinOpeationSt_RRWinSt);
		fun >> (PWL_PassengerWinLockLedSt);
		fun >> (PWL_FLWinCurrentOpeSt);
		fun >> (PWL_FRWinCurrentOpeSt);
		fun >> (PWL_RLWinCurrentOpeSt);
		fun >> (PWL_RRWinCurrentOpeSt);
		fun >> (PWL_FLWinShortDropSt);
		fun >> (PWL_FRWinShortDropSt);
		fun >> (PWL_RLWinShortDropSt);
		fun >> (PWL_RRWinShortDropSt);
		fun >> (PWL_FLWinRelearnReq);
		fun >> (PWL_FRWinRelearnReq);
		fun >> (PWL_RLWinRelearnReq);
		fun >> (PWL_RRWinRelearnReq);
		fun >> (PWL_FLWinMotErrSt);
		fun >> (PWL_FRWinMotErrSt);
		fun >> (PWL_RLWinMotErrSt);
		fun >> (PWL_RRWinMotErrSt);
		fun >> (PWL_RainCloseWinReqExculSt);
	}
};

#endif //____BDCPWL_H__
