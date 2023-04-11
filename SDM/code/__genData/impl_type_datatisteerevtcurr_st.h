#ifndef ____DATATISTEEREVTCURR_ST_H__
#define ____DATATISTEEREVTCURR_ST_H__


#include "ara/com/vsomeip/impl_type_vvehwinsteerevtcurr_a.h"
#include "ara/com/vsomeip/impl_type_agsteerwhlsteerevtcurr_a.h"
#include "ara/com/vsomeip/impl_type_yawratesteerevtcurr_a.h"






struct dataTiSteerEvtCurr_st {
public:
	ara::com::vsomeip::vVehWinSteerEvtCurr_a vVehWinSteerEvtCurr;
	ara::com::vsomeip::AgSteerWhlSteerEvtCurr_a AgSteerWhlSteerEvtCurr;
	ara::com::vsomeip::yawRateSteerEvtCurr_a yawRateSteerEvtCurr;
/*
	dataTiSteerEvtCurr_st() {}
	~dataTiSteerEvtCurr_st() {}
	dataTiSteerEvtCurr_st(const ara::com::vsomeip::vVehWinSteerEvtCurr_a _vVehWinSteerEvtCurr,const ara::com::vsomeip::AgSteerWhlSteerEvtCurr_a _AgSteerWhlSteerEvtCurr,const ara::com::vsomeip::yawRateSteerEvtCurr_a _yawRateSteerEvtCurr):vVehWinSteerEvtCurr(_vVehWinSteerEvtCurr),AgSteerWhlSteerEvtCurr(_AgSteerWhlSteerEvtCurr),yawRateSteerEvtCurr(_yawRateSteerEvtCurr) {}
	dataTiSteerEvtCurr_st(const dataTiSteerEvtCurr_st &_x){
		vVehWinSteerEvtCurr = _x.vVehWinSteerEvtCurr;
		AgSteerWhlSteerEvtCurr = _x.AgSteerWhlSteerEvtCurr;
		yawRateSteerEvtCurr = _x.yawRateSteerEvtCurr;
	}
	dataTiSteerEvtCurr_st(dataTiSteerEvtCurr_st &&_x){
		vVehWinSteerEvtCurr = std::move(_x.vVehWinSteerEvtCurr);
		AgSteerWhlSteerEvtCurr = std::move(_x.AgSteerWhlSteerEvtCurr);
		yawRateSteerEvtCurr = std::move(_x.yawRateSteerEvtCurr);
	}
	dataTiSteerEvtCurr_st& operator=(const dataTiSteerEvtCurr_st &_x){
		vVehWinSteerEvtCurr = _x.vVehWinSteerEvtCurr;
		AgSteerWhlSteerEvtCurr = _x.AgSteerWhlSteerEvtCurr;
		yawRateSteerEvtCurr = _x.yawRateSteerEvtCurr;
		return *this;
	}
	dataTiSteerEvtCurr_st& operator=(dataTiSteerEvtCurr_st &&_x){
		vVehWinSteerEvtCurr = std::move(_x.vVehWinSteerEvtCurr);
		AgSteerWhlSteerEvtCurr = std::move(_x.AgSteerWhlSteerEvtCurr);
		yawRateSteerEvtCurr = std::move(_x.yawRateSteerEvtCurr);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(vVehWinSteerEvtCurr);
		fun(AgSteerWhlSteerEvtCurr);
		fun(yawRateSteerEvtCurr);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(vVehWinSteerEvtCurr);
		fun(AgSteerWhlSteerEvtCurr);
		fun(yawRateSteerEvtCurr);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (vVehWinSteerEvtCurr);
		fun << (AgSteerWhlSteerEvtCurr);
		fun << (yawRateSteerEvtCurr);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (vVehWinSteerEvtCurr);
		fun >> (AgSteerWhlSteerEvtCurr);
		fun >> (yawRateSteerEvtCurr);
	}
};

#endif //____DATATISTEEREVTCURR_ST_H__
