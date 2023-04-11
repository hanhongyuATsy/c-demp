#ifndef ____DATATIDRVAWYEVTCURR_ST_H__
#define ____DATATIDRVAWYEVTCURR_ST_H__


#include "ara/com/vsomeip/impl_type_vvehwindrvawyevt_a.h"
#include "ara/com/vsomeip/impl_type_raccpedwindrvawyevt_a.h"






struct dataTiDrvAwyEvtCurr_st {
public:
	ara::com::vsomeip::vVehWinDrvAwyEvt_a vVehWinDrvAwyEvtCurr;
	ara::com::vsomeip::rAccPedWinDrvAwyEvt_a rAccPedWinDrvAwyEvtCurr;
/*
	dataTiDrvAwyEvtCurr_st() {}
	~dataTiDrvAwyEvtCurr_st() {}
	dataTiDrvAwyEvtCurr_st(const ara::com::vsomeip::vVehWinDrvAwyEvt_a _vVehWinDrvAwyEvtCurr,const ara::com::vsomeip::rAccPedWinDrvAwyEvt_a _rAccPedWinDrvAwyEvtCurr):vVehWinDrvAwyEvtCurr(_vVehWinDrvAwyEvtCurr),rAccPedWinDrvAwyEvtCurr(_rAccPedWinDrvAwyEvtCurr) {}
	dataTiDrvAwyEvtCurr_st(const dataTiDrvAwyEvtCurr_st &_x){
		vVehWinDrvAwyEvtCurr = _x.vVehWinDrvAwyEvtCurr;
		rAccPedWinDrvAwyEvtCurr = _x.rAccPedWinDrvAwyEvtCurr;
	}
	dataTiDrvAwyEvtCurr_st(dataTiDrvAwyEvtCurr_st &&_x){
		vVehWinDrvAwyEvtCurr = std::move(_x.vVehWinDrvAwyEvtCurr);
		rAccPedWinDrvAwyEvtCurr = std::move(_x.rAccPedWinDrvAwyEvtCurr);
	}
	dataTiDrvAwyEvtCurr_st& operator=(const dataTiDrvAwyEvtCurr_st &_x){
		vVehWinDrvAwyEvtCurr = _x.vVehWinDrvAwyEvtCurr;
		rAccPedWinDrvAwyEvtCurr = _x.rAccPedWinDrvAwyEvtCurr;
		return *this;
	}
	dataTiDrvAwyEvtCurr_st& operator=(dataTiDrvAwyEvtCurr_st &&_x){
		vVehWinDrvAwyEvtCurr = std::move(_x.vVehWinDrvAwyEvtCurr);
		rAccPedWinDrvAwyEvtCurr = std::move(_x.rAccPedWinDrvAwyEvtCurr);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(vVehWinDrvAwyEvtCurr);
		fun(rAccPedWinDrvAwyEvtCurr);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(vVehWinDrvAwyEvtCurr);
		fun(rAccPedWinDrvAwyEvtCurr);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (vVehWinDrvAwyEvtCurr);
		fun << (rAccPedWinDrvAwyEvtCurr);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (vVehWinDrvAwyEvtCurr);
		fun >> (rAccPedWinDrvAwyEvtCurr);
	}
};

#endif //____DATATIDRVAWYEVTCURR_ST_H__
