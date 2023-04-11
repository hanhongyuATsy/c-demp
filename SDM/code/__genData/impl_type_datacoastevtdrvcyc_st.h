#ifndef ____DATACOASTEVTDRVCYC_ST_H__
#define ____DATACOASTEVTDRVCYC_ST_H__


#include "cstdint"
#include "ara/com/vsomeip/impl_type_ticoastevtdrvcyc_a.h"
#include "ara/com/vsomeip/impl_type_vvehmaxcoastevtdrvcyc_a.h"
#include "ara/com/vsomeip/impl_type_vvehmincoastevtdrvcyc_a.h"






struct dataCoastEvtDrvCyc_st {
public:
	std::uint32_t numCoastEvtDrvCyc;
	ara::com::vsomeip::tiCoastEvtDrvCyc_a tiCoastEvtDrvCyc;
	ara::com::vsomeip::vVehMaxCoastEvtDrvCyc_a vVehMaxCoastEvtDrvCyc;
	ara::com::vsomeip::vVehMinCoastEvtDrvCyc_a vVehMinCoastEvtDrvCyc;
/*
	dataCoastEvtDrvCyc_st() {}
	~dataCoastEvtDrvCyc_st() {}
	dataCoastEvtDrvCyc_st(const std::uint32_t _numCoastEvtDrvCyc,const ara::com::vsomeip::tiCoastEvtDrvCyc_a _tiCoastEvtDrvCyc,const ara::com::vsomeip::vVehMaxCoastEvtDrvCyc_a _vVehMaxCoastEvtDrvCyc,const ara::com::vsomeip::vVehMinCoastEvtDrvCyc_a _vVehMinCoastEvtDrvCyc):numCoastEvtDrvCyc(_numCoastEvtDrvCyc),tiCoastEvtDrvCyc(_tiCoastEvtDrvCyc),vVehMaxCoastEvtDrvCyc(_vVehMaxCoastEvtDrvCyc),vVehMinCoastEvtDrvCyc(_vVehMinCoastEvtDrvCyc) {}
	dataCoastEvtDrvCyc_st(const dataCoastEvtDrvCyc_st &_x){
		numCoastEvtDrvCyc = _x.numCoastEvtDrvCyc;
		tiCoastEvtDrvCyc = _x.tiCoastEvtDrvCyc;
		vVehMaxCoastEvtDrvCyc = _x.vVehMaxCoastEvtDrvCyc;
		vVehMinCoastEvtDrvCyc = _x.vVehMinCoastEvtDrvCyc;
	}
	dataCoastEvtDrvCyc_st(dataCoastEvtDrvCyc_st &&_x){
		numCoastEvtDrvCyc = std::move(_x.numCoastEvtDrvCyc);
		tiCoastEvtDrvCyc = std::move(_x.tiCoastEvtDrvCyc);
		vVehMaxCoastEvtDrvCyc = std::move(_x.vVehMaxCoastEvtDrvCyc);
		vVehMinCoastEvtDrvCyc = std::move(_x.vVehMinCoastEvtDrvCyc);
	}
	dataCoastEvtDrvCyc_st& operator=(const dataCoastEvtDrvCyc_st &_x){
		numCoastEvtDrvCyc = _x.numCoastEvtDrvCyc;
		tiCoastEvtDrvCyc = _x.tiCoastEvtDrvCyc;
		vVehMaxCoastEvtDrvCyc = _x.vVehMaxCoastEvtDrvCyc;
		vVehMinCoastEvtDrvCyc = _x.vVehMinCoastEvtDrvCyc;
		return *this;
	}
	dataCoastEvtDrvCyc_st& operator=(dataCoastEvtDrvCyc_st &&_x){
		numCoastEvtDrvCyc = std::move(_x.numCoastEvtDrvCyc);
		tiCoastEvtDrvCyc = std::move(_x.tiCoastEvtDrvCyc);
		vVehMaxCoastEvtDrvCyc = std::move(_x.vVehMaxCoastEvtDrvCyc);
		vVehMinCoastEvtDrvCyc = std::move(_x.vVehMinCoastEvtDrvCyc);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(numCoastEvtDrvCyc);
		fun(tiCoastEvtDrvCyc);
		fun(vVehMaxCoastEvtDrvCyc);
		fun(vVehMinCoastEvtDrvCyc);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(numCoastEvtDrvCyc);
		fun(tiCoastEvtDrvCyc);
		fun(vVehMaxCoastEvtDrvCyc);
		fun(vVehMinCoastEvtDrvCyc);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (numCoastEvtDrvCyc);
		fun << (tiCoastEvtDrvCyc);
		fun << (vVehMaxCoastEvtDrvCyc);
		fun << (vVehMinCoastEvtDrvCyc);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (numCoastEvtDrvCyc);
		fun >> (tiCoastEvtDrvCyc);
		fun >> (vVehMaxCoastEvtDrvCyc);
		fun >> (vVehMinCoastEvtDrvCyc);
	}
};

#endif //____DATACOASTEVTDRVCYC_ST_H__
