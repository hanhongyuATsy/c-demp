#ifndef ____DATAHASHACCEVTDRVCYC_ST_H__
#define ____DATAHASHACCEVTDRVCYC_ST_H__


#include "cstdint"
#include "ara/com/vsomeip/impl_type_tidurhashaccevtdrvcyc_a.h"
#include "ara/com/vsomeip/impl_type_avehmaxhashaccevtdrvcyc_a.h"
#include "ara/com/vsomeip/impl_type_vvehmaxhashaccevtdrvcyc_a.h"
#include "ara/com/vsomeip/impl_type_vvehavrghashaccevtdrvcyc_a.h"
#include "ara/com/vsomeip/impl_type_avehavrgmaxhashaccevtdrvcyc_a.h"






struct dataHashAccEvtDrvCyc_st {
public:
	std::uint32_t numHashAccEvtDrvCyc;
	ara::com::vsomeip::tiDurHashAccEvtDrvCyc_a tiDurHashAccEvtDrvCyc;
	ara::com::vsomeip::aVehMaxHashAccEvtDrvCyc_a aVehMaxHashAccEvtDrvCyc;
	ara::com::vsomeip::vVehMaxHashAccEvtDrvCyc_a vVehMaxHashAccEvtDrvCyc;
	ara::com::vsomeip::vVehAvrgHashAccEvtDrvCyc_a vVehAvrgHashAccEvtDrvCyc;
	ara::com::vsomeip::aVehAvrgMaxHashAccEvtDrvCyc_a aVehAvrgHashAccEvtDrvCyc;
/*
	dataHashAccEvtDrvCyc_st() {}
	~dataHashAccEvtDrvCyc_st() {}
	dataHashAccEvtDrvCyc_st(const std::uint32_t _numHashAccEvtDrvCyc,const ara::com::vsomeip::tiDurHashAccEvtDrvCyc_a _tiDurHashAccEvtDrvCyc,const ara::com::vsomeip::aVehMaxHashAccEvtDrvCyc_a _aVehMaxHashAccEvtDrvCyc,const ara::com::vsomeip::vVehMaxHashAccEvtDrvCyc_a _vVehMaxHashAccEvtDrvCyc,const ara::com::vsomeip::vVehAvrgHashAccEvtDrvCyc_a _vVehAvrgHashAccEvtDrvCyc,const ara::com::vsomeip::aVehAvrgMaxHashAccEvtDrvCyc_a _aVehAvrgHashAccEvtDrvCyc):numHashAccEvtDrvCyc(_numHashAccEvtDrvCyc),tiDurHashAccEvtDrvCyc(_tiDurHashAccEvtDrvCyc),aVehMaxHashAccEvtDrvCyc(_aVehMaxHashAccEvtDrvCyc),vVehMaxHashAccEvtDrvCyc(_vVehMaxHashAccEvtDrvCyc),vVehAvrgHashAccEvtDrvCyc(_vVehAvrgHashAccEvtDrvCyc),aVehAvrgHashAccEvtDrvCyc(_aVehAvrgHashAccEvtDrvCyc) {}
	dataHashAccEvtDrvCyc_st(const dataHashAccEvtDrvCyc_st &_x){
		numHashAccEvtDrvCyc = _x.numHashAccEvtDrvCyc;
		tiDurHashAccEvtDrvCyc = _x.tiDurHashAccEvtDrvCyc;
		aVehMaxHashAccEvtDrvCyc = _x.aVehMaxHashAccEvtDrvCyc;
		vVehMaxHashAccEvtDrvCyc = _x.vVehMaxHashAccEvtDrvCyc;
		vVehAvrgHashAccEvtDrvCyc = _x.vVehAvrgHashAccEvtDrvCyc;
		aVehAvrgHashAccEvtDrvCyc = _x.aVehAvrgHashAccEvtDrvCyc;
	}
	dataHashAccEvtDrvCyc_st(dataHashAccEvtDrvCyc_st &&_x){
		numHashAccEvtDrvCyc = std::move(_x.numHashAccEvtDrvCyc);
		tiDurHashAccEvtDrvCyc = std::move(_x.tiDurHashAccEvtDrvCyc);
		aVehMaxHashAccEvtDrvCyc = std::move(_x.aVehMaxHashAccEvtDrvCyc);
		vVehMaxHashAccEvtDrvCyc = std::move(_x.vVehMaxHashAccEvtDrvCyc);
		vVehAvrgHashAccEvtDrvCyc = std::move(_x.vVehAvrgHashAccEvtDrvCyc);
		aVehAvrgHashAccEvtDrvCyc = std::move(_x.aVehAvrgHashAccEvtDrvCyc);
	}
	dataHashAccEvtDrvCyc_st& operator=(const dataHashAccEvtDrvCyc_st &_x){
		numHashAccEvtDrvCyc = _x.numHashAccEvtDrvCyc;
		tiDurHashAccEvtDrvCyc = _x.tiDurHashAccEvtDrvCyc;
		aVehMaxHashAccEvtDrvCyc = _x.aVehMaxHashAccEvtDrvCyc;
		vVehMaxHashAccEvtDrvCyc = _x.vVehMaxHashAccEvtDrvCyc;
		vVehAvrgHashAccEvtDrvCyc = _x.vVehAvrgHashAccEvtDrvCyc;
		aVehAvrgHashAccEvtDrvCyc = _x.aVehAvrgHashAccEvtDrvCyc;
		return *this;
	}
	dataHashAccEvtDrvCyc_st& operator=(dataHashAccEvtDrvCyc_st &&_x){
		numHashAccEvtDrvCyc = std::move(_x.numHashAccEvtDrvCyc);
		tiDurHashAccEvtDrvCyc = std::move(_x.tiDurHashAccEvtDrvCyc);
		aVehMaxHashAccEvtDrvCyc = std::move(_x.aVehMaxHashAccEvtDrvCyc);
		vVehMaxHashAccEvtDrvCyc = std::move(_x.vVehMaxHashAccEvtDrvCyc);
		vVehAvrgHashAccEvtDrvCyc = std::move(_x.vVehAvrgHashAccEvtDrvCyc);
		aVehAvrgHashAccEvtDrvCyc = std::move(_x.aVehAvrgHashAccEvtDrvCyc);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(numHashAccEvtDrvCyc);
		fun(tiDurHashAccEvtDrvCyc);
		fun(aVehMaxHashAccEvtDrvCyc);
		fun(vVehMaxHashAccEvtDrvCyc);
		fun(vVehAvrgHashAccEvtDrvCyc);
		fun(aVehAvrgHashAccEvtDrvCyc);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(numHashAccEvtDrvCyc);
		fun(tiDurHashAccEvtDrvCyc);
		fun(aVehMaxHashAccEvtDrvCyc);
		fun(vVehMaxHashAccEvtDrvCyc);
		fun(vVehAvrgHashAccEvtDrvCyc);
		fun(aVehAvrgHashAccEvtDrvCyc);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (numHashAccEvtDrvCyc);
		fun << (tiDurHashAccEvtDrvCyc);
		fun << (aVehMaxHashAccEvtDrvCyc);
		fun << (vVehMaxHashAccEvtDrvCyc);
		fun << (vVehAvrgHashAccEvtDrvCyc);
		fun << (aVehAvrgHashAccEvtDrvCyc);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (numHashAccEvtDrvCyc);
		fun >> (tiDurHashAccEvtDrvCyc);
		fun >> (aVehMaxHashAccEvtDrvCyc);
		fun >> (vVehMaxHashAccEvtDrvCyc);
		fun >> (vVehAvrgHashAccEvtDrvCyc);
		fun >> (aVehAvrgHashAccEvtDrvCyc);
	}
};

#endif //____DATAHASHACCEVTDRVCYC_ST_H__
