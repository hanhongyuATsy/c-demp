#ifndef ____ALARM_DATA_H__
#define ____ALARM_DATA_H__


#include "cstdint"






struct Alarm_Data {
public:
	std::uint16_t ALARM_TYPE;
	std::uint8_t ALARM_DATA;
/*
	Alarm_Data() {}
	~Alarm_Data() {}
	Alarm_Data(const std::uint16_t _ALARM_TYPE,const std::uint8_t _ALARM_DATA):ALARM_TYPE(_ALARM_TYPE),ALARM_DATA(_ALARM_DATA) {}
	Alarm_Data(const Alarm_Data &_x){
		ALARM_TYPE = _x.ALARM_TYPE;
		ALARM_DATA = _x.ALARM_DATA;
	}
	Alarm_Data(Alarm_Data &&_x){
		ALARM_TYPE = std::move(_x.ALARM_TYPE);
		ALARM_DATA = std::move(_x.ALARM_DATA);
	}
	Alarm_Data& operator=(const Alarm_Data &_x){
		ALARM_TYPE = _x.ALARM_TYPE;
		ALARM_DATA = _x.ALARM_DATA;
		return *this;
	}
	Alarm_Data& operator=(Alarm_Data &&_x){
		ALARM_TYPE = std::move(_x.ALARM_TYPE);
		ALARM_DATA = std::move(_x.ALARM_DATA);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(ALARM_TYPE);
		fun(ALARM_DATA);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(ALARM_TYPE);
		fun(ALARM_DATA);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (ALARM_TYPE);
		fun << (ALARM_DATA);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (ALARM_TYPE);
		fun >> (ALARM_DATA);
	}
};

#endif //____ALARM_DATA_H__
