#ifndef ____BDCTORQ_H__
#define ____BDCTORQ_H__


#include "cstdint"






struct BDCTorq {
public:
	std::uint8_t VCU_IpedalModeAvail;
	std::uint8_t VCU_EMS_AccPedalPstProtValue;
	std::uint8_t VCU_EMS_AccPedalActPst;
	std::uint8_t VCU_EMS_BrkNomalCloseSwitchSt;
	std::uint16_t BCS_TargetRecpTorqRq;
	std::uint8_t BCS_TargetRecpTorqRqSt;
	std::uint8_t BCS_VCUReqConDecActiveVehhold;
	std::uint8_t BCS_VCUReqConDecActive;
	std::uint8_t BCS_VCUReqConDecAvailable;
	std::uint8_t BCS_CrbsActive;
	std::uint8_t BCS_VCUReqConDecFail;
/*
	BDCTorq() {}
	~BDCTorq() {}
	BDCTorq(const std::uint8_t _VCU_IpedalModeAvail,const std::uint8_t _VCU_EMS_AccPedalPstProtValue,const std::uint8_t _VCU_EMS_AccPedalActPst,const std::uint8_t _VCU_EMS_BrkNomalCloseSwitchSt,const std::uint16_t _BCS_TargetRecpTorqRq,const std::uint8_t _BCS_TargetRecpTorqRqSt,const std::uint8_t _BCS_VCUReqConDecActiveVehhold,const std::uint8_t _BCS_VCUReqConDecActive,const std::uint8_t _BCS_VCUReqConDecAvailable,const std::uint8_t _BCS_CrbsActive,const std::uint8_t _BCS_VCUReqConDecFail):VCU_IpedalModeAvail(_VCU_IpedalModeAvail),VCU_EMS_AccPedalPstProtValue(_VCU_EMS_AccPedalPstProtValue),VCU_EMS_AccPedalActPst(_VCU_EMS_AccPedalActPst),VCU_EMS_BrkNomalCloseSwitchSt(_VCU_EMS_BrkNomalCloseSwitchSt),BCS_TargetRecpTorqRq(_BCS_TargetRecpTorqRq),BCS_TargetRecpTorqRqSt(_BCS_TargetRecpTorqRqSt),BCS_VCUReqConDecActiveVehhold(_BCS_VCUReqConDecActiveVehhold),BCS_VCUReqConDecActive(_BCS_VCUReqConDecActive),BCS_VCUReqConDecAvailable(_BCS_VCUReqConDecAvailable),BCS_CrbsActive(_BCS_CrbsActive),BCS_VCUReqConDecFail(_BCS_VCUReqConDecFail) {}
	BDCTorq(const BDCTorq &_x){
		VCU_IpedalModeAvail = _x.VCU_IpedalModeAvail;
		VCU_EMS_AccPedalPstProtValue = _x.VCU_EMS_AccPedalPstProtValue;
		VCU_EMS_AccPedalActPst = _x.VCU_EMS_AccPedalActPst;
		VCU_EMS_BrkNomalCloseSwitchSt = _x.VCU_EMS_BrkNomalCloseSwitchSt;
		BCS_TargetRecpTorqRq = _x.BCS_TargetRecpTorqRq;
		BCS_TargetRecpTorqRqSt = _x.BCS_TargetRecpTorqRqSt;
		BCS_VCUReqConDecActiveVehhold = _x.BCS_VCUReqConDecActiveVehhold;
		BCS_VCUReqConDecActive = _x.BCS_VCUReqConDecActive;
		BCS_VCUReqConDecAvailable = _x.BCS_VCUReqConDecAvailable;
		BCS_CrbsActive = _x.BCS_CrbsActive;
		BCS_VCUReqConDecFail = _x.BCS_VCUReqConDecFail;
	}
	BDCTorq(BDCTorq &&_x){
		VCU_IpedalModeAvail = std::move(_x.VCU_IpedalModeAvail);
		VCU_EMS_AccPedalPstProtValue = std::move(_x.VCU_EMS_AccPedalPstProtValue);
		VCU_EMS_AccPedalActPst = std::move(_x.VCU_EMS_AccPedalActPst);
		VCU_EMS_BrkNomalCloseSwitchSt = std::move(_x.VCU_EMS_BrkNomalCloseSwitchSt);
		BCS_TargetRecpTorqRq = std::move(_x.BCS_TargetRecpTorqRq);
		BCS_TargetRecpTorqRqSt = std::move(_x.BCS_TargetRecpTorqRqSt);
		BCS_VCUReqConDecActiveVehhold = std::move(_x.BCS_VCUReqConDecActiveVehhold);
		BCS_VCUReqConDecActive = std::move(_x.BCS_VCUReqConDecActive);
		BCS_VCUReqConDecAvailable = std::move(_x.BCS_VCUReqConDecAvailable);
		BCS_CrbsActive = std::move(_x.BCS_CrbsActive);
		BCS_VCUReqConDecFail = std::move(_x.BCS_VCUReqConDecFail);
	}
	BDCTorq& operator=(const BDCTorq &_x){
		VCU_IpedalModeAvail = _x.VCU_IpedalModeAvail;
		VCU_EMS_AccPedalPstProtValue = _x.VCU_EMS_AccPedalPstProtValue;
		VCU_EMS_AccPedalActPst = _x.VCU_EMS_AccPedalActPst;
		VCU_EMS_BrkNomalCloseSwitchSt = _x.VCU_EMS_BrkNomalCloseSwitchSt;
		BCS_TargetRecpTorqRq = _x.BCS_TargetRecpTorqRq;
		BCS_TargetRecpTorqRqSt = _x.BCS_TargetRecpTorqRqSt;
		BCS_VCUReqConDecActiveVehhold = _x.BCS_VCUReqConDecActiveVehhold;
		BCS_VCUReqConDecActive = _x.BCS_VCUReqConDecActive;
		BCS_VCUReqConDecAvailable = _x.BCS_VCUReqConDecAvailable;
		BCS_CrbsActive = _x.BCS_CrbsActive;
		BCS_VCUReqConDecFail = _x.BCS_VCUReqConDecFail;
		return *this;
	}
	BDCTorq& operator=(BDCTorq &&_x){
		VCU_IpedalModeAvail = std::move(_x.VCU_IpedalModeAvail);
		VCU_EMS_AccPedalPstProtValue = std::move(_x.VCU_EMS_AccPedalPstProtValue);
		VCU_EMS_AccPedalActPst = std::move(_x.VCU_EMS_AccPedalActPst);
		VCU_EMS_BrkNomalCloseSwitchSt = std::move(_x.VCU_EMS_BrkNomalCloseSwitchSt);
		BCS_TargetRecpTorqRq = std::move(_x.BCS_TargetRecpTorqRq);
		BCS_TargetRecpTorqRqSt = std::move(_x.BCS_TargetRecpTorqRqSt);
		BCS_VCUReqConDecActiveVehhold = std::move(_x.BCS_VCUReqConDecActiveVehhold);
		BCS_VCUReqConDecActive = std::move(_x.BCS_VCUReqConDecActive);
		BCS_VCUReqConDecAvailable = std::move(_x.BCS_VCUReqConDecAvailable);
		BCS_CrbsActive = std::move(_x.BCS_CrbsActive);
		BCS_VCUReqConDecFail = std::move(_x.BCS_VCUReqConDecFail);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(VCU_IpedalModeAvail);
		fun(VCU_EMS_AccPedalPstProtValue);
		fun(VCU_EMS_AccPedalActPst);
		fun(VCU_EMS_BrkNomalCloseSwitchSt);
		fun(BCS_TargetRecpTorqRq);
		fun(BCS_TargetRecpTorqRqSt);
		fun(BCS_VCUReqConDecActiveVehhold);
		fun(BCS_VCUReqConDecActive);
		fun(BCS_VCUReqConDecAvailable);
		fun(BCS_CrbsActive);
		fun(BCS_VCUReqConDecFail);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(VCU_IpedalModeAvail);
		fun(VCU_EMS_AccPedalPstProtValue);
		fun(VCU_EMS_AccPedalActPst);
		fun(VCU_EMS_BrkNomalCloseSwitchSt);
		fun(BCS_TargetRecpTorqRq);
		fun(BCS_TargetRecpTorqRqSt);
		fun(BCS_VCUReqConDecActiveVehhold);
		fun(BCS_VCUReqConDecActive);
		fun(BCS_VCUReqConDecAvailable);
		fun(BCS_CrbsActive);
		fun(BCS_VCUReqConDecFail);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (VCU_IpedalModeAvail);
		fun << (VCU_EMS_AccPedalPstProtValue);
		fun << (VCU_EMS_AccPedalActPst);
		fun << (VCU_EMS_BrkNomalCloseSwitchSt);
		fun << (BCS_TargetRecpTorqRq);
		fun << (BCS_TargetRecpTorqRqSt);
		fun << (BCS_VCUReqConDecActiveVehhold);
		fun << (BCS_VCUReqConDecActive);
		fun << (BCS_VCUReqConDecAvailable);
		fun << (BCS_CrbsActive);
		fun << (BCS_VCUReqConDecFail);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (VCU_IpedalModeAvail);
		fun >> (VCU_EMS_AccPedalPstProtValue);
		fun >> (VCU_EMS_AccPedalActPst);
		fun >> (VCU_EMS_BrkNomalCloseSwitchSt);
		fun >> (BCS_TargetRecpTorqRq);
		fun >> (BCS_TargetRecpTorqRqSt);
		fun >> (BCS_VCUReqConDecActiveVehhold);
		fun >> (BCS_VCUReqConDecActive);
		fun >> (BCS_VCUReqConDecAvailable);
		fun >> (BCS_CrbsActive);
		fun >> (BCS_VCUReqConDecFail);
	}
};

#endif //____BDCTORQ_H__
