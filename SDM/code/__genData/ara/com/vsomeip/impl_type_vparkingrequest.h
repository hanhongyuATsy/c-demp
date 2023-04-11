#ifndef __ARA_COM_VSOMEIP__VPARKINGREQUEST_H__
#define __ARA_COM_VSOMEIP__VPARKINGREQUEST_H__


#include "cstdint"
#include "ara/com/vsomeip/impl_type_vparkorder.h"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct vParkingRequest {
public:
	std::uint64_t ParkID;
	ara::com::vsomeip::vParkOrder ParkOrder;
	std::uint64_t ParkpathID;
/*
	vParkingRequest() {}
	~vParkingRequest() {}
	vParkingRequest(const std::uint64_t _ParkID,const ara::com::vsomeip::vParkOrder _ParkOrder,const std::uint64_t _ParkpathID):ParkID(_ParkID),ParkOrder(_ParkOrder),ParkpathID(_ParkpathID) {}
	vParkingRequest(const vParkingRequest &_x){
		ParkID = _x.ParkID;
		ParkOrder = _x.ParkOrder;
		ParkpathID = _x.ParkpathID;
	}
	vParkingRequest(vParkingRequest &&_x){
		ParkID = std::move(_x.ParkID);
		ParkOrder = std::move(_x.ParkOrder);
		ParkpathID = std::move(_x.ParkpathID);
	}
	vParkingRequest& operator=(const vParkingRequest &_x){
		ParkID = _x.ParkID;
		ParkOrder = _x.ParkOrder;
		ParkpathID = _x.ParkpathID;
		return *this;
	}
	vParkingRequest& operator=(vParkingRequest &&_x){
		ParkID = std::move(_x.ParkID);
		ParkOrder = std::move(_x.ParkOrder);
		ParkpathID = std::move(_x.ParkpathID);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(ParkID);
		fun(ParkOrder);
		fun(ParkpathID);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(ParkID);
		fun(ParkOrder);
		fun(ParkpathID);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (ParkID);
		fun << (ParkOrder);
		fun << (ParkpathID);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (ParkID);
		fun >> (ParkOrder);
		fun >> (ParkpathID);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__VPARKINGREQUEST_H__
