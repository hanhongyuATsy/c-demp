#ifndef ____DATALNCHGEVTDRVCYC_ST_H__
#define ____DATALNCHGEVTDRVCYC_ST_H__


#include "cstdint"
#include "ara/com/vsomeip/impl_type_tilnchgevtdrvcyc_a.h"
#include "ara/com/vsomeip/impl_type_vvehavrglnchgevtdrvcyc_a.h"
#include "ara/com/vsomeip/impl_type_vvehmaxlnchgevtdrvcyc_a.h"
#include "ara/com/vsomeip/impl_type_avehmaxlnchgrevtdrvcyc_a.h"
#include "ara/com/vsomeip/impl_type_avehminlnchgrevtdrvcyc_a.h"
#include "ara/com/vsomeip/impl_type_agsteerwhlmaxlnchgevtdrvcyc_a.h"
#include "ara/com/vsomeip/impl_type_yawratemaxlnchgevtdrvcyc_a.h"
#include "ara/com/vsomeip/impl_type_vvehminlnchgevtdrvcyc_a.h"






struct dataLnChgEvtDrvCyc_st {
public:
	std::uint32_t numLnChgEvtDrvCyc;
	ara::com::vsomeip::tiLnChgEvtDrvCyc_a tiLnChgEvtDrvCyc;
	ara::com::vsomeip::vVehAvrgLnChgEvtDrvCyc_a vVehAvrgLnChgEvtDrvCyc;
	ara::com::vsomeip::vVehMaxLnChgEvtDrvCyc_a vVehMaxLnChgEvtDrvCyc;
	ara::com::vsomeip::aVehMaxLnChgrEvtDrvCyc_a aVehMaxLnChgrEvtDrvCyc;
	ara::com::vsomeip::aVehMinLnChgrEvtDrvCyc_a aVehMinLnChgrEvtDrvCyc;
	ara::com::vsomeip::AgSteerWhlMaxLnChgEvtDrvCyc_a AgSteerWhlMaxLnChgEvtDrvCyc;
	ara::com::vsomeip::yawRateMaxLnChgEvtDrvCyc_a yawRateMaxLnChgEvtDrvCyc;
	ara::com::vsomeip::vVehMinLnChgEvtDrvCyc_a vVehMinLnChgEvtDrvCyc;
/*
	dataLnChgEvtDrvCyc_st() {}
	~dataLnChgEvtDrvCyc_st() {}
	dataLnChgEvtDrvCyc_st(const std::uint32_t _numLnChgEvtDrvCyc,const ara::com::vsomeip::tiLnChgEvtDrvCyc_a _tiLnChgEvtDrvCyc,const ara::com::vsomeip::vVehAvrgLnChgEvtDrvCyc_a _vVehAvrgLnChgEvtDrvCyc,const ara::com::vsomeip::vVehMaxLnChgEvtDrvCyc_a _vVehMaxLnChgEvtDrvCyc,const ara::com::vsomeip::aVehMaxLnChgrEvtDrvCyc_a _aVehMaxLnChgrEvtDrvCyc,const ara::com::vsomeip::aVehMinLnChgrEvtDrvCyc_a _aVehMinLnChgrEvtDrvCyc,const ara::com::vsomeip::AgSteerWhlMaxLnChgEvtDrvCyc_a _AgSteerWhlMaxLnChgEvtDrvCyc,const ara::com::vsomeip::yawRateMaxLnChgEvtDrvCyc_a _yawRateMaxLnChgEvtDrvCyc,const ara::com::vsomeip::vVehMinLnChgEvtDrvCyc_a _vVehMinLnChgEvtDrvCyc):numLnChgEvtDrvCyc(_numLnChgEvtDrvCyc),tiLnChgEvtDrvCyc(_tiLnChgEvtDrvCyc),vVehAvrgLnChgEvtDrvCyc(_vVehAvrgLnChgEvtDrvCyc),vVehMaxLnChgEvtDrvCyc(_vVehMaxLnChgEvtDrvCyc),aVehMaxLnChgrEvtDrvCyc(_aVehMaxLnChgrEvtDrvCyc),aVehMinLnChgrEvtDrvCyc(_aVehMinLnChgrEvtDrvCyc),AgSteerWhlMaxLnChgEvtDrvCyc(_AgSteerWhlMaxLnChgEvtDrvCyc),yawRateMaxLnChgEvtDrvCyc(_yawRateMaxLnChgEvtDrvCyc),vVehMinLnChgEvtDrvCyc(_vVehMinLnChgEvtDrvCyc) {}
	dataLnChgEvtDrvCyc_st(const dataLnChgEvtDrvCyc_st &_x){
		numLnChgEvtDrvCyc = _x.numLnChgEvtDrvCyc;
		tiLnChgEvtDrvCyc = _x.tiLnChgEvtDrvCyc;
		vVehAvrgLnChgEvtDrvCyc = _x.vVehAvrgLnChgEvtDrvCyc;
		vVehMaxLnChgEvtDrvCyc = _x.vVehMaxLnChgEvtDrvCyc;
		aVehMaxLnChgrEvtDrvCyc = _x.aVehMaxLnChgrEvtDrvCyc;
		aVehMinLnChgrEvtDrvCyc = _x.aVehMinLnChgrEvtDrvCyc;
		AgSteerWhlMaxLnChgEvtDrvCyc = _x.AgSteerWhlMaxLnChgEvtDrvCyc;
		yawRateMaxLnChgEvtDrvCyc = _x.yawRateMaxLnChgEvtDrvCyc;
		vVehMinLnChgEvtDrvCyc = _x.vVehMinLnChgEvtDrvCyc;
	}
	dataLnChgEvtDrvCyc_st(dataLnChgEvtDrvCyc_st &&_x){
		numLnChgEvtDrvCyc = std::move(_x.numLnChgEvtDrvCyc);
		tiLnChgEvtDrvCyc = std::move(_x.tiLnChgEvtDrvCyc);
		vVehAvrgLnChgEvtDrvCyc = std::move(_x.vVehAvrgLnChgEvtDrvCyc);
		vVehMaxLnChgEvtDrvCyc = std::move(_x.vVehMaxLnChgEvtDrvCyc);
		aVehMaxLnChgrEvtDrvCyc = std::move(_x.aVehMaxLnChgrEvtDrvCyc);
		aVehMinLnChgrEvtDrvCyc = std::move(_x.aVehMinLnChgrEvtDrvCyc);
		AgSteerWhlMaxLnChgEvtDrvCyc = std::move(_x.AgSteerWhlMaxLnChgEvtDrvCyc);
		yawRateMaxLnChgEvtDrvCyc = std::move(_x.yawRateMaxLnChgEvtDrvCyc);
		vVehMinLnChgEvtDrvCyc = std::move(_x.vVehMinLnChgEvtDrvCyc);
	}
	dataLnChgEvtDrvCyc_st& operator=(const dataLnChgEvtDrvCyc_st &_x){
		numLnChgEvtDrvCyc = _x.numLnChgEvtDrvCyc;
		tiLnChgEvtDrvCyc = _x.tiLnChgEvtDrvCyc;
		vVehAvrgLnChgEvtDrvCyc = _x.vVehAvrgLnChgEvtDrvCyc;
		vVehMaxLnChgEvtDrvCyc = _x.vVehMaxLnChgEvtDrvCyc;
		aVehMaxLnChgrEvtDrvCyc = _x.aVehMaxLnChgrEvtDrvCyc;
		aVehMinLnChgrEvtDrvCyc = _x.aVehMinLnChgrEvtDrvCyc;
		AgSteerWhlMaxLnChgEvtDrvCyc = _x.AgSteerWhlMaxLnChgEvtDrvCyc;
		yawRateMaxLnChgEvtDrvCyc = _x.yawRateMaxLnChgEvtDrvCyc;
		vVehMinLnChgEvtDrvCyc = _x.vVehMinLnChgEvtDrvCyc;
		return *this;
	}
	dataLnChgEvtDrvCyc_st& operator=(dataLnChgEvtDrvCyc_st &&_x){
		numLnChgEvtDrvCyc = std::move(_x.numLnChgEvtDrvCyc);
		tiLnChgEvtDrvCyc = std::move(_x.tiLnChgEvtDrvCyc);
		vVehAvrgLnChgEvtDrvCyc = std::move(_x.vVehAvrgLnChgEvtDrvCyc);
		vVehMaxLnChgEvtDrvCyc = std::move(_x.vVehMaxLnChgEvtDrvCyc);
		aVehMaxLnChgrEvtDrvCyc = std::move(_x.aVehMaxLnChgrEvtDrvCyc);
		aVehMinLnChgrEvtDrvCyc = std::move(_x.aVehMinLnChgrEvtDrvCyc);
		AgSteerWhlMaxLnChgEvtDrvCyc = std::move(_x.AgSteerWhlMaxLnChgEvtDrvCyc);
		yawRateMaxLnChgEvtDrvCyc = std::move(_x.yawRateMaxLnChgEvtDrvCyc);
		vVehMinLnChgEvtDrvCyc = std::move(_x.vVehMinLnChgEvtDrvCyc);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(numLnChgEvtDrvCyc);
		fun(tiLnChgEvtDrvCyc);
		fun(vVehAvrgLnChgEvtDrvCyc);
		fun(vVehMaxLnChgEvtDrvCyc);
		fun(aVehMaxLnChgrEvtDrvCyc);
		fun(aVehMinLnChgrEvtDrvCyc);
		fun(AgSteerWhlMaxLnChgEvtDrvCyc);
		fun(yawRateMaxLnChgEvtDrvCyc);
		fun(vVehMinLnChgEvtDrvCyc);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(numLnChgEvtDrvCyc);
		fun(tiLnChgEvtDrvCyc);
		fun(vVehAvrgLnChgEvtDrvCyc);
		fun(vVehMaxLnChgEvtDrvCyc);
		fun(aVehMaxLnChgrEvtDrvCyc);
		fun(aVehMinLnChgrEvtDrvCyc);
		fun(AgSteerWhlMaxLnChgEvtDrvCyc);
		fun(yawRateMaxLnChgEvtDrvCyc);
		fun(vVehMinLnChgEvtDrvCyc);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (numLnChgEvtDrvCyc);
		fun << (tiLnChgEvtDrvCyc);
		fun << (vVehAvrgLnChgEvtDrvCyc);
		fun << (vVehMaxLnChgEvtDrvCyc);
		fun << (aVehMaxLnChgrEvtDrvCyc);
		fun << (aVehMinLnChgrEvtDrvCyc);
		fun << (AgSteerWhlMaxLnChgEvtDrvCyc);
		fun << (yawRateMaxLnChgEvtDrvCyc);
		fun << (vVehMinLnChgEvtDrvCyc);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (numLnChgEvtDrvCyc);
		fun >> (tiLnChgEvtDrvCyc);
		fun >> (vVehAvrgLnChgEvtDrvCyc);
		fun >> (vVehMaxLnChgEvtDrvCyc);
		fun >> (aVehMaxLnChgrEvtDrvCyc);
		fun >> (aVehMinLnChgrEvtDrvCyc);
		fun >> (AgSteerWhlMaxLnChgEvtDrvCyc);
		fun >> (yawRateMaxLnChgEvtDrvCyc);
		fun >> (vVehMinLnChgEvtDrvCyc);
	}
};

#endif //____DATALNCHGEVTDRVCYC_ST_H__
