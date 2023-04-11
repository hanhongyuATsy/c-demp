#ifndef ____DATACURRRFUEVTINFO_ST_H__
#define ____DATACURRRFUEVTINFO_ST_H__


#include "ara/com/vsomeip/impl_type_timeandposition_utf.h"






struct dataCurrRfuEvtInfo_st {
public:
	bool flgTankSt;
	float qRfu;
	ara::com::vsomeip::timeandposition_utf tiRfu;
	ara::com::vsomeip::timeandposition_utf posRfu;
/*
	dataCurrRfuEvtInfo_st() {}
	~dataCurrRfuEvtInfo_st() {}
	dataCurrRfuEvtInfo_st(const bool _flgTankSt,const float _qRfu,const ara::com::vsomeip::timeandposition_utf _tiRfu,const ara::com::vsomeip::timeandposition_utf _posRfu):flgTankSt(_flgTankSt),qRfu(_qRfu),tiRfu(_tiRfu),posRfu(_posRfu) {}
	dataCurrRfuEvtInfo_st(const dataCurrRfuEvtInfo_st &_x){
		flgTankSt = _x.flgTankSt;
		qRfu = _x.qRfu;
		tiRfu = _x.tiRfu;
		posRfu = _x.posRfu;
	}
	dataCurrRfuEvtInfo_st(dataCurrRfuEvtInfo_st &&_x){
		flgTankSt = std::move(_x.flgTankSt);
		qRfu = std::move(_x.qRfu);
		tiRfu = std::move(_x.tiRfu);
		posRfu = std::move(_x.posRfu);
	}
	dataCurrRfuEvtInfo_st& operator=(const dataCurrRfuEvtInfo_st &_x){
		flgTankSt = _x.flgTankSt;
		qRfu = _x.qRfu;
		tiRfu = _x.tiRfu;
		posRfu = _x.posRfu;
		return *this;
	}
	dataCurrRfuEvtInfo_st& operator=(dataCurrRfuEvtInfo_st &&_x){
		flgTankSt = std::move(_x.flgTankSt);
		qRfu = std::move(_x.qRfu);
		tiRfu = std::move(_x.tiRfu);
		posRfu = std::move(_x.posRfu);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(flgTankSt);
		fun(qRfu);
		fun(tiRfu);
		fun(posRfu);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(flgTankSt);
		fun(qRfu);
		fun(tiRfu);
		fun(posRfu);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (flgTankSt);
		fun << (qRfu);
		fun << (tiRfu);
		fun << (posRfu);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (flgTankSt);
		fun >> (qRfu);
		fun >> (tiRfu);
		fun >> (posRfu);
	}
};

#endif //____DATACURRRFUEVTINFO_ST_H__
