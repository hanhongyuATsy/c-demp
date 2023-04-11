#ifndef ____BDCLCK2_H__
#define ____BDCLCK2_H__


#include "cstdint"






struct BDCLCK2 {
public:
	std::uint8_t LCK_LockSource;
	std::uint8_t LCK_LockAction;
	std::uint8_t LCK_LockTarget;
	std::uint8_t LCK_LockResult;
	std::uint8_t LCK_LockCommandActionType;
	std::uint8_t LCK_PowerFillerCap;
	std::uint8_t LCK_FillerCapLock_Block;
	std::uint8_t LCK_FillerCapLock_Alock;
	std::uint8_t LCK_RearRightChildSaftyLock;
	std::uint8_t LCK_RearLeftChildSaftyLock;
	std::uint8_t LCK_TrunkLock;
	std::uint8_t LCK_HoodLock;
	std::uint8_t LCK_RearRightDoorLock;
	std::uint8_t LCK_RearLeftDoorLock;
	std::uint8_t LCK_FrontRightDoorLock;
	std::uint8_t LCK_FrontLeftDoorLock;
/*
	BDCLCK2() {}
	~BDCLCK2() {}
	BDCLCK2(const std::uint8_t _LCK_LockSource,const std::uint8_t _LCK_LockAction,const std::uint8_t _LCK_LockTarget,const std::uint8_t _LCK_LockResult,const std::uint8_t _LCK_LockCommandActionType,const std::uint8_t _LCK_PowerFillerCap,const std::uint8_t _LCK_FillerCapLock_Block,const std::uint8_t _LCK_FillerCapLock_Alock,const std::uint8_t _LCK_RearRightChildSaftyLock,const std::uint8_t _LCK_RearLeftChildSaftyLock,const std::uint8_t _LCK_TrunkLock,const std::uint8_t _LCK_HoodLock,const std::uint8_t _LCK_RearRightDoorLock,const std::uint8_t _LCK_RearLeftDoorLock,const std::uint8_t _LCK_FrontRightDoorLock,const std::uint8_t _LCK_FrontLeftDoorLock):LCK_LockSource(_LCK_LockSource),LCK_LockAction(_LCK_LockAction),LCK_LockTarget(_LCK_LockTarget),LCK_LockResult(_LCK_LockResult),LCK_LockCommandActionType(_LCK_LockCommandActionType),LCK_PowerFillerCap(_LCK_PowerFillerCap),LCK_FillerCapLock_Block(_LCK_FillerCapLock_Block),LCK_FillerCapLock_Alock(_LCK_FillerCapLock_Alock),LCK_RearRightChildSaftyLock(_LCK_RearRightChildSaftyLock),LCK_RearLeftChildSaftyLock(_LCK_RearLeftChildSaftyLock),LCK_TrunkLock(_LCK_TrunkLock),LCK_HoodLock(_LCK_HoodLock),LCK_RearRightDoorLock(_LCK_RearRightDoorLock),LCK_RearLeftDoorLock(_LCK_RearLeftDoorLock),LCK_FrontRightDoorLock(_LCK_FrontRightDoorLock),LCK_FrontLeftDoorLock(_LCK_FrontLeftDoorLock) {}
	BDCLCK2(const BDCLCK2 &_x){
		LCK_LockSource = _x.LCK_LockSource;
		LCK_LockAction = _x.LCK_LockAction;
		LCK_LockTarget = _x.LCK_LockTarget;
		LCK_LockResult = _x.LCK_LockResult;
		LCK_LockCommandActionType = _x.LCK_LockCommandActionType;
		LCK_PowerFillerCap = _x.LCK_PowerFillerCap;
		LCK_FillerCapLock_Block = _x.LCK_FillerCapLock_Block;
		LCK_FillerCapLock_Alock = _x.LCK_FillerCapLock_Alock;
		LCK_RearRightChildSaftyLock = _x.LCK_RearRightChildSaftyLock;
		LCK_RearLeftChildSaftyLock = _x.LCK_RearLeftChildSaftyLock;
		LCK_TrunkLock = _x.LCK_TrunkLock;
		LCK_HoodLock = _x.LCK_HoodLock;
		LCK_RearRightDoorLock = _x.LCK_RearRightDoorLock;
		LCK_RearLeftDoorLock = _x.LCK_RearLeftDoorLock;
		LCK_FrontRightDoorLock = _x.LCK_FrontRightDoorLock;
		LCK_FrontLeftDoorLock = _x.LCK_FrontLeftDoorLock;
	}
	BDCLCK2(BDCLCK2 &&_x){
		LCK_LockSource = std::move(_x.LCK_LockSource);
		LCK_LockAction = std::move(_x.LCK_LockAction);
		LCK_LockTarget = std::move(_x.LCK_LockTarget);
		LCK_LockResult = std::move(_x.LCK_LockResult);
		LCK_LockCommandActionType = std::move(_x.LCK_LockCommandActionType);
		LCK_PowerFillerCap = std::move(_x.LCK_PowerFillerCap);
		LCK_FillerCapLock_Block = std::move(_x.LCK_FillerCapLock_Block);
		LCK_FillerCapLock_Alock = std::move(_x.LCK_FillerCapLock_Alock);
		LCK_RearRightChildSaftyLock = std::move(_x.LCK_RearRightChildSaftyLock);
		LCK_RearLeftChildSaftyLock = std::move(_x.LCK_RearLeftChildSaftyLock);
		LCK_TrunkLock = std::move(_x.LCK_TrunkLock);
		LCK_HoodLock = std::move(_x.LCK_HoodLock);
		LCK_RearRightDoorLock = std::move(_x.LCK_RearRightDoorLock);
		LCK_RearLeftDoorLock = std::move(_x.LCK_RearLeftDoorLock);
		LCK_FrontRightDoorLock = std::move(_x.LCK_FrontRightDoorLock);
		LCK_FrontLeftDoorLock = std::move(_x.LCK_FrontLeftDoorLock);
	}
	BDCLCK2& operator=(const BDCLCK2 &_x){
		LCK_LockSource = _x.LCK_LockSource;
		LCK_LockAction = _x.LCK_LockAction;
		LCK_LockTarget = _x.LCK_LockTarget;
		LCK_LockResult = _x.LCK_LockResult;
		LCK_LockCommandActionType = _x.LCK_LockCommandActionType;
		LCK_PowerFillerCap = _x.LCK_PowerFillerCap;
		LCK_FillerCapLock_Block = _x.LCK_FillerCapLock_Block;
		LCK_FillerCapLock_Alock = _x.LCK_FillerCapLock_Alock;
		LCK_RearRightChildSaftyLock = _x.LCK_RearRightChildSaftyLock;
		LCK_RearLeftChildSaftyLock = _x.LCK_RearLeftChildSaftyLock;
		LCK_TrunkLock = _x.LCK_TrunkLock;
		LCK_HoodLock = _x.LCK_HoodLock;
		LCK_RearRightDoorLock = _x.LCK_RearRightDoorLock;
		LCK_RearLeftDoorLock = _x.LCK_RearLeftDoorLock;
		LCK_FrontRightDoorLock = _x.LCK_FrontRightDoorLock;
		LCK_FrontLeftDoorLock = _x.LCK_FrontLeftDoorLock;
		return *this;
	}
	BDCLCK2& operator=(BDCLCK2 &&_x){
		LCK_LockSource = std::move(_x.LCK_LockSource);
		LCK_LockAction = std::move(_x.LCK_LockAction);
		LCK_LockTarget = std::move(_x.LCK_LockTarget);
		LCK_LockResult = std::move(_x.LCK_LockResult);
		LCK_LockCommandActionType = std::move(_x.LCK_LockCommandActionType);
		LCK_PowerFillerCap = std::move(_x.LCK_PowerFillerCap);
		LCK_FillerCapLock_Block = std::move(_x.LCK_FillerCapLock_Block);
		LCK_FillerCapLock_Alock = std::move(_x.LCK_FillerCapLock_Alock);
		LCK_RearRightChildSaftyLock = std::move(_x.LCK_RearRightChildSaftyLock);
		LCK_RearLeftChildSaftyLock = std::move(_x.LCK_RearLeftChildSaftyLock);
		LCK_TrunkLock = std::move(_x.LCK_TrunkLock);
		LCK_HoodLock = std::move(_x.LCK_HoodLock);
		LCK_RearRightDoorLock = std::move(_x.LCK_RearRightDoorLock);
		LCK_RearLeftDoorLock = std::move(_x.LCK_RearLeftDoorLock);
		LCK_FrontRightDoorLock = std::move(_x.LCK_FrontRightDoorLock);
		LCK_FrontLeftDoorLock = std::move(_x.LCK_FrontLeftDoorLock);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(LCK_LockSource);
		fun(LCK_LockAction);
		fun(LCK_LockTarget);
		fun(LCK_LockResult);
		fun(LCK_LockCommandActionType);
		fun(LCK_PowerFillerCap);
		fun(LCK_FillerCapLock_Block);
		fun(LCK_FillerCapLock_Alock);
		fun(LCK_RearRightChildSaftyLock);
		fun(LCK_RearLeftChildSaftyLock);
		fun(LCK_TrunkLock);
		fun(LCK_HoodLock);
		fun(LCK_RearRightDoorLock);
		fun(LCK_RearLeftDoorLock);
		fun(LCK_FrontRightDoorLock);
		fun(LCK_FrontLeftDoorLock);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(LCK_LockSource);
		fun(LCK_LockAction);
		fun(LCK_LockTarget);
		fun(LCK_LockResult);
		fun(LCK_LockCommandActionType);
		fun(LCK_PowerFillerCap);
		fun(LCK_FillerCapLock_Block);
		fun(LCK_FillerCapLock_Alock);
		fun(LCK_RearRightChildSaftyLock);
		fun(LCK_RearLeftChildSaftyLock);
		fun(LCK_TrunkLock);
		fun(LCK_HoodLock);
		fun(LCK_RearRightDoorLock);
		fun(LCK_RearLeftDoorLock);
		fun(LCK_FrontRightDoorLock);
		fun(LCK_FrontLeftDoorLock);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (LCK_LockSource);
		fun << (LCK_LockAction);
		fun << (LCK_LockTarget);
		fun << (LCK_LockResult);
		fun << (LCK_LockCommandActionType);
		fun << (LCK_PowerFillerCap);
		fun << (LCK_FillerCapLock_Block);
		fun << (LCK_FillerCapLock_Alock);
		fun << (LCK_RearRightChildSaftyLock);
		fun << (LCK_RearLeftChildSaftyLock);
		fun << (LCK_TrunkLock);
		fun << (LCK_HoodLock);
		fun << (LCK_RearRightDoorLock);
		fun << (LCK_RearLeftDoorLock);
		fun << (LCK_FrontRightDoorLock);
		fun << (LCK_FrontLeftDoorLock);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (LCK_LockSource);
		fun >> (LCK_LockAction);
		fun >> (LCK_LockTarget);
		fun >> (LCK_LockResult);
		fun >> (LCK_LockCommandActionType);
		fun >> (LCK_PowerFillerCap);
		fun >> (LCK_FillerCapLock_Block);
		fun >> (LCK_FillerCapLock_Alock);
		fun >> (LCK_RearRightChildSaftyLock);
		fun >> (LCK_RearLeftChildSaftyLock);
		fun >> (LCK_TrunkLock);
		fun >> (LCK_HoodLock);
		fun >> (LCK_RearRightDoorLock);
		fun >> (LCK_RearLeftDoorLock);
		fun >> (LCK_FrontRightDoorLock);
		fun >> (LCK_FrontLeftDoorLock);
	}
};

#endif //____BDCLCK2_H__
