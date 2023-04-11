#ifndef ____BDCBCSST_H__
#define ____BDCBCSST_H__


#include "cstdint"






struct BDCBCSSt {
public:
	std::uint8_t BCS_ABAactive;
	std::uint8_t BCS_ABPActive;
	std::uint8_t BCS_AEBActive;
	std::uint8_t BCS_AWBActive;
	std::uint8_t BCS_AEBBAActive;
	std::uint8_t BCS_CDDFail;
/*
	BDCBCSSt() {}
	~BDCBCSSt() {}
	BDCBCSSt(const std::uint8_t _BCS_ABAactive,const std::uint8_t _BCS_ABPActive,const std::uint8_t _BCS_AEBActive,const std::uint8_t _BCS_AWBActive,const std::uint8_t _BCS_AEBBAActive,const std::uint8_t _BCS_CDDFail):BCS_ABAactive(_BCS_ABAactive),BCS_ABPActive(_BCS_ABPActive),BCS_AEBActive(_BCS_AEBActive),BCS_AWBActive(_BCS_AWBActive),BCS_AEBBAActive(_BCS_AEBBAActive),BCS_CDDFail(_BCS_CDDFail) {}
	BDCBCSSt(const BDCBCSSt &_x){
		BCS_ABAactive = _x.BCS_ABAactive;
		BCS_ABPActive = _x.BCS_ABPActive;
		BCS_AEBActive = _x.BCS_AEBActive;
		BCS_AWBActive = _x.BCS_AWBActive;
		BCS_AEBBAActive = _x.BCS_AEBBAActive;
		BCS_CDDFail = _x.BCS_CDDFail;
	}
	BDCBCSSt(BDCBCSSt &&_x){
		BCS_ABAactive = std::move(_x.BCS_ABAactive);
		BCS_ABPActive = std::move(_x.BCS_ABPActive);
		BCS_AEBActive = std::move(_x.BCS_AEBActive);
		BCS_AWBActive = std::move(_x.BCS_AWBActive);
		BCS_AEBBAActive = std::move(_x.BCS_AEBBAActive);
		BCS_CDDFail = std::move(_x.BCS_CDDFail);
	}
	BDCBCSSt& operator=(const BDCBCSSt &_x){
		BCS_ABAactive = _x.BCS_ABAactive;
		BCS_ABPActive = _x.BCS_ABPActive;
		BCS_AEBActive = _x.BCS_AEBActive;
		BCS_AWBActive = _x.BCS_AWBActive;
		BCS_AEBBAActive = _x.BCS_AEBBAActive;
		BCS_CDDFail = _x.BCS_CDDFail;
		return *this;
	}
	BDCBCSSt& operator=(BDCBCSSt &&_x){
		BCS_ABAactive = std::move(_x.BCS_ABAactive);
		BCS_ABPActive = std::move(_x.BCS_ABPActive);
		BCS_AEBActive = std::move(_x.BCS_AEBActive);
		BCS_AWBActive = std::move(_x.BCS_AWBActive);
		BCS_AEBBAActive = std::move(_x.BCS_AEBBAActive);
		BCS_CDDFail = std::move(_x.BCS_CDDFail);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(BCS_ABAactive);
		fun(BCS_ABPActive);
		fun(BCS_AEBActive);
		fun(BCS_AWBActive);
		fun(BCS_AEBBAActive);
		fun(BCS_CDDFail);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(BCS_ABAactive);
		fun(BCS_ABPActive);
		fun(BCS_AEBActive);
		fun(BCS_AWBActive);
		fun(BCS_AEBBAActive);
		fun(BCS_CDDFail);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (BCS_ABAactive);
		fun << (BCS_ABPActive);
		fun << (BCS_AEBActive);
		fun << (BCS_AWBActive);
		fun << (BCS_AEBBAActive);
		fun << (BCS_CDDFail);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (BCS_ABAactive);
		fun >> (BCS_ABPActive);
		fun >> (BCS_AEBActive);
		fun >> (BCS_AWBActive);
		fun >> (BCS_AEBBAActive);
		fun >> (BCS_CDDFail);
	}
};

#endif //____BDCBCSST_H__
