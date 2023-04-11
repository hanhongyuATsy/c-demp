#ifndef ____BDCTURN_H__
#define ____BDCTURN_H__


#include "cstdint"






struct BDCTURN {
public:
	std::uint8_t BCS_FLWheelRotatedDirection;
	std::uint8_t BCS_FLWheelRotatedDirectionVD;
	std::uint8_t BCS_FRWheelRotatedDirection;
	std::uint8_t BCS_FRWheelRotatedDirectionVD;
	std::uint8_t BCS_RLWheelRotatedDirection;
	std::uint8_t BCS_RLWheelRotatedDirectionVD;
	std::uint8_t BCS_RRWheelRotatedDirection;
	std::uint8_t BCS_RRWheelRotatedDirectionVD;
	std::uint16_t EPS_SteeringAngle;
	std::uint8_t EPS_SteeringAngleVD;
	std::uint8_t EPS_SteeringAngleSpd;
	std::uint8_t EPS_SteeringAngleSpdVD;
/*
	BDCTURN() {}
	~BDCTURN() {}
	BDCTURN(const std::uint8_t _BCS_FLWheelRotatedDirection,const std::uint8_t _BCS_FLWheelRotatedDirectionVD,const std::uint8_t _BCS_FRWheelRotatedDirection,const std::uint8_t _BCS_FRWheelRotatedDirectionVD,const std::uint8_t _BCS_RLWheelRotatedDirection,const std::uint8_t _BCS_RLWheelRotatedDirectionVD,const std::uint8_t _BCS_RRWheelRotatedDirection,const std::uint8_t _BCS_RRWheelRotatedDirectionVD,const std::uint16_t _EPS_SteeringAngle,const std::uint8_t _EPS_SteeringAngleVD,const std::uint8_t _EPS_SteeringAngleSpd,const std::uint8_t _EPS_SteeringAngleSpdVD):BCS_FLWheelRotatedDirection(_BCS_FLWheelRotatedDirection),BCS_FLWheelRotatedDirectionVD(_BCS_FLWheelRotatedDirectionVD),BCS_FRWheelRotatedDirection(_BCS_FRWheelRotatedDirection),BCS_FRWheelRotatedDirectionVD(_BCS_FRWheelRotatedDirectionVD),BCS_RLWheelRotatedDirection(_BCS_RLWheelRotatedDirection),BCS_RLWheelRotatedDirectionVD(_BCS_RLWheelRotatedDirectionVD),BCS_RRWheelRotatedDirection(_BCS_RRWheelRotatedDirection),BCS_RRWheelRotatedDirectionVD(_BCS_RRWheelRotatedDirectionVD),EPS_SteeringAngle(_EPS_SteeringAngle),EPS_SteeringAngleVD(_EPS_SteeringAngleVD),EPS_SteeringAngleSpd(_EPS_SteeringAngleSpd),EPS_SteeringAngleSpdVD(_EPS_SteeringAngleSpdVD) {}
	BDCTURN(const BDCTURN &_x){
		BCS_FLWheelRotatedDirection = _x.BCS_FLWheelRotatedDirection;
		BCS_FLWheelRotatedDirectionVD = _x.BCS_FLWheelRotatedDirectionVD;
		BCS_FRWheelRotatedDirection = _x.BCS_FRWheelRotatedDirection;
		BCS_FRWheelRotatedDirectionVD = _x.BCS_FRWheelRotatedDirectionVD;
		BCS_RLWheelRotatedDirection = _x.BCS_RLWheelRotatedDirection;
		BCS_RLWheelRotatedDirectionVD = _x.BCS_RLWheelRotatedDirectionVD;
		BCS_RRWheelRotatedDirection = _x.BCS_RRWheelRotatedDirection;
		BCS_RRWheelRotatedDirectionVD = _x.BCS_RRWheelRotatedDirectionVD;
		EPS_SteeringAngle = _x.EPS_SteeringAngle;
		EPS_SteeringAngleVD = _x.EPS_SteeringAngleVD;
		EPS_SteeringAngleSpd = _x.EPS_SteeringAngleSpd;
		EPS_SteeringAngleSpdVD = _x.EPS_SteeringAngleSpdVD;
	}
	BDCTURN(BDCTURN &&_x){
		BCS_FLWheelRotatedDirection = std::move(_x.BCS_FLWheelRotatedDirection);
		BCS_FLWheelRotatedDirectionVD = std::move(_x.BCS_FLWheelRotatedDirectionVD);
		BCS_FRWheelRotatedDirection = std::move(_x.BCS_FRWheelRotatedDirection);
		BCS_FRWheelRotatedDirectionVD = std::move(_x.BCS_FRWheelRotatedDirectionVD);
		BCS_RLWheelRotatedDirection = std::move(_x.BCS_RLWheelRotatedDirection);
		BCS_RLWheelRotatedDirectionVD = std::move(_x.BCS_RLWheelRotatedDirectionVD);
		BCS_RRWheelRotatedDirection = std::move(_x.BCS_RRWheelRotatedDirection);
		BCS_RRWheelRotatedDirectionVD = std::move(_x.BCS_RRWheelRotatedDirectionVD);
		EPS_SteeringAngle = std::move(_x.EPS_SteeringAngle);
		EPS_SteeringAngleVD = std::move(_x.EPS_SteeringAngleVD);
		EPS_SteeringAngleSpd = std::move(_x.EPS_SteeringAngleSpd);
		EPS_SteeringAngleSpdVD = std::move(_x.EPS_SteeringAngleSpdVD);
	}
	BDCTURN& operator=(const BDCTURN &_x){
		BCS_FLWheelRotatedDirection = _x.BCS_FLWheelRotatedDirection;
		BCS_FLWheelRotatedDirectionVD = _x.BCS_FLWheelRotatedDirectionVD;
		BCS_FRWheelRotatedDirection = _x.BCS_FRWheelRotatedDirection;
		BCS_FRWheelRotatedDirectionVD = _x.BCS_FRWheelRotatedDirectionVD;
		BCS_RLWheelRotatedDirection = _x.BCS_RLWheelRotatedDirection;
		BCS_RLWheelRotatedDirectionVD = _x.BCS_RLWheelRotatedDirectionVD;
		BCS_RRWheelRotatedDirection = _x.BCS_RRWheelRotatedDirection;
		BCS_RRWheelRotatedDirectionVD = _x.BCS_RRWheelRotatedDirectionVD;
		EPS_SteeringAngle = _x.EPS_SteeringAngle;
		EPS_SteeringAngleVD = _x.EPS_SteeringAngleVD;
		EPS_SteeringAngleSpd = _x.EPS_SteeringAngleSpd;
		EPS_SteeringAngleSpdVD = _x.EPS_SteeringAngleSpdVD;
		return *this;
	}
	BDCTURN& operator=(BDCTURN &&_x){
		BCS_FLWheelRotatedDirection = std::move(_x.BCS_FLWheelRotatedDirection);
		BCS_FLWheelRotatedDirectionVD = std::move(_x.BCS_FLWheelRotatedDirectionVD);
		BCS_FRWheelRotatedDirection = std::move(_x.BCS_FRWheelRotatedDirection);
		BCS_FRWheelRotatedDirectionVD = std::move(_x.BCS_FRWheelRotatedDirectionVD);
		BCS_RLWheelRotatedDirection = std::move(_x.BCS_RLWheelRotatedDirection);
		BCS_RLWheelRotatedDirectionVD = std::move(_x.BCS_RLWheelRotatedDirectionVD);
		BCS_RRWheelRotatedDirection = std::move(_x.BCS_RRWheelRotatedDirection);
		BCS_RRWheelRotatedDirectionVD = std::move(_x.BCS_RRWheelRotatedDirectionVD);
		EPS_SteeringAngle = std::move(_x.EPS_SteeringAngle);
		EPS_SteeringAngleVD = std::move(_x.EPS_SteeringAngleVD);
		EPS_SteeringAngleSpd = std::move(_x.EPS_SteeringAngleSpd);
		EPS_SteeringAngleSpdVD = std::move(_x.EPS_SteeringAngleSpdVD);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(BCS_FLWheelRotatedDirection);
		fun(BCS_FLWheelRotatedDirectionVD);
		fun(BCS_FRWheelRotatedDirection);
		fun(BCS_FRWheelRotatedDirectionVD);
		fun(BCS_RLWheelRotatedDirection);
		fun(BCS_RLWheelRotatedDirectionVD);
		fun(BCS_RRWheelRotatedDirection);
		fun(BCS_RRWheelRotatedDirectionVD);
		fun(EPS_SteeringAngle);
		fun(EPS_SteeringAngleVD);
		fun(EPS_SteeringAngleSpd);
		fun(EPS_SteeringAngleSpdVD);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(BCS_FLWheelRotatedDirection);
		fun(BCS_FLWheelRotatedDirectionVD);
		fun(BCS_FRWheelRotatedDirection);
		fun(BCS_FRWheelRotatedDirectionVD);
		fun(BCS_RLWheelRotatedDirection);
		fun(BCS_RLWheelRotatedDirectionVD);
		fun(BCS_RRWheelRotatedDirection);
		fun(BCS_RRWheelRotatedDirectionVD);
		fun(EPS_SteeringAngle);
		fun(EPS_SteeringAngleVD);
		fun(EPS_SteeringAngleSpd);
		fun(EPS_SteeringAngleSpdVD);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (BCS_FLWheelRotatedDirection);
		fun << (BCS_FLWheelRotatedDirectionVD);
		fun << (BCS_FRWheelRotatedDirection);
		fun << (BCS_FRWheelRotatedDirectionVD);
		fun << (BCS_RLWheelRotatedDirection);
		fun << (BCS_RLWheelRotatedDirectionVD);
		fun << (BCS_RRWheelRotatedDirection);
		fun << (BCS_RRWheelRotatedDirectionVD);
		fun << (EPS_SteeringAngle);
		fun << (EPS_SteeringAngleVD);
		fun << (EPS_SteeringAngleSpd);
		fun << (EPS_SteeringAngleSpdVD);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (BCS_FLWheelRotatedDirection);
		fun >> (BCS_FLWheelRotatedDirectionVD);
		fun >> (BCS_FRWheelRotatedDirection);
		fun >> (BCS_FRWheelRotatedDirectionVD);
		fun >> (BCS_RLWheelRotatedDirection);
		fun >> (BCS_RLWheelRotatedDirectionVD);
		fun >> (BCS_RRWheelRotatedDirection);
		fun >> (BCS_RRWheelRotatedDirectionVD);
		fun >> (EPS_SteeringAngle);
		fun >> (EPS_SteeringAngleVD);
		fun >> (EPS_SteeringAngleSpd);
		fun >> (EPS_SteeringAngleSpdVD);
	}
};

#endif //____BDCTURN_H__
