#ifndef ____DATACHRGCHINLST14DAYS_ST_H__
#define ____DATACHRGCHINLST14DAYS_ST_H__


#include "ara/com/vsomeip/impl_type_timeandposition_utf.h"






struct dataChrgChInLst14Days_st {
public:
	ara::com::vsomeip::timeandposition_utf posFreqChrgInLst14Days;
	float degChrgInLst14Days;
	float tiAvrgChrgInLst14Days;
	ara::com::vsomeip::timeandposition_utf tiBegFreqChrgInLst14Days;
	ara::com::vsomeip::timeandposition_utf tiEndFreqChrgInLst14Days;
/*
	dataChrgChInLst14Days_st() {}
	~dataChrgChInLst14Days_st() {}
	dataChrgChInLst14Days_st(const ara::com::vsomeip::timeandposition_utf _posFreqChrgInLst14Days,const float _degChrgInLst14Days,const float _tiAvrgChrgInLst14Days,const ara::com::vsomeip::timeandposition_utf _tiBegFreqChrgInLst14Days,const ara::com::vsomeip::timeandposition_utf _tiEndFreqChrgInLst14Days):posFreqChrgInLst14Days(_posFreqChrgInLst14Days),degChrgInLst14Days(_degChrgInLst14Days),tiAvrgChrgInLst14Days(_tiAvrgChrgInLst14Days),tiBegFreqChrgInLst14Days(_tiBegFreqChrgInLst14Days),tiEndFreqChrgInLst14Days(_tiEndFreqChrgInLst14Days) {}
	dataChrgChInLst14Days_st(const dataChrgChInLst14Days_st &_x){
		posFreqChrgInLst14Days = _x.posFreqChrgInLst14Days;
		degChrgInLst14Days = _x.degChrgInLst14Days;
		tiAvrgChrgInLst14Days = _x.tiAvrgChrgInLst14Days;
		tiBegFreqChrgInLst14Days = _x.tiBegFreqChrgInLst14Days;
		tiEndFreqChrgInLst14Days = _x.tiEndFreqChrgInLst14Days;
	}
	dataChrgChInLst14Days_st(dataChrgChInLst14Days_st &&_x){
		posFreqChrgInLst14Days = std::move(_x.posFreqChrgInLst14Days);
		degChrgInLst14Days = std::move(_x.degChrgInLst14Days);
		tiAvrgChrgInLst14Days = std::move(_x.tiAvrgChrgInLst14Days);
		tiBegFreqChrgInLst14Days = std::move(_x.tiBegFreqChrgInLst14Days);
		tiEndFreqChrgInLst14Days = std::move(_x.tiEndFreqChrgInLst14Days);
	}
	dataChrgChInLst14Days_st& operator=(const dataChrgChInLst14Days_st &_x){
		posFreqChrgInLst14Days = _x.posFreqChrgInLst14Days;
		degChrgInLst14Days = _x.degChrgInLst14Days;
		tiAvrgChrgInLst14Days = _x.tiAvrgChrgInLst14Days;
		tiBegFreqChrgInLst14Days = _x.tiBegFreqChrgInLst14Days;
		tiEndFreqChrgInLst14Days = _x.tiEndFreqChrgInLst14Days;
		return *this;
	}
	dataChrgChInLst14Days_st& operator=(dataChrgChInLst14Days_st &&_x){
		posFreqChrgInLst14Days = std::move(_x.posFreqChrgInLst14Days);
		degChrgInLst14Days = std::move(_x.degChrgInLst14Days);
		tiAvrgChrgInLst14Days = std::move(_x.tiAvrgChrgInLst14Days);
		tiBegFreqChrgInLst14Days = std::move(_x.tiBegFreqChrgInLst14Days);
		tiEndFreqChrgInLst14Days = std::move(_x.tiEndFreqChrgInLst14Days);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(posFreqChrgInLst14Days);
		fun(degChrgInLst14Days);
		fun(tiAvrgChrgInLst14Days);
		fun(tiBegFreqChrgInLst14Days);
		fun(tiEndFreqChrgInLst14Days);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(posFreqChrgInLst14Days);
		fun(degChrgInLst14Days);
		fun(tiAvrgChrgInLst14Days);
		fun(tiBegFreqChrgInLst14Days);
		fun(tiEndFreqChrgInLst14Days);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (posFreqChrgInLst14Days);
		fun << (degChrgInLst14Days);
		fun << (tiAvrgChrgInLst14Days);
		fun << (tiBegFreqChrgInLst14Days);
		fun << (tiEndFreqChrgInLst14Days);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (posFreqChrgInLst14Days);
		fun >> (degChrgInLst14Days);
		fun >> (tiAvrgChrgInLst14Days);
		fun >> (tiBegFreqChrgInLst14Days);
		fun >> (tiEndFreqChrgInLst14Days);
	}
};

#endif //____DATACHRGCHINLST14DAYS_ST_H__
