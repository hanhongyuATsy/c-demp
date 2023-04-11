#ifndef ____DATADRVCNDCURR_ST_H__
#define ____DATADRVCNDCURR_ST_H__


#include "cstdint"






struct dataDrvCndCurr_st {
public:
	std::uint8_t DrvCndCurr;
	std::uint8_t ResnErr;
/*
	dataDrvCndCurr_st() {}
	~dataDrvCndCurr_st() {}
	dataDrvCndCurr_st(const std::uint8_t _DrvCndCurr,const std::uint8_t _ResnErr):DrvCndCurr(_DrvCndCurr),ResnErr(_ResnErr) {}
	dataDrvCndCurr_st(const dataDrvCndCurr_st &_x){
		DrvCndCurr = _x.DrvCndCurr;
		ResnErr = _x.ResnErr;
	}
	dataDrvCndCurr_st(dataDrvCndCurr_st &&_x){
		DrvCndCurr = std::move(_x.DrvCndCurr);
		ResnErr = std::move(_x.ResnErr);
	}
	dataDrvCndCurr_st& operator=(const dataDrvCndCurr_st &_x){
		DrvCndCurr = _x.DrvCndCurr;
		ResnErr = _x.ResnErr;
		return *this;
	}
	dataDrvCndCurr_st& operator=(dataDrvCndCurr_st &&_x){
		DrvCndCurr = std::move(_x.DrvCndCurr);
		ResnErr = std::move(_x.ResnErr);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(DrvCndCurr);
		fun(ResnErr);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(DrvCndCurr);
		fun(ResnErr);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (DrvCndCurr);
		fun << (ResnErr);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (DrvCndCurr);
		fun >> (ResnErr);
	}
};

#endif //____DATADRVCNDCURR_ST_H__
