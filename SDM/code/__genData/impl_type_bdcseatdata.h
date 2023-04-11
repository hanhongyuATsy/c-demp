#ifndef ____BDCSEATDATA_H__
#define ____BDCSEATDATA_H__


#include "cstdint"






struct BDCSeatData {
public:
	std::uint8_t HVAC_WindSpdFbdSt;
	std::uint8_t HVAC_RearDefFbdSt;
	std::uint8_t SSW_FLSeatHeatingSt;
	std::uint8_t SSW_FLSeatVentSt;
	std::uint8_t SSW_FRSeatVentSt;
	std::uint8_t SSW_FRSeatHeatingSt;
/*
	BDCSeatData() {}
	~BDCSeatData() {}
	BDCSeatData(const std::uint8_t _HVAC_WindSpdFbdSt,const std::uint8_t _HVAC_RearDefFbdSt,const std::uint8_t _SSW_FLSeatHeatingSt,const std::uint8_t _SSW_FLSeatVentSt,const std::uint8_t _SSW_FRSeatVentSt,const std::uint8_t _SSW_FRSeatHeatingSt):HVAC_WindSpdFbdSt(_HVAC_WindSpdFbdSt),HVAC_RearDefFbdSt(_HVAC_RearDefFbdSt),SSW_FLSeatHeatingSt(_SSW_FLSeatHeatingSt),SSW_FLSeatVentSt(_SSW_FLSeatVentSt),SSW_FRSeatVentSt(_SSW_FRSeatVentSt),SSW_FRSeatHeatingSt(_SSW_FRSeatHeatingSt) {}
	BDCSeatData(const BDCSeatData &_x){
		HVAC_WindSpdFbdSt = _x.HVAC_WindSpdFbdSt;
		HVAC_RearDefFbdSt = _x.HVAC_RearDefFbdSt;
		SSW_FLSeatHeatingSt = _x.SSW_FLSeatHeatingSt;
		SSW_FLSeatVentSt = _x.SSW_FLSeatVentSt;
		SSW_FRSeatVentSt = _x.SSW_FRSeatVentSt;
		SSW_FRSeatHeatingSt = _x.SSW_FRSeatHeatingSt;
	}
	BDCSeatData(BDCSeatData &&_x){
		HVAC_WindSpdFbdSt = std::move(_x.HVAC_WindSpdFbdSt);
		HVAC_RearDefFbdSt = std::move(_x.HVAC_RearDefFbdSt);
		SSW_FLSeatHeatingSt = std::move(_x.SSW_FLSeatHeatingSt);
		SSW_FLSeatVentSt = std::move(_x.SSW_FLSeatVentSt);
		SSW_FRSeatVentSt = std::move(_x.SSW_FRSeatVentSt);
		SSW_FRSeatHeatingSt = std::move(_x.SSW_FRSeatHeatingSt);
	}
	BDCSeatData& operator=(const BDCSeatData &_x){
		HVAC_WindSpdFbdSt = _x.HVAC_WindSpdFbdSt;
		HVAC_RearDefFbdSt = _x.HVAC_RearDefFbdSt;
		SSW_FLSeatHeatingSt = _x.SSW_FLSeatHeatingSt;
		SSW_FLSeatVentSt = _x.SSW_FLSeatVentSt;
		SSW_FRSeatVentSt = _x.SSW_FRSeatVentSt;
		SSW_FRSeatHeatingSt = _x.SSW_FRSeatHeatingSt;
		return *this;
	}
	BDCSeatData& operator=(BDCSeatData &&_x){
		HVAC_WindSpdFbdSt = std::move(_x.HVAC_WindSpdFbdSt);
		HVAC_RearDefFbdSt = std::move(_x.HVAC_RearDefFbdSt);
		SSW_FLSeatHeatingSt = std::move(_x.SSW_FLSeatHeatingSt);
		SSW_FLSeatVentSt = std::move(_x.SSW_FLSeatVentSt);
		SSW_FRSeatVentSt = std::move(_x.SSW_FRSeatVentSt);
		SSW_FRSeatHeatingSt = std::move(_x.SSW_FRSeatHeatingSt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(HVAC_WindSpdFbdSt);
		fun(HVAC_RearDefFbdSt);
		fun(SSW_FLSeatHeatingSt);
		fun(SSW_FLSeatVentSt);
		fun(SSW_FRSeatVentSt);
		fun(SSW_FRSeatHeatingSt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(HVAC_WindSpdFbdSt);
		fun(HVAC_RearDefFbdSt);
		fun(SSW_FLSeatHeatingSt);
		fun(SSW_FLSeatVentSt);
		fun(SSW_FRSeatVentSt);
		fun(SSW_FRSeatHeatingSt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (HVAC_WindSpdFbdSt);
		fun << (HVAC_RearDefFbdSt);
		fun << (SSW_FLSeatHeatingSt);
		fun << (SSW_FLSeatVentSt);
		fun << (SSW_FRSeatVentSt);
		fun << (SSW_FRSeatHeatingSt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (HVAC_WindSpdFbdSt);
		fun >> (HVAC_RearDefFbdSt);
		fun >> (SSW_FLSeatHeatingSt);
		fun >> (SSW_FLSeatVentSt);
		fun >> (SSW_FRSeatVentSt);
		fun >> (SSW_FRSeatHeatingSt);
	}
};

#endif //____BDCSEATDATA_H__
