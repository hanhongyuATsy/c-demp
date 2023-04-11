#ifndef ____BDCTPMSRCP_H__
#define ____BDCTPMSRCP_H__


#include "cstdint"






struct BDCTPMSRCP {
public:
	std::uint8_t TPMS_FrontWheelRCP;
	std::uint8_t TPMS_RearWheelRCP;
/*
	BDCTPMSRCP() {}
	~BDCTPMSRCP() {}
	BDCTPMSRCP(const std::uint8_t _TPMS_FrontWheelRCP,const std::uint8_t _TPMS_RearWheelRCP):TPMS_FrontWheelRCP(_TPMS_FrontWheelRCP),TPMS_RearWheelRCP(_TPMS_RearWheelRCP) {}
	BDCTPMSRCP(const BDCTPMSRCP &_x){
		TPMS_FrontWheelRCP = _x.TPMS_FrontWheelRCP;
		TPMS_RearWheelRCP = _x.TPMS_RearWheelRCP;
	}
	BDCTPMSRCP(BDCTPMSRCP &&_x){
		TPMS_FrontWheelRCP = std::move(_x.TPMS_FrontWheelRCP);
		TPMS_RearWheelRCP = std::move(_x.TPMS_RearWheelRCP);
	}
	BDCTPMSRCP& operator=(const BDCTPMSRCP &_x){
		TPMS_FrontWheelRCP = _x.TPMS_FrontWheelRCP;
		TPMS_RearWheelRCP = _x.TPMS_RearWheelRCP;
		return *this;
	}
	BDCTPMSRCP& operator=(BDCTPMSRCP &&_x){
		TPMS_FrontWheelRCP = std::move(_x.TPMS_FrontWheelRCP);
		TPMS_RearWheelRCP = std::move(_x.TPMS_RearWheelRCP);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(TPMS_FrontWheelRCP);
		fun(TPMS_RearWheelRCP);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(TPMS_FrontWheelRCP);
		fun(TPMS_RearWheelRCP);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (TPMS_FrontWheelRCP);
		fun << (TPMS_RearWheelRCP);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (TPMS_FrontWheelRCP);
		fun >> (TPMS_RearWheelRCP);
	}
};

#endif //____BDCTPMSRCP_H__
