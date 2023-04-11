#ifndef ____BDCSPD_H__
#define ____BDCSPD_H__


#include "cstdint"






struct BDCSPD {
public:
	std::uint16_t BCS_FLWheelSpd;
	std::uint8_t BCS_FLWheelSpdVD;
	std::uint16_t BCS_FRWheelSpd;
	std::uint8_t BCS_FRWheelSpdVD;
	std::uint16_t BCS_RLWheelSpd;
	std::uint8_t BCS_RLWheelSpdVD;
	std::uint16_t BCS_RRWheelSpd;
	std::uint8_t BCS_RRWheelSpdVD;
	std::uint16_t BCS_FLWheelSpdEdgesSum;
	std::uint16_t BCS_FRWheelSpdEdgesSum;
	std::uint16_t BCS_RLWheelSpdEdgesSum;
	std::uint16_t BCS_RRWheelSpdEdgesSum;
	std::uint8_t BCS_FLWheelSpdEdgesSumVD;
	std::uint8_t BCS_FRWheelSpdEdgesSumVD;
	std::uint8_t BCS_RLWheelSpdEdgesSumVD;
	std::uint8_t BCS_RRWheelSpdEdgesSumVD;
/*
	BDCSPD() {}
	~BDCSPD() {}
	BDCSPD(const std::uint16_t _BCS_FLWheelSpd,const std::uint8_t _BCS_FLWheelSpdVD,const std::uint16_t _BCS_FRWheelSpd,const std::uint8_t _BCS_FRWheelSpdVD,const std::uint16_t _BCS_RLWheelSpd,const std::uint8_t _BCS_RLWheelSpdVD,const std::uint16_t _BCS_RRWheelSpd,const std::uint8_t _BCS_RRWheelSpdVD,const std::uint16_t _BCS_FLWheelSpdEdgesSum,const std::uint16_t _BCS_FRWheelSpdEdgesSum,const std::uint16_t _BCS_RLWheelSpdEdgesSum,const std::uint16_t _BCS_RRWheelSpdEdgesSum,const std::uint8_t _BCS_FLWheelSpdEdgesSumVD,const std::uint8_t _BCS_FRWheelSpdEdgesSumVD,const std::uint8_t _BCS_RLWheelSpdEdgesSumVD,const std::uint8_t _BCS_RRWheelSpdEdgesSumVD):BCS_FLWheelSpd(_BCS_FLWheelSpd),BCS_FLWheelSpdVD(_BCS_FLWheelSpdVD),BCS_FRWheelSpd(_BCS_FRWheelSpd),BCS_FRWheelSpdVD(_BCS_FRWheelSpdVD),BCS_RLWheelSpd(_BCS_RLWheelSpd),BCS_RLWheelSpdVD(_BCS_RLWheelSpdVD),BCS_RRWheelSpd(_BCS_RRWheelSpd),BCS_RRWheelSpdVD(_BCS_RRWheelSpdVD),BCS_FLWheelSpdEdgesSum(_BCS_FLWheelSpdEdgesSum),BCS_FRWheelSpdEdgesSum(_BCS_FRWheelSpdEdgesSum),BCS_RLWheelSpdEdgesSum(_BCS_RLWheelSpdEdgesSum),BCS_RRWheelSpdEdgesSum(_BCS_RRWheelSpdEdgesSum),BCS_FLWheelSpdEdgesSumVD(_BCS_FLWheelSpdEdgesSumVD),BCS_FRWheelSpdEdgesSumVD(_BCS_FRWheelSpdEdgesSumVD),BCS_RLWheelSpdEdgesSumVD(_BCS_RLWheelSpdEdgesSumVD),BCS_RRWheelSpdEdgesSumVD(_BCS_RRWheelSpdEdgesSumVD) {}
	BDCSPD(const BDCSPD &_x){
		BCS_FLWheelSpd = _x.BCS_FLWheelSpd;
		BCS_FLWheelSpdVD = _x.BCS_FLWheelSpdVD;
		BCS_FRWheelSpd = _x.BCS_FRWheelSpd;
		BCS_FRWheelSpdVD = _x.BCS_FRWheelSpdVD;
		BCS_RLWheelSpd = _x.BCS_RLWheelSpd;
		BCS_RLWheelSpdVD = _x.BCS_RLWheelSpdVD;
		BCS_RRWheelSpd = _x.BCS_RRWheelSpd;
		BCS_RRWheelSpdVD = _x.BCS_RRWheelSpdVD;
		BCS_FLWheelSpdEdgesSum = _x.BCS_FLWheelSpdEdgesSum;
		BCS_FRWheelSpdEdgesSum = _x.BCS_FRWheelSpdEdgesSum;
		BCS_RLWheelSpdEdgesSum = _x.BCS_RLWheelSpdEdgesSum;
		BCS_RRWheelSpdEdgesSum = _x.BCS_RRWheelSpdEdgesSum;
		BCS_FLWheelSpdEdgesSumVD = _x.BCS_FLWheelSpdEdgesSumVD;
		BCS_FRWheelSpdEdgesSumVD = _x.BCS_FRWheelSpdEdgesSumVD;
		BCS_RLWheelSpdEdgesSumVD = _x.BCS_RLWheelSpdEdgesSumVD;
		BCS_RRWheelSpdEdgesSumVD = _x.BCS_RRWheelSpdEdgesSumVD;
	}
	BDCSPD(BDCSPD &&_x){
		BCS_FLWheelSpd = std::move(_x.BCS_FLWheelSpd);
		BCS_FLWheelSpdVD = std::move(_x.BCS_FLWheelSpdVD);
		BCS_FRWheelSpd = std::move(_x.BCS_FRWheelSpd);
		BCS_FRWheelSpdVD = std::move(_x.BCS_FRWheelSpdVD);
		BCS_RLWheelSpd = std::move(_x.BCS_RLWheelSpd);
		BCS_RLWheelSpdVD = std::move(_x.BCS_RLWheelSpdVD);
		BCS_RRWheelSpd = std::move(_x.BCS_RRWheelSpd);
		BCS_RRWheelSpdVD = std::move(_x.BCS_RRWheelSpdVD);
		BCS_FLWheelSpdEdgesSum = std::move(_x.BCS_FLWheelSpdEdgesSum);
		BCS_FRWheelSpdEdgesSum = std::move(_x.BCS_FRWheelSpdEdgesSum);
		BCS_RLWheelSpdEdgesSum = std::move(_x.BCS_RLWheelSpdEdgesSum);
		BCS_RRWheelSpdEdgesSum = std::move(_x.BCS_RRWheelSpdEdgesSum);
		BCS_FLWheelSpdEdgesSumVD = std::move(_x.BCS_FLWheelSpdEdgesSumVD);
		BCS_FRWheelSpdEdgesSumVD = std::move(_x.BCS_FRWheelSpdEdgesSumVD);
		BCS_RLWheelSpdEdgesSumVD = std::move(_x.BCS_RLWheelSpdEdgesSumVD);
		BCS_RRWheelSpdEdgesSumVD = std::move(_x.BCS_RRWheelSpdEdgesSumVD);
	}
	BDCSPD& operator=(const BDCSPD &_x){
		BCS_FLWheelSpd = _x.BCS_FLWheelSpd;
		BCS_FLWheelSpdVD = _x.BCS_FLWheelSpdVD;
		BCS_FRWheelSpd = _x.BCS_FRWheelSpd;
		BCS_FRWheelSpdVD = _x.BCS_FRWheelSpdVD;
		BCS_RLWheelSpd = _x.BCS_RLWheelSpd;
		BCS_RLWheelSpdVD = _x.BCS_RLWheelSpdVD;
		BCS_RRWheelSpd = _x.BCS_RRWheelSpd;
		BCS_RRWheelSpdVD = _x.BCS_RRWheelSpdVD;
		BCS_FLWheelSpdEdgesSum = _x.BCS_FLWheelSpdEdgesSum;
		BCS_FRWheelSpdEdgesSum = _x.BCS_FRWheelSpdEdgesSum;
		BCS_RLWheelSpdEdgesSum = _x.BCS_RLWheelSpdEdgesSum;
		BCS_RRWheelSpdEdgesSum = _x.BCS_RRWheelSpdEdgesSum;
		BCS_FLWheelSpdEdgesSumVD = _x.BCS_FLWheelSpdEdgesSumVD;
		BCS_FRWheelSpdEdgesSumVD = _x.BCS_FRWheelSpdEdgesSumVD;
		BCS_RLWheelSpdEdgesSumVD = _x.BCS_RLWheelSpdEdgesSumVD;
		BCS_RRWheelSpdEdgesSumVD = _x.BCS_RRWheelSpdEdgesSumVD;
		return *this;
	}
	BDCSPD& operator=(BDCSPD &&_x){
		BCS_FLWheelSpd = std::move(_x.BCS_FLWheelSpd);
		BCS_FLWheelSpdVD = std::move(_x.BCS_FLWheelSpdVD);
		BCS_FRWheelSpd = std::move(_x.BCS_FRWheelSpd);
		BCS_FRWheelSpdVD = std::move(_x.BCS_FRWheelSpdVD);
		BCS_RLWheelSpd = std::move(_x.BCS_RLWheelSpd);
		BCS_RLWheelSpdVD = std::move(_x.BCS_RLWheelSpdVD);
		BCS_RRWheelSpd = std::move(_x.BCS_RRWheelSpd);
		BCS_RRWheelSpdVD = std::move(_x.BCS_RRWheelSpdVD);
		BCS_FLWheelSpdEdgesSum = std::move(_x.BCS_FLWheelSpdEdgesSum);
		BCS_FRWheelSpdEdgesSum = std::move(_x.BCS_FRWheelSpdEdgesSum);
		BCS_RLWheelSpdEdgesSum = std::move(_x.BCS_RLWheelSpdEdgesSum);
		BCS_RRWheelSpdEdgesSum = std::move(_x.BCS_RRWheelSpdEdgesSum);
		BCS_FLWheelSpdEdgesSumVD = std::move(_x.BCS_FLWheelSpdEdgesSumVD);
		BCS_FRWheelSpdEdgesSumVD = std::move(_x.BCS_FRWheelSpdEdgesSumVD);
		BCS_RLWheelSpdEdgesSumVD = std::move(_x.BCS_RLWheelSpdEdgesSumVD);
		BCS_RRWheelSpdEdgesSumVD = std::move(_x.BCS_RRWheelSpdEdgesSumVD);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(BCS_FLWheelSpd);
		fun(BCS_FLWheelSpdVD);
		fun(BCS_FRWheelSpd);
		fun(BCS_FRWheelSpdVD);
		fun(BCS_RLWheelSpd);
		fun(BCS_RLWheelSpdVD);
		fun(BCS_RRWheelSpd);
		fun(BCS_RRWheelSpdVD);
		fun(BCS_FLWheelSpdEdgesSum);
		fun(BCS_FRWheelSpdEdgesSum);
		fun(BCS_RLWheelSpdEdgesSum);
		fun(BCS_RRWheelSpdEdgesSum);
		fun(BCS_FLWheelSpdEdgesSumVD);
		fun(BCS_FRWheelSpdEdgesSumVD);
		fun(BCS_RLWheelSpdEdgesSumVD);
		fun(BCS_RRWheelSpdEdgesSumVD);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(BCS_FLWheelSpd);
		fun(BCS_FLWheelSpdVD);
		fun(BCS_FRWheelSpd);
		fun(BCS_FRWheelSpdVD);
		fun(BCS_RLWheelSpd);
		fun(BCS_RLWheelSpdVD);
		fun(BCS_RRWheelSpd);
		fun(BCS_RRWheelSpdVD);
		fun(BCS_FLWheelSpdEdgesSum);
		fun(BCS_FRWheelSpdEdgesSum);
		fun(BCS_RLWheelSpdEdgesSum);
		fun(BCS_RRWheelSpdEdgesSum);
		fun(BCS_FLWheelSpdEdgesSumVD);
		fun(BCS_FRWheelSpdEdgesSumVD);
		fun(BCS_RLWheelSpdEdgesSumVD);
		fun(BCS_RRWheelSpdEdgesSumVD);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (BCS_FLWheelSpd);
		fun << (BCS_FLWheelSpdVD);
		fun << (BCS_FRWheelSpd);
		fun << (BCS_FRWheelSpdVD);
		fun << (BCS_RLWheelSpd);
		fun << (BCS_RLWheelSpdVD);
		fun << (BCS_RRWheelSpd);
		fun << (BCS_RRWheelSpdVD);
		fun << (BCS_FLWheelSpdEdgesSum);
		fun << (BCS_FRWheelSpdEdgesSum);
		fun << (BCS_RLWheelSpdEdgesSum);
		fun << (BCS_RRWheelSpdEdgesSum);
		fun << (BCS_FLWheelSpdEdgesSumVD);
		fun << (BCS_FRWheelSpdEdgesSumVD);
		fun << (BCS_RLWheelSpdEdgesSumVD);
		fun << (BCS_RRWheelSpdEdgesSumVD);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (BCS_FLWheelSpd);
		fun >> (BCS_FLWheelSpdVD);
		fun >> (BCS_FRWheelSpd);
		fun >> (BCS_FRWheelSpdVD);
		fun >> (BCS_RLWheelSpd);
		fun >> (BCS_RLWheelSpdVD);
		fun >> (BCS_RRWheelSpd);
		fun >> (BCS_RRWheelSpdVD);
		fun >> (BCS_FLWheelSpdEdgesSum);
		fun >> (BCS_FRWheelSpdEdgesSum);
		fun >> (BCS_RLWheelSpdEdgesSum);
		fun >> (BCS_RRWheelSpdEdgesSum);
		fun >> (BCS_FLWheelSpdEdgesSumVD);
		fun >> (BCS_FRWheelSpdEdgesSumVD);
		fun >> (BCS_RLWheelSpdEdgesSumVD);
		fun >> (BCS_RRWheelSpdEdgesSumVD);
	}
};

#endif //____BDCSPD_H__
