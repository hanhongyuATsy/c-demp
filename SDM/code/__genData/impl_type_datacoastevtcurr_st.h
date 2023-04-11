#ifndef ____DATACOASTEVTCURR_ST_H__
#define ____DATACOASTEVTCURR_ST_H__








struct dataCoastEvtCurr_st {
public:
	float tiCoastEvt;
	float vVehMaxCoastEvt;
	float vVehMinCoastEvt;
/*
	dataCoastEvtCurr_st() {}
	~dataCoastEvtCurr_st() {}
	dataCoastEvtCurr_st(const float _tiCoastEvt,const float _vVehMaxCoastEvt,const float _vVehMinCoastEvt):tiCoastEvt(_tiCoastEvt),vVehMaxCoastEvt(_vVehMaxCoastEvt),vVehMinCoastEvt(_vVehMinCoastEvt) {}
	dataCoastEvtCurr_st(const dataCoastEvtCurr_st &_x){
		tiCoastEvt = _x.tiCoastEvt;
		vVehMaxCoastEvt = _x.vVehMaxCoastEvt;
		vVehMinCoastEvt = _x.vVehMinCoastEvt;
	}
	dataCoastEvtCurr_st(dataCoastEvtCurr_st &&_x){
		tiCoastEvt = std::move(_x.tiCoastEvt);
		vVehMaxCoastEvt = std::move(_x.vVehMaxCoastEvt);
		vVehMinCoastEvt = std::move(_x.vVehMinCoastEvt);
	}
	dataCoastEvtCurr_st& operator=(const dataCoastEvtCurr_st &_x){
		tiCoastEvt = _x.tiCoastEvt;
		vVehMaxCoastEvt = _x.vVehMaxCoastEvt;
		vVehMinCoastEvt = _x.vVehMinCoastEvt;
		return *this;
	}
	dataCoastEvtCurr_st& operator=(dataCoastEvtCurr_st &&_x){
		tiCoastEvt = std::move(_x.tiCoastEvt);
		vVehMaxCoastEvt = std::move(_x.vVehMaxCoastEvt);
		vVehMinCoastEvt = std::move(_x.vVehMinCoastEvt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(tiCoastEvt);
		fun(vVehMaxCoastEvt);
		fun(vVehMinCoastEvt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(tiCoastEvt);
		fun(vVehMaxCoastEvt);
		fun(vVehMinCoastEvt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (tiCoastEvt);
		fun << (vVehMaxCoastEvt);
		fun << (vVehMinCoastEvt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (tiCoastEvt);
		fun >> (vVehMaxCoastEvt);
		fun >> (vVehMinCoastEvt);
	}
};

#endif //____DATACOASTEVTCURR_ST_H__
