#ifndef ____DATAHASHDECEVTDRVCYC_ST_H__
#define ____DATAHASHDECEVTDRVCYC_ST_H__


#include "cstdint"
#include "ara/com/vsomeip/impl_type_avehmaxhashdecevtdrvcyc_a.h"
#include "ara/com/vsomeip/impl_type_vvehmaxhashdecevtdrvcyc_a.h"
#include "ara/com/vsomeip/impl_type_tidurhashdecevtdrvcyc_a.h"
#include "ara/com/vsomeip/impl_type_avehavrghashdecevtdrvcyc_a.h"
#include "ara/com/vsomeip/impl_type_vvehavrghashdecevtdrvcyc_a.h"






struct dataHashDecEvtDrvCyc_st {
public:
	std::uint32_t numHashDecEvtDrvCyc;
	ara::com::vsomeip::aVehMaxHashDecEvtDrvCyc_a aVehMaxHashDecEvtDrvCyc;
	ara::com::vsomeip::vVehMaxHashDecEvtDrvCyc_a vVehMaxHashDecEvtDrvCyc;
	ara::com::vsomeip::tiDurHashDecEvtDrvCyc_a tiDurHashDecEvtDrvCyc;
	ara::com::vsomeip::aVehAvrgHashDecEvtDrvCyc_a aVehAvrgHashDecEvtDrvCyc;
	ara::com::vsomeip::vVehAvrgHashDecEvtDrvCyc_a vVehAvrgHashDecEvtDrvCyc;
/*
	dataHashDecEvtDrvCyc_st() {}
	~dataHashDecEvtDrvCyc_st() {}
	dataHashDecEvtDrvCyc_st(const std::uint32_t _numHashDecEvtDrvCyc,const ara::com::vsomeip::aVehMaxHashDecEvtDrvCyc_a _aVehMaxHashDecEvtDrvCyc,const ara::com::vsomeip::vVehMaxHashDecEvtDrvCyc_a _vVehMaxHashDecEvtDrvCyc,const ara::com::vsomeip::tiDurHashDecEvtDrvCyc_a _tiDurHashDecEvtDrvCyc,const ara::com::vsomeip::aVehAvrgHashDecEvtDrvCyc_a _aVehAvrgHashDecEvtDrvCyc,const ara::com::vsomeip::vVehAvrgHashDecEvtDrvCyc_a _vVehAvrgHashDecEvtDrvCyc):numHashDecEvtDrvCyc(_numHashDecEvtDrvCyc),aVehMaxHashDecEvtDrvCyc(_aVehMaxHashDecEvtDrvCyc),vVehMaxHashDecEvtDrvCyc(_vVehMaxHashDecEvtDrvCyc),tiDurHashDecEvtDrvCyc(_tiDurHashDecEvtDrvCyc),aVehAvrgHashDecEvtDrvCyc(_aVehAvrgHashDecEvtDrvCyc),vVehAvrgHashDecEvtDrvCyc(_vVehAvrgHashDecEvtDrvCyc) {}
	dataHashDecEvtDrvCyc_st(const dataHashDecEvtDrvCyc_st &_x){
		numHashDecEvtDrvCyc = _x.numHashDecEvtDrvCyc;
		aVehMaxHashDecEvtDrvCyc = _x.aVehMaxHashDecEvtDrvCyc;
		vVehMaxHashDecEvtDrvCyc = _x.vVehMaxHashDecEvtDrvCyc;
		tiDurHashDecEvtDrvCyc = _x.tiDurHashDecEvtDrvCyc;
		aVehAvrgHashDecEvtDrvCyc = _x.aVehAvrgHashDecEvtDrvCyc;
		vVehAvrgHashDecEvtDrvCyc = _x.vVehAvrgHashDecEvtDrvCyc;
	}
	dataHashDecEvtDrvCyc_st(dataHashDecEvtDrvCyc_st &&_x){
		numHashDecEvtDrvCyc = std::move(_x.numHashDecEvtDrvCyc);
		aVehMaxHashDecEvtDrvCyc = std::move(_x.aVehMaxHashDecEvtDrvCyc);
		vVehMaxHashDecEvtDrvCyc = std::move(_x.vVehMaxHashDecEvtDrvCyc);
		tiDurHashDecEvtDrvCyc = std::move(_x.tiDurHashDecEvtDrvCyc);
		aVehAvrgHashDecEvtDrvCyc = std::move(_x.aVehAvrgHashDecEvtDrvCyc);
		vVehAvrgHashDecEvtDrvCyc = std::move(_x.vVehAvrgHashDecEvtDrvCyc);
	}
	dataHashDecEvtDrvCyc_st& operator=(const dataHashDecEvtDrvCyc_st &_x){
		numHashDecEvtDrvCyc = _x.numHashDecEvtDrvCyc;
		aVehMaxHashDecEvtDrvCyc = _x.aVehMaxHashDecEvtDrvCyc;
		vVehMaxHashDecEvtDrvCyc = _x.vVehMaxHashDecEvtDrvCyc;
		tiDurHashDecEvtDrvCyc = _x.tiDurHashDecEvtDrvCyc;
		aVehAvrgHashDecEvtDrvCyc = _x.aVehAvrgHashDecEvtDrvCyc;
		vVehAvrgHashDecEvtDrvCyc = _x.vVehAvrgHashDecEvtDrvCyc;
		return *this;
	}
	dataHashDecEvtDrvCyc_st& operator=(dataHashDecEvtDrvCyc_st &&_x){
		numHashDecEvtDrvCyc = std::move(_x.numHashDecEvtDrvCyc);
		aVehMaxHashDecEvtDrvCyc = std::move(_x.aVehMaxHashDecEvtDrvCyc);
		vVehMaxHashDecEvtDrvCyc = std::move(_x.vVehMaxHashDecEvtDrvCyc);
		tiDurHashDecEvtDrvCyc = std::move(_x.tiDurHashDecEvtDrvCyc);
		aVehAvrgHashDecEvtDrvCyc = std::move(_x.aVehAvrgHashDecEvtDrvCyc);
		vVehAvrgHashDecEvtDrvCyc = std::move(_x.vVehAvrgHashDecEvtDrvCyc);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(numHashDecEvtDrvCyc);
		fun(aVehMaxHashDecEvtDrvCyc);
		fun(vVehMaxHashDecEvtDrvCyc);
		fun(tiDurHashDecEvtDrvCyc);
		fun(aVehAvrgHashDecEvtDrvCyc);
		fun(vVehAvrgHashDecEvtDrvCyc);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(numHashDecEvtDrvCyc);
		fun(aVehMaxHashDecEvtDrvCyc);
		fun(vVehMaxHashDecEvtDrvCyc);
		fun(tiDurHashDecEvtDrvCyc);
		fun(aVehAvrgHashDecEvtDrvCyc);
		fun(vVehAvrgHashDecEvtDrvCyc);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (numHashDecEvtDrvCyc);
		fun << (aVehMaxHashDecEvtDrvCyc);
		fun << (vVehMaxHashDecEvtDrvCyc);
		fun << (tiDurHashDecEvtDrvCyc);
		fun << (aVehAvrgHashDecEvtDrvCyc);
		fun << (vVehAvrgHashDecEvtDrvCyc);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (numHashDecEvtDrvCyc);
		fun >> (aVehMaxHashDecEvtDrvCyc);
		fun >> (vVehMaxHashDecEvtDrvCyc);
		fun >> (tiDurHashDecEvtDrvCyc);
		fun >> (aVehAvrgHashDecEvtDrvCyc);
		fun >> (vVehAvrgHashDecEvtDrvCyc);
	}
};

#endif //____DATAHASHDECEVTDRVCYC_ST_H__
