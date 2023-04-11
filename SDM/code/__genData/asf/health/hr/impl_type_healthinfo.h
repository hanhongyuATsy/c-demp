#ifndef __ASF_HEALTH_HR__HEALTHINFO_H__
#define __ASF_HEALTH_HR__HEALTHINFO_H__


#include "cstdint"
#include "asf/health/hr/impl_type_healthindicator.h"
#include "impl_type_vec_ci.h"
#include "impl_type_vec_hh.h"





namespace asf
{
namespace health
{
namespace hr
{

struct HealthInfo {
public:
	std::uint64_t Timestamp;
	asf::health::hr::HealthIndicator Indicator;
	std::uint8_t PartitionID;
	vec_ci CategoryNrOfHazard;
	std::uint8_t NrOfHazards;
	vec_hh Hazards;
/*
	HealthInfo() {}
	~HealthInfo() {}
	HealthInfo(const std::uint64_t _Timestamp,const asf::health::hr::HealthIndicator _Indicator,const std::uint8_t _PartitionID,const vec_ci _CategoryNrOfHazard,const std::uint8_t _NrOfHazards,const vec_hh _Hazards):Timestamp(_Timestamp),Indicator(_Indicator),PartitionID(_PartitionID),CategoryNrOfHazard(_CategoryNrOfHazard),NrOfHazards(_NrOfHazards),Hazards(_Hazards) {}
	HealthInfo(const HealthInfo &_x){
		Timestamp = _x.Timestamp;
		Indicator = _x.Indicator;
		PartitionID = _x.PartitionID;
		CategoryNrOfHazard = _x.CategoryNrOfHazard;
		NrOfHazards = _x.NrOfHazards;
		Hazards = _x.Hazards;
	}
	HealthInfo(HealthInfo &&_x){
		Timestamp = std::move(_x.Timestamp);
		Indicator = std::move(_x.Indicator);
		PartitionID = std::move(_x.PartitionID);
		CategoryNrOfHazard = std::move(_x.CategoryNrOfHazard);
		NrOfHazards = std::move(_x.NrOfHazards);
		Hazards = std::move(_x.Hazards);
	}
	HealthInfo& operator=(const HealthInfo &_x){
		Timestamp = _x.Timestamp;
		Indicator = _x.Indicator;
		PartitionID = _x.PartitionID;
		CategoryNrOfHazard = _x.CategoryNrOfHazard;
		NrOfHazards = _x.NrOfHazards;
		Hazards = _x.Hazards;
		return *this;
	}
	HealthInfo& operator=(HealthInfo &&_x){
		Timestamp = std::move(_x.Timestamp);
		Indicator = std::move(_x.Indicator);
		PartitionID = std::move(_x.PartitionID);
		CategoryNrOfHazard = std::move(_x.CategoryNrOfHazard);
		NrOfHazards = std::move(_x.NrOfHazards);
		Hazards = std::move(_x.Hazards);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(Timestamp);
		fun(Indicator);
		fun(PartitionID);
		fun(CategoryNrOfHazard);
		fun(NrOfHazards);
		fun(Hazards);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(Timestamp);
		fun(Indicator);
		fun(PartitionID);
		fun(CategoryNrOfHazard);
		fun(NrOfHazards);
		fun(Hazards);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (Timestamp);
		fun << (Indicator);
		fun << (PartitionID);
		fun << (CategoryNrOfHazard);
		fun << (NrOfHazards);
		fun << (Hazards);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (Timestamp);
		fun >> (Indicator);
		fun >> (PartitionID);
		fun >> (CategoryNrOfHazard);
		fun >> (NrOfHazards);
		fun >> (Hazards);
	}
};

}//asf
}//health
}//hr
#endif //__ASF_HEALTH_HR__HEALTHINFO_H__
