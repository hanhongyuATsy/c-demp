#ifndef ____DATATICOASTEVTCURR_ST_H__
#define ____DATATICOASTEVTCURR_ST_H__


#include "ara/com/vsomeip/impl_type_vvehwincoastevtcurr_a.h"






struct dataTiCoastEvtCurr_st {
public:
	ara::com::vsomeip::vVehWinCoastEvtCurr_a vVehWinCoastEvtCurr;
/*
	dataTiCoastEvtCurr_st() {}
	~dataTiCoastEvtCurr_st() {}
	dataTiCoastEvtCurr_st(const ara::com::vsomeip::vVehWinCoastEvtCurr_a _vVehWinCoastEvtCurr):vVehWinCoastEvtCurr(_vVehWinCoastEvtCurr) {}
	dataTiCoastEvtCurr_st(const dataTiCoastEvtCurr_st &_x){
		vVehWinCoastEvtCurr = _x.vVehWinCoastEvtCurr;
	}
	dataTiCoastEvtCurr_st(dataTiCoastEvtCurr_st &&_x){
		vVehWinCoastEvtCurr = std::move(_x.vVehWinCoastEvtCurr);
	}
	dataTiCoastEvtCurr_st& operator=(const dataTiCoastEvtCurr_st &_x){
		vVehWinCoastEvtCurr = _x.vVehWinCoastEvtCurr;
		return *this;
	}
	dataTiCoastEvtCurr_st& operator=(dataTiCoastEvtCurr_st &&_x){
		vVehWinCoastEvtCurr = std::move(_x.vVehWinCoastEvtCurr);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(vVehWinCoastEvtCurr);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(vVehWinCoastEvtCurr);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (vVehWinCoastEvtCurr);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (vVehWinCoastEvtCurr);
	}
};

#endif //____DATATICOASTEVTCURR_ST_H__
