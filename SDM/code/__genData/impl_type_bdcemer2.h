#ifndef ____BDCEMER2_H__
#define ____BDCEMER2_H__


#include "cstdint"






struct BDCEmer2 {
public:
	std::uint8_t SRS_CrashOutputSt;
	std::uint8_t SRS_Front_CrashOutputSt;
	std::uint8_t SRS_LeftSide_CrashOutputSt;
	std::uint8_t SRS_RightSide_CrashOutputSt;
	std::uint8_t SRS_Rear_CrashOutputSt;
	std::uint8_t SRS_RolloverCrashOutpuSt;
	std::uint8_t SRS_NearCrashOutputSt;
	std::uint8_t UMM_EmergencyWarning;
	std::uint8_t LCK_LockEmergencyInhibit;
	std::uint8_t VCU_BMS_BatModeReq;
/*
	BDCEmer2() {}
	~BDCEmer2() {}
	BDCEmer2(const std::uint8_t _SRS_CrashOutputSt,const std::uint8_t _SRS_Front_CrashOutputSt,const std::uint8_t _SRS_LeftSide_CrashOutputSt,const std::uint8_t _SRS_RightSide_CrashOutputSt,const std::uint8_t _SRS_Rear_CrashOutputSt,const std::uint8_t _SRS_RolloverCrashOutpuSt,const std::uint8_t _SRS_NearCrashOutputSt,const std::uint8_t _UMM_EmergencyWarning,const std::uint8_t _LCK_LockEmergencyInhibit,const std::uint8_t _VCU_BMS_BatModeReq):SRS_CrashOutputSt(_SRS_CrashOutputSt),SRS_Front_CrashOutputSt(_SRS_Front_CrashOutputSt),SRS_LeftSide_CrashOutputSt(_SRS_LeftSide_CrashOutputSt),SRS_RightSide_CrashOutputSt(_SRS_RightSide_CrashOutputSt),SRS_Rear_CrashOutputSt(_SRS_Rear_CrashOutputSt),SRS_RolloverCrashOutpuSt(_SRS_RolloverCrashOutpuSt),SRS_NearCrashOutputSt(_SRS_NearCrashOutputSt),UMM_EmergencyWarning(_UMM_EmergencyWarning),LCK_LockEmergencyInhibit(_LCK_LockEmergencyInhibit),VCU_BMS_BatModeReq(_VCU_BMS_BatModeReq) {}
	BDCEmer2(const BDCEmer2 &_x){
		SRS_CrashOutputSt = _x.SRS_CrashOutputSt;
		SRS_Front_CrashOutputSt = _x.SRS_Front_CrashOutputSt;
		SRS_LeftSide_CrashOutputSt = _x.SRS_LeftSide_CrashOutputSt;
		SRS_RightSide_CrashOutputSt = _x.SRS_RightSide_CrashOutputSt;
		SRS_Rear_CrashOutputSt = _x.SRS_Rear_CrashOutputSt;
		SRS_RolloverCrashOutpuSt = _x.SRS_RolloverCrashOutpuSt;
		SRS_NearCrashOutputSt = _x.SRS_NearCrashOutputSt;
		UMM_EmergencyWarning = _x.UMM_EmergencyWarning;
		LCK_LockEmergencyInhibit = _x.LCK_LockEmergencyInhibit;
		VCU_BMS_BatModeReq = _x.VCU_BMS_BatModeReq;
	}
	BDCEmer2(BDCEmer2 &&_x){
		SRS_CrashOutputSt = std::move(_x.SRS_CrashOutputSt);
		SRS_Front_CrashOutputSt = std::move(_x.SRS_Front_CrashOutputSt);
		SRS_LeftSide_CrashOutputSt = std::move(_x.SRS_LeftSide_CrashOutputSt);
		SRS_RightSide_CrashOutputSt = std::move(_x.SRS_RightSide_CrashOutputSt);
		SRS_Rear_CrashOutputSt = std::move(_x.SRS_Rear_CrashOutputSt);
		SRS_RolloverCrashOutpuSt = std::move(_x.SRS_RolloverCrashOutpuSt);
		SRS_NearCrashOutputSt = std::move(_x.SRS_NearCrashOutputSt);
		UMM_EmergencyWarning = std::move(_x.UMM_EmergencyWarning);
		LCK_LockEmergencyInhibit = std::move(_x.LCK_LockEmergencyInhibit);
		VCU_BMS_BatModeReq = std::move(_x.VCU_BMS_BatModeReq);
	}
	BDCEmer2& operator=(const BDCEmer2 &_x){
		SRS_CrashOutputSt = _x.SRS_CrashOutputSt;
		SRS_Front_CrashOutputSt = _x.SRS_Front_CrashOutputSt;
		SRS_LeftSide_CrashOutputSt = _x.SRS_LeftSide_CrashOutputSt;
		SRS_RightSide_CrashOutputSt = _x.SRS_RightSide_CrashOutputSt;
		SRS_Rear_CrashOutputSt = _x.SRS_Rear_CrashOutputSt;
		SRS_RolloverCrashOutpuSt = _x.SRS_RolloverCrashOutpuSt;
		SRS_NearCrashOutputSt = _x.SRS_NearCrashOutputSt;
		UMM_EmergencyWarning = _x.UMM_EmergencyWarning;
		LCK_LockEmergencyInhibit = _x.LCK_LockEmergencyInhibit;
		VCU_BMS_BatModeReq = _x.VCU_BMS_BatModeReq;
		return *this;
	}
	BDCEmer2& operator=(BDCEmer2 &&_x){
		SRS_CrashOutputSt = std::move(_x.SRS_CrashOutputSt);
		SRS_Front_CrashOutputSt = std::move(_x.SRS_Front_CrashOutputSt);
		SRS_LeftSide_CrashOutputSt = std::move(_x.SRS_LeftSide_CrashOutputSt);
		SRS_RightSide_CrashOutputSt = std::move(_x.SRS_RightSide_CrashOutputSt);
		SRS_Rear_CrashOutputSt = std::move(_x.SRS_Rear_CrashOutputSt);
		SRS_RolloverCrashOutpuSt = std::move(_x.SRS_RolloverCrashOutpuSt);
		SRS_NearCrashOutputSt = std::move(_x.SRS_NearCrashOutputSt);
		UMM_EmergencyWarning = std::move(_x.UMM_EmergencyWarning);
		LCK_LockEmergencyInhibit = std::move(_x.LCK_LockEmergencyInhibit);
		VCU_BMS_BatModeReq = std::move(_x.VCU_BMS_BatModeReq);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(SRS_CrashOutputSt);
		fun(SRS_Front_CrashOutputSt);
		fun(SRS_LeftSide_CrashOutputSt);
		fun(SRS_RightSide_CrashOutputSt);
		fun(SRS_Rear_CrashOutputSt);
		fun(SRS_RolloverCrashOutpuSt);
		fun(SRS_NearCrashOutputSt);
		fun(UMM_EmergencyWarning);
		fun(LCK_LockEmergencyInhibit);
		fun(VCU_BMS_BatModeReq);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(SRS_CrashOutputSt);
		fun(SRS_Front_CrashOutputSt);
		fun(SRS_LeftSide_CrashOutputSt);
		fun(SRS_RightSide_CrashOutputSt);
		fun(SRS_Rear_CrashOutputSt);
		fun(SRS_RolloverCrashOutpuSt);
		fun(SRS_NearCrashOutputSt);
		fun(UMM_EmergencyWarning);
		fun(LCK_LockEmergencyInhibit);
		fun(VCU_BMS_BatModeReq);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (SRS_CrashOutputSt);
		fun << (SRS_Front_CrashOutputSt);
		fun << (SRS_LeftSide_CrashOutputSt);
		fun << (SRS_RightSide_CrashOutputSt);
		fun << (SRS_Rear_CrashOutputSt);
		fun << (SRS_RolloverCrashOutpuSt);
		fun << (SRS_NearCrashOutputSt);
		fun << (UMM_EmergencyWarning);
		fun << (LCK_LockEmergencyInhibit);
		fun << (VCU_BMS_BatModeReq);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (SRS_CrashOutputSt);
		fun >> (SRS_Front_CrashOutputSt);
		fun >> (SRS_LeftSide_CrashOutputSt);
		fun >> (SRS_RightSide_CrashOutputSt);
		fun >> (SRS_Rear_CrashOutputSt);
		fun >> (SRS_RolloverCrashOutpuSt);
		fun >> (SRS_NearCrashOutputSt);
		fun >> (UMM_EmergencyWarning);
		fun >> (LCK_LockEmergencyInhibit);
		fun >> (VCU_BMS_BatModeReq);
	}
};

#endif //____BDCEMER2_H__
