#ifndef ____DATAHASHDECEVTCURR_ST_H__
#define ____DATAHASHDECEVTCURR_ST_H__








struct dataHashDecEvtCurr_st {
public:
	float vVehMaxHashDecEvt;
	float aVehMaxHashDecEvt;
	float tiDurHashDecEvt;
	float vVehAvrgHashDecEvt;
	float aVehAvrgHashDecEvt;
/*
	dataHashDecEvtCurr_st() {}
	~dataHashDecEvtCurr_st() {}
	dataHashDecEvtCurr_st(const float _vVehMaxHashDecEvt,const float _aVehMaxHashDecEvt,const float _tiDurHashDecEvt,const float _vVehAvrgHashDecEvt,const float _aVehAvrgHashDecEvt):vVehMaxHashDecEvt(_vVehMaxHashDecEvt),aVehMaxHashDecEvt(_aVehMaxHashDecEvt),tiDurHashDecEvt(_tiDurHashDecEvt),vVehAvrgHashDecEvt(_vVehAvrgHashDecEvt),aVehAvrgHashDecEvt(_aVehAvrgHashDecEvt) {}
	dataHashDecEvtCurr_st(const dataHashDecEvtCurr_st &_x){
		vVehMaxHashDecEvt = _x.vVehMaxHashDecEvt;
		aVehMaxHashDecEvt = _x.aVehMaxHashDecEvt;
		tiDurHashDecEvt = _x.tiDurHashDecEvt;
		vVehAvrgHashDecEvt = _x.vVehAvrgHashDecEvt;
		aVehAvrgHashDecEvt = _x.aVehAvrgHashDecEvt;
	}
	dataHashDecEvtCurr_st(dataHashDecEvtCurr_st &&_x){
		vVehMaxHashDecEvt = std::move(_x.vVehMaxHashDecEvt);
		aVehMaxHashDecEvt = std::move(_x.aVehMaxHashDecEvt);
		tiDurHashDecEvt = std::move(_x.tiDurHashDecEvt);
		vVehAvrgHashDecEvt = std::move(_x.vVehAvrgHashDecEvt);
		aVehAvrgHashDecEvt = std::move(_x.aVehAvrgHashDecEvt);
	}
	dataHashDecEvtCurr_st& operator=(const dataHashDecEvtCurr_st &_x){
		vVehMaxHashDecEvt = _x.vVehMaxHashDecEvt;
		aVehMaxHashDecEvt = _x.aVehMaxHashDecEvt;
		tiDurHashDecEvt = _x.tiDurHashDecEvt;
		vVehAvrgHashDecEvt = _x.vVehAvrgHashDecEvt;
		aVehAvrgHashDecEvt = _x.aVehAvrgHashDecEvt;
		return *this;
	}
	dataHashDecEvtCurr_st& operator=(dataHashDecEvtCurr_st &&_x){
		vVehMaxHashDecEvt = std::move(_x.vVehMaxHashDecEvt);
		aVehMaxHashDecEvt = std::move(_x.aVehMaxHashDecEvt);
		tiDurHashDecEvt = std::move(_x.tiDurHashDecEvt);
		vVehAvrgHashDecEvt = std::move(_x.vVehAvrgHashDecEvt);
		aVehAvrgHashDecEvt = std::move(_x.aVehAvrgHashDecEvt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(vVehMaxHashDecEvt);
		fun(aVehMaxHashDecEvt);
		fun(tiDurHashDecEvt);
		fun(vVehAvrgHashDecEvt);
		fun(aVehAvrgHashDecEvt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(vVehMaxHashDecEvt);
		fun(aVehMaxHashDecEvt);
		fun(tiDurHashDecEvt);
		fun(vVehAvrgHashDecEvt);
		fun(aVehAvrgHashDecEvt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (vVehMaxHashDecEvt);
		fun << (aVehMaxHashDecEvt);
		fun << (tiDurHashDecEvt);
		fun << (vVehAvrgHashDecEvt);
		fun << (aVehAvrgHashDecEvt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (vVehMaxHashDecEvt);
		fun >> (aVehMaxHashDecEvt);
		fun >> (tiDurHashDecEvt);
		fun >> (vVehAvrgHashDecEvt);
		fun >> (aVehAvrgHashDecEvt);
	}
};

#endif //____DATAHASHDECEVTCURR_ST_H__
