#ifndef __ASF_HEALTH_HR__HEALTHREALTIMEDATA_H__
#define __ASF_HEALTH_HR__HEALTHREALTIMEDATA_H__


#include "impl_type_array_int8_t_16.h"
#include "impl_type_array_uint32_t_4.h"
#include "cstdint"
#include "impl_type_array_uint8_t_2.h"





namespace asf
{
namespace health
{
namespace hr
{

struct HealthRealTimeData {
public:
	array_int8_t_16 ID;
	array_uint32_t_4 Value;
	std::uint8_t Category;
	std::uint8_t PartitionID;
	array_uint8_t_2 Reserved;
/*
	HealthRealTimeData() {}
	~HealthRealTimeData() {}
	HealthRealTimeData(const array_int8_t_16 _ID,const array_uint32_t_4 _Value,const std::uint8_t _Category,const std::uint8_t _PartitionID,const array_uint8_t_2 _Reserved):ID(_ID),Value(_Value),Category(_Category),PartitionID(_PartitionID),Reserved(_Reserved) {}
	HealthRealTimeData(const HealthRealTimeData &_x){
		ID = _x.ID;
		Value = _x.Value;
		Category = _x.Category;
		PartitionID = _x.PartitionID;
		Reserved = _x.Reserved;
	}
	HealthRealTimeData(HealthRealTimeData &&_x){
		ID = std::move(_x.ID);
		Value = std::move(_x.Value);
		Category = std::move(_x.Category);
		PartitionID = std::move(_x.PartitionID);
		Reserved = std::move(_x.Reserved);
	}
	HealthRealTimeData& operator=(const HealthRealTimeData &_x){
		ID = _x.ID;
		Value = _x.Value;
		Category = _x.Category;
		PartitionID = _x.PartitionID;
		Reserved = _x.Reserved;
		return *this;
	}
	HealthRealTimeData& operator=(HealthRealTimeData &&_x){
		ID = std::move(_x.ID);
		Value = std::move(_x.Value);
		Category = std::move(_x.Category);
		PartitionID = std::move(_x.PartitionID);
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
		fun(Reserved);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(ID);
		fun(Value);
		fun(Category);
		fun(PartitionID);
		fun(Reserved);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (ID);
		fun << (Value);
		fun << (Category);
		fun << (PartitionID);
		fun << (Reserved);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (ID);
		fun >> (Value);
		fun >> (Category);
		fun >> (PartitionID);
		fun >> (Reserved);
	}
};

}//asf
}//health
}//hr
#endif //__ASF_HEALTH_HR__HEALTHREALTIMEDATA_H__
