#ifndef ____STRUCT_LOCATIONINFO_H__
#define ____STRUCT_LOCATIONINFO_H__


#include "cstdint"
#include "ara/com/vsomeip/impl_type_satinfolist.h"






struct Struct_LocationInfo {
public:
	std::uint8_t GNSSValidFlag;
	double Longitude;
	double Latitude;
	double Altitude;
	double UTCTime;
	float Speed;
	float SpdAccuracy;
	float Direction;
	float HDOP;
	float PDOP;
	float VDOP;
	float MagDeclination;
	float HorizontalAccuracy;
	float VerticalAccuracy;
	float BearingAccuracy;
	std::uint32_t UTCDate;
	std::uint8_t DirectionofMagDec;
	std::uint8_t SatSystem;
	std::uint8_t SatVisible;
	std::uint8_t SatAvailable;
	ara::com::vsomeip::SatInfoList SatInfos;
/*
	Struct_LocationInfo() {}
	~Struct_LocationInfo() {}
	Struct_LocationInfo(const std::uint8_t _GNSSValidFlag,const double _Longitude,const double _Latitude,const double _Altitude,const double _UTCTime,const float _Speed,const float _SpdAccuracy,const float _Direction,const float _HDOP,const float _PDOP,const float _VDOP,const float _MagDeclination,const float _HorizontalAccuracy,const float _VerticalAccuracy,const float _BearingAccuracy,const std::uint32_t _UTCDate,const std::uint8_t _DirectionofMagDec,const std::uint8_t _SatSystem,const std::uint8_t _SatVisible,const std::uint8_t _SatAvailable,const ara::com::vsomeip::SatInfoList _SatInfos):GNSSValidFlag(_GNSSValidFlag),Longitude(_Longitude),Latitude(_Latitude),Altitude(_Altitude),UTCTime(_UTCTime),Speed(_Speed),SpdAccuracy(_SpdAccuracy),Direction(_Direction),HDOP(_HDOP),PDOP(_PDOP),VDOP(_VDOP),MagDeclination(_MagDeclination),HorizontalAccuracy(_HorizontalAccuracy),VerticalAccuracy(_VerticalAccuracy),BearingAccuracy(_BearingAccuracy),UTCDate(_UTCDate),DirectionofMagDec(_DirectionofMagDec),SatSystem(_SatSystem),SatVisible(_SatVisible),SatAvailable(_SatAvailable),SatInfos(_SatInfos) {}
	Struct_LocationInfo(const Struct_LocationInfo &_x){
		GNSSValidFlag = _x.GNSSValidFlag;
		Longitude = _x.Longitude;
		Latitude = _x.Latitude;
		Altitude = _x.Altitude;
		UTCTime = _x.UTCTime;
		Speed = _x.Speed;
		SpdAccuracy = _x.SpdAccuracy;
		Direction = _x.Direction;
		HDOP = _x.HDOP;
		PDOP = _x.PDOP;
		VDOP = _x.VDOP;
		MagDeclination = _x.MagDeclination;
		HorizontalAccuracy = _x.HorizontalAccuracy;
		VerticalAccuracy = _x.VerticalAccuracy;
		BearingAccuracy = _x.BearingAccuracy;
		UTCDate = _x.UTCDate;
		DirectionofMagDec = _x.DirectionofMagDec;
		SatSystem = _x.SatSystem;
		SatVisible = _x.SatVisible;
		SatAvailable = _x.SatAvailable;
		SatInfos = _x.SatInfos;
	}
	Struct_LocationInfo(Struct_LocationInfo &&_x){
		GNSSValidFlag = std::move(_x.GNSSValidFlag);
		Longitude = std::move(_x.Longitude);
		Latitude = std::move(_x.Latitude);
		Altitude = std::move(_x.Altitude);
		UTCTime = std::move(_x.UTCTime);
		Speed = std::move(_x.Speed);
		SpdAccuracy = std::move(_x.SpdAccuracy);
		Direction = std::move(_x.Direction);
		HDOP = std::move(_x.HDOP);
		PDOP = std::move(_x.PDOP);
		VDOP = std::move(_x.VDOP);
		MagDeclination = std::move(_x.MagDeclination);
		HorizontalAccuracy = std::move(_x.HorizontalAccuracy);
		VerticalAccuracy = std::move(_x.VerticalAccuracy);
		BearingAccuracy = std::move(_x.BearingAccuracy);
		UTCDate = std::move(_x.UTCDate);
		DirectionofMagDec = std::move(_x.DirectionofMagDec);
		SatSystem = std::move(_x.SatSystem);
		SatVisible = std::move(_x.SatVisible);
		SatAvailable = std::move(_x.SatAvailable);
		SatInfos = std::move(_x.SatInfos);
	}
	Struct_LocationInfo& operator=(const Struct_LocationInfo &_x){
		GNSSValidFlag = _x.GNSSValidFlag;
		Longitude = _x.Longitude;
		Latitude = _x.Latitude;
		Altitude = _x.Altitude;
		UTCTime = _x.UTCTime;
		Speed = _x.Speed;
		SpdAccuracy = _x.SpdAccuracy;
		Direction = _x.Direction;
		HDOP = _x.HDOP;
		PDOP = _x.PDOP;
		VDOP = _x.VDOP;
		MagDeclination = _x.MagDeclination;
		HorizontalAccuracy = _x.HorizontalAccuracy;
		VerticalAccuracy = _x.VerticalAccuracy;
		BearingAccuracy = _x.BearingAccuracy;
		UTCDate = _x.UTCDate;
		DirectionofMagDec = _x.DirectionofMagDec;
		SatSystem = _x.SatSystem;
		SatVisible = _x.SatVisible;
		SatAvailable = _x.SatAvailable;
		SatInfos = _x.SatInfos;
		return *this;
	}
	Struct_LocationInfo& operator=(Struct_LocationInfo &&_x){
		GNSSValidFlag = std::move(_x.GNSSValidFlag);
		Longitude = std::move(_x.Longitude);
		Latitude = std::move(_x.Latitude);
		Altitude = std::move(_x.Altitude);
		UTCTime = std::move(_x.UTCTime);
		Speed = std::move(_x.Speed);
		SpdAccuracy = std::move(_x.SpdAccuracy);
		Direction = std::move(_x.Direction);
		HDOP = std::move(_x.HDOP);
		PDOP = std::move(_x.PDOP);
		VDOP = std::move(_x.VDOP);
		MagDeclination = std::move(_x.MagDeclination);
		HorizontalAccuracy = std::move(_x.HorizontalAccuracy);
		VerticalAccuracy = std::move(_x.VerticalAccuracy);
		BearingAccuracy = std::move(_x.BearingAccuracy);
		UTCDate = std::move(_x.UTCDate);
		DirectionofMagDec = std::move(_x.DirectionofMagDec);
		SatSystem = std::move(_x.SatSystem);
		SatVisible = std::move(_x.SatVisible);
		SatAvailable = std::move(_x.SatAvailable);
		SatInfos = std::move(_x.SatInfos);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(GNSSValidFlag);
		fun(Longitude);
		fun(Latitude);
		fun(Altitude);
		fun(UTCTime);
		fun(Speed);
		fun(SpdAccuracy);
		fun(Direction);
		fun(HDOP);
		fun(PDOP);
		fun(VDOP);
		fun(MagDeclination);
		fun(HorizontalAccuracy);
		fun(VerticalAccuracy);
		fun(BearingAccuracy);
		fun(UTCDate);
		fun(DirectionofMagDec);
		fun(SatSystem);
		fun(SatVisible);
		fun(SatAvailable);
		fun(SatInfos);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(GNSSValidFlag);
		fun(Longitude);
		fun(Latitude);
		fun(Altitude);
		fun(UTCTime);
		fun(Speed);
		fun(SpdAccuracy);
		fun(Direction);
		fun(HDOP);
		fun(PDOP);
		fun(VDOP);
		fun(MagDeclination);
		fun(HorizontalAccuracy);
		fun(VerticalAccuracy);
		fun(BearingAccuracy);
		fun(UTCDate);
		fun(DirectionofMagDec);
		fun(SatSystem);
		fun(SatVisible);
		fun(SatAvailable);
		fun(SatInfos);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (GNSSValidFlag);
		fun << (Longitude);
		fun << (Latitude);
		fun << (Altitude);
		fun << (UTCTime);
		fun << (Speed);
		fun << (SpdAccuracy);
		fun << (Direction);
		fun << (HDOP);
		fun << (PDOP);
		fun << (VDOP);
		fun << (MagDeclination);
		fun << (HorizontalAccuracy);
		fun << (VerticalAccuracy);
		fun << (BearingAccuracy);
		fun << (UTCDate);
		fun << (DirectionofMagDec);
		fun << (SatSystem);
		fun << (SatVisible);
		fun << (SatAvailable);
		fun << (SatInfos);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (GNSSValidFlag);
		fun >> (Longitude);
		fun >> (Latitude);
		fun >> (Altitude);
		fun >> (UTCTime);
		fun >> (Speed);
		fun >> (SpdAccuracy);
		fun >> (Direction);
		fun >> (HDOP);
		fun >> (PDOP);
		fun >> (VDOP);
		fun >> (MagDeclination);
		fun >> (HorizontalAccuracy);
		fun >> (VerticalAccuracy);
		fun >> (BearingAccuracy);
		fun >> (UTCDate);
		fun >> (DirectionofMagDec);
		fun >> (SatSystem);
		fun >> (SatVisible);
		fun >> (SatAvailable);
		fun >> (SatInfos);
	}
};

#endif //____STRUCT_LOCATIONINFO_H__
