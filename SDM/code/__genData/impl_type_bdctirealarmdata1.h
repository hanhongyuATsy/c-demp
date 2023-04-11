#ifndef ____BDCTIREALARMDATA1_H__
#define ____BDCTIREALARMDATA1_H__


#include "cstdint"






struct BDCTireAlarmData1 {
public:
	std::uint8_t TPMS_TireWarningLamp;
	std::uint8_t TPMS_SystemWarningLamp;
/*
	BDCTireAlarmData1() {}
	~BDCTireAlarmData1() {}
	BDCTireAlarmData1(const std::uint8_t _TPMS_TireWarningLamp,const std::uint8_t _TPMS_SystemWarningLamp):TPMS_TireWarningLamp(_TPMS_TireWarningLamp),TPMS_SystemWarningLamp(_TPMS_SystemWarningLamp) {}
	BDCTireAlarmData1(const BDCTireAlarmData1 &_x){
		TPMS_TireWarningLamp = _x.TPMS_TireWarningLamp;
		TPMS_SystemWarningLamp = _x.TPMS_SystemWarningLamp;
	}
	BDCTireAlarmData1(BDCTireAlarmData1 &&_x){
		TPMS_TireWarningLamp = std::move(_x.TPMS_TireWarningLamp);
		TPMS_SystemWarningLamp = std::move(_x.TPMS_SystemWarningLamp);
	}
	BDCTireAlarmData1& operator=(const BDCTireAlarmData1 &_x){
		TPMS_TireWarningLamp = _x.TPMS_TireWarningLamp;
		TPMS_SystemWarningLamp = _x.TPMS_SystemWarningLamp;
		return *this;
	}
	BDCTireAlarmData1& operator=(BDCTireAlarmData1 &&_x){
		TPMS_TireWarningLamp = std::move(_x.TPMS_TireWarningLamp);
		TPMS_SystemWarningLamp = std::move(_x.TPMS_SystemWarningLamp);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(TPMS_TireWarningLamp);
		fun(TPMS_SystemWarningLamp);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(TPMS_TireWarningLamp);
		fun(TPMS_SystemWarningLamp);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (TPMS_TireWarningLamp);
		fun << (TPMS_SystemWarningLamp);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (TPMS_TireWarningLamp);
		fun >> (TPMS_SystemWarningLamp);
	}
};

#endif //____BDCTIREALARMDATA1_H__
