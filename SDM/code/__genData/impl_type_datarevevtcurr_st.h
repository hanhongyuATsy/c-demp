#ifndef ____DATAREVEVTCURR_ST_H__
#define ____DATAREVEVTCURR_ST_H__


#include "cstdint"






struct dataRevEvtCurr_st {
public:
	std::uint32_t numInRevGearRevEvt;
	float vVehMaxRevEvt;
	float tiDurRevEvt;
/*
	dataRevEvtCurr_st() {}
	~dataRevEvtCurr_st() {}
	dataRevEvtCurr_st(const std::uint32_t _numInRevGearRevEvt,const float _vVehMaxRevEvt,const float _tiDurRevEvt):numInRevGearRevEvt(_numInRevGearRevEvt),vVehMaxRevEvt(_vVehMaxRevEvt),tiDurRevEvt(_tiDurRevEvt) {}
	dataRevEvtCurr_st(const dataRevEvtCurr_st &_x){
		numInRevGearRevEvt = _x.numInRevGearRevEvt;
		vVehMaxRevEvt = _x.vVehMaxRevEvt;
		tiDurRevEvt = _x.tiDurRevEvt;
	}
	dataRevEvtCurr_st(dataRevEvtCurr_st &&_x){
		numInRevGearRevEvt = std::move(_x.numInRevGearRevEvt);
		vVehMaxRevEvt = std::move(_x.vVehMaxRevEvt);
		tiDurRevEvt = std::move(_x.tiDurRevEvt);
	}
	dataRevEvtCurr_st& operator=(const dataRevEvtCurr_st &_x){
		numInRevGearRevEvt = _x.numInRevGearRevEvt;
		vVehMaxRevEvt = _x.vVehMaxRevEvt;
		tiDurRevEvt = _x.tiDurRevEvt;
		return *this;
	}
	dataRevEvtCurr_st& operator=(dataRevEvtCurr_st &&_x){
		numInRevGearRevEvt = std::move(_x.numInRevGearRevEvt);
		vVehMaxRevEvt = std::move(_x.vVehMaxRevEvt);
		tiDurRevEvt = std::move(_x.tiDurRevEvt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(numInRevGearRevEvt);
		fun(vVehMaxRevEvt);
		fun(tiDurRevEvt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(numInRevGearRevEvt);
		fun(vVehMaxRevEvt);
		fun(tiDurRevEvt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (numInRevGearRevEvt);
		fun << (vVehMaxRevEvt);
		fun << (tiDurRevEvt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (numInRevGearRevEvt);
		fun >> (vVehMaxRevEvt);
		fun >> (tiDurRevEvt);
	}
};

#endif //____DATAREVEVTCURR_ST_H__
