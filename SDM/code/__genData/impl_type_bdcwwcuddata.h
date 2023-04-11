#ifndef ____BDCWWCUDDATA_H__
#define ____BDCWWCUDDATA_H__


#include "cstdint"






struct BDCWWCUDData {
public:
	std::uint8_t UINM_FrontWiperSwSt;
	std::uint8_t UINM_FrontWiperIntAdjSwSt;
	std::uint8_t UINM_FrontWasherSwSt;
	std::uint8_t WW_FrontAutoWiperEnable;
	std::uint8_t WW_FrontWiperServiceMode;
	std::uint8_t ACU_FrontWiperIntCfgVkReq;
	std::uint8_t ACU_FrontWiperAutoCfgVkReq;
	std::uint8_t ACU_FrontWasherVRReq;
	std::uint8_t ACU_FrontWasherVKReq;
	std::uint8_t ACU_FrontWiperVKReq;
	std::uint8_t ACU_FrontWiperVRReq;
/*
	BDCWWCUDData() {}
	~BDCWWCUDData() {}
	BDCWWCUDData(const std::uint8_t _UINM_FrontWiperSwSt,const std::uint8_t _UINM_FrontWiperIntAdjSwSt,const std::uint8_t _UINM_FrontWasherSwSt,const std::uint8_t _WW_FrontAutoWiperEnable,const std::uint8_t _WW_FrontWiperServiceMode,const std::uint8_t _ACU_FrontWiperIntCfgVkReq,const std::uint8_t _ACU_FrontWiperAutoCfgVkReq,const std::uint8_t _ACU_FrontWasherVRReq,const std::uint8_t _ACU_FrontWasherVKReq,const std::uint8_t _ACU_FrontWiperVKReq,const std::uint8_t _ACU_FrontWiperVRReq):UINM_FrontWiperSwSt(_UINM_FrontWiperSwSt),UINM_FrontWiperIntAdjSwSt(_UINM_FrontWiperIntAdjSwSt),UINM_FrontWasherSwSt(_UINM_FrontWasherSwSt),WW_FrontAutoWiperEnable(_WW_FrontAutoWiperEnable),WW_FrontWiperServiceMode(_WW_FrontWiperServiceMode),ACU_FrontWiperIntCfgVkReq(_ACU_FrontWiperIntCfgVkReq),ACU_FrontWiperAutoCfgVkReq(_ACU_FrontWiperAutoCfgVkReq),ACU_FrontWasherVRReq(_ACU_FrontWasherVRReq),ACU_FrontWasherVKReq(_ACU_FrontWasherVKReq),ACU_FrontWiperVKReq(_ACU_FrontWiperVKReq),ACU_FrontWiperVRReq(_ACU_FrontWiperVRReq) {}
	BDCWWCUDData(const BDCWWCUDData &_x){
		UINM_FrontWiperSwSt = _x.UINM_FrontWiperSwSt;
		UINM_FrontWiperIntAdjSwSt = _x.UINM_FrontWiperIntAdjSwSt;
		UINM_FrontWasherSwSt = _x.UINM_FrontWasherSwSt;
		WW_FrontAutoWiperEnable = _x.WW_FrontAutoWiperEnable;
		WW_FrontWiperServiceMode = _x.WW_FrontWiperServiceMode;
		ACU_FrontWiperIntCfgVkReq = _x.ACU_FrontWiperIntCfgVkReq;
		ACU_FrontWiperAutoCfgVkReq = _x.ACU_FrontWiperAutoCfgVkReq;
		ACU_FrontWasherVRReq = _x.ACU_FrontWasherVRReq;
		ACU_FrontWasherVKReq = _x.ACU_FrontWasherVKReq;
		ACU_FrontWiperVKReq = _x.ACU_FrontWiperVKReq;
		ACU_FrontWiperVRReq = _x.ACU_FrontWiperVRReq;
	}
	BDCWWCUDData(BDCWWCUDData &&_x){
		UINM_FrontWiperSwSt = std::move(_x.UINM_FrontWiperSwSt);
		UINM_FrontWiperIntAdjSwSt = std::move(_x.UINM_FrontWiperIntAdjSwSt);
		UINM_FrontWasherSwSt = std::move(_x.UINM_FrontWasherSwSt);
		WW_FrontAutoWiperEnable = std::move(_x.WW_FrontAutoWiperEnable);
		WW_FrontWiperServiceMode = std::move(_x.WW_FrontWiperServiceMode);
		ACU_FrontWiperIntCfgVkReq = std::move(_x.ACU_FrontWiperIntCfgVkReq);
		ACU_FrontWiperAutoCfgVkReq = std::move(_x.ACU_FrontWiperAutoCfgVkReq);
		ACU_FrontWasherVRReq = std::move(_x.ACU_FrontWasherVRReq);
		ACU_FrontWasherVKReq = std::move(_x.ACU_FrontWasherVKReq);
		ACU_FrontWiperVKReq = std::move(_x.ACU_FrontWiperVKReq);
		ACU_FrontWiperVRReq = std::move(_x.ACU_FrontWiperVRReq);
	}
	BDCWWCUDData& operator=(const BDCWWCUDData &_x){
		UINM_FrontWiperSwSt = _x.UINM_FrontWiperSwSt;
		UINM_FrontWiperIntAdjSwSt = _x.UINM_FrontWiperIntAdjSwSt;
		UINM_FrontWasherSwSt = _x.UINM_FrontWasherSwSt;
		WW_FrontAutoWiperEnable = _x.WW_FrontAutoWiperEnable;
		WW_FrontWiperServiceMode = _x.WW_FrontWiperServiceMode;
		ACU_FrontWiperIntCfgVkReq = _x.ACU_FrontWiperIntCfgVkReq;
		ACU_FrontWiperAutoCfgVkReq = _x.ACU_FrontWiperAutoCfgVkReq;
		ACU_FrontWasherVRReq = _x.ACU_FrontWasherVRReq;
		ACU_FrontWasherVKReq = _x.ACU_FrontWasherVKReq;
		ACU_FrontWiperVKReq = _x.ACU_FrontWiperVKReq;
		ACU_FrontWiperVRReq = _x.ACU_FrontWiperVRReq;
		return *this;
	}
	BDCWWCUDData& operator=(BDCWWCUDData &&_x){
		UINM_FrontWiperSwSt = std::move(_x.UINM_FrontWiperSwSt);
		UINM_FrontWiperIntAdjSwSt = std::move(_x.UINM_FrontWiperIntAdjSwSt);
		UINM_FrontWasherSwSt = std::move(_x.UINM_FrontWasherSwSt);
		WW_FrontAutoWiperEnable = std::move(_x.WW_FrontAutoWiperEnable);
		WW_FrontWiperServiceMode = std::move(_x.WW_FrontWiperServiceMode);
		ACU_FrontWiperIntCfgVkReq = std::move(_x.ACU_FrontWiperIntCfgVkReq);
		ACU_FrontWiperAutoCfgVkReq = std::move(_x.ACU_FrontWiperAutoCfgVkReq);
		ACU_FrontWasherVRReq = std::move(_x.ACU_FrontWasherVRReq);
		ACU_FrontWasherVKReq = std::move(_x.ACU_FrontWasherVKReq);
		ACU_FrontWiperVKReq = std::move(_x.ACU_FrontWiperVKReq);
		ACU_FrontWiperVRReq = std::move(_x.ACU_FrontWiperVRReq);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(UINM_FrontWiperSwSt);
		fun(UINM_FrontWiperIntAdjSwSt);
		fun(UINM_FrontWasherSwSt);
		fun(WW_FrontAutoWiperEnable);
		fun(WW_FrontWiperServiceMode);
		fun(ACU_FrontWiperIntCfgVkReq);
		fun(ACU_FrontWiperAutoCfgVkReq);
		fun(ACU_FrontWasherVRReq);
		fun(ACU_FrontWasherVKReq);
		fun(ACU_FrontWiperVKReq);
		fun(ACU_FrontWiperVRReq);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(UINM_FrontWiperSwSt);
		fun(UINM_FrontWiperIntAdjSwSt);
		fun(UINM_FrontWasherSwSt);
		fun(WW_FrontAutoWiperEnable);
		fun(WW_FrontWiperServiceMode);
		fun(ACU_FrontWiperIntCfgVkReq);
		fun(ACU_FrontWiperAutoCfgVkReq);
		fun(ACU_FrontWasherVRReq);
		fun(ACU_FrontWasherVKReq);
		fun(ACU_FrontWiperVKReq);
		fun(ACU_FrontWiperVRReq);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (UINM_FrontWiperSwSt);
		fun << (UINM_FrontWiperIntAdjSwSt);
		fun << (UINM_FrontWasherSwSt);
		fun << (WW_FrontAutoWiperEnable);
		fun << (WW_FrontWiperServiceMode);
		fun << (ACU_FrontWiperIntCfgVkReq);
		fun << (ACU_FrontWiperAutoCfgVkReq);
		fun << (ACU_FrontWasherVRReq);
		fun << (ACU_FrontWasherVKReq);
		fun << (ACU_FrontWiperVKReq);
		fun << (ACU_FrontWiperVRReq);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (UINM_FrontWiperSwSt);
		fun >> (UINM_FrontWiperIntAdjSwSt);
		fun >> (UINM_FrontWasherSwSt);
		fun >> (WW_FrontAutoWiperEnable);
		fun >> (WW_FrontWiperServiceMode);
		fun >> (ACU_FrontWiperIntCfgVkReq);
		fun >> (ACU_FrontWiperAutoCfgVkReq);
		fun >> (ACU_FrontWasherVRReq);
		fun >> (ACU_FrontWasherVKReq);
		fun >> (ACU_FrontWiperVKReq);
		fun >> (ACU_FrontWiperVRReq);
	}
};

#endif //____BDCWWCUDDATA_H__
