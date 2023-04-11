#ifndef ____DATASTEEREVTCURR_ST_H__
#define ____DATASTEEREVTCURR_ST_H__








struct dataSteerEvtCurr_st {
public:
	float vVehAvrgSteerEvt;
	float vVehMaxSteerEvt;
	float aVehMaxSteerEvt;
	float aVehMinSteerEvt;
	float AgSteerWhlMaxSteerEvt;
	float yawRateMaxSteerEvt;
	float vVehMinSteerEvt;
	float tiDurSteerEvt;
/*
	dataSteerEvtCurr_st() {}
	~dataSteerEvtCurr_st() {}
	dataSteerEvtCurr_st(const float _vVehAvrgSteerEvt,const float _vVehMaxSteerEvt,const float _aVehMaxSteerEvt,const float _aVehMinSteerEvt,const float _AgSteerWhlMaxSteerEvt,const float _yawRateMaxSteerEvt,const float _vVehMinSteerEvt,const float _tiDurSteerEvt):vVehAvrgSteerEvt(_vVehAvrgSteerEvt),vVehMaxSteerEvt(_vVehMaxSteerEvt),aVehMaxSteerEvt(_aVehMaxSteerEvt),aVehMinSteerEvt(_aVehMinSteerEvt),AgSteerWhlMaxSteerEvt(_AgSteerWhlMaxSteerEvt),yawRateMaxSteerEvt(_yawRateMaxSteerEvt),vVehMinSteerEvt(_vVehMinSteerEvt),tiDurSteerEvt(_tiDurSteerEvt) {}
	dataSteerEvtCurr_st(const dataSteerEvtCurr_st &_x){
		vVehAvrgSteerEvt = _x.vVehAvrgSteerEvt;
		vVehMaxSteerEvt = _x.vVehMaxSteerEvt;
		aVehMaxSteerEvt = _x.aVehMaxSteerEvt;
		aVehMinSteerEvt = _x.aVehMinSteerEvt;
		AgSteerWhlMaxSteerEvt = _x.AgSteerWhlMaxSteerEvt;
		yawRateMaxSteerEvt = _x.yawRateMaxSteerEvt;
		vVehMinSteerEvt = _x.vVehMinSteerEvt;
		tiDurSteerEvt = _x.tiDurSteerEvt;
	}
	dataSteerEvtCurr_st(dataSteerEvtCurr_st &&_x){
		vVehAvrgSteerEvt = std::move(_x.vVehAvrgSteerEvt);
		vVehMaxSteerEvt = std::move(_x.vVehMaxSteerEvt);
		aVehMaxSteerEvt = std::move(_x.aVehMaxSteerEvt);
		aVehMinSteerEvt = std::move(_x.aVehMinSteerEvt);
		AgSteerWhlMaxSteerEvt = std::move(_x.AgSteerWhlMaxSteerEvt);
		yawRateMaxSteerEvt = std::move(_x.yawRateMaxSteerEvt);
		vVehMinSteerEvt = std::move(_x.vVehMinSteerEvt);
		tiDurSteerEvt = std::move(_x.tiDurSteerEvt);
	}
	dataSteerEvtCurr_st& operator=(const dataSteerEvtCurr_st &_x){
		vVehAvrgSteerEvt = _x.vVehAvrgSteerEvt;
		vVehMaxSteerEvt = _x.vVehMaxSteerEvt;
		aVehMaxSteerEvt = _x.aVehMaxSteerEvt;
		aVehMinSteerEvt = _x.aVehMinSteerEvt;
		AgSteerWhlMaxSteerEvt = _x.AgSteerWhlMaxSteerEvt;
		yawRateMaxSteerEvt = _x.yawRateMaxSteerEvt;
		vVehMinSteerEvt = _x.vVehMinSteerEvt;
		tiDurSteerEvt = _x.tiDurSteerEvt;
		return *this;
	}
	dataSteerEvtCurr_st& operator=(dataSteerEvtCurr_st &&_x){
		vVehAvrgSteerEvt = std::move(_x.vVehAvrgSteerEvt);
		vVehMaxSteerEvt = std::move(_x.vVehMaxSteerEvt);
		aVehMaxSteerEvt = std::move(_x.aVehMaxSteerEvt);
		aVehMinSteerEvt = std::move(_x.aVehMinSteerEvt);
		AgSteerWhlMaxSteerEvt = std::move(_x.AgSteerWhlMaxSteerEvt);
		yawRateMaxSteerEvt = std::move(_x.yawRateMaxSteerEvt);
		vVehMinSteerEvt = std::move(_x.vVehMinSteerEvt);
		tiDurSteerEvt = std::move(_x.tiDurSteerEvt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(vVehAvrgSteerEvt);
		fun(vVehMaxSteerEvt);
		fun(aVehMaxSteerEvt);
		fun(aVehMinSteerEvt);
		fun(AgSteerWhlMaxSteerEvt);
		fun(yawRateMaxSteerEvt);
		fun(vVehMinSteerEvt);
		fun(tiDurSteerEvt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(vVehAvrgSteerEvt);
		fun(vVehMaxSteerEvt);
		fun(aVehMaxSteerEvt);
		fun(aVehMinSteerEvt);
		fun(AgSteerWhlMaxSteerEvt);
		fun(yawRateMaxSteerEvt);
		fun(vVehMinSteerEvt);
		fun(tiDurSteerEvt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (vVehAvrgSteerEvt);
		fun << (vVehMaxSteerEvt);
		fun << (aVehMaxSteerEvt);
		fun << (aVehMinSteerEvt);
		fun << (AgSteerWhlMaxSteerEvt);
		fun << (yawRateMaxSteerEvt);
		fun << (vVehMinSteerEvt);
		fun << (tiDurSteerEvt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (vVehAvrgSteerEvt);
		fun >> (vVehMaxSteerEvt);
		fun >> (aVehMaxSteerEvt);
		fun >> (aVehMinSteerEvt);
		fun >> (AgSteerWhlMaxSteerEvt);
		fun >> (yawRateMaxSteerEvt);
		fun >> (vVehMinSteerEvt);
		fun >> (tiDurSteerEvt);
	}
};

#endif //____DATASTEEREVTCURR_ST_H__
