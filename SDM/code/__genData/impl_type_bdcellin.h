#ifndef ____BDCELLIN_H__
#define ____BDCELLIN_H__


#include "cstdint"






struct BDCELLIN {
public:
	std::uint8_t RLS_PositionLightSt;
	std::uint8_t RLS_LightSnsSt;
	std::uint8_t RLS_LSErr;
	std::uint8_t RLS_OverVoltErr;
/*
	BDCELLIN() {}
	~BDCELLIN() {}
	BDCELLIN(const std::uint8_t _RLS_PositionLightSt,const std::uint8_t _RLS_LightSnsSt,const std::uint8_t _RLS_LSErr,const std::uint8_t _RLS_OverVoltErr):RLS_PositionLightSt(_RLS_PositionLightSt),RLS_LightSnsSt(_RLS_LightSnsSt),RLS_LSErr(_RLS_LSErr),RLS_OverVoltErr(_RLS_OverVoltErr) {}
	BDCELLIN(const BDCELLIN &_x){
		RLS_PositionLightSt = _x.RLS_PositionLightSt;
		RLS_LightSnsSt = _x.RLS_LightSnsSt;
		RLS_LSErr = _x.RLS_LSErr;
		RLS_OverVoltErr = _x.RLS_OverVoltErr;
	}
	BDCELLIN(BDCELLIN &&_x){
		RLS_PositionLightSt = std::move(_x.RLS_PositionLightSt);
		RLS_LightSnsSt = std::move(_x.RLS_LightSnsSt);
		RLS_LSErr = std::move(_x.RLS_LSErr);
		RLS_OverVoltErr = std::move(_x.RLS_OverVoltErr);
	}
	BDCELLIN& operator=(const BDCELLIN &_x){
		RLS_PositionLightSt = _x.RLS_PositionLightSt;
		RLS_LightSnsSt = _x.RLS_LightSnsSt;
		RLS_LSErr = _x.RLS_LSErr;
		RLS_OverVoltErr = _x.RLS_OverVoltErr;
		return *this;
	}
	BDCELLIN& operator=(BDCELLIN &&_x){
		RLS_PositionLightSt = std::move(_x.RLS_PositionLightSt);
		RLS_LightSnsSt = std::move(_x.RLS_LightSnsSt);
		RLS_LSErr = std::move(_x.RLS_LSErr);
		RLS_OverVoltErr = std::move(_x.RLS_OverVoltErr);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(RLS_PositionLightSt);
		fun(RLS_LightSnsSt);
		fun(RLS_LSErr);
		fun(RLS_OverVoltErr);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(RLS_PositionLightSt);
		fun(RLS_LightSnsSt);
		fun(RLS_LSErr);
		fun(RLS_OverVoltErr);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (RLS_PositionLightSt);
		fun << (RLS_LightSnsSt);
		fun << (RLS_LSErr);
		fun << (RLS_OverVoltErr);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (RLS_PositionLightSt);
		fun >> (RLS_LightSnsSt);
		fun >> (RLS_LSErr);
		fun >> (RLS_OverVoltErr);
	}
};

#endif //____BDCELLIN_H__
