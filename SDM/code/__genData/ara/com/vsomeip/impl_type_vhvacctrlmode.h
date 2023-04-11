#ifndef __ARA_COM_VSOMEIP__VHVACCTRLMODE_H__
#define __ARA_COM_VSOMEIP__VHVACCTRLMODE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct vHVACCtrlMode {
public:
	std::uint8_t vFLTemp;
	std::uint8_t vFRTemp;
	std::uint8_t vRecycleMode;
	std::uint8_t vAirMode;
	std::uint8_t vBlowerLevel;
	std::uint8_t vSyncSt;
	std::uint8_t vHVACOnOff;
	std::uint8_t vACOnOff;
	std::uint8_t vHoldTime;
/*
	vHVACCtrlMode() {}
	~vHVACCtrlMode() {}
	vHVACCtrlMode(const std::uint8_t _vFLTemp,const std::uint8_t _vFRTemp,const std::uint8_t _vRecycleMode,const std::uint8_t _vAirMode,const std::uint8_t _vBlowerLevel,const std::uint8_t _vSyncSt,const std::uint8_t _vHVACOnOff,const std::uint8_t _vACOnOff,const std::uint8_t _vHoldTime):vFLTemp(_vFLTemp),vFRTemp(_vFRTemp),vRecycleMode(_vRecycleMode),vAirMode(_vAirMode),vBlowerLevel(_vBlowerLevel),vSyncSt(_vSyncSt),vHVACOnOff(_vHVACOnOff),vACOnOff(_vACOnOff),vHoldTime(_vHoldTime) {}
	vHVACCtrlMode(const vHVACCtrlMode &_x){
		vFLTemp = _x.vFLTemp;
		vFRTemp = _x.vFRTemp;
		vRecycleMode = _x.vRecycleMode;
		vAirMode = _x.vAirMode;
		vBlowerLevel = _x.vBlowerLevel;
		vSyncSt = _x.vSyncSt;
		vHVACOnOff = _x.vHVACOnOff;
		vACOnOff = _x.vACOnOff;
		vHoldTime = _x.vHoldTime;
	}
	vHVACCtrlMode(vHVACCtrlMode &&_x){
		vFLTemp = std::move(_x.vFLTemp);
		vFRTemp = std::move(_x.vFRTemp);
		vRecycleMode = std::move(_x.vRecycleMode);
		vAirMode = std::move(_x.vAirMode);
		vBlowerLevel = std::move(_x.vBlowerLevel);
		vSyncSt = std::move(_x.vSyncSt);
		vHVACOnOff = std::move(_x.vHVACOnOff);
		vACOnOff = std::move(_x.vACOnOff);
		vHoldTime = std::move(_x.vHoldTime);
	}
	vHVACCtrlMode& operator=(const vHVACCtrlMode &_x){
		vFLTemp = _x.vFLTemp;
		vFRTemp = _x.vFRTemp;
		vRecycleMode = _x.vRecycleMode;
		vAirMode = _x.vAirMode;
		vBlowerLevel = _x.vBlowerLevel;
		vSyncSt = _x.vSyncSt;
		vHVACOnOff = _x.vHVACOnOff;
		vACOnOff = _x.vACOnOff;
		vHoldTime = _x.vHoldTime;
		return *this;
	}
	vHVACCtrlMode& operator=(vHVACCtrlMode &&_x){
		vFLTemp = std::move(_x.vFLTemp);
		vFRTemp = std::move(_x.vFRTemp);
		vRecycleMode = std::move(_x.vRecycleMode);
		vAirMode = std::move(_x.vAirMode);
		vBlowerLevel = std::move(_x.vBlowerLevel);
		vSyncSt = std::move(_x.vSyncSt);
		vHVACOnOff = std::move(_x.vHVACOnOff);
		vACOnOff = std::move(_x.vACOnOff);
		vHoldTime = std::move(_x.vHoldTime);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(vFLTemp);
		fun(vFRTemp);
		fun(vRecycleMode);
		fun(vAirMode);
		fun(vBlowerLevel);
		fun(vSyncSt);
		fun(vHVACOnOff);
		fun(vACOnOff);
		fun(vHoldTime);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(vFLTemp);
		fun(vFRTemp);
		fun(vRecycleMode);
		fun(vAirMode);
		fun(vBlowerLevel);
		fun(vSyncSt);
		fun(vHVACOnOff);
		fun(vACOnOff);
		fun(vHoldTime);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (vFLTemp);
		fun << (vFRTemp);
		fun << (vRecycleMode);
		fun << (vAirMode);
		fun << (vBlowerLevel);
		fun << (vSyncSt);
		fun << (vHVACOnOff);
		fun << (vACOnOff);
		fun << (vHoldTime);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (vFLTemp);
		fun >> (vFRTemp);
		fun >> (vRecycleMode);
		fun >> (vAirMode);
		fun >> (vBlowerLevel);
		fun >> (vSyncSt);
		fun >> (vHVACOnOff);
		fun >> (vACOnOff);
		fun >> (vHoldTime);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__VHVACCTRLMODE_H__
