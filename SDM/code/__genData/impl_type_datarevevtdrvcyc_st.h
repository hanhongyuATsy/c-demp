#ifndef ____DATAREVEVTDRVCYC_ST_H__
#define ____DATAREVEVTDRVCYC_ST_H__


#include "cstdint"
#include "ara/com/vsomeip/impl_type_tiavrgrevevtdrvcyc_a.h"
#include "ara/com/vsomeip/impl_type_numrevgearrevevtdrvcyc_a.h"






struct dataRevEvtDrvCyc_st {
public:
	std::uint32_t numRevEvtDrvCyc;
	ara::com::vsomeip::tiAvrgRevEvtDrvCyc_a tiAvrgRevEvtDrvCyc;
	ara::com::vsomeip::numRevGearRevEvtDrvCyc_a numRevGearRevEvtDrvCyc;
/*
	dataRevEvtDrvCyc_st() {}
	~dataRevEvtDrvCyc_st() {}
	dataRevEvtDrvCyc_st(const std::uint32_t _numRevEvtDrvCyc,const ara::com::vsomeip::tiAvrgRevEvtDrvCyc_a _tiAvrgRevEvtDrvCyc,const ara::com::vsomeip::numRevGearRevEvtDrvCyc_a _numRevGearRevEvtDrvCyc):numRevEvtDrvCyc(_numRevEvtDrvCyc),tiAvrgRevEvtDrvCyc(_tiAvrgRevEvtDrvCyc),numRevGearRevEvtDrvCyc(_numRevGearRevEvtDrvCyc) {}
	dataRevEvtDrvCyc_st(const dataRevEvtDrvCyc_st &_x){
		numRevEvtDrvCyc = _x.numRevEvtDrvCyc;
		tiAvrgRevEvtDrvCyc = _x.tiAvrgRevEvtDrvCyc;
		numRevGearRevEvtDrvCyc = _x.numRevGearRevEvtDrvCyc;
	}
	dataRevEvtDrvCyc_st(dataRevEvtDrvCyc_st &&_x){
		numRevEvtDrvCyc = std::move(_x.numRevEvtDrvCyc);
		tiAvrgRevEvtDrvCyc = std::move(_x.tiAvrgRevEvtDrvCyc);
		numRevGearRevEvtDrvCyc = std::move(_x.numRevGearRevEvtDrvCyc);
	}
	dataRevEvtDrvCyc_st& operator=(const dataRevEvtDrvCyc_st &_x){
		numRevEvtDrvCyc = _x.numRevEvtDrvCyc;
		tiAvrgRevEvtDrvCyc = _x.tiAvrgRevEvtDrvCyc;
		numRevGearRevEvtDrvCyc = _x.numRevGearRevEvtDrvCyc;
		return *this;
	}
	dataRevEvtDrvCyc_st& operator=(dataRevEvtDrvCyc_st &&_x){
		numRevEvtDrvCyc = std::move(_x.numRevEvtDrvCyc);
		tiAvrgRevEvtDrvCyc = std::move(_x.tiAvrgRevEvtDrvCyc);
		numRevGearRevEvtDrvCyc = std::move(_x.numRevGearRevEvtDrvCyc);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(numRevEvtDrvCyc);
		fun(tiAvrgRevEvtDrvCyc);
		fun(numRevGearRevEvtDrvCyc);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(numRevEvtDrvCyc);
		fun(tiAvrgRevEvtDrvCyc);
		fun(numRevGearRevEvtDrvCyc);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (numRevEvtDrvCyc);
		fun << (tiAvrgRevEvtDrvCyc);
		fun << (numRevGearRevEvtDrvCyc);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (numRevEvtDrvCyc);
		fun >> (tiAvrgRevEvtDrvCyc);
		fun >> (numRevGearRevEvtDrvCyc);
	}
};

#endif //____DATAREVEVTDRVCYC_ST_H__
