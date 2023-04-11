#ifndef ____STRUCT_PERSONHEALTHST_H__
#define ____STRUCT_PERSONHEALTHST_H__


#include "cstdint"






struct Struct_PersonHealthSt {
public:
	std::uint8_t Uint8_SeatPositionID;
	float Float_HeartRate;
	float Float_HeartRateVariability;
	float Float_BloodOxygenSaturation;
	float Float_BloodPressure;
	float Float_RespiratoryRate;
/*
	Struct_PersonHealthSt() {}
	~Struct_PersonHealthSt() {}
	Struct_PersonHealthSt(const std::uint8_t _Uint8_SeatPositionID,const float _Float_HeartRate,const float _Float_HeartRateVariability,const float _Float_BloodOxygenSaturation,const float _Float_BloodPressure,const float _Float_RespiratoryRate):Uint8_SeatPositionID(_Uint8_SeatPositionID),Float_HeartRate(_Float_HeartRate),Float_HeartRateVariability(_Float_HeartRateVariability),Float_BloodOxygenSaturation(_Float_BloodOxygenSaturation),Float_BloodPressure(_Float_BloodPressure),Float_RespiratoryRate(_Float_RespiratoryRate) {}
	Struct_PersonHealthSt(const Struct_PersonHealthSt &_x){
		Uint8_SeatPositionID = _x.Uint8_SeatPositionID;
		Float_HeartRate = _x.Float_HeartRate;
		Float_HeartRateVariability = _x.Float_HeartRateVariability;
		Float_BloodOxygenSaturation = _x.Float_BloodOxygenSaturation;
		Float_BloodPressure = _x.Float_BloodPressure;
		Float_RespiratoryRate = _x.Float_RespiratoryRate;
	}
	Struct_PersonHealthSt(Struct_PersonHealthSt &&_x){
		Uint8_SeatPositionID = std::move(_x.Uint8_SeatPositionID);
		Float_HeartRate = std::move(_x.Float_HeartRate);
		Float_HeartRateVariability = std::move(_x.Float_HeartRateVariability);
		Float_BloodOxygenSaturation = std::move(_x.Float_BloodOxygenSaturation);
		Float_BloodPressure = std::move(_x.Float_BloodPressure);
		Float_RespiratoryRate = std::move(_x.Float_RespiratoryRate);
	}
	Struct_PersonHealthSt& operator=(const Struct_PersonHealthSt &_x){
		Uint8_SeatPositionID = _x.Uint8_SeatPositionID;
		Float_HeartRate = _x.Float_HeartRate;
		Float_HeartRateVariability = _x.Float_HeartRateVariability;
		Float_BloodOxygenSaturation = _x.Float_BloodOxygenSaturation;
		Float_BloodPressure = _x.Float_BloodPressure;
		Float_RespiratoryRate = _x.Float_RespiratoryRate;
		return *this;
	}
	Struct_PersonHealthSt& operator=(Struct_PersonHealthSt &&_x){
		Uint8_SeatPositionID = std::move(_x.Uint8_SeatPositionID);
		Float_HeartRate = std::move(_x.Float_HeartRate);
		Float_HeartRateVariability = std::move(_x.Float_HeartRateVariability);
		Float_BloodOxygenSaturation = std::move(_x.Float_BloodOxygenSaturation);
		Float_BloodPressure = std::move(_x.Float_BloodPressure);
		Float_RespiratoryRate = std::move(_x.Float_RespiratoryRate);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(Uint8_SeatPositionID);
		fun(Float_HeartRate);
		fun(Float_HeartRateVariability);
		fun(Float_BloodOxygenSaturation);
		fun(Float_BloodPressure);
		fun(Float_RespiratoryRate);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(Uint8_SeatPositionID);
		fun(Float_HeartRate);
		fun(Float_HeartRateVariability);
		fun(Float_BloodOxygenSaturation);
		fun(Float_BloodPressure);
		fun(Float_RespiratoryRate);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (Uint8_SeatPositionID);
		fun << (Float_HeartRate);
		fun << (Float_HeartRateVariability);
		fun << (Float_BloodOxygenSaturation);
		fun << (Float_BloodPressure);
		fun << (Float_RespiratoryRate);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (Uint8_SeatPositionID);
		fun >> (Float_HeartRate);
		fun >> (Float_HeartRateVariability);
		fun >> (Float_BloodOxygenSaturation);
		fun >> (Float_BloodPressure);
		fun >> (Float_RespiratoryRate);
	}
};

#endif //____STRUCT_PERSONHEALTHST_H__
