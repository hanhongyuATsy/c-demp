#ifndef ____DATATIHASHACCEVTCURR_ST_H__
#define ____DATATIHASHACCEVTCURR_ST_H__


#include "ara/com/vsomeip/impl_type_vvehwinhashaccevt_a.h"






struct dataTiHashAccEvtCurr_st {
public:
	ara::com::vsomeip::vVehWinHashAccEvt_a vVehWinHashAccEvtCurr;
/*
	dataTiHashAccEvtCurr_st() {}
	~dataTiHashAccEvtCurr_st() {}
	dataTiHashAccEvtCurr_st(const ara::com::vsomeip::vVehWinHashAccEvt_a _vVehWinHashAccEvtCurr):vVehWinHashAccEvtCurr(_vVehWinHashAccEvtCurr) {}
	dataTiHashAccEvtCurr_st(const dataTiHashAccEvtCurr_st &_x){
		vVehWinHashAccEvtCurr = _x.vVehWinHashAccEvtCurr;
	}
	dataTiHashAccEvtCurr_st(dataTiHashAccEvtCurr_st &&_x){
		vVehWinHashAccEvtCurr = std::move(_x.vVehWinHashAccEvtCurr);
	}
	dataTiHashAccEvtCurr_st& operator=(const dataTiHashAccEvtCurr_st &_x){
		vVehWinHashAccEvtCurr = _x.vVehWinHashAccEvtCurr;
		return *this;
	}
	dataTiHashAccEvtCurr_st& operator=(dataTiHashAccEvtCurr_st &&_x){
		vVehWinHashAccEvtCurr = std::move(_x.vVehWinHashAccEvtCurr);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(vVehWinHashAccEvtCurr);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(vVehWinHashAccEvtCurr);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (vVehWinHashAccEvtCurr);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (vVehWinHashAccEvtCurr);
	}
};

#endif //____DATATIHASHACCEVTCURR_ST_H__
