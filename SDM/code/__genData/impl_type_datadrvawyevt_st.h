#ifndef ____DATADRVAWYEVT_ST_H__
#define ____DATADRVAWYEVT_ST_H__








struct dataDrvAwyEvt_st {
public:
	float aAvrgDrvAwyEvt;
	float vAvrgDrvAwyEvt;
	float tiDurDrvAwyEvt;
/*
	dataDrvAwyEvt_st() {}
	~dataDrvAwyEvt_st() {}
	dataDrvAwyEvt_st(const float _aAvrgDrvAwyEvt,const float _vAvrgDrvAwyEvt,const float _tiDurDrvAwyEvt):aAvrgDrvAwyEvt(_aAvrgDrvAwyEvt),vAvrgDrvAwyEvt(_vAvrgDrvAwyEvt),tiDurDrvAwyEvt(_tiDurDrvAwyEvt) {}
	dataDrvAwyEvt_st(const dataDrvAwyEvt_st &_x){
		aAvrgDrvAwyEvt = _x.aAvrgDrvAwyEvt;
		vAvrgDrvAwyEvt = _x.vAvrgDrvAwyEvt;
		tiDurDrvAwyEvt = _x.tiDurDrvAwyEvt;
	}
	dataDrvAwyEvt_st(dataDrvAwyEvt_st &&_x){
		aAvrgDrvAwyEvt = std::move(_x.aAvrgDrvAwyEvt);
		vAvrgDrvAwyEvt = std::move(_x.vAvrgDrvAwyEvt);
		tiDurDrvAwyEvt = std::move(_x.tiDurDrvAwyEvt);
	}
	dataDrvAwyEvt_st& operator=(const dataDrvAwyEvt_st &_x){
		aAvrgDrvAwyEvt = _x.aAvrgDrvAwyEvt;
		vAvrgDrvAwyEvt = _x.vAvrgDrvAwyEvt;
		tiDurDrvAwyEvt = _x.tiDurDrvAwyEvt;
		return *this;
	}
	dataDrvAwyEvt_st& operator=(dataDrvAwyEvt_st &&_x){
		aAvrgDrvAwyEvt = std::move(_x.aAvrgDrvAwyEvt);
		vAvrgDrvAwyEvt = std::move(_x.vAvrgDrvAwyEvt);
		tiDurDrvAwyEvt = std::move(_x.tiDurDrvAwyEvt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(aAvrgDrvAwyEvt);
		fun(vAvrgDrvAwyEvt);
		fun(tiDurDrvAwyEvt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(aAvrgDrvAwyEvt);
		fun(vAvrgDrvAwyEvt);
		fun(tiDurDrvAwyEvt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (aAvrgDrvAwyEvt);
		fun << (vAvrgDrvAwyEvt);
		fun << (tiDurDrvAwyEvt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (aAvrgDrvAwyEvt);
		fun >> (vAvrgDrvAwyEvt);
		fun >> (tiDurDrvAwyEvt);
	}
};

#endif //____DATADRVAWYEVT_ST_H__
