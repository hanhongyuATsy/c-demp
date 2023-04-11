#ifndef ____DATARFUEVTCHIN14DAYS_ST_H__
#define ____DATARFUEVTCHIN14DAYS_ST_H__


#include "ara/com/vsomeip/impl_type_timeandposition_utf.h"






struct dataRfuEvtChIn14Days_st {
public:
	ara::com::vsomeip::timeandposition_utf posFreqRfu;
	ara::com::vsomeip::timeandposition_utf tiFreqRfu;
/*
	dataRfuEvtChIn14Days_st() {}
	~dataRfuEvtChIn14Days_st() {}
	dataRfuEvtChIn14Days_st(const ara::com::vsomeip::timeandposition_utf _posFreqRfu,const ara::com::vsomeip::timeandposition_utf _tiFreqRfu):posFreqRfu(_posFreqRfu),tiFreqRfu(_tiFreqRfu) {}
	dataRfuEvtChIn14Days_st(const dataRfuEvtChIn14Days_st &_x){
		posFreqRfu = _x.posFreqRfu;
		tiFreqRfu = _x.tiFreqRfu;
	}
	dataRfuEvtChIn14Days_st(dataRfuEvtChIn14Days_st &&_x){
		posFreqRfu = std::move(_x.posFreqRfu);
		tiFreqRfu = std::move(_x.tiFreqRfu);
	}
	dataRfuEvtChIn14Days_st& operator=(const dataRfuEvtChIn14Days_st &_x){
		posFreqRfu = _x.posFreqRfu;
		tiFreqRfu = _x.tiFreqRfu;
		return *this;
	}
	dataRfuEvtChIn14Days_st& operator=(dataRfuEvtChIn14Days_st &&_x){
		posFreqRfu = std::move(_x.posFreqRfu);
		tiFreqRfu = std::move(_x.tiFreqRfu);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(posFreqRfu);
		fun(tiFreqRfu);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(posFreqRfu);
		fun(tiFreqRfu);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (posFreqRfu);
		fun << (tiFreqRfu);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (posFreqRfu);
		fun >> (tiFreqRfu);
	}
};

#endif //____DATARFUEVTCHIN14DAYS_ST_H__
