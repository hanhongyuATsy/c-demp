#ifndef __ASF_HEALTH_HR__HEALTHREALTIMEDATAREPORTTYPE_H__
#define __ASF_HEALTH_HR__HEALTHREALTIMEDATAREPORTTYPE_H__


#include "cstdint"
#include "impl_type_array_uint8_t_4.h"
#include "impl_type_vec_hrld.h"





namespace asf
{
namespace health
{
namespace hr
{

struct HealthRealTimeDataReportType {
public:
	std::uint64_t Timestamp;
	std::uint8_t SubsystemID;
	std::uint8_t NrOfPartitions;
	std::uint8_t PartitionState;
	array_uint8_t_4 Reserved;
	std::uint8_t NrOfRealTimeData;
	vec_hrld Data;
/*
	HealthRealTimeDataReportType() {}
	~HealthRealTimeDataReportType() {}
	HealthRealTimeDataReportType(const std::uint64_t _Timestamp,const std::uint8_t _SubsystemID,const std::uint8_t _NrOfPartitions,const std::uint8_t _PartitionState,const array_uint8_t_4 _Reserved,const std::uint8_t _NrOfRealTimeData,const vec_hrld _Data):Timestamp(_Timestamp),SubsystemID(_SubsystemID),NrOfPartitions(_NrOfPartitions),PartitionState(_PartitionState),Reserved(_Reserved),NrOfRealTimeData(_NrOfRealTimeData),Data(_Data) {}
	HealthRealTimeDataReportType(const HealthRealTimeDataReportType &_x){
		Timestamp = _x.Timestamp;
		SubsystemID = _x.SubsystemID;
		NrOfPartitions = _x.NrOfPartitions;
		PartitionState = _x.PartitionState;
		Reserved = _x.Reserved;
		NrOfRealTimeData = _x.NrOfRealTimeData;
		Data = _x.Data;
	}
	HealthRealTimeDataReportType(HealthRealTimeDataReportType &&_x){
		Timestamp = std::move(_x.Timestamp);
		SubsystemID = std::move(_x.SubsystemID);
		NrOfPartitions = std::move(_x.NrOfPartitions);
		PartitionState = std::move(_x.PartitionState);
		Reserved = std::move(_x.Reserved);
		NrOfRealTimeData = std::move(_x.NrOfRealTimeData);
		Data = std::move(_x.Data);
	}
	HealthRealTimeDataReportType& operator=(const HealthRealTimeDataReportType &_x){
		Timestamp = _x.Timestamp;
		SubsystemID = _x.SubsystemID;
		NrOfPartitions = _x.NrOfPartitions;
		PartitionState = _x.PartitionState;
		Reserved = _x.Reserved;
		NrOfRealTimeData = _x.NrOfRealTimeData;
		Data = _x.Data;
		return *this;
	}
	HealthRealTimeDataReportType& operator=(HealthRealTimeDataReportType &&_x){
		Timestamp = std::move(_x.Timestamp);
		SubsystemID = std::move(_x.SubsystemID);
		NrOfPartitions = std::move(_x.NrOfPartitions);
		PartitionState = std::move(_x.PartitionState);
		Reserved = std::move(_x.Reserved);
		NrOfRealTimeData = std::move(_x.NrOfRealTimeData);
		Data = std::move(_x.Data);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(Timestamp);
		fun(SubsystemID);
		fun(NrOfPartitions);
		fun(PartitionState);
		fun(Reserved);
		fun(NrOfRealTimeData);
		fun(Data);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(Timestamp);
		fun(SubsystemID);
		fun(NrOfPartitions);
		fun(PartitionState);
		fun(Reserved);
		fun(NrOfRealTimeData);
		fun(Data);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (Timestamp);
		fun << (SubsystemID);
		fun << (NrOfPartitions);
		fun << (PartitionState);
		fun << (Reserved);
		fun << (NrOfRealTimeData);
		fun << (Data);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (Timestamp);
		fun >> (SubsystemID);
		fun >> (NrOfPartitions);
		fun >> (PartitionState);
		fun >> (Reserved);
		fun >> (NrOfRealTimeData);
		fun >> (Data);
	}
};

}//asf
}//health
}//hr
#endif //__ASF_HEALTH_HR__HEALTHREALTIMEDATAREPORTTYPE_H__
