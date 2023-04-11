#ifndef ____DATALNCHGEVTCURR_ST_H__
#define ____DATALNCHGEVTCURR_ST_H__








struct dataLnChgEvtCurr_st {
public:
	float tiLnChgEvt;
	float vVehAvrgLnChgEvt;
	float vVehMaxLnChgEvt;
	float aVehMaxLnChgrEvt;
	float aVehMinLnChgrEvt;
	float AgSteerWhlMaxLnChgEvt;
	float yawRateMaxLnChgEvt;
	float vVehMinLnChgEvt;
/*
	dataLnChgEvtCurr_st() {}
	~dataLnChgEvtCurr_st() {}
	dataLnChgEvtCurr_st(const float _tiLnChgEvt,const float _vVehAvrgLnChgEvt,const float _vVehMaxLnChgEvt,const float _aVehMaxLnChgrEvt,const float _aVehMinLnChgrEvt,const float _AgSteerWhlMaxLnChgEvt,const float _yawRateMaxLnChgEvt,const float _vVehMinLnChgEvt):tiLnChgEvt(_tiLnChgEvt),vVehAvrgLnChgEvt(_vVehAvrgLnChgEvt),vVehMaxLnChgEvt(_vVehMaxLnChgEvt),aVehMaxLnChgrEvt(_aVehMaxLnChgrEvt),aVehMinLnChgrEvt(_aVehMinLnChgrEvt),AgSteerWhlMaxLnChgEvt(_AgSteerWhlMaxLnChgEvt),yawRateMaxLnChgEvt(_yawRateMaxLnChgEvt),vVehMinLnChgEvt(_vVehMinLnChgEvt) {}
	dataLnChgEvtCurr_st(const dataLnChgEvtCurr_st &_x){
		tiLnChgEvt = _x.tiLnChgEvt;
		vVehAvrgLnChgEvt = _x.vVehAvrgLnChgEvt;
		vVehMaxLnChgEvt = _x.vVehMaxLnChgEvt;
		aVehMaxLnChgrEvt = _x.aVehMaxLnChgrEvt;
		aVehMinLnChgrEvt = _x.aVehMinLnChgrEvt;
		AgSteerWhlMaxLnChgEvt = _x.AgSteerWhlMaxLnChgEvt;
		yawRateMaxLnChgEvt = _x.yawRateMaxLnChgEvt;
		vVehMinLnChgEvt = _x.vVehMinLnChgEvt;
	}
	dataLnChgEvtCurr_st(dataLnChgEvtCurr_st &&_x){
		tiLnChgEvt = std::move(_x.tiLnChgEvt);
		vVehAvrgLnChgEvt = std::move(_x.vVehAvrgLnChgEvt);
		vVehMaxLnChgEvt = std::move(_x.vVehMaxLnChgEvt);
		aVehMaxLnChgrEvt = std::move(_x.aVehMaxLnChgrEvt);
		aVehMinLnChgrEvt = std::move(_x.aVehMinLnChgrEvt);
		AgSteerWhlMaxLnChgEvt = std::move(_x.AgSteerWhlMaxLnChgEvt);
		yawRateMaxLnChgEvt = std::move(_x.yawRateMaxLnChgEvt);
		vVehMinLnChgEvt = std::move(_x.vVehMinLnChgEvt);
	}
	dataLnChgEvtCurr_st& operator=(const dataLnChgEvtCurr_st &_x){
		tiLnChgEvt = _x.tiLnChgEvt;
		vVehAvrgLnChgEvt = _x.vVehAvrgLnChgEvt;
		vVehMaxLnChgEvt = _x.vVehMaxLnChgEvt;
		aVehMaxLnChgrEvt = _x.aVehMaxLnChgrEvt;
		aVehMinLnChgrEvt = _x.aVehMinLnChgrEvt;
		AgSteerWhlMaxLnChgEvt = _x.AgSteerWhlMaxLnChgEvt;
		yawRateMaxLnChgEvt = _x.yawRateMaxLnChgEvt;
		vVehMinLnChgEvt = _x.vVehMinLnChgEvt;
		return *this;
	}
	dataLnChgEvtCurr_st& operator=(dataLnChgEvtCurr_st &&_x){
		tiLnChgEvt = std::move(_x.tiLnChgEvt);
		vVehAvrgLnChgEvt = std::move(_x.vVehAvrgLnChgEvt);
		vVehMaxLnChgEvt = std::move(_x.vVehMaxLnChgEvt);
		aVehMaxLnChgrEvt = std::move(_x.aVehMaxLnChgrEvt);
		aVehMinLnChgrEvt = std::move(_x.aVehMinLnChgrEvt);
		AgSteerWhlMaxLnChgEvt = std::move(_x.AgSteerWhlMaxLnChgEvt);
		yawRateMaxLnChgEvt = std::move(_x.yawRateMaxLnChgEvt);
		vVehMinLnChgEvt = std::move(_x.vVehMinLnChgEvt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(tiLnChgEvt);
		fun(vVehAvrgLnChgEvt);
		fun(vVehMaxLnChgEvt);
		fun(aVehMaxLnChgrEvt);
		fun(aVehMinLnChgrEvt);
		fun(AgSteerWhlMaxLnChgEvt);
		fun(yawRateMaxLnChgEvt);
		fun(vVehMinLnChgEvt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(tiLnChgEvt);
		fun(vVehAvrgLnChgEvt);
		fun(vVehMaxLnChgEvt);
		fun(aVehMaxLnChgrEvt);
		fun(aVehMinLnChgrEvt);
		fun(AgSteerWhlMaxLnChgEvt);
		fun(yawRateMaxLnChgEvt);
		fun(vVehMinLnChgEvt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (tiLnChgEvt);
		fun << (vVehAvrgLnChgEvt);
		fun << (vVehMaxLnChgEvt);
		fun << (aVehMaxLnChgrEvt);
		fun << (aVehMinLnChgrEvt);
		fun << (AgSteerWhlMaxLnChgEvt);
		fun << (yawRateMaxLnChgEvt);
		fun << (vVehMinLnChgEvt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (tiLnChgEvt);
		fun >> (vVehAvrgLnChgEvt);
		fun >> (vVehMaxLnChgEvt);
		fun >> (aVehMaxLnChgrEvt);
		fun >> (aVehMinLnChgrEvt);
		fun >> (AgSteerWhlMaxLnChgEvt);
		fun >> (yawRateMaxLnChgEvt);
		fun >> (vVehMinLnChgEvt);
	}
};

#endif //____DATALNCHGEVTCURR_ST_H__
