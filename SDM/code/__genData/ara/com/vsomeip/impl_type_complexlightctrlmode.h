#ifndef __ARA_COM_VSOMEIP__COMPLEXLIGHTCTRLMODE_H__
#define __ARA_COM_VSOMEIP__COMPLEXLIGHTCTRLMODE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct ComplexLightCtrlMode {
public:
	std::uint16_t ActiveTimes;
	std::uint8_t ONDuration;
	std::uint8_t OFFDuration;
	std::uint8_t StartMode;
	std::uint8_t Brightness;
/*
	ComplexLightCtrlMode() {}
	~ComplexLightCtrlMode() {}
	ComplexLightCtrlMode(const std::uint16_t _ActiveTimes,const std::uint8_t _ONDuration,const std::uint8_t _OFFDuration,const std::uint8_t _StartMode,const std::uint8_t _Brightness):ActiveTimes(_ActiveTimes),ONDuration(_ONDuration),OFFDuration(_OFFDuration),StartMode(_StartMode),Brightness(_Brightness) {}
	ComplexLightCtrlMode(const ComplexLightCtrlMode &_x){
		ActiveTimes = _x.ActiveTimes;
		ONDuration = _x.ONDuration;
		OFFDuration = _x.OFFDuration;
		StartMode = _x.StartMode;
		Brightness = _x.Brightness;
	}
	ComplexLightCtrlMode(ComplexLightCtrlMode &&_x){
		ActiveTimes = std::move(_x.ActiveTimes);
		ONDuration = std::move(_x.ONDuration);
		OFFDuration = std::move(_x.OFFDuration);
		StartMode = std::move(_x.StartMode);
		Brightness = std::move(_x.Brightness);
	}
	ComplexLightCtrlMode& operator=(const ComplexLightCtrlMode &_x){
		ActiveTimes = _x.ActiveTimes;
		ONDuration = _x.ONDuration;
		OFFDuration = _x.OFFDuration;
		StartMode = _x.StartMode;
		Brightness = _x.Brightness;
		return *this;
	}
	ComplexLightCtrlMode& operator=(ComplexLightCtrlMode &&_x){
		ActiveTimes = std::move(_x.ActiveTimes);
		ONDuration = std::move(_x.ONDuration);
		OFFDuration = std::move(_x.OFFDuration);
		StartMode = std::move(_x.StartMode);
		Brightness = std::move(_x.Brightness);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(ActiveTimes);
		fun(ONDuration);
		fun(OFFDuration);
		fun(StartMode);
		fun(Brightness);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(ActiveTimes);
		fun(ONDuration);
		fun(OFFDuration);
		fun(StartMode);
		fun(Brightness);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (ActiveTimes);
		fun << (ONDuration);
		fun << (OFFDuration);
		fun << (StartMode);
		fun << (Brightness);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (ActiveTimes);
		fun >> (ONDuration);
		fun >> (OFFDuration);
		fun >> (StartMode);
		fun >> (Brightness);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__COMPLEXLIGHTCTRLMODE_H__
