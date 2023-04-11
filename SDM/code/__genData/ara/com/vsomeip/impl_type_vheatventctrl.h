#ifndef __ARA_COM_VSOMEIP__VHEATVENTCTRL_H__
#define __ARA_COM_VSOMEIP__VHEATVENTCTRL_H__


#include "ara/com/vsomeip/impl_type_vseatheatventopcode.h"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct vHeatVentCtrl {
public:
	ara::com::vsomeip::vSeatHeatVentOpCode StartFLSeatHeatVent;
	ara::com::vsomeip::vSeatHeatVentOpCode StartFRSeatHeatVent;
	ara::com::vsomeip::vSeatHeatVentOpCode StartRLSeatHeatVent;
	ara::com::vsomeip::vSeatHeatVentOpCode StartRRSeatHeatVent;
	ara::com::vsomeip::vSeatHeatVentOpCode StartR3LSeatHeatVent;
	ara::com::vsomeip::vSeatHeatVentOpCode StartR3RSeatHeatVent;
/*
	vHeatVentCtrl() {}
	~vHeatVentCtrl() {}
	vHeatVentCtrl(const ara::com::vsomeip::vSeatHeatVentOpCode _StartFLSeatHeatVent,const ara::com::vsomeip::vSeatHeatVentOpCode _StartFRSeatHeatVent,const ara::com::vsomeip::vSeatHeatVentOpCode _StartRLSeatHeatVent,const ara::com::vsomeip::vSeatHeatVentOpCode _StartRRSeatHeatVent,const ara::com::vsomeip::vSeatHeatVentOpCode _StartR3LSeatHeatVent,const ara::com::vsomeip::vSeatHeatVentOpCode _StartR3RSeatHeatVent):StartFLSeatHeatVent(_StartFLSeatHeatVent),StartFRSeatHeatVent(_StartFRSeatHeatVent),StartRLSeatHeatVent(_StartRLSeatHeatVent),StartRRSeatHeatVent(_StartRRSeatHeatVent),StartR3LSeatHeatVent(_StartR3LSeatHeatVent),StartR3RSeatHeatVent(_StartR3RSeatHeatVent) {}
	vHeatVentCtrl(const vHeatVentCtrl &_x){
		StartFLSeatHeatVent = _x.StartFLSeatHeatVent;
		StartFRSeatHeatVent = _x.StartFRSeatHeatVent;
		StartRLSeatHeatVent = _x.StartRLSeatHeatVent;
		StartRRSeatHeatVent = _x.StartRRSeatHeatVent;
		StartR3LSeatHeatVent = _x.StartR3LSeatHeatVent;
		StartR3RSeatHeatVent = _x.StartR3RSeatHeatVent;
	}
	vHeatVentCtrl(vHeatVentCtrl &&_x){
		StartFLSeatHeatVent = std::move(_x.StartFLSeatHeatVent);
		StartFRSeatHeatVent = std::move(_x.StartFRSeatHeatVent);
		StartRLSeatHeatVent = std::move(_x.StartRLSeatHeatVent);
		StartRRSeatHeatVent = std::move(_x.StartRRSeatHeatVent);
		StartR3LSeatHeatVent = std::move(_x.StartR3LSeatHeatVent);
		StartR3RSeatHeatVent = std::move(_x.StartR3RSeatHeatVent);
	}
	vHeatVentCtrl& operator=(const vHeatVentCtrl &_x){
		StartFLSeatHeatVent = _x.StartFLSeatHeatVent;
		StartFRSeatHeatVent = _x.StartFRSeatHeatVent;
		StartRLSeatHeatVent = _x.StartRLSeatHeatVent;
		StartRRSeatHeatVent = _x.StartRRSeatHeatVent;
		StartR3LSeatHeatVent = _x.StartR3LSeatHeatVent;
		StartR3RSeatHeatVent = _x.StartR3RSeatHeatVent;
		return *this;
	}
	vHeatVentCtrl& operator=(vHeatVentCtrl &&_x){
		StartFLSeatHeatVent = std::move(_x.StartFLSeatHeatVent);
		StartFRSeatHeatVent = std::move(_x.StartFRSeatHeatVent);
		StartRLSeatHeatVent = std::move(_x.StartRLSeatHeatVent);
		StartRRSeatHeatVent = std::move(_x.StartRRSeatHeatVent);
		StartR3LSeatHeatVent = std::move(_x.StartR3LSeatHeatVent);
		StartR3RSeatHeatVent = std::move(_x.StartR3RSeatHeatVent);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(StartFLSeatHeatVent);
		fun(StartFRSeatHeatVent);
		fun(StartRLSeatHeatVent);
		fun(StartRRSeatHeatVent);
		fun(StartR3LSeatHeatVent);
		fun(StartR3RSeatHeatVent);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(StartFLSeatHeatVent);
		fun(StartFRSeatHeatVent);
		fun(StartRLSeatHeatVent);
		fun(StartRRSeatHeatVent);
		fun(StartR3LSeatHeatVent);
		fun(StartR3RSeatHeatVent);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (StartFLSeatHeatVent);
		fun << (StartFRSeatHeatVent);
		fun << (StartRLSeatHeatVent);
		fun << (StartRRSeatHeatVent);
		fun << (StartR3LSeatHeatVent);
		fun << (StartR3RSeatHeatVent);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (StartFLSeatHeatVent);
		fun >> (StartFRSeatHeatVent);
		fun >> (StartRLSeatHeatVent);
		fun >> (StartRRSeatHeatVent);
		fun >> (StartR3LSeatHeatVent);
		fun >> (StartR3RSeatHeatVent);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__VHEATVENTCTRL_H__
