#ifndef __ARA_COM_VSOMEIP__STRG2ACMMNADDRESSINFO_TYPE_H__
#define __ARA_COM_VSOMEIP__STRG2ACMMNADDRESSINFO_TYPE_H__


#include "cstdint"
#include "ara/com/vsomeip/impl_type_homelatitude_type.h"
#include "ara/com/vsomeip/impl_type_homelongtitude_type.h"
#include "ara/com/vsomeip/impl_type_cmpnylatitude_type.h"
#include "ara/com/vsomeip/impl_type_cmpnylongtitude_type.h"
#include "ara/com/vsomeip/impl_type_homeaddrsfrq_type.h"
#include "ara/com/vsomeip/impl_type_cmpnyaddrsfrq_type.h"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct Strg2ACmmnAddressInfo_Type {
public:
	std::uint8_t WriteAccntID;
	ara::com::vsomeip::HomeLatitude_Type HomeLatitude;
	ara::com::vsomeip::HomeLongtitude_Type HomeLongtitude;
	ara::com::vsomeip::CmpnyLatitude_Type CmpnyLatitude;
	ara::com::vsomeip::CmpnyLongtitude_Type CmpnyLongtitude;
	ara::com::vsomeip::HomeAddrsFrq_Type HomeAddrsFrq;
	ara::com::vsomeip::CmpnyAddrsFrq_Type CmpnyAddrsFrq;
/*
	Strg2ACmmnAddressInfo_Type() {}
	~Strg2ACmmnAddressInfo_Type() {}
	Strg2ACmmnAddressInfo_Type(const std::uint8_t _WriteAccntID,const ara::com::vsomeip::HomeLatitude_Type _HomeLatitude,const ara::com::vsomeip::HomeLongtitude_Type _HomeLongtitude,const ara::com::vsomeip::CmpnyLatitude_Type _CmpnyLatitude,const ara::com::vsomeip::CmpnyLongtitude_Type _CmpnyLongtitude,const ara::com::vsomeip::HomeAddrsFrq_Type _HomeAddrsFrq,const ara::com::vsomeip::CmpnyAddrsFrq_Type _CmpnyAddrsFrq):WriteAccntID(_WriteAccntID),HomeLatitude(_HomeLatitude),HomeLongtitude(_HomeLongtitude),CmpnyLatitude(_CmpnyLatitude),CmpnyLongtitude(_CmpnyLongtitude),HomeAddrsFrq(_HomeAddrsFrq),CmpnyAddrsFrq(_CmpnyAddrsFrq) {}
	Strg2ACmmnAddressInfo_Type(const Strg2ACmmnAddressInfo_Type &_x){
		WriteAccntID = _x.WriteAccntID;
		HomeLatitude = _x.HomeLatitude;
		HomeLongtitude = _x.HomeLongtitude;
		CmpnyLatitude = _x.CmpnyLatitude;
		CmpnyLongtitude = _x.CmpnyLongtitude;
		HomeAddrsFrq = _x.HomeAddrsFrq;
		CmpnyAddrsFrq = _x.CmpnyAddrsFrq;
	}
	Strg2ACmmnAddressInfo_Type(Strg2ACmmnAddressInfo_Type &&_x){
		WriteAccntID = std::move(_x.WriteAccntID);
		HomeLatitude = std::move(_x.HomeLatitude);
		HomeLongtitude = std::move(_x.HomeLongtitude);
		CmpnyLatitude = std::move(_x.CmpnyLatitude);
		CmpnyLongtitude = std::move(_x.CmpnyLongtitude);
		HomeAddrsFrq = std::move(_x.HomeAddrsFrq);
		CmpnyAddrsFrq = std::move(_x.CmpnyAddrsFrq);
	}
	Strg2ACmmnAddressInfo_Type& operator=(const Strg2ACmmnAddressInfo_Type &_x){
		WriteAccntID = _x.WriteAccntID;
		HomeLatitude = _x.HomeLatitude;
		HomeLongtitude = _x.HomeLongtitude;
		CmpnyLatitude = _x.CmpnyLatitude;
		CmpnyLongtitude = _x.CmpnyLongtitude;
		HomeAddrsFrq = _x.HomeAddrsFrq;
		CmpnyAddrsFrq = _x.CmpnyAddrsFrq;
		return *this;
	}
	Strg2ACmmnAddressInfo_Type& operator=(Strg2ACmmnAddressInfo_Type &&_x){
		WriteAccntID = std::move(_x.WriteAccntID);
		HomeLatitude = std::move(_x.HomeLatitude);
		HomeLongtitude = std::move(_x.HomeLongtitude);
		CmpnyLatitude = std::move(_x.CmpnyLatitude);
		CmpnyLongtitude = std::move(_x.CmpnyLongtitude);
		HomeAddrsFrq = std::move(_x.HomeAddrsFrq);
		CmpnyAddrsFrq = std::move(_x.CmpnyAddrsFrq);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(WriteAccntID);
		fun(HomeLatitude);
		fun(HomeLongtitude);
		fun(CmpnyLatitude);
		fun(CmpnyLongtitude);
		fun(HomeAddrsFrq);
		fun(CmpnyAddrsFrq);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(WriteAccntID);
		fun(HomeLatitude);
		fun(HomeLongtitude);
		fun(CmpnyLatitude);
		fun(CmpnyLongtitude);
		fun(HomeAddrsFrq);
		fun(CmpnyAddrsFrq);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (WriteAccntID);
		fun << (HomeLatitude);
		fun << (HomeLongtitude);
		fun << (CmpnyLatitude);
		fun << (CmpnyLongtitude);
		fun << (HomeAddrsFrq);
		fun << (CmpnyAddrsFrq);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (WriteAccntID);
		fun >> (HomeLatitude);
		fun >> (HomeLongtitude);
		fun >> (CmpnyLatitude);
		fun >> (CmpnyLongtitude);
		fun >> (HomeAddrsFrq);
		fun >> (CmpnyAddrsFrq);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__STRG2ACMMNADDRESSINFO_TYPE_H__
