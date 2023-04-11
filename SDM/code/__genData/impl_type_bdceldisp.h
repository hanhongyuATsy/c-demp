#ifndef ____BDCELDISP_H__
#define ____BDCELDISP_H__


#include "cstdint"






struct BDCELDisp {
public:
	std::uint8_t EL_LeftTurnLightStForDisp;
	std::uint8_t EL_RightTurnLightStForDisp;
	std::uint8_t EL_PositionLightStForDisp;
	std::uint8_t EL_FrontFogLightStForDisp;
	std::uint8_t EL_RearFogLightStForDisp;
	std::uint8_t EL_LowBeamStForDisp;
	std::uint8_t EL_HighBeamStForDisp;
/*
	BDCELDisp() {}
	~BDCELDisp() {}
	BDCELDisp(const std::uint8_t _EL_LeftTurnLightStForDisp,const std::uint8_t _EL_RightTurnLightStForDisp,const std::uint8_t _EL_PositionLightStForDisp,const std::uint8_t _EL_FrontFogLightStForDisp,const std::uint8_t _EL_RearFogLightStForDisp,const std::uint8_t _EL_LowBeamStForDisp,const std::uint8_t _EL_HighBeamStForDisp):EL_LeftTurnLightStForDisp(_EL_LeftTurnLightStForDisp),EL_RightTurnLightStForDisp(_EL_RightTurnLightStForDisp),EL_PositionLightStForDisp(_EL_PositionLightStForDisp),EL_FrontFogLightStForDisp(_EL_FrontFogLightStForDisp),EL_RearFogLightStForDisp(_EL_RearFogLightStForDisp),EL_LowBeamStForDisp(_EL_LowBeamStForDisp),EL_HighBeamStForDisp(_EL_HighBeamStForDisp) {}
	BDCELDisp(const BDCELDisp &_x){
		EL_LeftTurnLightStForDisp = _x.EL_LeftTurnLightStForDisp;
		EL_RightTurnLightStForDisp = _x.EL_RightTurnLightStForDisp;
		EL_PositionLightStForDisp = _x.EL_PositionLightStForDisp;
		EL_FrontFogLightStForDisp = _x.EL_FrontFogLightStForDisp;
		EL_RearFogLightStForDisp = _x.EL_RearFogLightStForDisp;
		EL_LowBeamStForDisp = _x.EL_LowBeamStForDisp;
		EL_HighBeamStForDisp = _x.EL_HighBeamStForDisp;
	}
	BDCELDisp(BDCELDisp &&_x){
		EL_LeftTurnLightStForDisp = std::move(_x.EL_LeftTurnLightStForDisp);
		EL_RightTurnLightStForDisp = std::move(_x.EL_RightTurnLightStForDisp);
		EL_PositionLightStForDisp = std::move(_x.EL_PositionLightStForDisp);
		EL_FrontFogLightStForDisp = std::move(_x.EL_FrontFogLightStForDisp);
		EL_RearFogLightStForDisp = std::move(_x.EL_RearFogLightStForDisp);
		EL_LowBeamStForDisp = std::move(_x.EL_LowBeamStForDisp);
		EL_HighBeamStForDisp = std::move(_x.EL_HighBeamStForDisp);
	}
	BDCELDisp& operator=(const BDCELDisp &_x){
		EL_LeftTurnLightStForDisp = _x.EL_LeftTurnLightStForDisp;
		EL_RightTurnLightStForDisp = _x.EL_RightTurnLightStForDisp;
		EL_PositionLightStForDisp = _x.EL_PositionLightStForDisp;
		EL_FrontFogLightStForDisp = _x.EL_FrontFogLightStForDisp;
		EL_RearFogLightStForDisp = _x.EL_RearFogLightStForDisp;
		EL_LowBeamStForDisp = _x.EL_LowBeamStForDisp;
		EL_HighBeamStForDisp = _x.EL_HighBeamStForDisp;
		return *this;
	}
	BDCELDisp& operator=(BDCELDisp &&_x){
		EL_LeftTurnLightStForDisp = std::move(_x.EL_LeftTurnLightStForDisp);
		EL_RightTurnLightStForDisp = std::move(_x.EL_RightTurnLightStForDisp);
		EL_PositionLightStForDisp = std::move(_x.EL_PositionLightStForDisp);
		EL_FrontFogLightStForDisp = std::move(_x.EL_FrontFogLightStForDisp);
		EL_RearFogLightStForDisp = std::move(_x.EL_RearFogLightStForDisp);
		EL_LowBeamStForDisp = std::move(_x.EL_LowBeamStForDisp);
		EL_HighBeamStForDisp = std::move(_x.EL_HighBeamStForDisp);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(EL_LeftTurnLightStForDisp);
		fun(EL_RightTurnLightStForDisp);
		fun(EL_PositionLightStForDisp);
		fun(EL_FrontFogLightStForDisp);
		fun(EL_RearFogLightStForDisp);
		fun(EL_LowBeamStForDisp);
		fun(EL_HighBeamStForDisp);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(EL_LeftTurnLightStForDisp);
		fun(EL_RightTurnLightStForDisp);
		fun(EL_PositionLightStForDisp);
		fun(EL_FrontFogLightStForDisp);
		fun(EL_RearFogLightStForDisp);
		fun(EL_LowBeamStForDisp);
		fun(EL_HighBeamStForDisp);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (EL_LeftTurnLightStForDisp);
		fun << (EL_RightTurnLightStForDisp);
		fun << (EL_PositionLightStForDisp);
		fun << (EL_FrontFogLightStForDisp);
		fun << (EL_RearFogLightStForDisp);
		fun << (EL_LowBeamStForDisp);
		fun << (EL_HighBeamStForDisp);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (EL_LeftTurnLightStForDisp);
		fun >> (EL_RightTurnLightStForDisp);
		fun >> (EL_PositionLightStForDisp);
		fun >> (EL_FrontFogLightStForDisp);
		fun >> (EL_RearFogLightStForDisp);
		fun >> (EL_LowBeamStForDisp);
		fun >> (EL_HighBeamStForDisp);
	}
};

#endif //____BDCELDISP_H__
