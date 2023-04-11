#ifndef __ASF_HEALTH_HR__HEALTHINDICATOR_H__
#define __ASF_HEALTH_HR__HEALTHINDICATOR_H__


#include "cstdint"
#include "impl_type_array_uint8_t_3.h"





namespace asf
{
namespace health
{
namespace hr
{

struct HealthIndicator {
public:
	std::uint8_t Performance;
	std::uint8_t Reliability;
	std::uint8_t NrOfPartitions;
	std::uint8_t PartitionState;
	std::uint8_t HealthIndex;
	array_uint8_t_3 Reserved;
/*
	HealthIndicator() {}
	~HealthIndicator() {}
	HealthIndicator(const std::uint8_t _Performance,const std::uint8_t _Reliability,const std::uint8_t _NrOfPartitions,const std::uint8_t _PartitionState,const std::uint8_t _HealthIndex,const array_uint8_t_3 _Reserved):Performance(_Performance),Reliability(_Reliability),NrOfPartitions(_NrOfPartitions),PartitionState(_PartitionState),HealthIndex(_HealthIndex),Reserved(_Reserved) {}
	HealthIndicator(const HealthIndicator &_x){
		Performance = _x.Performance;
		Reliability = _x.Reliability;
		NrOfPartitions = _x.NrOfPartitions;
		PartitionState = _x.PartitionState;
		HealthIndex = _x.HealthIndex;
		Reserved = _x.Reserved;
	}
	HealthIndicator(HealthIndicator &&_x){
		Performance = std::move(_x.Performance);
		Reliability = std::move(_x.Reliability);
		NrOfPartitions = std::move(_x.NrOfPartitions);
		PartitionState = std::move(_x.PartitionState);
		HealthIndex = std::move(_x.HealthIndex);
		Reserved = std::move(_x.Reserved);
	}
	HealthIndicator& operator=(const HealthIndicator &_x){
		Performance = _x.Performance;
		Reliability = _x.Reliability;
		NrOfPartitions = _x.NrOfPartitions;
		PartitionState = _x.PartitionState;
		HealthIndex = _x.HealthIndex;
		Reserved = _x.Reserved;
		return *this;
	}
	HealthIndicator& operator=(HealthIndicator &&_x){
		Performance = std::move(_x.Performance);
		Reliability = std::move(_x.Reliability);
		NrOfPartitions = std::move(_x.NrOfPartitions);
		PartitionState = std::move(_x.PartitionState);
		HealthIndex = std::move(_x.HealthIndex);
		Reserved = std::move(_x.Reserved);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(Performance);
		fun(Reliability);
		fun(NrOfPartitions);
		fun(PartitionState);
		fun(HealthIndex);
		fun(Reserved);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(Performance);
		fun(Reliability);
		fun(NrOfPartitions);
		fun(PartitionState);
		fun(HealthIndex);
		fun(Reserved);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (Performance);
		fun << (Reliability);
		fun << (NrOfPartitions);
		fun << (PartitionState);
		fun << (HealthIndex);
		fun << (Reserved);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (Performance);
		fun >> (Reliability);
		fun >> (NrOfPartitions);
		fun >> (PartitionState);
		fun >> (HealthIndex);
		fun >> (Reserved);
	}
};

}//asf
}//health
}//hr
#endif //__ASF_HEALTH_HR__HEALTHINDICATOR_H__
