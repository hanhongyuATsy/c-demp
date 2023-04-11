#ifndef ____DATATIHASHDECEVTCURR_ST_H__
#define ____DATATIHASHDECEVTCURR_ST_H__


#include "ara/com/vsomeip/impl_type_vvehwinhashdecevt_a.h"






struct dataTiHashDecEvtCurr_st {
public:
	ara::com::vsomeip::vVehWinHashDecEvt_a vVehWinHashDecEvtCurr;
/*
	dataTiHashDecEvtCurr_st() {}
	~dataTiHashDecEvtCurr_st() {}
	dataTiHashDecEvtCurr_st(const ara::com::vsomeip::vVehWinHashDecEvt_a _vVehWinHashDecEvtCurr):vVehWinHashDecEvtCurr(_vVehWinHashDecEvtCurr) {}
	dataTiHashDecEvtCurr_st(const dataTiHashDecEvtCurr_st &_x){
		vVehWinHashDecEvtCurr = _x.vVehWinHashDecEvtCurr;
	}
	dataTiHashDecEvtCurr_st(dataTiHashDecEvtCurr_st &&_x){
		vVehWinHashDecEvtCurr = std::move(_x.vVehWinHashDecEvtCurr);
	}
	dataTiHashDecEvtCurr_st& operator=(const dataTiHashDecEvtCurr_st &_x){
		vVehWinHashDecEvtCurr = _x.vVehWinHashDecEvtCurr;
		return *this;
	}
	dataTiHashDecEvtCurr_st& operator=(dataTiHashDecEvtCurr_st &&_x){
		vVehWinHashDecEvtCurr = std::move(_x.vVehWinHashDecEvtCurr);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(vVehWinHashDecEvtCurr);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(vVehWinHashDecEvtCurr);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (vVehWinHashDecEvtCurr);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (vVehWinHashDecEvtCurr);
	}
};

#endif //____DATATIHASHDECEVTCURR_ST_H__
