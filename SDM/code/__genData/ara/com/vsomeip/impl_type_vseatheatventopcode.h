#ifndef __ARA_COM_VSOMEIP__VSEATHEATVENTOPCODE_H__
#define __ARA_COM_VSOMEIP__VSEATHEATVENTOPCODE_H__


#include "ara/com/vsomeip/impl_type_vseatworklevel.h"
#include "ara/com/vsomeip/impl_type_vholdtime.h"
#include "ara/com/vsomeip/impl_type_vseatworktype.h"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct vSeatHeatVentOpCode {
public:
	ara::com::vsomeip::vSeatWorkLevel SeatWorkLevel;
	ara::com::vsomeip::vHoldTime SeatWorkDuration;
	ara::com::vsomeip::vSeatWorkType SeatWorkType;
/*
	vSeatHeatVentOpCode() {}
	~vSeatHeatVentOpCode() {}
	vSeatHeatVentOpCode(const ara::com::vsomeip::vSeatWorkLevel _SeatWorkLevel,const ara::com::vsomeip::vHoldTime _SeatWorkDuration,const ara::com::vsomeip::vSeatWorkType _SeatWorkType):SeatWorkLevel(_SeatWorkLevel),SeatWorkDuration(_SeatWorkDuration),SeatWorkType(_SeatWorkType) {}
	vSeatHeatVentOpCode(const vSeatHeatVentOpCode &_x){
		SeatWorkLevel = _x.SeatWorkLevel;
		SeatWorkDuration = _x.SeatWorkDuration;
		SeatWorkType = _x.SeatWorkType;
	}
	vSeatHeatVentOpCode(vSeatHeatVentOpCode &&_x){
		SeatWorkLevel = std::move(_x.SeatWorkLevel);
		SeatWorkDuration = std::move(_x.SeatWorkDuration);
		SeatWorkType = std::move(_x.SeatWorkType);
	}
	vSeatHeatVentOpCode& operator=(const vSeatHeatVentOpCode &_x){
		SeatWorkLevel = _x.SeatWorkLevel;
		SeatWorkDuration = _x.SeatWorkDuration;
		SeatWorkType = _x.SeatWorkType;
		return *this;
	}
	vSeatHeatVentOpCode& operator=(vSeatHeatVentOpCode &&_x){
		SeatWorkLevel = std::move(_x.SeatWorkLevel);
		SeatWorkDuration = std::move(_x.SeatWorkDuration);
		SeatWorkType = std::move(_x.SeatWorkType);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(SeatWorkLevel);
		fun(SeatWorkDuration);
		fun(SeatWorkType);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(SeatWorkLevel);
		fun(SeatWorkDuration);
		fun(SeatWorkType);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (SeatWorkLevel);
		fun << (SeatWorkDuration);
		fun << (SeatWorkType);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (SeatWorkLevel);
		fun >> (SeatWorkDuration);
		fun >> (SeatWorkType);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__VSEATHEATVENTOPCODE_H__
