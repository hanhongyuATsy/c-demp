#ifndef ____DATAHASHACCEVTCURR_ST_H__
#define ____DATAHASHACCEVTCURR_ST_H__








struct dataHashAccEvtCurr_st {
public:
	float tiDurHashAccEvt;
	float aVehMaxHashAccEvt;
	float vVehMaxHashAccEvt;
	float vVehAvrgHashAccEvt;
	float aVehAvrgHashAccEvt;
/*
	dataHashAccEvtCurr_st() {}
	~dataHashAccEvtCurr_st() {}
	dataHashAccEvtCurr_st(const float _tiDurHashAccEvt,const float _aVehMaxHashAccEvt,const float _vVehMaxHashAccEvt,const float _vVehAvrgHashAccEvt,const float _aVehAvrgHashAccEvt):tiDurHashAccEvt(_tiDurHashAccEvt),aVehMaxHashAccEvt(_aVehMaxHashAccEvt),vVehMaxHashAccEvt(_vVehMaxHashAccEvt),vVehAvrgHashAccEvt(_vVehAvrgHashAccEvt),aVehAvrgHashAccEvt(_aVehAvrgHashAccEvt) {}
	dataHashAccEvtCurr_st(const dataHashAccEvtCurr_st &_x){
		tiDurHashAccEvt = _x.tiDurHashAccEvt;
		aVehMaxHashAccEvt = _x.aVehMaxHashAccEvt;
		vVehMaxHashAccEvt = _x.vVehMaxHashAccEvt;
		vVehAvrgHashAccEvt = _x.vVehAvrgHashAccEvt;
		aVehAvrgHashAccEvt = _x.aVehAvrgHashAccEvt;
	}
	dataHashAccEvtCurr_st(dataHashAccEvtCurr_st &&_x){
		tiDurHashAccEvt = std::move(_x.tiDurHashAccEvt);
		aVehMaxHashAccEvt = std::move(_x.aVehMaxHashAccEvt);
		vVehMaxHashAccEvt = std::move(_x.vVehMaxHashAccEvt);
		vVehAvrgHashAccEvt = std::move(_x.vVehAvrgHashAccEvt);
		aVehAvrgHashAccEvt = std::move(_x.aVehAvrgHashAccEvt);
	}
	dataHashAccEvtCurr_st& operator=(const dataHashAccEvtCurr_st &_x){
		tiDurHashAccEvt = _x.tiDurHashAccEvt;
		aVehMaxHashAccEvt = _x.aVehMaxHashAccEvt;
		vVehMaxHashAccEvt = _x.vVehMaxHashAccEvt;
		vVehAvrgHashAccEvt = _x.vVehAvrgHashAccEvt;
		aVehAvrgHashAccEvt = _x.aVehAvrgHashAccEvt;
		return *this;
	}
	dataHashAccEvtCurr_st& operator=(dataHashAccEvtCurr_st &&_x){
		tiDurHashAccEvt = std::move(_x.tiDurHashAccEvt);
		aVehMaxHashAccEvt = std::move(_x.aVehMaxHashAccEvt);
		vVehMaxHashAccEvt = std::move(_x.vVehMaxHashAccEvt);
		vVehAvrgHashAccEvt = std::move(_x.vVehAvrgHashAccEvt);
		aVehAvrgHashAccEvt = std::move(_x.aVehAvrgHashAccEvt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(tiDurHashAccEvt);
		fun(aVehMaxHashAccEvt);
		fun(vVehMaxHashAccEvt);
		fun(vVehAvrgHashAccEvt);
		fun(aVehAvrgHashAccEvt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(tiDurHashAccEvt);
		fun(aVehMaxHashAccEvt);
		fun(vVehMaxHashAccEvt);
		fun(vVehAvrgHashAccEvt);
		fun(aVehAvrgHashAccEvt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (tiDurHashAccEvt);
		fun << (aVehMaxHashAccEvt);
		fun << (vVehMaxHashAccEvt);
		fun << (vVehAvrgHashAccEvt);
		fun << (aVehAvrgHashAccEvt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (tiDurHashAccEvt);
		fun >> (aVehMaxHashAccEvt);
		fun >> (vVehMaxHashAccEvt);
		fun >> (vVehAvrgHashAccEvt);
		fun >> (aVehAvrgHashAccEvt);
	}
};

#endif //____DATAHASHACCEVTCURR_ST_H__
