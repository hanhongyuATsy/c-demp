#ifndef ____DATASTEEREVTDRVCYC_ST_H__
#define ____DATASTEEREVTDRVCYC_ST_H__


#include "cstdint"
#include "ara/com/vsomeip/impl_type_vvehavrgsteerevtdrvcyc_a.h"
#include "ara/com/vsomeip/impl_type_vvehmaxsteerevtdrvcyc_a.h"
#include "ara/com/vsomeip/impl_type_avehmaxsteerevtdrvcyc_a.h"
#include "ara/com/vsomeip/impl_type_avehminsteerevtdrvcyc_a.h"
#include "ara/com/vsomeip/impl_type_agsteerwhlmaxsteerevtdrvcyc_a.h"
#include "ara/com/vsomeip/impl_type_yawratemaxsteerevtdrvcyc_a.h"
#include "ara/com/vsomeip/impl_type_vvehminsteerevtdrvcyc_a.h"
#include "ara/com/vsomeip/impl_type_tidursteerevtdrvcyc_a.h"






struct dataSteerEvtDrvCyc_st {
public:
	std::uint32_t numSteerEvtDrvCyc;
	ara::com::vsomeip::vVehAvrgSteerEvtDrvCyc_a vVehAvrgSteerEvtDrvCyc;
	ara::com::vsomeip::vVehMaxSteerEvtDrvCyc_a vVehMaxSteerEvtDrvCyc;
	ara::com::vsomeip::aVehMaxSteerEvtDrvCyc_a aVehMaxSteerEvtDrvCyc;
	ara::com::vsomeip::aVehMinSteerEvtDrvCyc_a aVehMinSteerEvtDrvCyc;
	ara::com::vsomeip::AgSteerWhlMaxSteerEvtDrvCyc_a AgSteerWhlMaxSteerEvtDrvCyc;
	ara::com::vsomeip::yawRateMaxSteerEvtDrvCyc_a yawRateMaxSteerEvtDrvCyc;
	ara::com::vsomeip::vVehMinSteerEvtDrvCyc_a vVehMinSteerEvtDrvCyc;
	ara::com::vsomeip::tiDurSteerEvtDrvCyc_a tiDurSteerEvtDrvCyc;
/*
	dataSteerEvtDrvCyc_st() {}
	~dataSteerEvtDrvCyc_st() {}
	dataSteerEvtDrvCyc_st(const std::uint32_t _numSteerEvtDrvCyc,const ara::com::vsomeip::vVehAvrgSteerEvtDrvCyc_a _vVehAvrgSteerEvtDrvCyc,const ara::com::vsomeip::vVehMaxSteerEvtDrvCyc_a _vVehMaxSteerEvtDrvCyc,const ara::com::vsomeip::aVehMaxSteerEvtDrvCyc_a _aVehMaxSteerEvtDrvCyc,const ara::com::vsomeip::aVehMinSteerEvtDrvCyc_a _aVehMinSteerEvtDrvCyc,const ara::com::vsomeip::AgSteerWhlMaxSteerEvtDrvCyc_a _AgSteerWhlMaxSteerEvtDrvCyc,const ara::com::vsomeip::yawRateMaxSteerEvtDrvCyc_a _yawRateMaxSteerEvtDrvCyc,const ara::com::vsomeip::vVehMinSteerEvtDrvCyc_a _vVehMinSteerEvtDrvCyc,const ara::com::vsomeip::tiDurSteerEvtDrvCyc_a _tiDurSteerEvtDrvCyc):numSteerEvtDrvCyc(_numSteerEvtDrvCyc),vVehAvrgSteerEvtDrvCyc(_vVehAvrgSteerEvtDrvCyc),vVehMaxSteerEvtDrvCyc(_vVehMaxSteerEvtDrvCyc),aVehMaxSteerEvtDrvCyc(_aVehMaxSteerEvtDrvCyc),aVehMinSteerEvtDrvCyc(_aVehMinSteerEvtDrvCyc),AgSteerWhlMaxSteerEvtDrvCyc(_AgSteerWhlMaxSteerEvtDrvCyc),yawRateMaxSteerEvtDrvCyc(_yawRateMaxSteerEvtDrvCyc),vVehMinSteerEvtDrvCyc(_vVehMinSteerEvtDrvCyc),tiDurSteerEvtDrvCyc(_tiDurSteerEvtDrvCyc) {}
	dataSteerEvtDrvCyc_st(const dataSteerEvtDrvCyc_st &_x){
		numSteerEvtDrvCyc = _x.numSteerEvtDrvCyc;
		vVehAvrgSteerEvtDrvCyc = _x.vVehAvrgSteerEvtDrvCyc;
		vVehMaxSteerEvtDrvCyc = _x.vVehMaxSteerEvtDrvCyc;
		aVehMaxSteerEvtDrvCyc = _x.aVehMaxSteerEvtDrvCyc;
		aVehMinSteerEvtDrvCyc = _x.aVehMinSteerEvtDrvCyc;
		AgSteerWhlMaxSteerEvtDrvCyc = _x.AgSteerWhlMaxSteerEvtDrvCyc;
		yawRateMaxSteerEvtDrvCyc = _x.yawRateMaxSteerEvtDrvCyc;
		vVehMinSteerEvtDrvCyc = _x.vVehMinSteerEvtDrvCyc;
		tiDurSteerEvtDrvCyc = _x.tiDurSteerEvtDrvCyc;
	}
	dataSteerEvtDrvCyc_st(dataSteerEvtDrvCyc_st &&_x){
		numSteerEvtDrvCyc = std::move(_x.numSteerEvtDrvCyc);
		vVehAvrgSteerEvtDrvCyc = std::move(_x.vVehAvrgSteerEvtDrvCyc);
		vVehMaxSteerEvtDrvCyc = std::move(_x.vVehMaxSteerEvtDrvCyc);
		aVehMaxSteerEvtDrvCyc = std::move(_x.aVehMaxSteerEvtDrvCyc);
		aVehMinSteerEvtDrvCyc = std::move(_x.aVehMinSteerEvtDrvCyc);
		AgSteerWhlMaxSteerEvtDrvCyc = std::move(_x.AgSteerWhlMaxSteerEvtDrvCyc);
		yawRateMaxSteerEvtDrvCyc = std::move(_x.yawRateMaxSteerEvtDrvCyc);
		vVehMinSteerEvtDrvCyc = std::move(_x.vVehMinSteerEvtDrvCyc);
		tiDurSteerEvtDrvCyc = std::move(_x.tiDurSteerEvtDrvCyc);
	}
	dataSteerEvtDrvCyc_st& operator=(const dataSteerEvtDrvCyc_st &_x){
		numSteerEvtDrvCyc = _x.numSteerEvtDrvCyc;
		vVehAvrgSteerEvtDrvCyc = _x.vVehAvrgSteerEvtDrvCyc;
		vVehMaxSteerEvtDrvCyc = _x.vVehMaxSteerEvtDrvCyc;
		aVehMaxSteerEvtDrvCyc = _x.aVehMaxSteerEvtDrvCyc;
		aVehMinSteerEvtDrvCyc = _x.aVehMinSteerEvtDrvCyc;
		AgSteerWhlMaxSteerEvtDrvCyc = _x.AgSteerWhlMaxSteerEvtDrvCyc;
		yawRateMaxSteerEvtDrvCyc = _x.yawRateMaxSteerEvtDrvCyc;
		vVehMinSteerEvtDrvCyc = _x.vVehMinSteerEvtDrvCyc;
		tiDurSteerEvtDrvCyc = _x.tiDurSteerEvtDrvCyc;
		return *this;
	}
	dataSteerEvtDrvCyc_st& operator=(dataSteerEvtDrvCyc_st &&_x){
		numSteerEvtDrvCyc = std::move(_x.numSteerEvtDrvCyc);
		vVehAvrgSteerEvtDrvCyc = std::move(_x.vVehAvrgSteerEvtDrvCyc);
		vVehMaxSteerEvtDrvCyc = std::move(_x.vVehMaxSteerEvtDrvCyc);
		aVehMaxSteerEvtDrvCyc = std::move(_x.aVehMaxSteerEvtDrvCyc);
		aVehMinSteerEvtDrvCyc = std::move(_x.aVehMinSteerEvtDrvCyc);
		AgSteerWhlMaxSteerEvtDrvCyc = std::move(_x.AgSteerWhlMaxSteerEvtDrvCyc);
		yawRateMaxSteerEvtDrvCyc = std::move(_x.yawRateMaxSteerEvtDrvCyc);
		vVehMinSteerEvtDrvCyc = std::move(_x.vVehMinSteerEvtDrvCyc);
		tiDurSteerEvtDrvCyc = std::move(_x.tiDurSteerEvtDrvCyc);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(numSteerEvtDrvCyc);
		fun(vVehAvrgSteerEvtDrvCyc);
		fun(vVehMaxSteerEvtDrvCyc);
		fun(aVehMaxSteerEvtDrvCyc);
		fun(aVehMinSteerEvtDrvCyc);
		fun(AgSteerWhlMaxSteerEvtDrvCyc);
		fun(yawRateMaxSteerEvtDrvCyc);
		fun(vVehMinSteerEvtDrvCyc);
		fun(tiDurSteerEvtDrvCyc);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(numSteerEvtDrvCyc);
		fun(vVehAvrgSteerEvtDrvCyc);
		fun(vVehMaxSteerEvtDrvCyc);
		fun(aVehMaxSteerEvtDrvCyc);
		fun(aVehMinSteerEvtDrvCyc);
		fun(AgSteerWhlMaxSteerEvtDrvCyc);
		fun(yawRateMaxSteerEvtDrvCyc);
		fun(vVehMinSteerEvtDrvCyc);
		fun(tiDurSteerEvtDrvCyc);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (numSteerEvtDrvCyc);
		fun << (vVehAvrgSteerEvtDrvCyc);
		fun << (vVehMaxSteerEvtDrvCyc);
		fun << (aVehMaxSteerEvtDrvCyc);
		fun << (aVehMinSteerEvtDrvCyc);
		fun << (AgSteerWhlMaxSteerEvtDrvCyc);
		fun << (yawRateMaxSteerEvtDrvCyc);
		fun << (vVehMinSteerEvtDrvCyc);
		fun << (tiDurSteerEvtDrvCyc);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (numSteerEvtDrvCyc);
		fun >> (vVehAvrgSteerEvtDrvCyc);
		fun >> (vVehMaxSteerEvtDrvCyc);
		fun >> (aVehMaxSteerEvtDrvCyc);
		fun >> (aVehMinSteerEvtDrvCyc);
		fun >> (AgSteerWhlMaxSteerEvtDrvCyc);
		fun >> (yawRateMaxSteerEvtDrvCyc);
		fun >> (vVehMinSteerEvtDrvCyc);
		fun >> (tiDurSteerEvtDrvCyc);
	}
};

#endif //____DATASTEEREVTDRVCYC_ST_H__
