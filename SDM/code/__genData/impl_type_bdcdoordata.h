#ifndef ____BDCDOORDATA_H__
#define ____BDCDOORDATA_H__


#include "cstdint"






struct BDCDoorData {
public:
	std::uint8_t LCK_FrontLeftDoorAjarSt;
	std::uint8_t LCK_FrontRightDoorAjarSt;
	std::uint8_t LCK_RearLeftDoorAjarSt;
	std::uint8_t LCK_RearRightDoorAjarSt;
	std::uint8_t LCK_TrunkAjarSt;
	std::uint8_t LCK_HoodAjarSt;
	std::uint8_t LCK_FrontLeftDoorLockSt;
	std::uint8_t LCK_FrontRightDoorLockSt;
	std::uint8_t LCK_RearLeftDoorLockSt;
	std::uint8_t LCK_RearRightDoorLockSt;
/*
	BDCDoorData() {}
	~BDCDoorData() {}
	BDCDoorData(const std::uint8_t _LCK_FrontLeftDoorAjarSt,const std::uint8_t _LCK_FrontRightDoorAjarSt,const std::uint8_t _LCK_RearLeftDoorAjarSt,const std::uint8_t _LCK_RearRightDoorAjarSt,const std::uint8_t _LCK_TrunkAjarSt,const std::uint8_t _LCK_HoodAjarSt,const std::uint8_t _LCK_FrontLeftDoorLockSt,const std::uint8_t _LCK_FrontRightDoorLockSt,const std::uint8_t _LCK_RearLeftDoorLockSt,const std::uint8_t _LCK_RearRightDoorLockSt):LCK_FrontLeftDoorAjarSt(_LCK_FrontLeftDoorAjarSt),LCK_FrontRightDoorAjarSt(_LCK_FrontRightDoorAjarSt),LCK_RearLeftDoorAjarSt(_LCK_RearLeftDoorAjarSt),LCK_RearRightDoorAjarSt(_LCK_RearRightDoorAjarSt),LCK_TrunkAjarSt(_LCK_TrunkAjarSt),LCK_HoodAjarSt(_LCK_HoodAjarSt),LCK_FrontLeftDoorLockSt(_LCK_FrontLeftDoorLockSt),LCK_FrontRightDoorLockSt(_LCK_FrontRightDoorLockSt),LCK_RearLeftDoorLockSt(_LCK_RearLeftDoorLockSt),LCK_RearRightDoorLockSt(_LCK_RearRightDoorLockSt) {}
	BDCDoorData(const BDCDoorData &_x){
		LCK_FrontLeftDoorAjarSt = _x.LCK_FrontLeftDoorAjarSt;
		LCK_FrontRightDoorAjarSt = _x.LCK_FrontRightDoorAjarSt;
		LCK_RearLeftDoorAjarSt = _x.LCK_RearLeftDoorAjarSt;
		LCK_RearRightDoorAjarSt = _x.LCK_RearRightDoorAjarSt;
		LCK_TrunkAjarSt = _x.LCK_TrunkAjarSt;
		LCK_HoodAjarSt = _x.LCK_HoodAjarSt;
		LCK_FrontLeftDoorLockSt = _x.LCK_FrontLeftDoorLockSt;
		LCK_FrontRightDoorLockSt = _x.LCK_FrontRightDoorLockSt;
		LCK_RearLeftDoorLockSt = _x.LCK_RearLeftDoorLockSt;
		LCK_RearRightDoorLockSt = _x.LCK_RearRightDoorLockSt;
	}
	BDCDoorData(BDCDoorData &&_x){
		LCK_FrontLeftDoorAjarSt = std::move(_x.LCK_FrontLeftDoorAjarSt);
		LCK_FrontRightDoorAjarSt = std::move(_x.LCK_FrontRightDoorAjarSt);
		LCK_RearLeftDoorAjarSt = std::move(_x.LCK_RearLeftDoorAjarSt);
		LCK_RearRightDoorAjarSt = std::move(_x.LCK_RearRightDoorAjarSt);
		LCK_TrunkAjarSt = std::move(_x.LCK_TrunkAjarSt);
		LCK_HoodAjarSt = std::move(_x.LCK_HoodAjarSt);
		LCK_FrontLeftDoorLockSt = std::move(_x.LCK_FrontLeftDoorLockSt);
		LCK_FrontRightDoorLockSt = std::move(_x.LCK_FrontRightDoorLockSt);
		LCK_RearLeftDoorLockSt = std::move(_x.LCK_RearLeftDoorLockSt);
		LCK_RearRightDoorLockSt = std::move(_x.LCK_RearRightDoorLockSt);
	}
	BDCDoorData& operator=(const BDCDoorData &_x){
		LCK_FrontLeftDoorAjarSt = _x.LCK_FrontLeftDoorAjarSt;
		LCK_FrontRightDoorAjarSt = _x.LCK_FrontRightDoorAjarSt;
		LCK_RearLeftDoorAjarSt = _x.LCK_RearLeftDoorAjarSt;
		LCK_RearRightDoorAjarSt = _x.LCK_RearRightDoorAjarSt;
		LCK_TrunkAjarSt = _x.LCK_TrunkAjarSt;
		LCK_HoodAjarSt = _x.LCK_HoodAjarSt;
		LCK_FrontLeftDoorLockSt = _x.LCK_FrontLeftDoorLockSt;
		LCK_FrontRightDoorLockSt = _x.LCK_FrontRightDoorLockSt;
		LCK_RearLeftDoorLockSt = _x.LCK_RearLeftDoorLockSt;
		LCK_RearRightDoorLockSt = _x.LCK_RearRightDoorLockSt;
		return *this;
	}
	BDCDoorData& operator=(BDCDoorData &&_x){
		LCK_FrontLeftDoorAjarSt = std::move(_x.LCK_FrontLeftDoorAjarSt);
		LCK_FrontRightDoorAjarSt = std::move(_x.LCK_FrontRightDoorAjarSt);
		LCK_RearLeftDoorAjarSt = std::move(_x.LCK_RearLeftDoorAjarSt);
		LCK_RearRightDoorAjarSt = std::move(_x.LCK_RearRightDoorAjarSt);
		LCK_TrunkAjarSt = std::move(_x.LCK_TrunkAjarSt);
		LCK_HoodAjarSt = std::move(_x.LCK_HoodAjarSt);
		LCK_FrontLeftDoorLockSt = std::move(_x.LCK_FrontLeftDoorLockSt);
		LCK_FrontRightDoorLockSt = std::move(_x.LCK_FrontRightDoorLockSt);
		LCK_RearLeftDoorLockSt = std::move(_x.LCK_RearLeftDoorLockSt);
		LCK_RearRightDoorLockSt = std::move(_x.LCK_RearRightDoorLockSt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(LCK_FrontLeftDoorAjarSt);
		fun(LCK_FrontRightDoorAjarSt);
		fun(LCK_RearLeftDoorAjarSt);
		fun(LCK_RearRightDoorAjarSt);
		fun(LCK_TrunkAjarSt);
		fun(LCK_HoodAjarSt);
		fun(LCK_FrontLeftDoorLockSt);
		fun(LCK_FrontRightDoorLockSt);
		fun(LCK_RearLeftDoorLockSt);
		fun(LCK_RearRightDoorLockSt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(LCK_FrontLeftDoorAjarSt);
		fun(LCK_FrontRightDoorAjarSt);
		fun(LCK_RearLeftDoorAjarSt);
		fun(LCK_RearRightDoorAjarSt);
		fun(LCK_TrunkAjarSt);
		fun(LCK_HoodAjarSt);
		fun(LCK_FrontLeftDoorLockSt);
		fun(LCK_FrontRightDoorLockSt);
		fun(LCK_RearLeftDoorLockSt);
		fun(LCK_RearRightDoorLockSt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (LCK_FrontLeftDoorAjarSt);
		fun << (LCK_FrontRightDoorAjarSt);
		fun << (LCK_RearLeftDoorAjarSt);
		fun << (LCK_RearRightDoorAjarSt);
		fun << (LCK_TrunkAjarSt);
		fun << (LCK_HoodAjarSt);
		fun << (LCK_FrontLeftDoorLockSt);
		fun << (LCK_FrontRightDoorLockSt);
		fun << (LCK_RearLeftDoorLockSt);
		fun << (LCK_RearRightDoorLockSt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (LCK_FrontLeftDoorAjarSt);
		fun >> (LCK_FrontRightDoorAjarSt);
		fun >> (LCK_RearLeftDoorAjarSt);
		fun >> (LCK_RearRightDoorAjarSt);
		fun >> (LCK_TrunkAjarSt);
		fun >> (LCK_HoodAjarSt);
		fun >> (LCK_FrontLeftDoorLockSt);
		fun >> (LCK_FrontRightDoorLockSt);
		fun >> (LCK_RearLeftDoorLockSt);
		fun >> (LCK_RearRightDoorLockSt);
	}
};

#endif //____BDCDOORDATA_H__
