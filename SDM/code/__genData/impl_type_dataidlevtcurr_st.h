#ifndef ____DATAIDLEVTCURR_ST_H__
#define ____DATAIDLEVTCURR_ST_H__








struct dataIdlEvtCurr_st {
public:
	float tiDurIdlEvt;
/*
	dataIdlEvtCurr_st() {}
	~dataIdlEvtCurr_st() {}
	dataIdlEvtCurr_st(const float _tiDurIdlEvt):tiDurIdlEvt(_tiDurIdlEvt) {}
	dataIdlEvtCurr_st(const dataIdlEvtCurr_st &_x){
		tiDurIdlEvt = _x.tiDurIdlEvt;
	}
	dataIdlEvtCurr_st(dataIdlEvtCurr_st &&_x){
		tiDurIdlEvt = std::move(_x.tiDurIdlEvt);
	}
	dataIdlEvtCurr_st& operator=(const dataIdlEvtCurr_st &_x){
		tiDurIdlEvt = _x.tiDurIdlEvt;
		return *this;
	}
	dataIdlEvtCurr_st& operator=(dataIdlEvtCurr_st &&_x){
		tiDurIdlEvt = std::move(_x.tiDurIdlEvt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(tiDurIdlEvt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(tiDurIdlEvt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (tiDurIdlEvt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (tiDurIdlEvt);
	}
};

#endif //____DATAIDLEVTCURR_ST_H__
