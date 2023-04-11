#ifndef __ASF_HEALTH_HR__HEALTHHAZARD_H__
#define __ASF_HEALTH_HR__HEALTHHAZARD_H__


#include "impl_type_array_int8_t_16.h"
#include "impl_type_array_uint32_t_4.h"
#include "cstdint"
#include "impl_type_array_uint8_t_3.h"





namespace asf
{
namespace health
{
namespace hr
{

struct HealthHazard {
public:
	array_int8_t_16 ID;
	array_uint32_t_4 Value;
	std::uint8_t Category;
	std::uint8_t PartitionID;
	std::uint8_t DetectedBy;
	std::uint8_t Frequency;
	std::uint8_t Severity;
	array_uint8_t_3 Reserved;
/*
	HealthHazard() {}
	~HealthHazard() {}
	HealthHazard(const array_int8_t_16 _ID,const array_uint32_t_4 _Value,const std::uint8_t _Category,const std::uint8_t _PartitionID,const std::uint8_t _DetectedBy,const std::uint8_t _Frequency,const std::uint8_t _Severity,const array_uint8_t_3 _Reserved):ID(_ID),Value(_Value),Category(_Category),PartitionID(_PartitionID),DetectedBy(_DetectedBy),Frequency(_Frequency),Severity(_Severity),Reserved(_Reserved) {}
	HealthHazard(const HealthHazard &_x){
		ID = _x.ID;
		Value = _x.Value;
		Category = _x.Category;
		PartitionID = _x.PartitionID;
		DetectedBy = _x.DetectedBy;
		Frequency = _x.Frequency;
		Severity = _x.Severity;
		Reserved = _x.Reserved;
	}
	HealthHazard(HealthHazard &&_x){
		ID = std::move(_x.ID);
		Value = std::move(_x.Value);
		Category = std::move(_x.Category);
		PartitionID = std::move(_x.PartitionID);
		DetectedBy = std::move(_x.DetectedBy);
		Frequency = std::move(_x.Frequency);
		Severity = std::move(_x.Severity);
		Reserved = std::move(_x.Reserved);
	}
	HealthHazard& operator=(const HealthHazard &_x){
		ID = _x.ID;
		Value = _x.Value;
		Category = _x.Category;
		PartitionID = _x.PartitionID;
		DetectedBy = _x.DetectedBy;
		Frequency = _x.Frequency;
		Severity = _x.Severity;
		Reserved = _x.Reserved;
		return *this;
	}
	HealthHazard& operator=(HealthHazard &&_x){
		ID = std::move(_x.ID);
		Value = std::move(_x.Value);
		Category = std::move(_x.Category);
		PartitionID = std::move(_x.PartitionID);
		DetectedBy = std::move(_x.DetectedBy);
		Frequency = std::move(_x.Frequency);
		Severity = std::move(_x.Severity);
		Reserved = std::move(_x.Reserved);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(ID);
		fun(Value);
		fun(Category);
		fun(PartitionID);
		fun(DetectedBy);
		fun(Frequency);
		fun(Severity);
		fun(Reserved);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(ID);
		fun(Value);
		fun(Category);
		fun(PartitionID);
		fun(DetectedBy);
		fun(Frequency);
		fun(Severity);
		fun(Reserved);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (ID);
		fun << (Value);
		fun << (Category);
		fun << (PartitionID);
		fun << (DetectedBy);
		fun << (Frequency);
		fun << (Severity);
		fun << (Reserved);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (ID);
		fun >> (Value);
		fun >> (Category);
		fun >> (PartitionID);
		fun >> (DetectedBy);
		fun >> (Frequency);
		fun >> (Severity);
		fun >> (Reserved);
	}
};

}//asf
}//health
}//hr
#endif //__ASF_HEALTH_HR__HEALTHHAZARD_H__
