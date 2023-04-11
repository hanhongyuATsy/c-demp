#ifndef __ARA_COM_VSOMEIP__USERLOCKCFG_H__
#define __ARA_COM_VSOMEIP__USERLOCKCFG_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct UserLockCfg {
public:
	std::uint8_t TwoStepUnlockCfg;
	std::uint8_t SpeedLockCfg;
	std::uint8_t AutoUnlockCfg;
/*
	UserLockCfg() {}
	~UserLockCfg() {}
	UserLockCfg(const std::uint8_t _TwoStepUnlockCfg,const std::uint8_t _SpeedLockCfg,const std::uint8_t _AutoUnlockCfg):TwoStepUnlockCfg(_TwoStepUnlockCfg),SpeedLockCfg(_SpeedLockCfg),AutoUnlockCfg(_AutoUnlockCfg) {}
	UserLockCfg(const UserLockCfg &_x){
		TwoStepUnlockCfg = _x.TwoStepUnlockCfg;
		SpeedLockCfg = _x.SpeedLockCfg;
		AutoUnlockCfg = _x.AutoUnlockCfg;
	}
	UserLockCfg(UserLockCfg &&_x){
		TwoStepUnlockCfg = std::move(_x.TwoStepUnlockCfg);
		SpeedLockCfg = std::move(_x.SpeedLockCfg);
		AutoUnlockCfg = std::move(_x.AutoUnlockCfg);
	}
	UserLockCfg& operator=(const UserLockCfg &_x){
		TwoStepUnlockCfg = _x.TwoStepUnlockCfg;
		SpeedLockCfg = _x.SpeedLockCfg;
		AutoUnlockCfg = _x.AutoUnlockCfg;
		return *this;
	}
	UserLockCfg& operator=(UserLockCfg &&_x){
		TwoStepUnlockCfg = std::move(_x.TwoStepUnlockCfg);
		SpeedLockCfg = std::move(_x.SpeedLockCfg);
		AutoUnlockCfg = std::move(_x.AutoUnlockCfg);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(TwoStepUnlockCfg);
		fun(SpeedLockCfg);
		fun(AutoUnlockCfg);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(TwoStepUnlockCfg);
		fun(SpeedLockCfg);
		fun(AutoUnlockCfg);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (TwoStepUnlockCfg);
		fun << (SpeedLockCfg);
		fun << (AutoUnlockCfg);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (TwoStepUnlockCfg);
		fun >> (SpeedLockCfg);
		fun >> (AutoUnlockCfg);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__USERLOCKCFG_H__
