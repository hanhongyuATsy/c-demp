#ifndef ____DATATILNCHGEVTCURR_ST_H__
#define ____DATATILNCHGEVTCURR_ST_H__


#include "ara/com/vsomeip/impl_type_vvehwinlnchgevtcurr_a.h"
#include "ara/com/vsomeip/impl_type_agsteerwhllnchgevtcurr_a.h"
#include "ara/com/vsomeip/impl_type_agsteeryawrateevtcurr_a.h"






struct dataTiLnChgEvtCurr_st {
public:
	ara::com::vsomeip::vVehWinLnChgEvtCurr_a vVehWinLnChgEvtCurr;
	ara::com::vsomeip::AgSteerWhlLnChgEvtCurr_a AgSteerWhlLnChgEvtCurr;
	ara::com::vsomeip::AgSteerYawRateEvtCurr_a yawRateLngChgEvtCurr;
/*
	dataTiLnChgEvtCurr_st() {}
	~dataTiLnChgEvtCurr_st() {}
	dataTiLnChgEvtCurr_st(const ara::com::vsomeip::vVehWinLnChgEvtCurr_a _vVehWinLnChgEvtCurr,const ara::com::vsomeip::AgSteerWhlLnChgEvtCurr_a _AgSteerWhlLnChgEvtCurr,const ara::com::vsomeip::AgSteerYawRateEvtCurr_a _yawRateLngChgEvtCurr):vVehWinLnChgEvtCurr(_vVehWinLnChgEvtCurr),AgSteerWhlLnChgEvtCurr(_AgSteerWhlLnChgEvtCurr),yawRateLngChgEvtCurr(_yawRateLngChgEvtCurr) {}
	dataTiLnChgEvtCurr_st(const dataTiLnChgEvtCurr_st &_x){
		vVehWinLnChgEvtCurr = _x.vVehWinLnChgEvtCurr;
		AgSteerWhlLnChgEvtCurr = _x.AgSteerWhlLnChgEvtCurr;
		yawRateLngChgEvtCurr = _x.yawRateLngChgEvtCurr;
	}
	dataTiLnChgEvtCurr_st(dataTiLnChgEvtCurr_st &&_x){
		vVehWinLnChgEvtCurr = std::move(_x.vVehWinLnChgEvtCurr);
		AgSteerWhlLnChgEvtCurr = std::move(_x.AgSteerWhlLnChgEvtCurr);
		yawRateLngChgEvtCurr = std::move(_x.yawRateLngChgEvtCurr);
	}
	dataTiLnChgEvtCurr_st& operator=(const dataTiLnChgEvtCurr_st &_x){
		vVehWinLnChgEvtCurr = _x.vVehWinLnChgEvtCurr;
		AgSteerWhlLnChgEvtCurr = _x.AgSteerWhlLnChgEvtCurr;
		yawRateLngChgEvtCurr = _x.yawRateLngChgEvtCurr;
		return *this;
	}
	dataTiLnChgEvtCurr_st& operator=(dataTiLnChgEvtCurr_st &&_x){
		vVehWinLnChgEvtCurr = std::move(_x.vVehWinLnChgEvtCurr);
		AgSteerWhlLnChgEvtCurr = std::move(_x.AgSteerWhlLnChgEvtCurr);
		yawRateLngChgEvtCurr = std::move(_x.yawRateLngChgEvtCurr);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(vVehWinLnChgEvtCurr);
		fun(AgSteerWhlLnChgEvtCurr);
		fun(yawRateLngChgEvtCurr);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(vVehWinLnChgEvtCurr);
		fun(AgSteerWhlLnChgEvtCurr);
		fun(yawRateLngChgEvtCurr);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (vVehWinLnChgEvtCurr);
		fun << (AgSteerWhlLnChgEvtCurr);
		fun << (yawRateLngChgEvtCurr);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (vVehWinLnChgEvtCurr);
		fun >> (AgSteerWhlLnChgEvtCurr);
		fun >> (yawRateLngChgEvtCurr);
	}
};

#endif //____DATATILNCHGEVTCURR_ST_H__
