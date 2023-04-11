#ifndef ____BDCBATTVOLT_H__
#define ____BDCBATTVOLT_H__


#include "cstdint"






struct BDCBattVolt {
public:
	std::uint16_t EBSF_BattVolt;
	std::uint16_t EBST_BattVolt;
/*
	BDCBattVolt() {}
	~BDCBattVolt() {}
	BDCBattVolt(const std::uint16_t _EBSF_BattVolt,const std::uint16_t _EBST_BattVolt):EBSF_BattVolt(_EBSF_BattVolt),EBST_BattVolt(_EBST_BattVolt) {}
	BDCBattVolt(const BDCBattVolt &_x){
		EBSF_BattVolt = _x.EBSF_BattVolt;
		EBST_BattVolt = _x.EBST_BattVolt;
	}
	BDCBattVolt(BDCBattVolt &&_x){
		EBSF_BattVolt = std::move(_x.EBSF_BattVolt);
		EBST_BattVolt = std::move(_x.EBST_BattVolt);
	}
	BDCBattVolt& operator=(const BDCBattVolt &_x){
		EBSF_BattVolt = _x.EBSF_BattVolt;
		EBST_BattVolt = _x.EBST_BattVolt;
		return *this;
	}
	BDCBattVolt& operator=(BDCBattVolt &&_x){
		EBSF_BattVolt = std::move(_x.EBSF_BattVolt);
		EBST_BattVolt = std::move(_x.EBST_BattVolt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(EBSF_BattVolt);
		fun(EBST_BattVolt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(EBSF_BattVolt);
		fun(EBST_BattVolt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (EBSF_BattVolt);
		fun << (EBST_BattVolt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (EBSF_BattVolt);
		fun >> (EBST_BattVolt);
	}
};

#endif //____BDCBATTVOLT_H__
