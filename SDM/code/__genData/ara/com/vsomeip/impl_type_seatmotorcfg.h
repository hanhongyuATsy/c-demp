#ifndef __ARA_COM_VSOMEIP__SEATMOTORCFG_H__
#define __ARA_COM_VSOMEIP__SEATMOTORCFG_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct SeatMotorCfg {
public:
	std::uint8_t Slide_X_Motor;
	std::uint8_t Slide_Y_Motor;
	std::uint8_t Height_Motor;
	std::uint8_t Backrest_Motor1;
	std::uint8_t Backrest_Motor2;
	std::uint8_t Tilt_Motor;
	std::uint8_t Cushion_Motor;
	std::uint8_t Cushion_Angle_Motor;
	std::uint8_t Ottoman_Angle_Motor;
	std::uint8_t Ottoman_Extent_Motor;
	std::uint8_t Head_Up;
	std::uint8_t Head_Front;
	std::uint8_t Flank;
	std::uint8_t Fast_Fall;
	std::uint8_t Vibration_Motor_1;
	std::uint8_t Vibration_Motor_2;
	std::uint8_t Motor_1;
	std::uint8_t Motor_2;
	std::uint8_t Motor_3;
/*
	SeatMotorCfg() {}
	~SeatMotorCfg() {}
	SeatMotorCfg(const std::uint8_t _Slide_X_Motor,const std::uint8_t _Slide_Y_Motor,const std::uint8_t _Height_Motor,const std::uint8_t _Backrest_Motor1,const std::uint8_t _Backrest_Motor2,const std::uint8_t _Tilt_Motor,const std::uint8_t _Cushion_Motor,const std::uint8_t _Cushion_Angle_Motor,const std::uint8_t _Ottoman_Angle_Motor,const std::uint8_t _Ottoman_Extent_Motor,const std::uint8_t _Head_Up,const std::uint8_t _Head_Front,const std::uint8_t _Flank,const std::uint8_t _Fast_Fall,const std::uint8_t _Vibration_Motor_1,const std::uint8_t _Vibration_Motor_2,const std::uint8_t _Motor_1,const std::uint8_t _Motor_2,const std::uint8_t _Motor_3):Slide_X_Motor(_Slide_X_Motor),Slide_Y_Motor(_Slide_Y_Motor),Height_Motor(_Height_Motor),Backrest_Motor1(_Backrest_Motor1),Backrest_Motor2(_Backrest_Motor2),Tilt_Motor(_Tilt_Motor),Cushion_Motor(_Cushion_Motor),Cushion_Angle_Motor(_Cushion_Angle_Motor),Ottoman_Angle_Motor(_Ottoman_Angle_Motor),Ottoman_Extent_Motor(_Ottoman_Extent_Motor),Head_Up(_Head_Up),Head_Front(_Head_Front),Flank(_Flank),Fast_Fall(_Fast_Fall),Vibration_Motor_1(_Vibration_Motor_1),Vibration_Motor_2(_Vibration_Motor_2),Motor_1(_Motor_1),Motor_2(_Motor_2),Motor_3(_Motor_3) {}
	SeatMotorCfg(const SeatMotorCfg &_x){
		Slide_X_Motor = _x.Slide_X_Motor;
		Slide_Y_Motor = _x.Slide_Y_Motor;
		Height_Motor = _x.Height_Motor;
		Backrest_Motor1 = _x.Backrest_Motor1;
		Backrest_Motor2 = _x.Backrest_Motor2;
		Tilt_Motor = _x.Tilt_Motor;
		Cushion_Motor = _x.Cushion_Motor;
		Cushion_Angle_Motor = _x.Cushion_Angle_Motor;
		Ottoman_Angle_Motor = _x.Ottoman_Angle_Motor;
		Ottoman_Extent_Motor = _x.Ottoman_Extent_Motor;
		Head_Up = _x.Head_Up;
		Head_Front = _x.Head_Front;
		Flank = _x.Flank;
		Fast_Fall = _x.Fast_Fall;
		Vibration_Motor_1 = _x.Vibration_Motor_1;
		Vibration_Motor_2 = _x.Vibration_Motor_2;
		Motor_1 = _x.Motor_1;
		Motor_2 = _x.Motor_2;
		Motor_3 = _x.Motor_3;
	}
	SeatMotorCfg(SeatMotorCfg &&_x){
		Slide_X_Motor = std::move(_x.Slide_X_Motor);
		Slide_Y_Motor = std::move(_x.Slide_Y_Motor);
		Height_Motor = std::move(_x.Height_Motor);
		Backrest_Motor1 = std::move(_x.Backrest_Motor1);
		Backrest_Motor2 = std::move(_x.Backrest_Motor2);
		Tilt_Motor = std::move(_x.Tilt_Motor);
		Cushion_Motor = std::move(_x.Cushion_Motor);
		Cushion_Angle_Motor = std::move(_x.Cushion_Angle_Motor);
		Ottoman_Angle_Motor = std::move(_x.Ottoman_Angle_Motor);
		Ottoman_Extent_Motor = std::move(_x.Ottoman_Extent_Motor);
		Head_Up = std::move(_x.Head_Up);
		Head_Front = std::move(_x.Head_Front);
		Flank = std::move(_x.Flank);
		Fast_Fall = std::move(_x.Fast_Fall);
		Vibration_Motor_1 = std::move(_x.Vibration_Motor_1);
		Vibration_Motor_2 = std::move(_x.Vibration_Motor_2);
		Motor_1 = std::move(_x.Motor_1);
		Motor_2 = std::move(_x.Motor_2);
		Motor_3 = std::move(_x.Motor_3);
	}
	SeatMotorCfg& operator=(const SeatMotorCfg &_x){
		Slide_X_Motor = _x.Slide_X_Motor;
		Slide_Y_Motor = _x.Slide_Y_Motor;
		Height_Motor = _x.Height_Motor;
		Backrest_Motor1 = _x.Backrest_Motor1;
		Backrest_Motor2 = _x.Backrest_Motor2;
		Tilt_Motor = _x.Tilt_Motor;
		Cushion_Motor = _x.Cushion_Motor;
		Cushion_Angle_Motor = _x.Cushion_Angle_Motor;
		Ottoman_Angle_Motor = _x.Ottoman_Angle_Motor;
		Ottoman_Extent_Motor = _x.Ottoman_Extent_Motor;
		Head_Up = _x.Head_Up;
		Head_Front = _x.Head_Front;
		Flank = _x.Flank;
		Fast_Fall = _x.Fast_Fall;
		Vibration_Motor_1 = _x.Vibration_Motor_1;
		Vibration_Motor_2 = _x.Vibration_Motor_2;
		Motor_1 = _x.Motor_1;
		Motor_2 = _x.Motor_2;
		Motor_3 = _x.Motor_3;
		return *this;
	}
	SeatMotorCfg& operator=(SeatMotorCfg &&_x){
		Slide_X_Motor = std::move(_x.Slide_X_Motor);
		Slide_Y_Motor = std::move(_x.Slide_Y_Motor);
		Height_Motor = std::move(_x.Height_Motor);
		Backrest_Motor1 = std::move(_x.Backrest_Motor1);
		Backrest_Motor2 = std::move(_x.Backrest_Motor2);
		Tilt_Motor = std::move(_x.Tilt_Motor);
		Cushion_Motor = std::move(_x.Cushion_Motor);
		Cushion_Angle_Motor = std::move(_x.Cushion_Angle_Motor);
		Ottoman_Angle_Motor = std::move(_x.Ottoman_Angle_Motor);
		Ottoman_Extent_Motor = std::move(_x.Ottoman_Extent_Motor);
		Head_Up = std::move(_x.Head_Up);
		Head_Front = std::move(_x.Head_Front);
		Flank = std::move(_x.Flank);
		Fast_Fall = std::move(_x.Fast_Fall);
		Vibration_Motor_1 = std::move(_x.Vibration_Motor_1);
		Vibration_Motor_2 = std::move(_x.Vibration_Motor_2);
		Motor_1 = std::move(_x.Motor_1);
		Motor_2 = std::move(_x.Motor_2);
		Motor_3 = std::move(_x.Motor_3);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(Slide_X_Motor);
		fun(Slide_Y_Motor);
		fun(Height_Motor);
		fun(Backrest_Motor1);
		fun(Backrest_Motor2);
		fun(Tilt_Motor);
		fun(Cushion_Motor);
		fun(Cushion_Angle_Motor);
		fun(Ottoman_Angle_Motor);
		fun(Ottoman_Extent_Motor);
		fun(Head_Up);
		fun(Head_Front);
		fun(Flank);
		fun(Fast_Fall);
		fun(Vibration_Motor_1);
		fun(Vibration_Motor_2);
		fun(Motor_1);
		fun(Motor_2);
		fun(Motor_3);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(Slide_X_Motor);
		fun(Slide_Y_Motor);
		fun(Height_Motor);
		fun(Backrest_Motor1);
		fun(Backrest_Motor2);
		fun(Tilt_Motor);
		fun(Cushion_Motor);
		fun(Cushion_Angle_Motor);
		fun(Ottoman_Angle_Motor);
		fun(Ottoman_Extent_Motor);
		fun(Head_Up);
		fun(Head_Front);
		fun(Flank);
		fun(Fast_Fall);
		fun(Vibration_Motor_1);
		fun(Vibration_Motor_2);
		fun(Motor_1);
		fun(Motor_2);
		fun(Motor_3);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (Slide_X_Motor);
		fun << (Slide_Y_Motor);
		fun << (Height_Motor);
		fun << (Backrest_Motor1);
		fun << (Backrest_Motor2);
		fun << (Tilt_Motor);
		fun << (Cushion_Motor);
		fun << (Cushion_Angle_Motor);
		fun << (Ottoman_Angle_Motor);
		fun << (Ottoman_Extent_Motor);
		fun << (Head_Up);
		fun << (Head_Front);
		fun << (Flank);
		fun << (Fast_Fall);
		fun << (Vibration_Motor_1);
		fun << (Vibration_Motor_2);
		fun << (Motor_1);
		fun << (Motor_2);
		fun << (Motor_3);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (Slide_X_Motor);
		fun >> (Slide_Y_Motor);
		fun >> (Height_Motor);
		fun >> (Backrest_Motor1);
		fun >> (Backrest_Motor2);
		fun >> (Tilt_Motor);
		fun >> (Cushion_Motor);
		fun >> (Cushion_Angle_Motor);
		fun >> (Ottoman_Angle_Motor);
		fun >> (Ottoman_Extent_Motor);
		fun >> (Head_Up);
		fun >> (Head_Front);
		fun >> (Flank);
		fun >> (Fast_Fall);
		fun >> (Vibration_Motor_1);
		fun >> (Vibration_Motor_2);
		fun >> (Motor_1);
		fun >> (Motor_2);
		fun >> (Motor_3);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__SEATMOTORCFG_H__
