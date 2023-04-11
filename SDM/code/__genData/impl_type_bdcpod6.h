#ifndef ____BDCPOD6_H__
#define ____BDCPOD6_H__


#include "cstdint"






struct BDCPOD6 {
public:
	std::uint8_t POD_DSMSnsErrFlagFL2;
	std::uint8_t POD_DSMSnsErrFlagFR1;
	std::uint8_t POD_DSMSnsErrFlagFR2;
	std::uint8_t POD_DSMSnsErrFlagRL1;
	std::uint8_t POD_DSMSnsErrFlagRL2;
	std::uint8_t POD_DSMSnsErrFlagRR1;
	std::uint8_t POD_DSMSnsErrFlagRR2;
	std::uint8_t POD_DSMWorkStFL;
	std::uint8_t POD_DSMWorkStFR;
	std::uint8_t POD_DSMWorkStRL;
	std::uint8_t POD_DSMWorkStRR;
	std::uint8_t POD_DSMECUErrFlag;
	std::uint8_t POD_DSMOpenablePercentFL;
	std::uint8_t POD_DSMObstacleDisFL;
	std::uint8_t POD_DSMEmergencyStopFL;
	std::uint8_t POD_DSMValidFL;
	std::uint8_t POD_DSMOpenablePercentFR;
	std::uint8_t POD_DSMObstacleDisFR;
	std::uint8_t POD_DSMEmergencyStopFR;
	std::uint8_t POD_DSMValidFR;
	std::uint8_t POD_DSMOpenablePercentRL;
	std::uint8_t POD_DSMObstacleDisRL;
	std::uint8_t POD_DSMEmergencyStopRL;
	std::uint8_t POD_DSMValidRL;
	std::uint8_t POD_DSMOpenablePercentRR;
	std::uint8_t POD_DSMObstacleDisRR;
	std::uint8_t POD_DSMEmergencyStopRR;
	std::uint8_t POD_DSMValidRR;
/*
	BDCPOD6() {}
	~BDCPOD6() {}
	BDCPOD6(const std::uint8_t _POD_DSMSnsErrFlagFL2,const std::uint8_t _POD_DSMSnsErrFlagFR1,const std::uint8_t _POD_DSMSnsErrFlagFR2,const std::uint8_t _POD_DSMSnsErrFlagRL1,const std::uint8_t _POD_DSMSnsErrFlagRL2,const std::uint8_t _POD_DSMSnsErrFlagRR1,const std::uint8_t _POD_DSMSnsErrFlagRR2,const std::uint8_t _POD_DSMWorkStFL,const std::uint8_t _POD_DSMWorkStFR,const std::uint8_t _POD_DSMWorkStRL,const std::uint8_t _POD_DSMWorkStRR,const std::uint8_t _POD_DSMECUErrFlag,const std::uint8_t _POD_DSMOpenablePercentFL,const std::uint8_t _POD_DSMObstacleDisFL,const std::uint8_t _POD_DSMEmergencyStopFL,const std::uint8_t _POD_DSMValidFL,const std::uint8_t _POD_DSMOpenablePercentFR,const std::uint8_t _POD_DSMObstacleDisFR,const std::uint8_t _POD_DSMEmergencyStopFR,const std::uint8_t _POD_DSMValidFR,const std::uint8_t _POD_DSMOpenablePercentRL,const std::uint8_t _POD_DSMObstacleDisRL,const std::uint8_t _POD_DSMEmergencyStopRL,const std::uint8_t _POD_DSMValidRL,const std::uint8_t _POD_DSMOpenablePercentRR,const std::uint8_t _POD_DSMObstacleDisRR,const std::uint8_t _POD_DSMEmergencyStopRR,const std::uint8_t _POD_DSMValidRR):POD_DSMSnsErrFlagFL2(_POD_DSMSnsErrFlagFL2),POD_DSMSnsErrFlagFR1(_POD_DSMSnsErrFlagFR1),POD_DSMSnsErrFlagFR2(_POD_DSMSnsErrFlagFR2),POD_DSMSnsErrFlagRL1(_POD_DSMSnsErrFlagRL1),POD_DSMSnsErrFlagRL2(_POD_DSMSnsErrFlagRL2),POD_DSMSnsErrFlagRR1(_POD_DSMSnsErrFlagRR1),POD_DSMSnsErrFlagRR2(_POD_DSMSnsErrFlagRR2),POD_DSMWorkStFL(_POD_DSMWorkStFL),POD_DSMWorkStFR(_POD_DSMWorkStFR),POD_DSMWorkStRL(_POD_DSMWorkStRL),POD_DSMWorkStRR(_POD_DSMWorkStRR),POD_DSMECUErrFlag(_POD_DSMECUErrFlag),POD_DSMOpenablePercentFL(_POD_DSMOpenablePercentFL),POD_DSMObstacleDisFL(_POD_DSMObstacleDisFL),POD_DSMEmergencyStopFL(_POD_DSMEmergencyStopFL),POD_DSMValidFL(_POD_DSMValidFL),POD_DSMOpenablePercentFR(_POD_DSMOpenablePercentFR),POD_DSMObstacleDisFR(_POD_DSMObstacleDisFR),POD_DSMEmergencyStopFR(_POD_DSMEmergencyStopFR),POD_DSMValidFR(_POD_DSMValidFR),POD_DSMOpenablePercentRL(_POD_DSMOpenablePercentRL),POD_DSMObstacleDisRL(_POD_DSMObstacleDisRL),POD_DSMEmergencyStopRL(_POD_DSMEmergencyStopRL),POD_DSMValidRL(_POD_DSMValidRL),POD_DSMOpenablePercentRR(_POD_DSMOpenablePercentRR),POD_DSMObstacleDisRR(_POD_DSMObstacleDisRR),POD_DSMEmergencyStopRR(_POD_DSMEmergencyStopRR),POD_DSMValidRR(_POD_DSMValidRR) {}
	BDCPOD6(const BDCPOD6 &_x){
		POD_DSMSnsErrFlagFL2 = _x.POD_DSMSnsErrFlagFL2;
		POD_DSMSnsErrFlagFR1 = _x.POD_DSMSnsErrFlagFR1;
		POD_DSMSnsErrFlagFR2 = _x.POD_DSMSnsErrFlagFR2;
		POD_DSMSnsErrFlagRL1 = _x.POD_DSMSnsErrFlagRL1;
		POD_DSMSnsErrFlagRL2 = _x.POD_DSMSnsErrFlagRL2;
		POD_DSMSnsErrFlagRR1 = _x.POD_DSMSnsErrFlagRR1;
		POD_DSMSnsErrFlagRR2 = _x.POD_DSMSnsErrFlagRR2;
		POD_DSMWorkStFL = _x.POD_DSMWorkStFL;
		POD_DSMWorkStFR = _x.POD_DSMWorkStFR;
		POD_DSMWorkStRL = _x.POD_DSMWorkStRL;
		POD_DSMWorkStRR = _x.POD_DSMWorkStRR;
		POD_DSMECUErrFlag = _x.POD_DSMECUErrFlag;
		POD_DSMOpenablePercentFL = _x.POD_DSMOpenablePercentFL;
		POD_DSMObstacleDisFL = _x.POD_DSMObstacleDisFL;
		POD_DSMEmergencyStopFL = _x.POD_DSMEmergencyStopFL;
		POD_DSMValidFL = _x.POD_DSMValidFL;
		POD_DSMOpenablePercentFR = _x.POD_DSMOpenablePercentFR;
		POD_DSMObstacleDisFR = _x.POD_DSMObstacleDisFR;
		POD_DSMEmergencyStopFR = _x.POD_DSMEmergencyStopFR;
		POD_DSMValidFR = _x.POD_DSMValidFR;
		POD_DSMOpenablePercentRL = _x.POD_DSMOpenablePercentRL;
		POD_DSMObstacleDisRL = _x.POD_DSMObstacleDisRL;
		POD_DSMEmergencyStopRL = _x.POD_DSMEmergencyStopRL;
		POD_DSMValidRL = _x.POD_DSMValidRL;
		POD_DSMOpenablePercentRR = _x.POD_DSMOpenablePercentRR;
		POD_DSMObstacleDisRR = _x.POD_DSMObstacleDisRR;
		POD_DSMEmergencyStopRR = _x.POD_DSMEmergencyStopRR;
		POD_DSMValidRR = _x.POD_DSMValidRR;
	}
	BDCPOD6(BDCPOD6 &&_x){
		POD_DSMSnsErrFlagFL2 = std::move(_x.POD_DSMSnsErrFlagFL2);
		POD_DSMSnsErrFlagFR1 = std::move(_x.POD_DSMSnsErrFlagFR1);
		POD_DSMSnsErrFlagFR2 = std::move(_x.POD_DSMSnsErrFlagFR2);
		POD_DSMSnsErrFlagRL1 = std::move(_x.POD_DSMSnsErrFlagRL1);
		POD_DSMSnsErrFlagRL2 = std::move(_x.POD_DSMSnsErrFlagRL2);
		POD_DSMSnsErrFlagRR1 = std::move(_x.POD_DSMSnsErrFlagRR1);
		POD_DSMSnsErrFlagRR2 = std::move(_x.POD_DSMSnsErrFlagRR2);
		POD_DSMWorkStFL = std::move(_x.POD_DSMWorkStFL);
		POD_DSMWorkStFR = std::move(_x.POD_DSMWorkStFR);
		POD_DSMWorkStRL = std::move(_x.POD_DSMWorkStRL);
		POD_DSMWorkStRR = std::move(_x.POD_DSMWorkStRR);
		POD_DSMECUErrFlag = std::move(_x.POD_DSMECUErrFlag);
		POD_DSMOpenablePercentFL = std::move(_x.POD_DSMOpenablePercentFL);
		POD_DSMObstacleDisFL = std::move(_x.POD_DSMObstacleDisFL);
		POD_DSMEmergencyStopFL = std::move(_x.POD_DSMEmergencyStopFL);
		POD_DSMValidFL = std::move(_x.POD_DSMValidFL);
		POD_DSMOpenablePercentFR = std::move(_x.POD_DSMOpenablePercentFR);
		POD_DSMObstacleDisFR = std::move(_x.POD_DSMObstacleDisFR);
		POD_DSMEmergencyStopFR = std::move(_x.POD_DSMEmergencyStopFR);
		POD_DSMValidFR = std::move(_x.POD_DSMValidFR);
		POD_DSMOpenablePercentRL = std::move(_x.POD_DSMOpenablePercentRL);
		POD_DSMObstacleDisRL = std::move(_x.POD_DSMObstacleDisRL);
		POD_DSMEmergencyStopRL = std::move(_x.POD_DSMEmergencyStopRL);
		POD_DSMValidRL = std::move(_x.POD_DSMValidRL);
		POD_DSMOpenablePercentRR = std::move(_x.POD_DSMOpenablePercentRR);
		POD_DSMObstacleDisRR = std::move(_x.POD_DSMObstacleDisRR);
		POD_DSMEmergencyStopRR = std::move(_x.POD_DSMEmergencyStopRR);
		POD_DSMValidRR = std::move(_x.POD_DSMValidRR);
	}
	BDCPOD6& operator=(const BDCPOD6 &_x){
		POD_DSMSnsErrFlagFL2 = _x.POD_DSMSnsErrFlagFL2;
		POD_DSMSnsErrFlagFR1 = _x.POD_DSMSnsErrFlagFR1;
		POD_DSMSnsErrFlagFR2 = _x.POD_DSMSnsErrFlagFR2;
		POD_DSMSnsErrFlagRL1 = _x.POD_DSMSnsErrFlagRL1;
		POD_DSMSnsErrFlagRL2 = _x.POD_DSMSnsErrFlagRL2;
		POD_DSMSnsErrFlagRR1 = _x.POD_DSMSnsErrFlagRR1;
		POD_DSMSnsErrFlagRR2 = _x.POD_DSMSnsErrFlagRR2;
		POD_DSMWorkStFL = _x.POD_DSMWorkStFL;
		POD_DSMWorkStFR = _x.POD_DSMWorkStFR;
		POD_DSMWorkStRL = _x.POD_DSMWorkStRL;
		POD_DSMWorkStRR = _x.POD_DSMWorkStRR;
		POD_DSMECUErrFlag = _x.POD_DSMECUErrFlag;
		POD_DSMOpenablePercentFL = _x.POD_DSMOpenablePercentFL;
		POD_DSMObstacleDisFL = _x.POD_DSMObstacleDisFL;
		POD_DSMEmergencyStopFL = _x.POD_DSMEmergencyStopFL;
		POD_DSMValidFL = _x.POD_DSMValidFL;
		POD_DSMOpenablePercentFR = _x.POD_DSMOpenablePercentFR;
		POD_DSMObstacleDisFR = _x.POD_DSMObstacleDisFR;
		POD_DSMEmergencyStopFR = _x.POD_DSMEmergencyStopFR;
		POD_DSMValidFR = _x.POD_DSMValidFR;
		POD_DSMOpenablePercentRL = _x.POD_DSMOpenablePercentRL;
		POD_DSMObstacleDisRL = _x.POD_DSMObstacleDisRL;
		POD_DSMEmergencyStopRL = _x.POD_DSMEmergencyStopRL;
		POD_DSMValidRL = _x.POD_DSMValidRL;
		POD_DSMOpenablePercentRR = _x.POD_DSMOpenablePercentRR;
		POD_DSMObstacleDisRR = _x.POD_DSMObstacleDisRR;
		POD_DSMEmergencyStopRR = _x.POD_DSMEmergencyStopRR;
		POD_DSMValidRR = _x.POD_DSMValidRR;
		return *this;
	}
	BDCPOD6& operator=(BDCPOD6 &&_x){
		POD_DSMSnsErrFlagFL2 = std::move(_x.POD_DSMSnsErrFlagFL2);
		POD_DSMSnsErrFlagFR1 = std::move(_x.POD_DSMSnsErrFlagFR1);
		POD_DSMSnsErrFlagFR2 = std::move(_x.POD_DSMSnsErrFlagFR2);
		POD_DSMSnsErrFlagRL1 = std::move(_x.POD_DSMSnsErrFlagRL1);
		POD_DSMSnsErrFlagRL2 = std::move(_x.POD_DSMSnsErrFlagRL2);
		POD_DSMSnsErrFlagRR1 = std::move(_x.POD_DSMSnsErrFlagRR1);
		POD_DSMSnsErrFlagRR2 = std::move(_x.POD_DSMSnsErrFlagRR2);
		POD_DSMWorkStFL = std::move(_x.POD_DSMWorkStFL);
		POD_DSMWorkStFR = std::move(_x.POD_DSMWorkStFR);
		POD_DSMWorkStRL = std::move(_x.POD_DSMWorkStRL);
		POD_DSMWorkStRR = std::move(_x.POD_DSMWorkStRR);
		POD_DSMECUErrFlag = std::move(_x.POD_DSMECUErrFlag);
		POD_DSMOpenablePercentFL = std::move(_x.POD_DSMOpenablePercentFL);
		POD_DSMObstacleDisFL = std::move(_x.POD_DSMObstacleDisFL);
		POD_DSMEmergencyStopFL = std::move(_x.POD_DSMEmergencyStopFL);
		POD_DSMValidFL = std::move(_x.POD_DSMValidFL);
		POD_DSMOpenablePercentFR = std::move(_x.POD_DSMOpenablePercentFR);
		POD_DSMObstacleDisFR = std::move(_x.POD_DSMObstacleDisFR);
		POD_DSMEmergencyStopFR = std::move(_x.POD_DSMEmergencyStopFR);
		POD_DSMValidFR = std::move(_x.POD_DSMValidFR);
		POD_DSMOpenablePercentRL = std::move(_x.POD_DSMOpenablePercentRL);
		POD_DSMObstacleDisRL = std::move(_x.POD_DSMObstacleDisRL);
		POD_DSMEmergencyStopRL = std::move(_x.POD_DSMEmergencyStopRL);
		POD_DSMValidRL = std::move(_x.POD_DSMValidRL);
		POD_DSMOpenablePercentRR = std::move(_x.POD_DSMOpenablePercentRR);
		POD_DSMObstacleDisRR = std::move(_x.POD_DSMObstacleDisRR);
		POD_DSMEmergencyStopRR = std::move(_x.POD_DSMEmergencyStopRR);
		POD_DSMValidRR = std::move(_x.POD_DSMValidRR);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(POD_DSMSnsErrFlagFL2);
		fun(POD_DSMSnsErrFlagFR1);
		fun(POD_DSMSnsErrFlagFR2);
		fun(POD_DSMSnsErrFlagRL1);
		fun(POD_DSMSnsErrFlagRL2);
		fun(POD_DSMSnsErrFlagRR1);
		fun(POD_DSMSnsErrFlagRR2);
		fun(POD_DSMWorkStFL);
		fun(POD_DSMWorkStFR);
		fun(POD_DSMWorkStRL);
		fun(POD_DSMWorkStRR);
		fun(POD_DSMECUErrFlag);
		fun(POD_DSMOpenablePercentFL);
		fun(POD_DSMObstacleDisFL);
		fun(POD_DSMEmergencyStopFL);
		fun(POD_DSMValidFL);
		fun(POD_DSMOpenablePercentFR);
		fun(POD_DSMObstacleDisFR);
		fun(POD_DSMEmergencyStopFR);
		fun(POD_DSMValidFR);
		fun(POD_DSMOpenablePercentRL);
		fun(POD_DSMObstacleDisRL);
		fun(POD_DSMEmergencyStopRL);
		fun(POD_DSMValidRL);
		fun(POD_DSMOpenablePercentRR);
		fun(POD_DSMObstacleDisRR);
		fun(POD_DSMEmergencyStopRR);
		fun(POD_DSMValidRR);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(POD_DSMSnsErrFlagFL2);
		fun(POD_DSMSnsErrFlagFR1);
		fun(POD_DSMSnsErrFlagFR2);
		fun(POD_DSMSnsErrFlagRL1);
		fun(POD_DSMSnsErrFlagRL2);
		fun(POD_DSMSnsErrFlagRR1);
		fun(POD_DSMSnsErrFlagRR2);
		fun(POD_DSMWorkStFL);
		fun(POD_DSMWorkStFR);
		fun(POD_DSMWorkStRL);
		fun(POD_DSMWorkStRR);
		fun(POD_DSMECUErrFlag);
		fun(POD_DSMOpenablePercentFL);
		fun(POD_DSMObstacleDisFL);
		fun(POD_DSMEmergencyStopFL);
		fun(POD_DSMValidFL);
		fun(POD_DSMOpenablePercentFR);
		fun(POD_DSMObstacleDisFR);
		fun(POD_DSMEmergencyStopFR);
		fun(POD_DSMValidFR);
		fun(POD_DSMOpenablePercentRL);
		fun(POD_DSMObstacleDisRL);
		fun(POD_DSMEmergencyStopRL);
		fun(POD_DSMValidRL);
		fun(POD_DSMOpenablePercentRR);
		fun(POD_DSMObstacleDisRR);
		fun(POD_DSMEmergencyStopRR);
		fun(POD_DSMValidRR);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (POD_DSMSnsErrFlagFL2);
		fun << (POD_DSMSnsErrFlagFR1);
		fun << (POD_DSMSnsErrFlagFR2);
		fun << (POD_DSMSnsErrFlagRL1);
		fun << (POD_DSMSnsErrFlagRL2);
		fun << (POD_DSMSnsErrFlagRR1);
		fun << (POD_DSMSnsErrFlagRR2);
		fun << (POD_DSMWorkStFL);
		fun << (POD_DSMWorkStFR);
		fun << (POD_DSMWorkStRL);
		fun << (POD_DSMWorkStRR);
		fun << (POD_DSMECUErrFlag);
		fun << (POD_DSMOpenablePercentFL);
		fun << (POD_DSMObstacleDisFL);
		fun << (POD_DSMEmergencyStopFL);
		fun << (POD_DSMValidFL);
		fun << (POD_DSMOpenablePercentFR);
		fun << (POD_DSMObstacleDisFR);
		fun << (POD_DSMEmergencyStopFR);
		fun << (POD_DSMValidFR);
		fun << (POD_DSMOpenablePercentRL);
		fun << (POD_DSMObstacleDisRL);
		fun << (POD_DSMEmergencyStopRL);
		fun << (POD_DSMValidRL);
		fun << (POD_DSMOpenablePercentRR);
		fun << (POD_DSMObstacleDisRR);
		fun << (POD_DSMEmergencyStopRR);
		fun << (POD_DSMValidRR);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (POD_DSMSnsErrFlagFL2);
		fun >> (POD_DSMSnsErrFlagFR1);
		fun >> (POD_DSMSnsErrFlagFR2);
		fun >> (POD_DSMSnsErrFlagRL1);
		fun >> (POD_DSMSnsErrFlagRL2);
		fun >> (POD_DSMSnsErrFlagRR1);
		fun >> (POD_DSMSnsErrFlagRR2);
		fun >> (POD_DSMWorkStFL);
		fun >> (POD_DSMWorkStFR);
		fun >> (POD_DSMWorkStRL);
		fun >> (POD_DSMWorkStRR);
		fun >> (POD_DSMECUErrFlag);
		fun >> (POD_DSMOpenablePercentFL);
		fun >> (POD_DSMObstacleDisFL);
		fun >> (POD_DSMEmergencyStopFL);
		fun >> (POD_DSMValidFL);
		fun >> (POD_DSMOpenablePercentFR);
		fun >> (POD_DSMObstacleDisFR);
		fun >> (POD_DSMEmergencyStopFR);
		fun >> (POD_DSMValidFR);
		fun >> (POD_DSMOpenablePercentRL);
		fun >> (POD_DSMObstacleDisRL);
		fun >> (POD_DSMEmergencyStopRL);
		fun >> (POD_DSMValidRL);
		fun >> (POD_DSMOpenablePercentRR);
		fun >> (POD_DSMObstacleDisRR);
		fun >> (POD_DSMEmergencyStopRR);
		fun >> (POD_DSMValidRR);
	}
};

#endif //____BDCPOD6_H__
