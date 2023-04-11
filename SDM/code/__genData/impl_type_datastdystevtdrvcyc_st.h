#ifndef ____DATASTDYSTEVTDRVCYC_ST_H__
#define ____DATASTDYSTEVTDRVCYC_ST_H__


#include "cstdint"
#include "ara/com/vsomeip/impl_type_vvehavrgstdystevtdrvcyc_a.h"
#include "ara/com/vsomeip/impl_type_tidurstdystevtdrvcyc_a.h"






struct dataStdyStEvtDrvCyc_st {
public:
	std::uint32_t numStdyStEvtDrvCyc;
	ara::com::vsomeip::vVehAvrgStdyStEvtDrvCyc_a vVehAvrgStdyStEvtDrvCyc;
	ara::com::vsomeip::tiDurStdyStEvtDrvCyc_a tiDurStdyStEvtDrvCyc;
/*
	dataStdyStEvtDrvCyc_st() {}
	~dataStdyStEvtDrvCyc_st() {}
	dataStdyStEvtDrvCyc_st(const std::uint32_t _numStdyStEvtDrvCyc,const ara::com::vsomeip::vVehAvrgStdyStEvtDrvCyc_a _vVehAvrgStdyStEvtDrvCyc,const ara::com::vsomeip::tiDurStdyStEvtDrvCyc_a _tiDurStdyStEvtDrvCyc):numStdyStEvtDrvCyc(_numStdyStEvtDrvCyc),vVehAvrgStdyStEvtDrvCyc(_vVehAvrgStdyStEvtDrvCyc),tiDurStdyStEvtDrvCyc(_tiDurStdyStEvtDrvCyc) {}
	dataStdyStEvtDrvCyc_st(const dataStdyStEvtDrvCyc_st &_x){
		numStdyStEvtDrvCyc = _x.numStdyStEvtDrvCyc;
		vVehAvrgStdyStEvtDrvCyc = _x.vVehAvrgStdyStEvtDrvCyc;
		tiDurStdyStEvtDrvCyc = _x.tiDurStdyStEvtDrvCyc;
	}
	dataStdyStEvtDrvCyc_st(dataStdyStEvtDrvCyc_st &&_x){
		numStdyStEvtDrvCyc = std::move(_x.numStdyStEvtDrvCyc);
		vVehAvrgStdyStEvtDrvCyc = std::move(_x.vVehAvrgStdyStEvtDrvCyc);
		tiDurStdyStEvtDrvCyc = std::move(_x.tiDurStdyStEvtDrvCyc);
	}
	dataStdyStEvtDrvCyc_st& operator=(const dataStdyStEvtDrvCyc_st &_x){
		numStdyStEvtDrvCyc = _x.numStdyStEvtDrvCyc;
		vVehAvrgStdyStEvtDrvCyc = _x.vVehAvrgStdyStEvtDrvCyc;
		tiDurStdyStEvtDrvCyc = _x.tiDurStdyStEvtDrvCyc;
		return *this;
	}
	dataStdyStEvtDrvCyc_st& operator=(dataStdyStEvtDrvCyc_st &&_x){
		numStdyStEvtDrvCyc = std::move(_x.numStdyStEvtDrvCyc);
		vVehAvrgStdyStEvtDrvCyc = std::move(_x.vVehAvrgStdyStEvtDrvCyc);
		tiDurStdyStEvtDrvCyc = std::move(_x.tiDurStdyStEvtDrvCyc);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(numStdyStEvtDrvCyc);
		fun(vVehAvrgStdyStEvtDrvCyc);
		fun(tiDurStdyStEvtDrvCyc);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(numStdyStEvtDrvCyc);
		fun(vVehAvrgStdyStEvtDrvCyc);
		fun(tiDurStdyStEvtDrvCyc);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (numStdyStEvtDrvCyc);
		fun << (vVehAvrgStdyStEvtDrvCyc);
		fun << (tiDurStdyStEvtDrvCyc);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (numStdyStEvtDrvCyc);
		fun >> (vVehAvrgStdyStEvtDrvCyc);
		fun >> (tiDurStdyStEvtDrvCyc);
	}
};

#endif //____DATASTDYSTEVTDRVCYC_ST_H__
