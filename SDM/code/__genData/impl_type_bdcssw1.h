#ifndef ____BDCSSW1_H__
#define ____BDCSSW1_H__


#include "cstdint"






struct BDCSSW1 {
public:
	std::uint8_t SSW_FLSeatSlideCurrentPst;
	std::uint8_t SSW_FLSeatHeightCurrentPst;
	std::uint8_t SSW_FLSeatBackrestCurrentPst;
	std::uint8_t SSW_FLSeatTiltCurrentPst;
	std::uint8_t SSW_FLSeatCushionCurrentPst;
	std::uint8_t SSW_FLSeatOttomanCurrentPst;
	std::uint8_t SSW_SteeringAngleCurrentPst;
	std::uint8_t SSW_SteeringExtentCurrentPst;
	std::uint8_t SSW_FLSeatSlideCurrentOpeSt;
	std::uint8_t SSW_FLSeatHeightCurrentOpeSt;
	std::uint8_t SSW_FLSeatBackrestCurrentOpeSt;
	std::uint8_t SSW_FLSeatTiltCurrentOpeSt;
	std::uint8_t SSW_FLSeatCushionCurrentOpeSt;
	std::uint8_t SSW_FLSeatOttomanCurrentOpeSt;
	std::uint8_t SSW_SteeringAngleCurrentOpeSt;
	std::uint8_t SSW_SteeringExtentCurrentOpeSt;
	std::uint8_t SSW_FRSeatSlideCurrentPst;
	std::uint8_t SSW_FRSeatHeightCurrentPst;
	std::uint8_t SSW_FRSeatBackrestCurrentPst;
	std::uint8_t SSW_FRSeatTiltCurrentPst;
	std::uint8_t SSW_FRSeatCushionCurrentPst;
	std::uint8_t SSW_FRSeatOttomanCurrentPst;
	std::uint8_t SSW_FRSeatSlideCurrentOpeSt;
	std::uint8_t SSW_FRSeatHeightCurrentOpeSt;
	std::uint8_t SSW_FRSeatBackrestCurrentOpeSt;
	std::uint8_t SSW_FRSeatTiltCurrentOpeSt;
	std::uint8_t SSW_FRSeatCushionCurrentOpeSt;
	std::uint8_t SSW_FRSeatOttomanCurrentOpeSt;
	std::uint8_t SSW_FLSeatEasyEntrySt;
	std::uint8_t SSW_FLSeatEasyEntryActSt;
/*
	BDCSSW1() {}
	~BDCSSW1() {}
	BDCSSW1(const std::uint8_t _SSW_FLSeatSlideCurrentPst,const std::uint8_t _SSW_FLSeatHeightCurrentPst,const std::uint8_t _SSW_FLSeatBackrestCurrentPst,const std::uint8_t _SSW_FLSeatTiltCurrentPst,const std::uint8_t _SSW_FLSeatCushionCurrentPst,const std::uint8_t _SSW_FLSeatOttomanCurrentPst,const std::uint8_t _SSW_SteeringAngleCurrentPst,const std::uint8_t _SSW_SteeringExtentCurrentPst,const std::uint8_t _SSW_FLSeatSlideCurrentOpeSt,const std::uint8_t _SSW_FLSeatHeightCurrentOpeSt,const std::uint8_t _SSW_FLSeatBackrestCurrentOpeSt,const std::uint8_t _SSW_FLSeatTiltCurrentOpeSt,const std::uint8_t _SSW_FLSeatCushionCurrentOpeSt,const std::uint8_t _SSW_FLSeatOttomanCurrentOpeSt,const std::uint8_t _SSW_SteeringAngleCurrentOpeSt,const std::uint8_t _SSW_SteeringExtentCurrentOpeSt,const std::uint8_t _SSW_FRSeatSlideCurrentPst,const std::uint8_t _SSW_FRSeatHeightCurrentPst,const std::uint8_t _SSW_FRSeatBackrestCurrentPst,const std::uint8_t _SSW_FRSeatTiltCurrentPst,const std::uint8_t _SSW_FRSeatCushionCurrentPst,const std::uint8_t _SSW_FRSeatOttomanCurrentPst,const std::uint8_t _SSW_FRSeatSlideCurrentOpeSt,const std::uint8_t _SSW_FRSeatHeightCurrentOpeSt,const std::uint8_t _SSW_FRSeatBackrestCurrentOpeSt,const std::uint8_t _SSW_FRSeatTiltCurrentOpeSt,const std::uint8_t _SSW_FRSeatCushionCurrentOpeSt,const std::uint8_t _SSW_FRSeatOttomanCurrentOpeSt,const std::uint8_t _SSW_FLSeatEasyEntrySt,const std::uint8_t _SSW_FLSeatEasyEntryActSt):SSW_FLSeatSlideCurrentPst(_SSW_FLSeatSlideCurrentPst),SSW_FLSeatHeightCurrentPst(_SSW_FLSeatHeightCurrentPst),SSW_FLSeatBackrestCurrentPst(_SSW_FLSeatBackrestCurrentPst),SSW_FLSeatTiltCurrentPst(_SSW_FLSeatTiltCurrentPst),SSW_FLSeatCushionCurrentPst(_SSW_FLSeatCushionCurrentPst),SSW_FLSeatOttomanCurrentPst(_SSW_FLSeatOttomanCurrentPst),SSW_SteeringAngleCurrentPst(_SSW_SteeringAngleCurrentPst),SSW_SteeringExtentCurrentPst(_SSW_SteeringExtentCurrentPst),SSW_FLSeatSlideCurrentOpeSt(_SSW_FLSeatSlideCurrentOpeSt),SSW_FLSeatHeightCurrentOpeSt(_SSW_FLSeatHeightCurrentOpeSt),SSW_FLSeatBackrestCurrentOpeSt(_SSW_FLSeatBackrestCurrentOpeSt),SSW_FLSeatTiltCurrentOpeSt(_SSW_FLSeatTiltCurrentOpeSt),SSW_FLSeatCushionCurrentOpeSt(_SSW_FLSeatCushionCurrentOpeSt),SSW_FLSeatOttomanCurrentOpeSt(_SSW_FLSeatOttomanCurrentOpeSt),SSW_SteeringAngleCurrentOpeSt(_SSW_SteeringAngleCurrentOpeSt),SSW_SteeringExtentCurrentOpeSt(_SSW_SteeringExtentCurrentOpeSt),SSW_FRSeatSlideCurrentPst(_SSW_FRSeatSlideCurrentPst),SSW_FRSeatHeightCurrentPst(_SSW_FRSeatHeightCurrentPst),SSW_FRSeatBackrestCurrentPst(_SSW_FRSeatBackrestCurrentPst),SSW_FRSeatTiltCurrentPst(_SSW_FRSeatTiltCurrentPst),SSW_FRSeatCushionCurrentPst(_SSW_FRSeatCushionCurrentPst),SSW_FRSeatOttomanCurrentPst(_SSW_FRSeatOttomanCurrentPst),SSW_FRSeatSlideCurrentOpeSt(_SSW_FRSeatSlideCurrentOpeSt),SSW_FRSeatHeightCurrentOpeSt(_SSW_FRSeatHeightCurrentOpeSt),SSW_FRSeatBackrestCurrentOpeSt(_SSW_FRSeatBackrestCurrentOpeSt),SSW_FRSeatTiltCurrentOpeSt(_SSW_FRSeatTiltCurrentOpeSt),SSW_FRSeatCushionCurrentOpeSt(_SSW_FRSeatCushionCurrentOpeSt),SSW_FRSeatOttomanCurrentOpeSt(_SSW_FRSeatOttomanCurrentOpeSt),SSW_FLSeatEasyEntrySt(_SSW_FLSeatEasyEntrySt),SSW_FLSeatEasyEntryActSt(_SSW_FLSeatEasyEntryActSt) {}
	BDCSSW1(const BDCSSW1 &_x){
		SSW_FLSeatSlideCurrentPst = _x.SSW_FLSeatSlideCurrentPst;
		SSW_FLSeatHeightCurrentPst = _x.SSW_FLSeatHeightCurrentPst;
		SSW_FLSeatBackrestCurrentPst = _x.SSW_FLSeatBackrestCurrentPst;
		SSW_FLSeatTiltCurrentPst = _x.SSW_FLSeatTiltCurrentPst;
		SSW_FLSeatCushionCurrentPst = _x.SSW_FLSeatCushionCurrentPst;
		SSW_FLSeatOttomanCurrentPst = _x.SSW_FLSeatOttomanCurrentPst;
		SSW_SteeringAngleCurrentPst = _x.SSW_SteeringAngleCurrentPst;
		SSW_SteeringExtentCurrentPst = _x.SSW_SteeringExtentCurrentPst;
		SSW_FLSeatSlideCurrentOpeSt = _x.SSW_FLSeatSlideCurrentOpeSt;
		SSW_FLSeatHeightCurrentOpeSt = _x.SSW_FLSeatHeightCurrentOpeSt;
		SSW_FLSeatBackrestCurrentOpeSt = _x.SSW_FLSeatBackrestCurrentOpeSt;
		SSW_FLSeatTiltCurrentOpeSt = _x.SSW_FLSeatTiltCurrentOpeSt;
		SSW_FLSeatCushionCurrentOpeSt = _x.SSW_FLSeatCushionCurrentOpeSt;
		SSW_FLSeatOttomanCurrentOpeSt = _x.SSW_FLSeatOttomanCurrentOpeSt;
		SSW_SteeringAngleCurrentOpeSt = _x.SSW_SteeringAngleCurrentOpeSt;
		SSW_SteeringExtentCurrentOpeSt = _x.SSW_SteeringExtentCurrentOpeSt;
		SSW_FRSeatSlideCurrentPst = _x.SSW_FRSeatSlideCurrentPst;
		SSW_FRSeatHeightCurrentPst = _x.SSW_FRSeatHeightCurrentPst;
		SSW_FRSeatBackrestCurrentPst = _x.SSW_FRSeatBackrestCurrentPst;
		SSW_FRSeatTiltCurrentPst = _x.SSW_FRSeatTiltCurrentPst;
		SSW_FRSeatCushionCurrentPst = _x.SSW_FRSeatCushionCurrentPst;
		SSW_FRSeatOttomanCurrentPst = _x.SSW_FRSeatOttomanCurrentPst;
		SSW_FRSeatSlideCurrentOpeSt = _x.SSW_FRSeatSlideCurrentOpeSt;
		SSW_FRSeatHeightCurrentOpeSt = _x.SSW_FRSeatHeightCurrentOpeSt;
		SSW_FRSeatBackrestCurrentOpeSt = _x.SSW_FRSeatBackrestCurrentOpeSt;
		SSW_FRSeatTiltCurrentOpeSt = _x.SSW_FRSeatTiltCurrentOpeSt;
		SSW_FRSeatCushionCurrentOpeSt = _x.SSW_FRSeatCushionCurrentOpeSt;
		SSW_FRSeatOttomanCurrentOpeSt = _x.SSW_FRSeatOttomanCurrentOpeSt;
		SSW_FLSeatEasyEntrySt = _x.SSW_FLSeatEasyEntrySt;
		SSW_FLSeatEasyEntryActSt = _x.SSW_FLSeatEasyEntryActSt;
	}
	BDCSSW1(BDCSSW1 &&_x){
		SSW_FLSeatSlideCurrentPst = std::move(_x.SSW_FLSeatSlideCurrentPst);
		SSW_FLSeatHeightCurrentPst = std::move(_x.SSW_FLSeatHeightCurrentPst);
		SSW_FLSeatBackrestCurrentPst = std::move(_x.SSW_FLSeatBackrestCurrentPst);
		SSW_FLSeatTiltCurrentPst = std::move(_x.SSW_FLSeatTiltCurrentPst);
		SSW_FLSeatCushionCurrentPst = std::move(_x.SSW_FLSeatCushionCurrentPst);
		SSW_FLSeatOttomanCurrentPst = std::move(_x.SSW_FLSeatOttomanCurrentPst);
		SSW_SteeringAngleCurrentPst = std::move(_x.SSW_SteeringAngleCurrentPst);
		SSW_SteeringExtentCurrentPst = std::move(_x.SSW_SteeringExtentCurrentPst);
		SSW_FLSeatSlideCurrentOpeSt = std::move(_x.SSW_FLSeatSlideCurrentOpeSt);
		SSW_FLSeatHeightCurrentOpeSt = std::move(_x.SSW_FLSeatHeightCurrentOpeSt);
		SSW_FLSeatBackrestCurrentOpeSt = std::move(_x.SSW_FLSeatBackrestCurrentOpeSt);
		SSW_FLSeatTiltCurrentOpeSt = std::move(_x.SSW_FLSeatTiltCurrentOpeSt);
		SSW_FLSeatCushionCurrentOpeSt = std::move(_x.SSW_FLSeatCushionCurrentOpeSt);
		SSW_FLSeatOttomanCurrentOpeSt = std::move(_x.SSW_FLSeatOttomanCurrentOpeSt);
		SSW_SteeringAngleCurrentOpeSt = std::move(_x.SSW_SteeringAngleCurrentOpeSt);
		SSW_SteeringExtentCurrentOpeSt = std::move(_x.SSW_SteeringExtentCurrentOpeSt);
		SSW_FRSeatSlideCurrentPst = std::move(_x.SSW_FRSeatSlideCurrentPst);
		SSW_FRSeatHeightCurrentPst = std::move(_x.SSW_FRSeatHeightCurrentPst);
		SSW_FRSeatBackrestCurrentPst = std::move(_x.SSW_FRSeatBackrestCurrentPst);
		SSW_FRSeatTiltCurrentPst = std::move(_x.SSW_FRSeatTiltCurrentPst);
		SSW_FRSeatCushionCurrentPst = std::move(_x.SSW_FRSeatCushionCurrentPst);
		SSW_FRSeatOttomanCurrentPst = std::move(_x.SSW_FRSeatOttomanCurrentPst);
		SSW_FRSeatSlideCurrentOpeSt = std::move(_x.SSW_FRSeatSlideCurrentOpeSt);
		SSW_FRSeatHeightCurrentOpeSt = std::move(_x.SSW_FRSeatHeightCurrentOpeSt);
		SSW_FRSeatBackrestCurrentOpeSt = std::move(_x.SSW_FRSeatBackrestCurrentOpeSt);
		SSW_FRSeatTiltCurrentOpeSt = std::move(_x.SSW_FRSeatTiltCurrentOpeSt);
		SSW_FRSeatCushionCurrentOpeSt = std::move(_x.SSW_FRSeatCushionCurrentOpeSt);
		SSW_FRSeatOttomanCurrentOpeSt = std::move(_x.SSW_FRSeatOttomanCurrentOpeSt);
		SSW_FLSeatEasyEntrySt = std::move(_x.SSW_FLSeatEasyEntrySt);
		SSW_FLSeatEasyEntryActSt = std::move(_x.SSW_FLSeatEasyEntryActSt);
	}
	BDCSSW1& operator=(const BDCSSW1 &_x){
		SSW_FLSeatSlideCurrentPst = _x.SSW_FLSeatSlideCurrentPst;
		SSW_FLSeatHeightCurrentPst = _x.SSW_FLSeatHeightCurrentPst;
		SSW_FLSeatBackrestCurrentPst = _x.SSW_FLSeatBackrestCurrentPst;
		SSW_FLSeatTiltCurrentPst = _x.SSW_FLSeatTiltCurrentPst;
		SSW_FLSeatCushionCurrentPst = _x.SSW_FLSeatCushionCurrentPst;
		SSW_FLSeatOttomanCurrentPst = _x.SSW_FLSeatOttomanCurrentPst;
		SSW_SteeringAngleCurrentPst = _x.SSW_SteeringAngleCurrentPst;
		SSW_SteeringExtentCurrentPst = _x.SSW_SteeringExtentCurrentPst;
		SSW_FLSeatSlideCurrentOpeSt = _x.SSW_FLSeatSlideCurrentOpeSt;
		SSW_FLSeatHeightCurrentOpeSt = _x.SSW_FLSeatHeightCurrentOpeSt;
		SSW_FLSeatBackrestCurrentOpeSt = _x.SSW_FLSeatBackrestCurrentOpeSt;
		SSW_FLSeatTiltCurrentOpeSt = _x.SSW_FLSeatTiltCurrentOpeSt;
		SSW_FLSeatCushionCurrentOpeSt = _x.SSW_FLSeatCushionCurrentOpeSt;
		SSW_FLSeatOttomanCurrentOpeSt = _x.SSW_FLSeatOttomanCurrentOpeSt;
		SSW_SteeringAngleCurrentOpeSt = _x.SSW_SteeringAngleCurrentOpeSt;
		SSW_SteeringExtentCurrentOpeSt = _x.SSW_SteeringExtentCurrentOpeSt;
		SSW_FRSeatSlideCurrentPst = _x.SSW_FRSeatSlideCurrentPst;
		SSW_FRSeatHeightCurrentPst = _x.SSW_FRSeatHeightCurrentPst;
		SSW_FRSeatBackrestCurrentPst = _x.SSW_FRSeatBackrestCurrentPst;
		SSW_FRSeatTiltCurrentPst = _x.SSW_FRSeatTiltCurrentPst;
		SSW_FRSeatCushionCurrentPst = _x.SSW_FRSeatCushionCurrentPst;
		SSW_FRSeatOttomanCurrentPst = _x.SSW_FRSeatOttomanCurrentPst;
		SSW_FRSeatSlideCurrentOpeSt = _x.SSW_FRSeatSlideCurrentOpeSt;
		SSW_FRSeatHeightCurrentOpeSt = _x.SSW_FRSeatHeightCurrentOpeSt;
		SSW_FRSeatBackrestCurrentOpeSt = _x.SSW_FRSeatBackrestCurrentOpeSt;
		SSW_FRSeatTiltCurrentOpeSt = _x.SSW_FRSeatTiltCurrentOpeSt;
		SSW_FRSeatCushionCurrentOpeSt = _x.SSW_FRSeatCushionCurrentOpeSt;
		SSW_FRSeatOttomanCurrentOpeSt = _x.SSW_FRSeatOttomanCurrentOpeSt;
		SSW_FLSeatEasyEntrySt = _x.SSW_FLSeatEasyEntrySt;
		SSW_FLSeatEasyEntryActSt = _x.SSW_FLSeatEasyEntryActSt;
		return *this;
	}
	BDCSSW1& operator=(BDCSSW1 &&_x){
		SSW_FLSeatSlideCurrentPst = std::move(_x.SSW_FLSeatSlideCurrentPst);
		SSW_FLSeatHeightCurrentPst = std::move(_x.SSW_FLSeatHeightCurrentPst);
		SSW_FLSeatBackrestCurrentPst = std::move(_x.SSW_FLSeatBackrestCurrentPst);
		SSW_FLSeatTiltCurrentPst = std::move(_x.SSW_FLSeatTiltCurrentPst);
		SSW_FLSeatCushionCurrentPst = std::move(_x.SSW_FLSeatCushionCurrentPst);
		SSW_FLSeatOttomanCurrentPst = std::move(_x.SSW_FLSeatOttomanCurrentPst);
		SSW_SteeringAngleCurrentPst = std::move(_x.SSW_SteeringAngleCurrentPst);
		SSW_SteeringExtentCurrentPst = std::move(_x.SSW_SteeringExtentCurrentPst);
		SSW_FLSeatSlideCurrentOpeSt = std::move(_x.SSW_FLSeatSlideCurrentOpeSt);
		SSW_FLSeatHeightCurrentOpeSt = std::move(_x.SSW_FLSeatHeightCurrentOpeSt);
		SSW_FLSeatBackrestCurrentOpeSt = std::move(_x.SSW_FLSeatBackrestCurrentOpeSt);
		SSW_FLSeatTiltCurrentOpeSt = std::move(_x.SSW_FLSeatTiltCurrentOpeSt);
		SSW_FLSeatCushionCurrentOpeSt = std::move(_x.SSW_FLSeatCushionCurrentOpeSt);
		SSW_FLSeatOttomanCurrentOpeSt = std::move(_x.SSW_FLSeatOttomanCurrentOpeSt);
		SSW_SteeringAngleCurrentOpeSt = std::move(_x.SSW_SteeringAngleCurrentOpeSt);
		SSW_SteeringExtentCurrentOpeSt = std::move(_x.SSW_SteeringExtentCurrentOpeSt);
		SSW_FRSeatSlideCurrentPst = std::move(_x.SSW_FRSeatSlideCurrentPst);
		SSW_FRSeatHeightCurrentPst = std::move(_x.SSW_FRSeatHeightCurrentPst);
		SSW_FRSeatBackrestCurrentPst = std::move(_x.SSW_FRSeatBackrestCurrentPst);
		SSW_FRSeatTiltCurrentPst = std::move(_x.SSW_FRSeatTiltCurrentPst);
		SSW_FRSeatCushionCurrentPst = std::move(_x.SSW_FRSeatCushionCurrentPst);
		SSW_FRSeatOttomanCurrentPst = std::move(_x.SSW_FRSeatOttomanCurrentPst);
		SSW_FRSeatSlideCurrentOpeSt = std::move(_x.SSW_FRSeatSlideCurrentOpeSt);
		SSW_FRSeatHeightCurrentOpeSt = std::move(_x.SSW_FRSeatHeightCurrentOpeSt);
		SSW_FRSeatBackrestCurrentOpeSt = std::move(_x.SSW_FRSeatBackrestCurrentOpeSt);
		SSW_FRSeatTiltCurrentOpeSt = std::move(_x.SSW_FRSeatTiltCurrentOpeSt);
		SSW_FRSeatCushionCurrentOpeSt = std::move(_x.SSW_FRSeatCushionCurrentOpeSt);
		SSW_FRSeatOttomanCurrentOpeSt = std::move(_x.SSW_FRSeatOttomanCurrentOpeSt);
		SSW_FLSeatEasyEntrySt = std::move(_x.SSW_FLSeatEasyEntrySt);
		SSW_FLSeatEasyEntryActSt = std::move(_x.SSW_FLSeatEasyEntryActSt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(SSW_FLSeatSlideCurrentPst);
		fun(SSW_FLSeatHeightCurrentPst);
		fun(SSW_FLSeatBackrestCurrentPst);
		fun(SSW_FLSeatTiltCurrentPst);
		fun(SSW_FLSeatCushionCurrentPst);
		fun(SSW_FLSeatOttomanCurrentPst);
		fun(SSW_SteeringAngleCurrentPst);
		fun(SSW_SteeringExtentCurrentPst);
		fun(SSW_FLSeatSlideCurrentOpeSt);
		fun(SSW_FLSeatHeightCurrentOpeSt);
		fun(SSW_FLSeatBackrestCurrentOpeSt);
		fun(SSW_FLSeatTiltCurrentOpeSt);
		fun(SSW_FLSeatCushionCurrentOpeSt);
		fun(SSW_FLSeatOttomanCurrentOpeSt);
		fun(SSW_SteeringAngleCurrentOpeSt);
		fun(SSW_SteeringExtentCurrentOpeSt);
		fun(SSW_FRSeatSlideCurrentPst);
		fun(SSW_FRSeatHeightCurrentPst);
		fun(SSW_FRSeatBackrestCurrentPst);
		fun(SSW_FRSeatTiltCurrentPst);
		fun(SSW_FRSeatCushionCurrentPst);
		fun(SSW_FRSeatOttomanCurrentPst);
		fun(SSW_FRSeatSlideCurrentOpeSt);
		fun(SSW_FRSeatHeightCurrentOpeSt);
		fun(SSW_FRSeatBackrestCurrentOpeSt);
		fun(SSW_FRSeatTiltCurrentOpeSt);
		fun(SSW_FRSeatCushionCurrentOpeSt);
		fun(SSW_FRSeatOttomanCurrentOpeSt);
		fun(SSW_FLSeatEasyEntrySt);
		fun(SSW_FLSeatEasyEntryActSt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(SSW_FLSeatSlideCurrentPst);
		fun(SSW_FLSeatHeightCurrentPst);
		fun(SSW_FLSeatBackrestCurrentPst);
		fun(SSW_FLSeatTiltCurrentPst);
		fun(SSW_FLSeatCushionCurrentPst);
		fun(SSW_FLSeatOttomanCurrentPst);
		fun(SSW_SteeringAngleCurrentPst);
		fun(SSW_SteeringExtentCurrentPst);
		fun(SSW_FLSeatSlideCurrentOpeSt);
		fun(SSW_FLSeatHeightCurrentOpeSt);
		fun(SSW_FLSeatBackrestCurrentOpeSt);
		fun(SSW_FLSeatTiltCurrentOpeSt);
		fun(SSW_FLSeatCushionCurrentOpeSt);
		fun(SSW_FLSeatOttomanCurrentOpeSt);
		fun(SSW_SteeringAngleCurrentOpeSt);
		fun(SSW_SteeringExtentCurrentOpeSt);
		fun(SSW_FRSeatSlideCurrentPst);
		fun(SSW_FRSeatHeightCurrentPst);
		fun(SSW_FRSeatBackrestCurrentPst);
		fun(SSW_FRSeatTiltCurrentPst);
		fun(SSW_FRSeatCushionCurrentPst);
		fun(SSW_FRSeatOttomanCurrentPst);
		fun(SSW_FRSeatSlideCurrentOpeSt);
		fun(SSW_FRSeatHeightCurrentOpeSt);
		fun(SSW_FRSeatBackrestCurrentOpeSt);
		fun(SSW_FRSeatTiltCurrentOpeSt);
		fun(SSW_FRSeatCushionCurrentOpeSt);
		fun(SSW_FRSeatOttomanCurrentOpeSt);
		fun(SSW_FLSeatEasyEntrySt);
		fun(SSW_FLSeatEasyEntryActSt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (SSW_FLSeatSlideCurrentPst);
		fun << (SSW_FLSeatHeightCurrentPst);
		fun << (SSW_FLSeatBackrestCurrentPst);
		fun << (SSW_FLSeatTiltCurrentPst);
		fun << (SSW_FLSeatCushionCurrentPst);
		fun << (SSW_FLSeatOttomanCurrentPst);
		fun << (SSW_SteeringAngleCurrentPst);
		fun << (SSW_SteeringExtentCurrentPst);
		fun << (SSW_FLSeatSlideCurrentOpeSt);
		fun << (SSW_FLSeatHeightCurrentOpeSt);
		fun << (SSW_FLSeatBackrestCurrentOpeSt);
		fun << (SSW_FLSeatTiltCurrentOpeSt);
		fun << (SSW_FLSeatCushionCurrentOpeSt);
		fun << (SSW_FLSeatOttomanCurrentOpeSt);
		fun << (SSW_SteeringAngleCurrentOpeSt);
		fun << (SSW_SteeringExtentCurrentOpeSt);
		fun << (SSW_FRSeatSlideCurrentPst);
		fun << (SSW_FRSeatHeightCurrentPst);
		fun << (SSW_FRSeatBackrestCurrentPst);
		fun << (SSW_FRSeatTiltCurrentPst);
		fun << (SSW_FRSeatCushionCurrentPst);
		fun << (SSW_FRSeatOttomanCurrentPst);
		fun << (SSW_FRSeatSlideCurrentOpeSt);
		fun << (SSW_FRSeatHeightCurrentOpeSt);
		fun << (SSW_FRSeatBackrestCurrentOpeSt);
		fun << (SSW_FRSeatTiltCurrentOpeSt);
		fun << (SSW_FRSeatCushionCurrentOpeSt);
		fun << (SSW_FRSeatOttomanCurrentOpeSt);
		fun << (SSW_FLSeatEasyEntrySt);
		fun << (SSW_FLSeatEasyEntryActSt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (SSW_FLSeatSlideCurrentPst);
		fun >> (SSW_FLSeatHeightCurrentPst);
		fun >> (SSW_FLSeatBackrestCurrentPst);
		fun >> (SSW_FLSeatTiltCurrentPst);
		fun >> (SSW_FLSeatCushionCurrentPst);
		fun >> (SSW_FLSeatOttomanCurrentPst);
		fun >> (SSW_SteeringAngleCurrentPst);
		fun >> (SSW_SteeringExtentCurrentPst);
		fun >> (SSW_FLSeatSlideCurrentOpeSt);
		fun >> (SSW_FLSeatHeightCurrentOpeSt);
		fun >> (SSW_FLSeatBackrestCurrentOpeSt);
		fun >> (SSW_FLSeatTiltCurrentOpeSt);
		fun >> (SSW_FLSeatCushionCurrentOpeSt);
		fun >> (SSW_FLSeatOttomanCurrentOpeSt);
		fun >> (SSW_SteeringAngleCurrentOpeSt);
		fun >> (SSW_SteeringExtentCurrentOpeSt);
		fun >> (SSW_FRSeatSlideCurrentPst);
		fun >> (SSW_FRSeatHeightCurrentPst);
		fun >> (SSW_FRSeatBackrestCurrentPst);
		fun >> (SSW_FRSeatTiltCurrentPst);
		fun >> (SSW_FRSeatCushionCurrentPst);
		fun >> (SSW_FRSeatOttomanCurrentPst);
		fun >> (SSW_FRSeatSlideCurrentOpeSt);
		fun >> (SSW_FRSeatHeightCurrentOpeSt);
		fun >> (SSW_FRSeatBackrestCurrentOpeSt);
		fun >> (SSW_FRSeatTiltCurrentOpeSt);
		fun >> (SSW_FRSeatCushionCurrentOpeSt);
		fun >> (SSW_FRSeatOttomanCurrentOpeSt);
		fun >> (SSW_FLSeatEasyEntrySt);
		fun >> (SSW_FLSeatEasyEntryActSt);
	}
};

#endif //____BDCSSW1_H__
