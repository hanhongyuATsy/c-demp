#ifndef ____DATAIDLEVTDRVCYC_ST_H__
#define ____DATAIDLEVTDRVCYC_ST_H__


#include "cstdint"
#include "ara/com/vsomeip/impl_type_tiduridlevtdrvcyc_a.h"






struct dataIdlEvtDrvCyc_st {
public:
	std::uint32_t numIdlEvtDrvCyc;
	ara::com::vsomeip::tiDurIdlEvtDrvCyc_a tiDurIdlEvtDrvCyc;
/*
	dataIdlEvtDrvCyc_st() {}
	~dataIdlEvtDrvCyc_st() {}
	dataIdlEvtDrvCyc_st(const std::uint32_t _numIdlEvtDrvCyc,const ara::com::vsomeip::tiDurIdlEvtDrvCyc_a _tiDurIdlEvtDrvCyc):numIdlEvtDrvCyc(_numIdlEvtDrvCyc),tiDurIdlEvtDrvCyc(_tiDurIdlEvtDrvCyc) {}
	dataIdlEvtDrvCyc_st(const dataIdlEvtDrvCyc_st &_x){
		numIdlEvtDrvCyc = _x.numIdlEvtDrvCyc;
		tiDurIdlEvtDrvCyc = _x.tiDurIdlEvtDrvCyc;
	}
	dataIdlEvtDrvCyc_st(dataIdlEvtDrvCyc_st &&_x){
		numIdlEvtDrvCyc = std::move(_x.numIdlEvtDrvCyc);
		tiDurIdlEvtDrvCyc = std::move(_x.tiDurIdlEvtDrvCyc);
	}
	dataIdlEvtDrvCyc_st& operator=(const dataIdlEvtDrvCyc_st &_x){
		numIdlEvtDrvCyc = _x.numIdlEvtDrvCyc;
		tiDurIdlEvtDrvCyc = _x.tiDurIdlEvtDrvCyc;
		return *this;
	}
	dataIdlEvtDrvCyc_st& operator=(dataIdlEvtDrvCyc_st &&_x){
		numIdlEvtDrvCyc = std::move(_x.numIdlEvtDrvCyc);
		tiDurIdlEvtDrvCyc = std::move(_x.tiDurIdlEvtDrvCyc);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(numIdlEvtDrvCyc);
		fun(tiDurIdlEvtDrvCyc);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(numIdlEvtDrvCyc);
		fun(tiDurIdlEvtDrvCyc);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (numIdlEvtDrvCyc);
		fun << (tiDurIdlEvtDrvCyc);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (numIdlEvtDrvCyc);
		fun >> (tiDurIdlEvtDrvCyc);
	}
};

#endif //____DATAIDLEVTDRVCYC_ST_H__
