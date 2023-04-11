#ifndef ____DATACURRCHRGEVTINFO_ST_H__
#define ____DATACURRCHRGEVTINFO_ST_H__


#include "ara/com/vsomeip/impl_type_timeandposition_utf.h"
#include "cstdint"






struct dataCurrChrgEvtInfo_st {
public:
	bool flgChrg;
	ara::com::vsomeip::timeandposition_utf tiBegChrg;
	ara::com::vsomeip::timeandposition_utf tiEndChrg;
	ara::com::vsomeip::timeandposition_utf posChrg;
	float SocBegChrg;
	float SocEndChrg;
	float tiDurChrg;
	float DegDurChrgAccuml;
	std::uint8_t typChrg;
/*
	dataCurrChrgEvtInfo_st() {}
	~dataCurrChrgEvtInfo_st() {}
	dataCurrChrgEvtInfo_st(const bool _flgChrg,const ara::com::vsomeip::timeandposition_utf _tiBegChrg,const ara::com::vsomeip::timeandposition_utf _tiEndChrg,const ara::com::vsomeip::timeandposition_utf _posChrg,const float _SocBegChrg,const float _SocEndChrg,const float _tiDurChrg,const float _DegDurChrgAccuml,const std::uint8_t _typChrg):flgChrg(_flgChrg),tiBegChrg(_tiBegChrg),tiEndChrg(_tiEndChrg),posChrg(_posChrg),SocBegChrg(_SocBegChrg),SocEndChrg(_SocEndChrg),tiDurChrg(_tiDurChrg),DegDurChrgAccuml(_DegDurChrgAccuml),typChrg(_typChrg) {}
	dataCurrChrgEvtInfo_st(const dataCurrChrgEvtInfo_st &_x){
		flgChrg = _x.flgChrg;
		tiBegChrg = _x.tiBegChrg;
		tiEndChrg = _x.tiEndChrg;
		posChrg = _x.posChrg;
		SocBegChrg = _x.SocBegChrg;
		SocEndChrg = _x.SocEndChrg;
		tiDurChrg = _x.tiDurChrg;
		DegDurChrgAccuml = _x.DegDurChrgAccuml;
		typChrg = _x.typChrg;
	}
	dataCurrChrgEvtInfo_st(dataCurrChrgEvtInfo_st &&_x){
		flgChrg = std::move(_x.flgChrg);
		tiBegChrg = std::move(_x.tiBegChrg);
		tiEndChrg = std::move(_x.tiEndChrg);
		posChrg = std::move(_x.posChrg);
		SocBegChrg = std::move(_x.SocBegChrg);
		SocEndChrg = std::move(_x.SocEndChrg);
		tiDurChrg = std::move(_x.tiDurChrg);
		DegDurChrgAccuml = std::move(_x.DegDurChrgAccuml);
		typChrg = std::move(_x.typChrg);
	}
	dataCurrChrgEvtInfo_st& operator=(const dataCurrChrgEvtInfo_st &_x){
		flgChrg = _x.flgChrg;
		tiBegChrg = _x.tiBegChrg;
		tiEndChrg = _x.tiEndChrg;
		posChrg = _x.posChrg;
		SocBegChrg = _x.SocBegChrg;
		SocEndChrg = _x.SocEndChrg;
		tiDurChrg = _x.tiDurChrg;
		DegDurChrgAccuml = _x.DegDurChrgAccuml;
		typChrg = _x.typChrg;
		return *this;
	}
	dataCurrChrgEvtInfo_st& operator=(dataCurrChrgEvtInfo_st &&_x){
		flgChrg = std::move(_x.flgChrg);
		tiBegChrg = std::move(_x.tiBegChrg);
		tiEndChrg = std::move(_x.tiEndChrg);
		posChrg = std::move(_x.posChrg);
		SocBegChrg = std::move(_x.SocBegChrg);
		SocEndChrg = std::move(_x.SocEndChrg);
		tiDurChrg = std::move(_x.tiDurChrg);
		DegDurChrgAccuml = std::move(_x.DegDurChrgAccuml);
		typChrg = std::move(_x.typChrg);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(flgChrg);
		fun(tiBegChrg);
		fun(tiEndChrg);
		fun(posChrg);
		fun(SocBegChrg);
		fun(SocEndChrg);
		fun(tiDurChrg);
		fun(DegDurChrgAccuml);
		fun(typChrg);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(flgChrg);
		fun(tiBegChrg);
		fun(tiEndChrg);
		fun(posChrg);
		fun(SocBegChrg);
		fun(SocEndChrg);
		fun(tiDurChrg);
		fun(DegDurChrgAccuml);
		fun(typChrg);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (flgChrg);
		fun << (tiBegChrg);
		fun << (tiEndChrg);
		fun << (posChrg);
		fun << (SocBegChrg);
		fun << (SocEndChrg);
		fun << (tiDurChrg);
		fun << (DegDurChrgAccuml);
		fun << (typChrg);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (flgChrg);
		fun >> (tiBegChrg);
		fun >> (tiEndChrg);
		fun >> (posChrg);
		fun >> (SocBegChrg);
		fun >> (SocEndChrg);
		fun >> (tiDurChrg);
		fun >> (DegDurChrgAccuml);
		fun >> (typChrg);
	}
};

#endif //____DATACURRCHRGEVTINFO_ST_H__
