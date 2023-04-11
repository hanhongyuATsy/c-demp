#ifndef ____BDCATWSALARM_H__
#define ____BDCATWSALARM_H__


#include "cstdint"






struct BDCATWSAlarm {
public:
	std::uint8_t ATWS_ATWSSt;
	std::uint8_t ATWS_ATWSAlarmReq;
/*
	BDCATWSAlarm() {}
	~BDCATWSAlarm() {}
	BDCATWSAlarm(const std::uint8_t _ATWS_ATWSSt,const std::uint8_t _ATWS_ATWSAlarmReq):ATWS_ATWSSt(_ATWS_ATWSSt),ATWS_ATWSAlarmReq(_ATWS_ATWSAlarmReq) {}
	BDCATWSAlarm(const BDCATWSAlarm &_x){
		ATWS_ATWSSt = _x.ATWS_ATWSSt;
		ATWS_ATWSAlarmReq = _x.ATWS_ATWSAlarmReq;
	}
	BDCATWSAlarm(BDCATWSAlarm &&_x){
		ATWS_ATWSSt = std::move(_x.ATWS_ATWSSt);
		ATWS_ATWSAlarmReq = std::move(_x.ATWS_ATWSAlarmReq);
	}
	BDCATWSAlarm& operator=(const BDCATWSAlarm &_x){
		ATWS_ATWSSt = _x.ATWS_ATWSSt;
		ATWS_ATWSAlarmReq = _x.ATWS_ATWSAlarmReq;
		return *this;
	}
	BDCATWSAlarm& operator=(BDCATWSAlarm &&_x){
		ATWS_ATWSSt = std::move(_x.ATWS_ATWSSt);
		ATWS_ATWSAlarmReq = std::move(_x.ATWS_ATWSAlarmReq);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(ATWS_ATWSSt);
		fun(ATWS_ATWSAlarmReq);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(ATWS_ATWSSt);
		fun(ATWS_ATWSAlarmReq);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (ATWS_ATWSSt);
		fun << (ATWS_ATWSAlarmReq);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (ATWS_ATWSSt);
		fun >> (ATWS_ATWSAlarmReq);
	}
};

#endif //____BDCATWSALARM_H__
