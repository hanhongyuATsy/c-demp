#ifndef ____DATADRVAWYEVTDRVCYC_ST_H__
#define ____DATADRVAWYEVTDRVCYC_ST_H__


#include "cstdint"
#include "ara/com/vsomeip/impl_type_aavrgdrvawyevtdrvcyc_a.h"
#include "ara/com/vsomeip/impl_type_vavrgdrvawyevtdrvcyc_a.h"
#include "ara/com/vsomeip/impl_type_tidurdrvawyevtdrvcyc_a.h"






struct dataDrvAwyEvtDrvCyc_st {
public:
	std::uint32_t numDrvAwyEvtDrvCyc;
	ara::com::vsomeip::aAvrgDrvAwyEvtDrvCyc_a aAvrgDrvAwyEvtDrvCyc;
	ara::com::vsomeip::vAvrgDrvAwyEvtDrvCyc_a vAvrgDrvAwyEvtDrvCyc;
	ara::com::vsomeip::tiDurDrvAwyEvtDrvCyc_a tiDurDrvAwyEvtDrvCyc;
/*
	dataDrvAwyEvtDrvCyc_st() {}
	~dataDrvAwyEvtDrvCyc_st() {}
	dataDrvAwyEvtDrvCyc_st(const std::uint32_t _numDrvAwyEvtDrvCyc,const ara::com::vsomeip::aAvrgDrvAwyEvtDrvCyc_a _aAvrgDrvAwyEvtDrvCyc,const ara::com::vsomeip::vAvrgDrvAwyEvtDrvCyc_a _vAvrgDrvAwyEvtDrvCyc,const ara::com::vsomeip::tiDurDrvAwyEvtDrvCyc_a _tiDurDrvAwyEvtDrvCyc):numDrvAwyEvtDrvCyc(_numDrvAwyEvtDrvCyc),aAvrgDrvAwyEvtDrvCyc(_aAvrgDrvAwyEvtDrvCyc),vAvrgDrvAwyEvtDrvCyc(_vAvrgDrvAwyEvtDrvCyc),tiDurDrvAwyEvtDrvCyc(_tiDurDrvAwyEvtDrvCyc) {}
	dataDrvAwyEvtDrvCyc_st(const dataDrvAwyEvtDrvCyc_st &_x){
		numDrvAwyEvtDrvCyc = _x.numDrvAwyEvtDrvCyc;
		aAvrgDrvAwyEvtDrvCyc = _x.aAvrgDrvAwyEvtDrvCyc;
		vAvrgDrvAwyEvtDrvCyc = _x.vAvrgDrvAwyEvtDrvCyc;
		tiDurDrvAwyEvtDrvCyc = _x.tiDurDrvAwyEvtDrvCyc;
	}
	dataDrvAwyEvtDrvCyc_st(dataDrvAwyEvtDrvCyc_st &&_x){
		numDrvAwyEvtDrvCyc = std::move(_x.numDrvAwyEvtDrvCyc);
		aAvrgDrvAwyEvtDrvCyc = std::move(_x.aAvrgDrvAwyEvtDrvCyc);
		vAvrgDrvAwyEvtDrvCyc = std::move(_x.vAvrgDrvAwyEvtDrvCyc);
		tiDurDrvAwyEvtDrvCyc = std::move(_x.tiDurDrvAwyEvtDrvCyc);
	}
	dataDrvAwyEvtDrvCyc_st& operator=(const dataDrvAwyEvtDrvCyc_st &_x){
		numDrvAwyEvtDrvCyc = _x.numDrvAwyEvtDrvCyc;
		aAvrgDrvAwyEvtDrvCyc = _x.aAvrgDrvAwyEvtDrvCyc;
		vAvrgDrvAwyEvtDrvCyc = _x.vAvrgDrvAwyEvtDrvCyc;
		tiDurDrvAwyEvtDrvCyc = _x.tiDurDrvAwyEvtDrvCyc;
		return *this;
	}
	dataDrvAwyEvtDrvCyc_st& operator=(dataDrvAwyEvtDrvCyc_st &&_x){
		numDrvAwyEvtDrvCyc = std::move(_x.numDrvAwyEvtDrvCyc);
		aAvrgDrvAwyEvtDrvCyc = std::move(_x.aAvrgDrvAwyEvtDrvCyc);
		vAvrgDrvAwyEvtDrvCyc = std::move(_x.vAvrgDrvAwyEvtDrvCyc);
		tiDurDrvAwyEvtDrvCyc = std::move(_x.tiDurDrvAwyEvtDrvCyc);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(numDrvAwyEvtDrvCyc);
		fun(aAvrgDrvAwyEvtDrvCyc);
		fun(vAvrgDrvAwyEvtDrvCyc);
		fun(tiDurDrvAwyEvtDrvCyc);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(numDrvAwyEvtDrvCyc);
		fun(aAvrgDrvAwyEvtDrvCyc);
		fun(vAvrgDrvAwyEvtDrvCyc);
		fun(tiDurDrvAwyEvtDrvCyc);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (numDrvAwyEvtDrvCyc);
		fun << (aAvrgDrvAwyEvtDrvCyc);
		fun << (vAvrgDrvAwyEvtDrvCyc);
		fun << (tiDurDrvAwyEvtDrvCyc);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (numDrvAwyEvtDrvCyc);
		fun >> (aAvrgDrvAwyEvtDrvCyc);
		fun >> (vAvrgDrvAwyEvtDrvCyc);
		fun >> (tiDurDrvAwyEvtDrvCyc);
	}
};

#endif //____DATADRVAWYEVTDRVCYC_ST_H__
