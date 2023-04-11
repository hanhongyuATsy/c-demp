#ifndef ____BDCPOD_H__
#define ____BDCPOD_H__


#include "cstdint"






struct BDCPOD {
public:
	std::uint8_t POD_FLWinShortDropCmd;
	std::uint8_t POD_FRWinShortDropCmd;
	std::uint8_t POD_RLWinShortDropCmd;
	std::uint8_t POD_RRWinShortDropCmd;
	std::uint8_t POD_DoorLockReqTrace;
	std::uint8_t POD_DoorCtrCmdFL;
	std::uint8_t POD_DoorCtrTarPositionFL;
	std::uint8_t POD_DoorCtrValidFL;
	std::uint8_t POD_DoorCtrCmdFR;
	std::uint8_t POD_DoorCtrTarPositionFR;
	std::uint8_t POD_DoorCtrValidFR;
	std::uint8_t POD_DoorCtrCmdRL;
	std::uint8_t POD_DoorCtrTarPositionRL;
	std::uint8_t POD_DoorCtrValidRL;
	std::uint8_t POD_DoorCtrCmdRR;
	std::uint8_t POD_DoorCtrTarPositionRR;
	std::uint8_t POD_DoorCtrValidRR;
	std::uint8_t POD_DSMObstDetcnFL;
	std::uint8_t POD_DSMObstDetcnFR;
	std::uint8_t POD_DSMObstDetcnRL;
	std::uint8_t POD_DSMObstDetcnRR;
	std::uint8_t POD_PRRelsReqValidFL;
	std::uint8_t POD_PRRelsReqFL;
	std::uint8_t POD_PRRelsReqValidFR;
	std::uint8_t POD_PRRelsReqFR;
	std::uint8_t POD_PRRelsReqValidRL;
	std::uint8_t POD_PRRelsReqRL;
	std::uint8_t POD_PRRelsReqValidRR;
	std::uint8_t POD_PRRelsReqRR;
	std::uint8_t UINM_BrakeSWSt;
/*
	BDCPOD() {}
	~BDCPOD() {}
	BDCPOD(const std::uint8_t _POD_FLWinShortDropCmd,const std::uint8_t _POD_FRWinShortDropCmd,const std::uint8_t _POD_RLWinShortDropCmd,const std::uint8_t _POD_RRWinShortDropCmd,const std::uint8_t _POD_DoorLockReqTrace,const std::uint8_t _POD_DoorCtrCmdFL,const std::uint8_t _POD_DoorCtrTarPositionFL,const std::uint8_t _POD_DoorCtrValidFL,const std::uint8_t _POD_DoorCtrCmdFR,const std::uint8_t _POD_DoorCtrTarPositionFR,const std::uint8_t _POD_DoorCtrValidFR,const std::uint8_t _POD_DoorCtrCmdRL,const std::uint8_t _POD_DoorCtrTarPositionRL,const std::uint8_t _POD_DoorCtrValidRL,const std::uint8_t _POD_DoorCtrCmdRR,const std::uint8_t _POD_DoorCtrTarPositionRR,const std::uint8_t _POD_DoorCtrValidRR,const std::uint8_t _POD_DSMObstDetcnFL,const std::uint8_t _POD_DSMObstDetcnFR,const std::uint8_t _POD_DSMObstDetcnRL,const std::uint8_t _POD_DSMObstDetcnRR,const std::uint8_t _POD_PRRelsReqValidFL,const std::uint8_t _POD_PRRelsReqFL,const std::uint8_t _POD_PRRelsReqValidFR,const std::uint8_t _POD_PRRelsReqFR,const std::uint8_t _POD_PRRelsReqValidRL,const std::uint8_t _POD_PRRelsReqRL,const std::uint8_t _POD_PRRelsReqValidRR,const std::uint8_t _POD_PRRelsReqRR,const std::uint8_t _UINM_BrakeSWSt):POD_FLWinShortDropCmd(_POD_FLWinShortDropCmd),POD_FRWinShortDropCmd(_POD_FRWinShortDropCmd),POD_RLWinShortDropCmd(_POD_RLWinShortDropCmd),POD_RRWinShortDropCmd(_POD_RRWinShortDropCmd),POD_DoorLockReqTrace(_POD_DoorLockReqTrace),POD_DoorCtrCmdFL(_POD_DoorCtrCmdFL),POD_DoorCtrTarPositionFL(_POD_DoorCtrTarPositionFL),POD_DoorCtrValidFL(_POD_DoorCtrValidFL),POD_DoorCtrCmdFR(_POD_DoorCtrCmdFR),POD_DoorCtrTarPositionFR(_POD_DoorCtrTarPositionFR),POD_DoorCtrValidFR(_POD_DoorCtrValidFR),POD_DoorCtrCmdRL(_POD_DoorCtrCmdRL),POD_DoorCtrTarPositionRL(_POD_DoorCtrTarPositionRL),POD_DoorCtrValidRL(_POD_DoorCtrValidRL),POD_DoorCtrCmdRR(_POD_DoorCtrCmdRR),POD_DoorCtrTarPositionRR(_POD_DoorCtrTarPositionRR),POD_DoorCtrValidRR(_POD_DoorCtrValidRR),POD_DSMObstDetcnFL(_POD_DSMObstDetcnFL),POD_DSMObstDetcnFR(_POD_DSMObstDetcnFR),POD_DSMObstDetcnRL(_POD_DSMObstDetcnRL),POD_DSMObstDetcnRR(_POD_DSMObstDetcnRR),POD_PRRelsReqValidFL(_POD_PRRelsReqValidFL),POD_PRRelsReqFL(_POD_PRRelsReqFL),POD_PRRelsReqValidFR(_POD_PRRelsReqValidFR),POD_PRRelsReqFR(_POD_PRRelsReqFR),POD_PRRelsReqValidRL(_POD_PRRelsReqValidRL),POD_PRRelsReqRL(_POD_PRRelsReqRL),POD_PRRelsReqValidRR(_POD_PRRelsReqValidRR),POD_PRRelsReqRR(_POD_PRRelsReqRR),UINM_BrakeSWSt(_UINM_BrakeSWSt) {}
	BDCPOD(const BDCPOD &_x){
		POD_FLWinShortDropCmd = _x.POD_FLWinShortDropCmd;
		POD_FRWinShortDropCmd = _x.POD_FRWinShortDropCmd;
		POD_RLWinShortDropCmd = _x.POD_RLWinShortDropCmd;
		POD_RRWinShortDropCmd = _x.POD_RRWinShortDropCmd;
		POD_DoorLockReqTrace = _x.POD_DoorLockReqTrace;
		POD_DoorCtrCmdFL = _x.POD_DoorCtrCmdFL;
		POD_DoorCtrTarPositionFL = _x.POD_DoorCtrTarPositionFL;
		POD_DoorCtrValidFL = _x.POD_DoorCtrValidFL;
		POD_DoorCtrCmdFR = _x.POD_DoorCtrCmdFR;
		POD_DoorCtrTarPositionFR = _x.POD_DoorCtrTarPositionFR;
		POD_DoorCtrValidFR = _x.POD_DoorCtrValidFR;
		POD_DoorCtrCmdRL = _x.POD_DoorCtrCmdRL;
		POD_DoorCtrTarPositionRL = _x.POD_DoorCtrTarPositionRL;
		POD_DoorCtrValidRL = _x.POD_DoorCtrValidRL;
		POD_DoorCtrCmdRR = _x.POD_DoorCtrCmdRR;
		POD_DoorCtrTarPositionRR = _x.POD_DoorCtrTarPositionRR;
		POD_DoorCtrValidRR = _x.POD_DoorCtrValidRR;
		POD_DSMObstDetcnFL = _x.POD_DSMObstDetcnFL;
		POD_DSMObstDetcnFR = _x.POD_DSMObstDetcnFR;
		POD_DSMObstDetcnRL = _x.POD_DSMObstDetcnRL;
		POD_DSMObstDetcnRR = _x.POD_DSMObstDetcnRR;
		POD_PRRelsReqValidFL = _x.POD_PRRelsReqValidFL;
		POD_PRRelsReqFL = _x.POD_PRRelsReqFL;
		POD_PRRelsReqValidFR = _x.POD_PRRelsReqValidFR;
		POD_PRRelsReqFR = _x.POD_PRRelsReqFR;
		POD_PRRelsReqValidRL = _x.POD_PRRelsReqValidRL;
		POD_PRRelsReqRL = _x.POD_PRRelsReqRL;
		POD_PRRelsReqValidRR = _x.POD_PRRelsReqValidRR;
		POD_PRRelsReqRR = _x.POD_PRRelsReqRR;
		UINM_BrakeSWSt = _x.UINM_BrakeSWSt;
	}
	BDCPOD(BDCPOD &&_x){
		POD_FLWinShortDropCmd = std::move(_x.POD_FLWinShortDropCmd);
		POD_FRWinShortDropCmd = std::move(_x.POD_FRWinShortDropCmd);
		POD_RLWinShortDropCmd = std::move(_x.POD_RLWinShortDropCmd);
		POD_RRWinShortDropCmd = std::move(_x.POD_RRWinShortDropCmd);
		POD_DoorLockReqTrace = std::move(_x.POD_DoorLockReqTrace);
		POD_DoorCtrCmdFL = std::move(_x.POD_DoorCtrCmdFL);
		POD_DoorCtrTarPositionFL = std::move(_x.POD_DoorCtrTarPositionFL);
		POD_DoorCtrValidFL = std::move(_x.POD_DoorCtrValidFL);
		POD_DoorCtrCmdFR = std::move(_x.POD_DoorCtrCmdFR);
		POD_DoorCtrTarPositionFR = std::move(_x.POD_DoorCtrTarPositionFR);
		POD_DoorCtrValidFR = std::move(_x.POD_DoorCtrValidFR);
		POD_DoorCtrCmdRL = std::move(_x.POD_DoorCtrCmdRL);
		POD_DoorCtrTarPositionRL = std::move(_x.POD_DoorCtrTarPositionRL);
		POD_DoorCtrValidRL = std::move(_x.POD_DoorCtrValidRL);
		POD_DoorCtrCmdRR = std::move(_x.POD_DoorCtrCmdRR);
		POD_DoorCtrTarPositionRR = std::move(_x.POD_DoorCtrTarPositionRR);
		POD_DoorCtrValidRR = std::move(_x.POD_DoorCtrValidRR);
		POD_DSMObstDetcnFL = std::move(_x.POD_DSMObstDetcnFL);
		POD_DSMObstDetcnFR = std::move(_x.POD_DSMObstDetcnFR);
		POD_DSMObstDetcnRL = std::move(_x.POD_DSMObstDetcnRL);
		POD_DSMObstDetcnRR = std::move(_x.POD_DSMObstDetcnRR);
		POD_PRRelsReqValidFL = std::move(_x.POD_PRRelsReqValidFL);
		POD_PRRelsReqFL = std::move(_x.POD_PRRelsReqFL);
		POD_PRRelsReqValidFR = std::move(_x.POD_PRRelsReqValidFR);
		POD_PRRelsReqFR = std::move(_x.POD_PRRelsReqFR);
		POD_PRRelsReqValidRL = std::move(_x.POD_PRRelsReqValidRL);
		POD_PRRelsReqRL = std::move(_x.POD_PRRelsReqRL);
		POD_PRRelsReqValidRR = std::move(_x.POD_PRRelsReqValidRR);
		POD_PRRelsReqRR = std::move(_x.POD_PRRelsReqRR);
		UINM_BrakeSWSt = std::move(_x.UINM_BrakeSWSt);
	}
	BDCPOD& operator=(const BDCPOD &_x){
		POD_FLWinShortDropCmd = _x.POD_FLWinShortDropCmd;
		POD_FRWinShortDropCmd = _x.POD_FRWinShortDropCmd;
		POD_RLWinShortDropCmd = _x.POD_RLWinShortDropCmd;
		POD_RRWinShortDropCmd = _x.POD_RRWinShortDropCmd;
		POD_DoorLockReqTrace = _x.POD_DoorLockReqTrace;
		POD_DoorCtrCmdFL = _x.POD_DoorCtrCmdFL;
		POD_DoorCtrTarPositionFL = _x.POD_DoorCtrTarPositionFL;
		POD_DoorCtrValidFL = _x.POD_DoorCtrValidFL;
		POD_DoorCtrCmdFR = _x.POD_DoorCtrCmdFR;
		POD_DoorCtrTarPositionFR = _x.POD_DoorCtrTarPositionFR;
		POD_DoorCtrValidFR = _x.POD_DoorCtrValidFR;
		POD_DoorCtrCmdRL = _x.POD_DoorCtrCmdRL;
		POD_DoorCtrTarPositionRL = _x.POD_DoorCtrTarPositionRL;
		POD_DoorCtrValidRL = _x.POD_DoorCtrValidRL;
		POD_DoorCtrCmdRR = _x.POD_DoorCtrCmdRR;
		POD_DoorCtrTarPositionRR = _x.POD_DoorCtrTarPositionRR;
		POD_DoorCtrValidRR = _x.POD_DoorCtrValidRR;
		POD_DSMObstDetcnFL = _x.POD_DSMObstDetcnFL;
		POD_DSMObstDetcnFR = _x.POD_DSMObstDetcnFR;
		POD_DSMObstDetcnRL = _x.POD_DSMObstDetcnRL;
		POD_DSMObstDetcnRR = _x.POD_DSMObstDetcnRR;
		POD_PRRelsReqValidFL = _x.POD_PRRelsReqValidFL;
		POD_PRRelsReqFL = _x.POD_PRRelsReqFL;
		POD_PRRelsReqValidFR = _x.POD_PRRelsReqValidFR;
		POD_PRRelsReqFR = _x.POD_PRRelsReqFR;
		POD_PRRelsReqValidRL = _x.POD_PRRelsReqValidRL;
		POD_PRRelsReqRL = _x.POD_PRRelsReqRL;
		POD_PRRelsReqValidRR = _x.POD_PRRelsReqValidRR;
		POD_PRRelsReqRR = _x.POD_PRRelsReqRR;
		UINM_BrakeSWSt = _x.UINM_BrakeSWSt;
		return *this;
	}
	BDCPOD& operator=(BDCPOD &&_x){
		POD_FLWinShortDropCmd = std::move(_x.POD_FLWinShortDropCmd);
		POD_FRWinShortDropCmd = std::move(_x.POD_FRWinShortDropCmd);
		POD_RLWinShortDropCmd = std::move(_x.POD_RLWinShortDropCmd);
		POD_RRWinShortDropCmd = std::move(_x.POD_RRWinShortDropCmd);
		POD_DoorLockReqTrace = std::move(_x.POD_DoorLockReqTrace);
		POD_DoorCtrCmdFL = std::move(_x.POD_DoorCtrCmdFL);
		POD_DoorCtrTarPositionFL = std::move(_x.POD_DoorCtrTarPositionFL);
		POD_DoorCtrValidFL = std::move(_x.POD_DoorCtrValidFL);
		POD_DoorCtrCmdFR = std::move(_x.POD_DoorCtrCmdFR);
		POD_DoorCtrTarPositionFR = std::move(_x.POD_DoorCtrTarPositionFR);
		POD_DoorCtrValidFR = std::move(_x.POD_DoorCtrValidFR);
		POD_DoorCtrCmdRL = std::move(_x.POD_DoorCtrCmdRL);
		POD_DoorCtrTarPositionRL = std::move(_x.POD_DoorCtrTarPositionRL);
		POD_DoorCtrValidRL = std::move(_x.POD_DoorCtrValidRL);
		POD_DoorCtrCmdRR = std::move(_x.POD_DoorCtrCmdRR);
		POD_DoorCtrTarPositionRR = std::move(_x.POD_DoorCtrTarPositionRR);
		POD_DoorCtrValidRR = std::move(_x.POD_DoorCtrValidRR);
		POD_DSMObstDetcnFL = std::move(_x.POD_DSMObstDetcnFL);
		POD_DSMObstDetcnFR = std::move(_x.POD_DSMObstDetcnFR);
		POD_DSMObstDetcnRL = std::move(_x.POD_DSMObstDetcnRL);
		POD_DSMObstDetcnRR = std::move(_x.POD_DSMObstDetcnRR);
		POD_PRRelsReqValidFL = std::move(_x.POD_PRRelsReqValidFL);
		POD_PRRelsReqFL = std::move(_x.POD_PRRelsReqFL);
		POD_PRRelsReqValidFR = std::move(_x.POD_PRRelsReqValidFR);
		POD_PRRelsReqFR = std::move(_x.POD_PRRelsReqFR);
		POD_PRRelsReqValidRL = std::move(_x.POD_PRRelsReqValidRL);
		POD_PRRelsReqRL = std::move(_x.POD_PRRelsReqRL);
		POD_PRRelsReqValidRR = std::move(_x.POD_PRRelsReqValidRR);
		POD_PRRelsReqRR = std::move(_x.POD_PRRelsReqRR);
		UINM_BrakeSWSt = std::move(_x.UINM_BrakeSWSt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(POD_FLWinShortDropCmd);
		fun(POD_FRWinShortDropCmd);
		fun(POD_RLWinShortDropCmd);
		fun(POD_RRWinShortDropCmd);
		fun(POD_DoorLockReqTrace);
		fun(POD_DoorCtrCmdFL);
		fun(POD_DoorCtrTarPositionFL);
		fun(POD_DoorCtrValidFL);
		fun(POD_DoorCtrCmdFR);
		fun(POD_DoorCtrTarPositionFR);
		fun(POD_DoorCtrValidFR);
		fun(POD_DoorCtrCmdRL);
		fun(POD_DoorCtrTarPositionRL);
		fun(POD_DoorCtrValidRL);
		fun(POD_DoorCtrCmdRR);
		fun(POD_DoorCtrTarPositionRR);
		fun(POD_DoorCtrValidRR);
		fun(POD_DSMObstDetcnFL);
		fun(POD_DSMObstDetcnFR);
		fun(POD_DSMObstDetcnRL);
		fun(POD_DSMObstDetcnRR);
		fun(POD_PRRelsReqValidFL);
		fun(POD_PRRelsReqFL);
		fun(POD_PRRelsReqValidFR);
		fun(POD_PRRelsReqFR);
		fun(POD_PRRelsReqValidRL);
		fun(POD_PRRelsReqRL);
		fun(POD_PRRelsReqValidRR);
		fun(POD_PRRelsReqRR);
		fun(UINM_BrakeSWSt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(POD_FLWinShortDropCmd);
		fun(POD_FRWinShortDropCmd);
		fun(POD_RLWinShortDropCmd);
		fun(POD_RRWinShortDropCmd);
		fun(POD_DoorLockReqTrace);
		fun(POD_DoorCtrCmdFL);
		fun(POD_DoorCtrTarPositionFL);
		fun(POD_DoorCtrValidFL);
		fun(POD_DoorCtrCmdFR);
		fun(POD_DoorCtrTarPositionFR);
		fun(POD_DoorCtrValidFR);
		fun(POD_DoorCtrCmdRL);
		fun(POD_DoorCtrTarPositionRL);
		fun(POD_DoorCtrValidRL);
		fun(POD_DoorCtrCmdRR);
		fun(POD_DoorCtrTarPositionRR);
		fun(POD_DoorCtrValidRR);
		fun(POD_DSMObstDetcnFL);
		fun(POD_DSMObstDetcnFR);
		fun(POD_DSMObstDetcnRL);
		fun(POD_DSMObstDetcnRR);
		fun(POD_PRRelsReqValidFL);
		fun(POD_PRRelsReqFL);
		fun(POD_PRRelsReqValidFR);
		fun(POD_PRRelsReqFR);
		fun(POD_PRRelsReqValidRL);
		fun(POD_PRRelsReqRL);
		fun(POD_PRRelsReqValidRR);
		fun(POD_PRRelsReqRR);
		fun(UINM_BrakeSWSt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (POD_FLWinShortDropCmd);
		fun << (POD_FRWinShortDropCmd);
		fun << (POD_RLWinShortDropCmd);
		fun << (POD_RRWinShortDropCmd);
		fun << (POD_DoorLockReqTrace);
		fun << (POD_DoorCtrCmdFL);
		fun << (POD_DoorCtrTarPositionFL);
		fun << (POD_DoorCtrValidFL);
		fun << (POD_DoorCtrCmdFR);
		fun << (POD_DoorCtrTarPositionFR);
		fun << (POD_DoorCtrValidFR);
		fun << (POD_DoorCtrCmdRL);
		fun << (POD_DoorCtrTarPositionRL);
		fun << (POD_DoorCtrValidRL);
		fun << (POD_DoorCtrCmdRR);
		fun << (POD_DoorCtrTarPositionRR);
		fun << (POD_DoorCtrValidRR);
		fun << (POD_DSMObstDetcnFL);
		fun << (POD_DSMObstDetcnFR);
		fun << (POD_DSMObstDetcnRL);
		fun << (POD_DSMObstDetcnRR);
		fun << (POD_PRRelsReqValidFL);
		fun << (POD_PRRelsReqFL);
		fun << (POD_PRRelsReqValidFR);
		fun << (POD_PRRelsReqFR);
		fun << (POD_PRRelsReqValidRL);
		fun << (POD_PRRelsReqRL);
		fun << (POD_PRRelsReqValidRR);
		fun << (POD_PRRelsReqRR);
		fun << (UINM_BrakeSWSt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (POD_FLWinShortDropCmd);
		fun >> (POD_FRWinShortDropCmd);
		fun >> (POD_RLWinShortDropCmd);
		fun >> (POD_RRWinShortDropCmd);
		fun >> (POD_DoorLockReqTrace);
		fun >> (POD_DoorCtrCmdFL);
		fun >> (POD_DoorCtrTarPositionFL);
		fun >> (POD_DoorCtrValidFL);
		fun >> (POD_DoorCtrCmdFR);
		fun >> (POD_DoorCtrTarPositionFR);
		fun >> (POD_DoorCtrValidFR);
		fun >> (POD_DoorCtrCmdRL);
		fun >> (POD_DoorCtrTarPositionRL);
		fun >> (POD_DoorCtrValidRL);
		fun >> (POD_DoorCtrCmdRR);
		fun >> (POD_DoorCtrTarPositionRR);
		fun >> (POD_DoorCtrValidRR);
		fun >> (POD_DSMObstDetcnFL);
		fun >> (POD_DSMObstDetcnFR);
		fun >> (POD_DSMObstDetcnRL);
		fun >> (POD_DSMObstDetcnRR);
		fun >> (POD_PRRelsReqValidFL);
		fun >> (POD_PRRelsReqFL);
		fun >> (POD_PRRelsReqValidFR);
		fun >> (POD_PRRelsReqFR);
		fun >> (POD_PRRelsReqValidRL);
		fun >> (POD_PRRelsReqRL);
		fun >> (POD_PRRelsReqValidRR);
		fun >> (POD_PRRelsReqRR);
		fun >> (UINM_BrakeSWSt);
	}
};

#endif //____BDCPOD_H__
