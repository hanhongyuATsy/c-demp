#ifndef __ARA_COM_VSOMEIP__VAUTOHVACCTRLMODE_H__
#define __ARA_COM_VSOMEIP__VAUTOHVACCTRLMODE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct vAutoHVACCtrlMode {
public:
	std::uint8_t vFLTemp;
	std::uint8_t vFRTemp;
	std::uint8_t vHoldTime;
/*
	vAutoHVACCtrlMode() {}
	~vAutoHVACCtrlMode() {}
	vAutoHVACCtrlMode(const std::uint8_t _vFLTemp,const std::uint8_t _vFRTemp,const std::uint8_t _vHoldTime):vFLTemp(_vFLTemp),vFRTemp(_vFRTemp),vHoldTime(_vHoldTime) {}
	vAutoHVACCtrlMode(const vAutoHVACCtrlMode &_x){
		vFLTemp = _x.vFLTemp;
		vFRTemp = _x.vFRTemp;
		vHoldTime = _x.vHoldTime;
	}
	vAutoHVACCtrlMode(vAutoHVACCtrlMode &&_x){
		vFLTemp = std::move(_x.vFLTemp);
		vFRTemp = std::move(_x.vFRTemp);
		vHoldTime = std::move(_x.vHoldTime);
	}
	vAutoHVACCtrlMode& operator=(const vAutoHVACCtrlMode &_x){
		vFLTemp = _x.vFLTemp;
		vFRTemp = _x.vFRTemp;
		vHoldTime = _x.vHoldTime;
		return *this;
	}
	vAutoHVACCtrlMode& operator=(vAutoHVACCtrlMode &&_x){
		vFLTemp = std::move(_x.vFLTemp);
		vFRTemp = std::move(_x.vFRTemp);
		vHoldTime = std::move(_x.vHoldTime);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(vFLTemp);
		fun(vFRTemp);
		fun(vHoldTime);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(vFLTemp);
		fun(vFRTemp);
		fun(vHoldTime);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (vFLTemp);
		fun << (vFRTemp);
		fun << (vHoldTime);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (vFLTemp);
		fun >> (vFRTemp);
		fun >> (vHoldTime);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__VAUTOHVACCTRLMODE_H__
