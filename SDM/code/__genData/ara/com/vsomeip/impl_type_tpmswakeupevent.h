#ifndef __ARA_COM_VSOMEIP__TPMSWAKEUPEVENT_H__
#define __ARA_COM_VSOMEIP__TPMSWAKEUPEVENT_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct TPMSWakeUpEvent {
public:
	std::uint8_t WakeUpByLowPressure;
	std::uint8_t WakeUpBySensorFailure;
	std::uint8_t WakeUpByHighTemperature;
	std::uint8_t WakeUpByParkSupervision;
/*
	TPMSWakeUpEvent() {}
	~TPMSWakeUpEvent() {}
	TPMSWakeUpEvent(const std::uint8_t _WakeUpByLowPressure,const std::uint8_t _WakeUpBySensorFailure,const std::uint8_t _WakeUpByHighTemperature,const std::uint8_t _WakeUpByParkSupervision):WakeUpByLowPressure(_WakeUpByLowPressure),WakeUpBySensorFailure(_WakeUpBySensorFailure),WakeUpByHighTemperature(_WakeUpByHighTemperature),WakeUpByParkSupervision(_WakeUpByParkSupervision) {}
	TPMSWakeUpEvent(const TPMSWakeUpEvent &_x){
		WakeUpByLowPressure = _x.WakeUpByLowPressure;
		WakeUpBySensorFailure = _x.WakeUpBySensorFailure;
		WakeUpByHighTemperature = _x.WakeUpByHighTemperature;
		WakeUpByParkSupervision = _x.WakeUpByParkSupervision;
	}
	TPMSWakeUpEvent(TPMSWakeUpEvent &&_x){
		WakeUpByLowPressure = std::move(_x.WakeUpByLowPressure);
		WakeUpBySensorFailure = std::move(_x.WakeUpBySensorFailure);
		WakeUpByHighTemperature = std::move(_x.WakeUpByHighTemperature);
		WakeUpByParkSupervision = std::move(_x.WakeUpByParkSupervision);
	}
	TPMSWakeUpEvent& operator=(const TPMSWakeUpEvent &_x){
		WakeUpByLowPressure = _x.WakeUpByLowPressure;
		WakeUpBySensorFailure = _x.WakeUpBySensorFailure;
		WakeUpByHighTemperature = _x.WakeUpByHighTemperature;
		WakeUpByParkSupervision = _x.WakeUpByParkSupervision;
		return *this;
	}
	TPMSWakeUpEvent& operator=(TPMSWakeUpEvent &&_x){
		WakeUpByLowPressure = std::move(_x.WakeUpByLowPressure);
		WakeUpBySensorFailure = std::move(_x.WakeUpBySensorFailure);
		WakeUpByHighTemperature = std::move(_x.WakeUpByHighTemperature);
		WakeUpByParkSupervision = std::move(_x.WakeUpByParkSupervision);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(WakeUpByLowPressure);
		fun(WakeUpBySensorFailure);
		fun(WakeUpByHighTemperature);
		fun(WakeUpByParkSupervision);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(WakeUpByLowPressure);
		fun(WakeUpBySensorFailure);
		fun(WakeUpByHighTemperature);
		fun(WakeUpByParkSupervision);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (WakeUpByLowPressure);
		fun << (WakeUpBySensorFailure);
		fun << (WakeUpByHighTemperature);
		fun << (WakeUpByParkSupervision);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (WakeUpByLowPressure);
		fun >> (WakeUpBySensorFailure);
		fun >> (WakeUpByHighTemperature);
		fun >> (WakeUpByParkSupervision);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__TPMSWAKEUPEVENT_H__
