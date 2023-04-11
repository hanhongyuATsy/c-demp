#ifndef __ASF_HEALTH_HR__HEALTHREPORTTYPE_H__
#define __ASF_HEALTH_HR__HEALTHREPORTTYPE_H__


#include "cstdint"
#include "impl_type_bdccloud1.h"
#include "asf/health/hr/impl_type_healthinfo.h"





namespace asf
{
namespace health
{
namespace hr
{

struct HealthReportType {
public:
	std::uint64_t Timestamp;
	std::uint8_t SubsystemID;
	BDCCLOUD1 VehicleStatus;
	asf::health::hr::HealthInfo Info;
/*
	HealthReportType() {}
	~HealthReportType() {}
	HealthReportType(const std::uint64_t _Timestamp,const std::uint8_t _SubsystemID,const BDCCLOUD1 _VehicleStatus,const asf::health::hr::HealthInfo _Info):Timestamp(_Timestamp),SubsystemID(_SubsystemID),VehicleStatus(_VehicleStatus),Info(_Info) {}
	HealthReportType(const HealthReportType &_x){
		Timestamp = _x.Timestamp;
		SubsystemID = _x.SubsystemID;
		VehicleStatus = _x.VehicleStatus;
		Info = _x.Info;
	}
	HealthReportType(HealthReportType &&_x){
		Timestamp = std::move(_x.Timestamp);
		SubsystemID = std::move(_x.SubsystemID);
		VehicleStatus = std::move(_x.VehicleStatus);
		Info = std::move(_x.Info);
	}
	HealthReportType& operator=(const HealthReportType &_x){
		Timestamp = _x.Timestamp;
		SubsystemID = _x.SubsystemID;
		VehicleStatus = _x.VehicleStatus;
		Info = _x.Info;
		return *this;
	}
	HealthReportType& operator=(HealthReportType &&_x){
		Timestamp = std::move(_x.Timestamp);
		SubsystemID = std::move(_x.SubsystemID);
		VehicleStatus = std::move(_x.VehicleStatus);
		Info = std::move(_x.Info);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(Timestamp);
		fun(SubsystemID);
		fun(VehicleStatus);
		fun(Info);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(Timestamp);
		fun(SubsystemID);
		fun(VehicleStatus);
		fun(Info);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (Timestamp);
		fun << (SubsystemID);
		fun << (VehicleStatus);
		fun << (Info);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (Timestamp);
		fun >> (SubsystemID);
		fun >> (VehicleStatus);
		fun >> (Info);
	}
};

}//asf
}//health
}//hr
#endif //__ASF_HEALTH_HR__HEALTHREPORTTYPE_H__
