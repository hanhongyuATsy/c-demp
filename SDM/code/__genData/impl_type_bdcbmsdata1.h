#ifndef ____BDCBMSDATA1_H__
#define ____BDCBMSDATA1_H__


#include "cstdint"






struct BDCBMSData1 {
public:
	std::uint8_t BMS_SepaHeatReq;
	std::uint8_t BMS_ChgmodeAvail;
/*
	BDCBMSData1() {}
	~BDCBMSData1() {}
	BDCBMSData1(const std::uint8_t _BMS_SepaHeatReq,const std::uint8_t _BMS_ChgmodeAvail):BMS_SepaHeatReq(_BMS_SepaHeatReq),BMS_ChgmodeAvail(_BMS_ChgmodeAvail) {}
	BDCBMSData1(const BDCBMSData1 &_x){
		BMS_SepaHeatReq = _x.BMS_SepaHeatReq;
		BMS_ChgmodeAvail = _x.BMS_ChgmodeAvail;
	}
	BDCBMSData1(BDCBMSData1 &&_x){
		BMS_SepaHeatReq = std::move(_x.BMS_SepaHeatReq);
		BMS_ChgmodeAvail = std::move(_x.BMS_ChgmodeAvail);
	}
	BDCBMSData1& operator=(const BDCBMSData1 &_x){
		BMS_SepaHeatReq = _x.BMS_SepaHeatReq;
		BMS_ChgmodeAvail = _x.BMS_ChgmodeAvail;
		return *this;
	}
	BDCBMSData1& operator=(BDCBMSData1 &&_x){
		BMS_SepaHeatReq = std::move(_x.BMS_SepaHeatReq);
		BMS_ChgmodeAvail = std::move(_x.BMS_ChgmodeAvail);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(BMS_SepaHeatReq);
		fun(BMS_ChgmodeAvail);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(BMS_SepaHeatReq);
		fun(BMS_ChgmodeAvail);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (BMS_SepaHeatReq);
		fun << (BMS_ChgmodeAvail);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (BMS_SepaHeatReq);
		fun >> (BMS_ChgmodeAvail);
	}
};

#endif //____BDCBMSDATA1_H__
