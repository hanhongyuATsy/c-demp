#ifndef ____BDCEMER_H__
#define ____BDCEMER_H__


#include "cstdint"






struct BDCEmer {
public:
	std::uint8_t BCS_VDCOff;
	std::uint8_t BCS_TCSOff;
	std::uint8_t IPB_SystemSt;
	std::uint8_t BCS_EBDFaultSt;
	std::uint8_t BCS_ABSFaultSt;
	std::uint8_t BCS_TCSFaultSt;
	std::uint8_t BCS_VDCFaultSt;
	std::uint8_t BCS_EBDActiveSt;
	std::uint8_t BCS_ABSActiveSt;
	std::uint8_t BCS_TCSActiveSt;
	std::uint8_t BCS_VDCActiveSt;
	std::uint8_t BCS_HazardActiveReq;
	std::uint8_t SRS_DriverSeatBeltSt;
/*
	BDCEmer() {}
	~BDCEmer() {}
	BDCEmer(const std::uint8_t _BCS_VDCOff,const std::uint8_t _BCS_TCSOff,const std::uint8_t _IPB_SystemSt,const std::uint8_t _BCS_EBDFaultSt,const std::uint8_t _BCS_ABSFaultSt,const std::uint8_t _BCS_TCSFaultSt,const std::uint8_t _BCS_VDCFaultSt,const std::uint8_t _BCS_EBDActiveSt,const std::uint8_t _BCS_ABSActiveSt,const std::uint8_t _BCS_TCSActiveSt,const std::uint8_t _BCS_VDCActiveSt,const std::uint8_t _BCS_HazardActiveReq,const std::uint8_t _SRS_DriverSeatBeltSt):BCS_VDCOff(_BCS_VDCOff),BCS_TCSOff(_BCS_TCSOff),IPB_SystemSt(_IPB_SystemSt),BCS_EBDFaultSt(_BCS_EBDFaultSt),BCS_ABSFaultSt(_BCS_ABSFaultSt),BCS_TCSFaultSt(_BCS_TCSFaultSt),BCS_VDCFaultSt(_BCS_VDCFaultSt),BCS_EBDActiveSt(_BCS_EBDActiveSt),BCS_ABSActiveSt(_BCS_ABSActiveSt),BCS_TCSActiveSt(_BCS_TCSActiveSt),BCS_VDCActiveSt(_BCS_VDCActiveSt),BCS_HazardActiveReq(_BCS_HazardActiveReq),SRS_DriverSeatBeltSt(_SRS_DriverSeatBeltSt) {}
	BDCEmer(const BDCEmer &_x){
		BCS_VDCOff = _x.BCS_VDCOff;
		BCS_TCSOff = _x.BCS_TCSOff;
		IPB_SystemSt = _x.IPB_SystemSt;
		BCS_EBDFaultSt = _x.BCS_EBDFaultSt;
		BCS_ABSFaultSt = _x.BCS_ABSFaultSt;
		BCS_TCSFaultSt = _x.BCS_TCSFaultSt;
		BCS_VDCFaultSt = _x.BCS_VDCFaultSt;
		BCS_EBDActiveSt = _x.BCS_EBDActiveSt;
		BCS_ABSActiveSt = _x.BCS_ABSActiveSt;
		BCS_TCSActiveSt = _x.BCS_TCSActiveSt;
		BCS_VDCActiveSt = _x.BCS_VDCActiveSt;
		BCS_HazardActiveReq = _x.BCS_HazardActiveReq;
		SRS_DriverSeatBeltSt = _x.SRS_DriverSeatBeltSt;
	}
	BDCEmer(BDCEmer &&_x){
		BCS_VDCOff = std::move(_x.BCS_VDCOff);
		BCS_TCSOff = std::move(_x.BCS_TCSOff);
		IPB_SystemSt = std::move(_x.IPB_SystemSt);
		BCS_EBDFaultSt = std::move(_x.BCS_EBDFaultSt);
		BCS_ABSFaultSt = std::move(_x.BCS_ABSFaultSt);
		BCS_TCSFaultSt = std::move(_x.BCS_TCSFaultSt);
		BCS_VDCFaultSt = std::move(_x.BCS_VDCFaultSt);
		BCS_EBDActiveSt = std::move(_x.BCS_EBDActiveSt);
		BCS_ABSActiveSt = std::move(_x.BCS_ABSActiveSt);
		BCS_TCSActiveSt = std::move(_x.BCS_TCSActiveSt);
		BCS_VDCActiveSt = std::move(_x.BCS_VDCActiveSt);
		BCS_HazardActiveReq = std::move(_x.BCS_HazardActiveReq);
		SRS_DriverSeatBeltSt = std::move(_x.SRS_DriverSeatBeltSt);
	}
	BDCEmer& operator=(const BDCEmer &_x){
		BCS_VDCOff = _x.BCS_VDCOff;
		BCS_TCSOff = _x.BCS_TCSOff;
		IPB_SystemSt = _x.IPB_SystemSt;
		BCS_EBDFaultSt = _x.BCS_EBDFaultSt;
		BCS_ABSFaultSt = _x.BCS_ABSFaultSt;
		BCS_TCSFaultSt = _x.BCS_TCSFaultSt;
		BCS_VDCFaultSt = _x.BCS_VDCFaultSt;
		BCS_EBDActiveSt = _x.BCS_EBDActiveSt;
		BCS_ABSActiveSt = _x.BCS_ABSActiveSt;
		BCS_TCSActiveSt = _x.BCS_TCSActiveSt;
		BCS_VDCActiveSt = _x.BCS_VDCActiveSt;
		BCS_HazardActiveReq = _x.BCS_HazardActiveReq;
		SRS_DriverSeatBeltSt = _x.SRS_DriverSeatBeltSt;
		return *this;
	}
	BDCEmer& operator=(BDCEmer &&_x){
		BCS_VDCOff = std::move(_x.BCS_VDCOff);
		BCS_TCSOff = std::move(_x.BCS_TCSOff);
		IPB_SystemSt = std::move(_x.IPB_SystemSt);
		BCS_EBDFaultSt = std::move(_x.BCS_EBDFaultSt);
		BCS_ABSFaultSt = std::move(_x.BCS_ABSFaultSt);
		BCS_TCSFaultSt = std::move(_x.BCS_TCSFaultSt);
		BCS_VDCFaultSt = std::move(_x.BCS_VDCFaultSt);
		BCS_EBDActiveSt = std::move(_x.BCS_EBDActiveSt);
		BCS_ABSActiveSt = std::move(_x.BCS_ABSActiveSt);
		BCS_TCSActiveSt = std::move(_x.BCS_TCSActiveSt);
		BCS_VDCActiveSt = std::move(_x.BCS_VDCActiveSt);
		BCS_HazardActiveReq = std::move(_x.BCS_HazardActiveReq);
		SRS_DriverSeatBeltSt = std::move(_x.SRS_DriverSeatBeltSt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(BCS_VDCOff);
		fun(BCS_TCSOff);
		fun(IPB_SystemSt);
		fun(BCS_EBDFaultSt);
		fun(BCS_ABSFaultSt);
		fun(BCS_TCSFaultSt);
		fun(BCS_VDCFaultSt);
		fun(BCS_EBDActiveSt);
		fun(BCS_ABSActiveSt);
		fun(BCS_TCSActiveSt);
		fun(BCS_VDCActiveSt);
		fun(BCS_HazardActiveReq);
		fun(SRS_DriverSeatBeltSt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(BCS_VDCOff);
		fun(BCS_TCSOff);
		fun(IPB_SystemSt);
		fun(BCS_EBDFaultSt);
		fun(BCS_ABSFaultSt);
		fun(BCS_TCSFaultSt);
		fun(BCS_VDCFaultSt);
		fun(BCS_EBDActiveSt);
		fun(BCS_ABSActiveSt);
		fun(BCS_TCSActiveSt);
		fun(BCS_VDCActiveSt);
		fun(BCS_HazardActiveReq);
		fun(SRS_DriverSeatBeltSt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (BCS_VDCOff);
		fun << (BCS_TCSOff);
		fun << (IPB_SystemSt);
		fun << (BCS_EBDFaultSt);
		fun << (BCS_ABSFaultSt);
		fun << (BCS_TCSFaultSt);
		fun << (BCS_VDCFaultSt);
		fun << (BCS_EBDActiveSt);
		fun << (BCS_ABSActiveSt);
		fun << (BCS_TCSActiveSt);
		fun << (BCS_VDCActiveSt);
		fun << (BCS_HazardActiveReq);
		fun << (SRS_DriverSeatBeltSt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (BCS_VDCOff);
		fun >> (BCS_TCSOff);
		fun >> (IPB_SystemSt);
		fun >> (BCS_EBDFaultSt);
		fun >> (BCS_ABSFaultSt);
		fun >> (BCS_TCSFaultSt);
		fun >> (BCS_VDCFaultSt);
		fun >> (BCS_EBDActiveSt);
		fun >> (BCS_ABSActiveSt);
		fun >> (BCS_TCSActiveSt);
		fun >> (BCS_VDCActiveSt);
		fun >> (BCS_HazardActiveReq);
		fun >> (SRS_DriverSeatBeltSt);
	}
};

#endif //____BDCEMER_H__
