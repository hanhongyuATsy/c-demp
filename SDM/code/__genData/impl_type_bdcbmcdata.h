#ifndef ____BDCBMCDATA_H__
#define ____BDCBMCDATA_H__


#include "cstdint"






struct BDCBMCData {
public:
	std::uint8_t BMC_KL15WakeUpState;
	std::uint8_t BMC_SepaHeatSt;
	std::uint8_t BMC_EmgLineSt;
	std::uint8_t BMC_ErrLvl;
	std::uint8_t BMC_TempOvrInd;
	std::uint16_t BMC_DcVoltRx;
	std::uint16_t BMC_DcCurrRx;
/*
	BDCBMCData() {}
	~BDCBMCData() {}
	BDCBMCData(const std::uint8_t _BMC_KL15WakeUpState,const std::uint8_t _BMC_SepaHeatSt,const std::uint8_t _BMC_EmgLineSt,const std::uint8_t _BMC_ErrLvl,const std::uint8_t _BMC_TempOvrInd,const std::uint16_t _BMC_DcVoltRx,const std::uint16_t _BMC_DcCurrRx):BMC_KL15WakeUpState(_BMC_KL15WakeUpState),BMC_SepaHeatSt(_BMC_SepaHeatSt),BMC_EmgLineSt(_BMC_EmgLineSt),BMC_ErrLvl(_BMC_ErrLvl),BMC_TempOvrInd(_BMC_TempOvrInd),BMC_DcVoltRx(_BMC_DcVoltRx),BMC_DcCurrRx(_BMC_DcCurrRx) {}
	BDCBMCData(const BDCBMCData &_x){
		BMC_KL15WakeUpState = _x.BMC_KL15WakeUpState;
		BMC_SepaHeatSt = _x.BMC_SepaHeatSt;
		BMC_EmgLineSt = _x.BMC_EmgLineSt;
		BMC_ErrLvl = _x.BMC_ErrLvl;
		BMC_TempOvrInd = _x.BMC_TempOvrInd;
		BMC_DcVoltRx = _x.BMC_DcVoltRx;
		BMC_DcCurrRx = _x.BMC_DcCurrRx;
	}
	BDCBMCData(BDCBMCData &&_x){
		BMC_KL15WakeUpState = std::move(_x.BMC_KL15WakeUpState);
		BMC_SepaHeatSt = std::move(_x.BMC_SepaHeatSt);
		BMC_EmgLineSt = std::move(_x.BMC_EmgLineSt);
		BMC_ErrLvl = std::move(_x.BMC_ErrLvl);
		BMC_TempOvrInd = std::move(_x.BMC_TempOvrInd);
		BMC_DcVoltRx = std::move(_x.BMC_DcVoltRx);
		BMC_DcCurrRx = std::move(_x.BMC_DcCurrRx);
	}
	BDCBMCData& operator=(const BDCBMCData &_x){
		BMC_KL15WakeUpState = _x.BMC_KL15WakeUpState;
		BMC_SepaHeatSt = _x.BMC_SepaHeatSt;
		BMC_EmgLineSt = _x.BMC_EmgLineSt;
		BMC_ErrLvl = _x.BMC_ErrLvl;
		BMC_TempOvrInd = _x.BMC_TempOvrInd;
		BMC_DcVoltRx = _x.BMC_DcVoltRx;
		BMC_DcCurrRx = _x.BMC_DcCurrRx;
		return *this;
	}
	BDCBMCData& operator=(BDCBMCData &&_x){
		BMC_KL15WakeUpState = std::move(_x.BMC_KL15WakeUpState);
		BMC_SepaHeatSt = std::move(_x.BMC_SepaHeatSt);
		BMC_EmgLineSt = std::move(_x.BMC_EmgLineSt);
		BMC_ErrLvl = std::move(_x.BMC_ErrLvl);
		BMC_TempOvrInd = std::move(_x.BMC_TempOvrInd);
		BMC_DcVoltRx = std::move(_x.BMC_DcVoltRx);
		BMC_DcCurrRx = std::move(_x.BMC_DcCurrRx);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(BMC_KL15WakeUpState);
		fun(BMC_SepaHeatSt);
		fun(BMC_EmgLineSt);
		fun(BMC_ErrLvl);
		fun(BMC_TempOvrInd);
		fun(BMC_DcVoltRx);
		fun(BMC_DcCurrRx);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(BMC_KL15WakeUpState);
		fun(BMC_SepaHeatSt);
		fun(BMC_EmgLineSt);
		fun(BMC_ErrLvl);
		fun(BMC_TempOvrInd);
		fun(BMC_DcVoltRx);
		fun(BMC_DcCurrRx);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (BMC_KL15WakeUpState);
		fun << (BMC_SepaHeatSt);
		fun << (BMC_EmgLineSt);
		fun << (BMC_ErrLvl);
		fun << (BMC_TempOvrInd);
		fun << (BMC_DcVoltRx);
		fun << (BMC_DcCurrRx);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (BMC_KL15WakeUpState);
		fun >> (BMC_SepaHeatSt);
		fun >> (BMC_EmgLineSt);
		fun >> (BMC_ErrLvl);
		fun >> (BMC_TempOvrInd);
		fun >> (BMC_DcVoltRx);
		fun >> (BMC_DcCurrRx);
	}
};

#endif //____BDCBMCDATA_H__
