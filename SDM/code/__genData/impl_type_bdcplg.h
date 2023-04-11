#ifndef ____BDCPLG_H__
#define ____BDCPLG_H__


#include "cstdint"






struct BDCPLG {
public:
	std::uint8_t PLG_DoorSt;
	std::uint8_t PLG_LastMoveSt;
	std::uint8_t PLG_PawlSwSt;
	std::uint64_t PLG_HomePositionSwst;
	std::uint8_t PLG_SecondPstLearntSt;
	std::uint8_t PLG_ZeroLearntSt;
	std::uint8_t PLG_LatchFaultSt;
	std::uint8_t PLG_PresentPositionVD;
	std::uint8_t PLG_MaxPositionLearntSt;
	std::uint8_t PLG_PinchEventSt;
	std::uint8_t PLG_CurrentAntiPinchSt;
	std::uint8_t PLG_HallAntiPinchSt;
	std::uint8_t PLG_BuzzerWorkMode;
	std::uint8_t PLG_HallSensorASt;
	std::uint8_t PLG_HallSensorBSt;
	std::uint8_t PLG_SetPosition;
	std::uint8_t PLG_LatchSt;
	std::uint64_t PLG_LatchCinchedSw;
	std::uint64_t PLG_LatchReleasedSw;
	std::uint8_t PLG_LatchAjarSW;
	std::uint8_t PLG_TravelPst;
	std::uint8_t PLG_LatchMoveSt;
	std::uint8_t PLG_LatchHeatProtSt;
	std::uint8_t PLG_SpindleHeatProtSt;
	std::uint8_t PLG_BasicLatchFaultSt;
	std::uint8_t PLG_SpindleFaultSt;
	std::uint8_t PLG_LeftAPSSt;
	std::uint8_t PLG_RightAPSSt;
	std::uint8_t PLG_AbuseSt;
	std::uint8_t PLG_StallEventSt;
	std::uint8_t PLG_LatchHALFSW;
	std::uint8_t PLG_LatchNTLSW;
	std::uint64_t PLGCtrlCmd;
	std::uint64_t LearnMaxPositionReq;
	std::uint64_t PLGSetPositionReq;
	std::uint8_t PLG_OpeCmd;
	std::uint8_t PLG_BuzzerReq;
	std::uint8_t PLG_SecondPstReq;
	std::uint8_t PLG_SecondPstClearReq;
	std::uint8_t PLG_TargetPos;
	std::uint8_t PLG_UnlockCmd;
	std::uint8_t PLG_TemporaryInhibit;
/*
	BDCPLG() {}
	~BDCPLG() {}
	BDCPLG(const std::uint8_t _PLG_DoorSt,const std::uint8_t _PLG_LastMoveSt,const std::uint8_t _PLG_PawlSwSt,const std::uint64_t _PLG_HomePositionSwst,const std::uint8_t _PLG_SecondPstLearntSt,const std::uint8_t _PLG_ZeroLearntSt,const std::uint8_t _PLG_LatchFaultSt,const std::uint8_t _PLG_PresentPositionVD,const std::uint8_t _PLG_MaxPositionLearntSt,const std::uint8_t _PLG_PinchEventSt,const std::uint8_t _PLG_CurrentAntiPinchSt,const std::uint8_t _PLG_HallAntiPinchSt,const std::uint8_t _PLG_BuzzerWorkMode,const std::uint8_t _PLG_HallSensorASt,const std::uint8_t _PLG_HallSensorBSt,const std::uint8_t _PLG_SetPosition,const std::uint8_t _PLG_LatchSt,const std::uint64_t _PLG_LatchCinchedSw,const std::uint64_t _PLG_LatchReleasedSw,const std::uint8_t _PLG_LatchAjarSW,const std::uint8_t _PLG_TravelPst,const std::uint8_t _PLG_LatchMoveSt,const std::uint8_t _PLG_LatchHeatProtSt,const std::uint8_t _PLG_SpindleHeatProtSt,const std::uint8_t _PLG_BasicLatchFaultSt,const std::uint8_t _PLG_SpindleFaultSt,const std::uint8_t _PLG_LeftAPSSt,const std::uint8_t _PLG_RightAPSSt,const std::uint8_t _PLG_AbuseSt,const std::uint8_t _PLG_StallEventSt,const std::uint8_t _PLG_LatchHALFSW,const std::uint8_t _PLG_LatchNTLSW,const std::uint64_t _PLGCtrlCmd,const std::uint64_t _LearnMaxPositionReq,const std::uint64_t _PLGSetPositionReq,const std::uint8_t _PLG_OpeCmd,const std::uint8_t _PLG_BuzzerReq,const std::uint8_t _PLG_SecondPstReq,const std::uint8_t _PLG_SecondPstClearReq,const std::uint8_t _PLG_TargetPos,const std::uint8_t _PLG_UnlockCmd,const std::uint8_t _PLG_TemporaryInhibit):PLG_DoorSt(_PLG_DoorSt),PLG_LastMoveSt(_PLG_LastMoveSt),PLG_PawlSwSt(_PLG_PawlSwSt),PLG_HomePositionSwst(_PLG_HomePositionSwst),PLG_SecondPstLearntSt(_PLG_SecondPstLearntSt),PLG_ZeroLearntSt(_PLG_ZeroLearntSt),PLG_LatchFaultSt(_PLG_LatchFaultSt),PLG_PresentPositionVD(_PLG_PresentPositionVD),PLG_MaxPositionLearntSt(_PLG_MaxPositionLearntSt),PLG_PinchEventSt(_PLG_PinchEventSt),PLG_CurrentAntiPinchSt(_PLG_CurrentAntiPinchSt),PLG_HallAntiPinchSt(_PLG_HallAntiPinchSt),PLG_BuzzerWorkMode(_PLG_BuzzerWorkMode),PLG_HallSensorASt(_PLG_HallSensorASt),PLG_HallSensorBSt(_PLG_HallSensorBSt),PLG_SetPosition(_PLG_SetPosition),PLG_LatchSt(_PLG_LatchSt),PLG_LatchCinchedSw(_PLG_LatchCinchedSw),PLG_LatchReleasedSw(_PLG_LatchReleasedSw),PLG_LatchAjarSW(_PLG_LatchAjarSW),PLG_TravelPst(_PLG_TravelPst),PLG_LatchMoveSt(_PLG_LatchMoveSt),PLG_LatchHeatProtSt(_PLG_LatchHeatProtSt),PLG_SpindleHeatProtSt(_PLG_SpindleHeatProtSt),PLG_BasicLatchFaultSt(_PLG_BasicLatchFaultSt),PLG_SpindleFaultSt(_PLG_SpindleFaultSt),PLG_LeftAPSSt(_PLG_LeftAPSSt),PLG_RightAPSSt(_PLG_RightAPSSt),PLG_AbuseSt(_PLG_AbuseSt),PLG_StallEventSt(_PLG_StallEventSt),PLG_LatchHALFSW(_PLG_LatchHALFSW),PLG_LatchNTLSW(_PLG_LatchNTLSW),PLGCtrlCmd(_PLGCtrlCmd),LearnMaxPositionReq(_LearnMaxPositionReq),PLGSetPositionReq(_PLGSetPositionReq),PLG_OpeCmd(_PLG_OpeCmd),PLG_BuzzerReq(_PLG_BuzzerReq),PLG_SecondPstReq(_PLG_SecondPstReq),PLG_SecondPstClearReq(_PLG_SecondPstClearReq),PLG_TargetPos(_PLG_TargetPos),PLG_UnlockCmd(_PLG_UnlockCmd),PLG_TemporaryInhibit(_PLG_TemporaryInhibit) {}
	BDCPLG(const BDCPLG &_x){
		PLG_DoorSt = _x.PLG_DoorSt;
		PLG_LastMoveSt = _x.PLG_LastMoveSt;
		PLG_PawlSwSt = _x.PLG_PawlSwSt;
		PLG_HomePositionSwst = _x.PLG_HomePositionSwst;
		PLG_SecondPstLearntSt = _x.PLG_SecondPstLearntSt;
		PLG_ZeroLearntSt = _x.PLG_ZeroLearntSt;
		PLG_LatchFaultSt = _x.PLG_LatchFaultSt;
		PLG_PresentPositionVD = _x.PLG_PresentPositionVD;
		PLG_MaxPositionLearntSt = _x.PLG_MaxPositionLearntSt;
		PLG_PinchEventSt = _x.PLG_PinchEventSt;
		PLG_CurrentAntiPinchSt = _x.PLG_CurrentAntiPinchSt;
		PLG_HallAntiPinchSt = _x.PLG_HallAntiPinchSt;
		PLG_BuzzerWorkMode = _x.PLG_BuzzerWorkMode;
		PLG_HallSensorASt = _x.PLG_HallSensorASt;
		PLG_HallSensorBSt = _x.PLG_HallSensorBSt;
		PLG_SetPosition = _x.PLG_SetPosition;
		PLG_LatchSt = _x.PLG_LatchSt;
		PLG_LatchCinchedSw = _x.PLG_LatchCinchedSw;
		PLG_LatchReleasedSw = _x.PLG_LatchReleasedSw;
		PLG_LatchAjarSW = _x.PLG_LatchAjarSW;
		PLG_TravelPst = _x.PLG_TravelPst;
		PLG_LatchMoveSt = _x.PLG_LatchMoveSt;
		PLG_LatchHeatProtSt = _x.PLG_LatchHeatProtSt;
		PLG_SpindleHeatProtSt = _x.PLG_SpindleHeatProtSt;
		PLG_BasicLatchFaultSt = _x.PLG_BasicLatchFaultSt;
		PLG_SpindleFaultSt = _x.PLG_SpindleFaultSt;
		PLG_LeftAPSSt = _x.PLG_LeftAPSSt;
		PLG_RightAPSSt = _x.PLG_RightAPSSt;
		PLG_AbuseSt = _x.PLG_AbuseSt;
		PLG_StallEventSt = _x.PLG_StallEventSt;
		PLG_LatchHALFSW = _x.PLG_LatchHALFSW;
		PLG_LatchNTLSW = _x.PLG_LatchNTLSW;
		PLGCtrlCmd = _x.PLGCtrlCmd;
		LearnMaxPositionReq = _x.LearnMaxPositionReq;
		PLGSetPositionReq = _x.PLGSetPositionReq;
		PLG_OpeCmd = _x.PLG_OpeCmd;
		PLG_BuzzerReq = _x.PLG_BuzzerReq;
		PLG_SecondPstReq = _x.PLG_SecondPstReq;
		PLG_SecondPstClearReq = _x.PLG_SecondPstClearReq;
		PLG_TargetPos = _x.PLG_TargetPos;
		PLG_UnlockCmd = _x.PLG_UnlockCmd;
		PLG_TemporaryInhibit = _x.PLG_TemporaryInhibit;
	}
	BDCPLG(BDCPLG &&_x){
		PLG_DoorSt = std::move(_x.PLG_DoorSt);
		PLG_LastMoveSt = std::move(_x.PLG_LastMoveSt);
		PLG_PawlSwSt = std::move(_x.PLG_PawlSwSt);
		PLG_HomePositionSwst = std::move(_x.PLG_HomePositionSwst);
		PLG_SecondPstLearntSt = std::move(_x.PLG_SecondPstLearntSt);
		PLG_ZeroLearntSt = std::move(_x.PLG_ZeroLearntSt);
		PLG_LatchFaultSt = std::move(_x.PLG_LatchFaultSt);
		PLG_PresentPositionVD = std::move(_x.PLG_PresentPositionVD);
		PLG_MaxPositionLearntSt = std::move(_x.PLG_MaxPositionLearntSt);
		PLG_PinchEventSt = std::move(_x.PLG_PinchEventSt);
		PLG_CurrentAntiPinchSt = std::move(_x.PLG_CurrentAntiPinchSt);
		PLG_HallAntiPinchSt = std::move(_x.PLG_HallAntiPinchSt);
		PLG_BuzzerWorkMode = std::move(_x.PLG_BuzzerWorkMode);
		PLG_HallSensorASt = std::move(_x.PLG_HallSensorASt);
		PLG_HallSensorBSt = std::move(_x.PLG_HallSensorBSt);
		PLG_SetPosition = std::move(_x.PLG_SetPosition);
		PLG_LatchSt = std::move(_x.PLG_LatchSt);
		PLG_LatchCinchedSw = std::move(_x.PLG_LatchCinchedSw);
		PLG_LatchReleasedSw = std::move(_x.PLG_LatchReleasedSw);
		PLG_LatchAjarSW = std::move(_x.PLG_LatchAjarSW);
		PLG_TravelPst = std::move(_x.PLG_TravelPst);
		PLG_LatchMoveSt = std::move(_x.PLG_LatchMoveSt);
		PLG_LatchHeatProtSt = std::move(_x.PLG_LatchHeatProtSt);
		PLG_SpindleHeatProtSt = std::move(_x.PLG_SpindleHeatProtSt);
		PLG_BasicLatchFaultSt = std::move(_x.PLG_BasicLatchFaultSt);
		PLG_SpindleFaultSt = std::move(_x.PLG_SpindleFaultSt);
		PLG_LeftAPSSt = std::move(_x.PLG_LeftAPSSt);
		PLG_RightAPSSt = std::move(_x.PLG_RightAPSSt);
		PLG_AbuseSt = std::move(_x.PLG_AbuseSt);
		PLG_StallEventSt = std::move(_x.PLG_StallEventSt);
		PLG_LatchHALFSW = std::move(_x.PLG_LatchHALFSW);
		PLG_LatchNTLSW = std::move(_x.PLG_LatchNTLSW);
		PLGCtrlCmd = std::move(_x.PLGCtrlCmd);
		LearnMaxPositionReq = std::move(_x.LearnMaxPositionReq);
		PLGSetPositionReq = std::move(_x.PLGSetPositionReq);
		PLG_OpeCmd = std::move(_x.PLG_OpeCmd);
		PLG_BuzzerReq = std::move(_x.PLG_BuzzerReq);
		PLG_SecondPstReq = std::move(_x.PLG_SecondPstReq);
		PLG_SecondPstClearReq = std::move(_x.PLG_SecondPstClearReq);
		PLG_TargetPos = std::move(_x.PLG_TargetPos);
		PLG_UnlockCmd = std::move(_x.PLG_UnlockCmd);
		PLG_TemporaryInhibit = std::move(_x.PLG_TemporaryInhibit);
	}
	BDCPLG& operator=(const BDCPLG &_x){
		PLG_DoorSt = _x.PLG_DoorSt;
		PLG_LastMoveSt = _x.PLG_LastMoveSt;
		PLG_PawlSwSt = _x.PLG_PawlSwSt;
		PLG_HomePositionSwst = _x.PLG_HomePositionSwst;
		PLG_SecondPstLearntSt = _x.PLG_SecondPstLearntSt;
		PLG_ZeroLearntSt = _x.PLG_ZeroLearntSt;
		PLG_LatchFaultSt = _x.PLG_LatchFaultSt;
		PLG_PresentPositionVD = _x.PLG_PresentPositionVD;
		PLG_MaxPositionLearntSt = _x.PLG_MaxPositionLearntSt;
		PLG_PinchEventSt = _x.PLG_PinchEventSt;
		PLG_CurrentAntiPinchSt = _x.PLG_CurrentAntiPinchSt;
		PLG_HallAntiPinchSt = _x.PLG_HallAntiPinchSt;
		PLG_BuzzerWorkMode = _x.PLG_BuzzerWorkMode;
		PLG_HallSensorASt = _x.PLG_HallSensorASt;
		PLG_HallSensorBSt = _x.PLG_HallSensorBSt;
		PLG_SetPosition = _x.PLG_SetPosition;
		PLG_LatchSt = _x.PLG_LatchSt;
		PLG_LatchCinchedSw = _x.PLG_LatchCinchedSw;
		PLG_LatchReleasedSw = _x.PLG_LatchReleasedSw;
		PLG_LatchAjarSW = _x.PLG_LatchAjarSW;
		PLG_TravelPst = _x.PLG_TravelPst;
		PLG_LatchMoveSt = _x.PLG_LatchMoveSt;
		PLG_LatchHeatProtSt = _x.PLG_LatchHeatProtSt;
		PLG_SpindleHeatProtSt = _x.PLG_SpindleHeatProtSt;
		PLG_BasicLatchFaultSt = _x.PLG_BasicLatchFaultSt;
		PLG_SpindleFaultSt = _x.PLG_SpindleFaultSt;
		PLG_LeftAPSSt = _x.PLG_LeftAPSSt;
		PLG_RightAPSSt = _x.PLG_RightAPSSt;
		PLG_AbuseSt = _x.PLG_AbuseSt;
		PLG_StallEventSt = _x.PLG_StallEventSt;
		PLG_LatchHALFSW = _x.PLG_LatchHALFSW;
		PLG_LatchNTLSW = _x.PLG_LatchNTLSW;
		PLGCtrlCmd = _x.PLGCtrlCmd;
		LearnMaxPositionReq = _x.LearnMaxPositionReq;
		PLGSetPositionReq = _x.PLGSetPositionReq;
		PLG_OpeCmd = _x.PLG_OpeCmd;
		PLG_BuzzerReq = _x.PLG_BuzzerReq;
		PLG_SecondPstReq = _x.PLG_SecondPstReq;
		PLG_SecondPstClearReq = _x.PLG_SecondPstClearReq;
		PLG_TargetPos = _x.PLG_TargetPos;
		PLG_UnlockCmd = _x.PLG_UnlockCmd;
		PLG_TemporaryInhibit = _x.PLG_TemporaryInhibit;
		return *this;
	}
	BDCPLG& operator=(BDCPLG &&_x){
		PLG_DoorSt = std::move(_x.PLG_DoorSt);
		PLG_LastMoveSt = std::move(_x.PLG_LastMoveSt);
		PLG_PawlSwSt = std::move(_x.PLG_PawlSwSt);
		PLG_HomePositionSwst = std::move(_x.PLG_HomePositionSwst);
		PLG_SecondPstLearntSt = std::move(_x.PLG_SecondPstLearntSt);
		PLG_ZeroLearntSt = std::move(_x.PLG_ZeroLearntSt);
		PLG_LatchFaultSt = std::move(_x.PLG_LatchFaultSt);
		PLG_PresentPositionVD = std::move(_x.PLG_PresentPositionVD);
		PLG_MaxPositionLearntSt = std::move(_x.PLG_MaxPositionLearntSt);
		PLG_PinchEventSt = std::move(_x.PLG_PinchEventSt);
		PLG_CurrentAntiPinchSt = std::move(_x.PLG_CurrentAntiPinchSt);
		PLG_HallAntiPinchSt = std::move(_x.PLG_HallAntiPinchSt);
		PLG_BuzzerWorkMode = std::move(_x.PLG_BuzzerWorkMode);
		PLG_HallSensorASt = std::move(_x.PLG_HallSensorASt);
		PLG_HallSensorBSt = std::move(_x.PLG_HallSensorBSt);
		PLG_SetPosition = std::move(_x.PLG_SetPosition);
		PLG_LatchSt = std::move(_x.PLG_LatchSt);
		PLG_LatchCinchedSw = std::move(_x.PLG_LatchCinchedSw);
		PLG_LatchReleasedSw = std::move(_x.PLG_LatchReleasedSw);
		PLG_LatchAjarSW = std::move(_x.PLG_LatchAjarSW);
		PLG_TravelPst = std::move(_x.PLG_TravelPst);
		PLG_LatchMoveSt = std::move(_x.PLG_LatchMoveSt);
		PLG_LatchHeatProtSt = std::move(_x.PLG_LatchHeatProtSt);
		PLG_SpindleHeatProtSt = std::move(_x.PLG_SpindleHeatProtSt);
		PLG_BasicLatchFaultSt = std::move(_x.PLG_BasicLatchFaultSt);
		PLG_SpindleFaultSt = std::move(_x.PLG_SpindleFaultSt);
		PLG_LeftAPSSt = std::move(_x.PLG_LeftAPSSt);
		PLG_RightAPSSt = std::move(_x.PLG_RightAPSSt);
		PLG_AbuseSt = std::move(_x.PLG_AbuseSt);
		PLG_StallEventSt = std::move(_x.PLG_StallEventSt);
		PLG_LatchHALFSW = std::move(_x.PLG_LatchHALFSW);
		PLG_LatchNTLSW = std::move(_x.PLG_LatchNTLSW);
		PLGCtrlCmd = std::move(_x.PLGCtrlCmd);
		LearnMaxPositionReq = std::move(_x.LearnMaxPositionReq);
		PLGSetPositionReq = std::move(_x.PLGSetPositionReq);
		PLG_OpeCmd = std::move(_x.PLG_OpeCmd);
		PLG_BuzzerReq = std::move(_x.PLG_BuzzerReq);
		PLG_SecondPstReq = std::move(_x.PLG_SecondPstReq);
		PLG_SecondPstClearReq = std::move(_x.PLG_SecondPstClearReq);
		PLG_TargetPos = std::move(_x.PLG_TargetPos);
		PLG_UnlockCmd = std::move(_x.PLG_UnlockCmd);
		PLG_TemporaryInhibit = std::move(_x.PLG_TemporaryInhibit);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(PLG_DoorSt);
		fun(PLG_LastMoveSt);
		fun(PLG_PawlSwSt);
		fun(PLG_HomePositionSwst);
		fun(PLG_SecondPstLearntSt);
		fun(PLG_ZeroLearntSt);
		fun(PLG_LatchFaultSt);
		fun(PLG_PresentPositionVD);
		fun(PLG_MaxPositionLearntSt);
		fun(PLG_PinchEventSt);
		fun(PLG_CurrentAntiPinchSt);
		fun(PLG_HallAntiPinchSt);
		fun(PLG_BuzzerWorkMode);
		fun(PLG_HallSensorASt);
		fun(PLG_HallSensorBSt);
		fun(PLG_SetPosition);
		fun(PLG_LatchSt);
		fun(PLG_LatchCinchedSw);
		fun(PLG_LatchReleasedSw);
		fun(PLG_LatchAjarSW);
		fun(PLG_TravelPst);
		fun(PLG_LatchMoveSt);
		fun(PLG_LatchHeatProtSt);
		fun(PLG_SpindleHeatProtSt);
		fun(PLG_BasicLatchFaultSt);
		fun(PLG_SpindleFaultSt);
		fun(PLG_LeftAPSSt);
		fun(PLG_RightAPSSt);
		fun(PLG_AbuseSt);
		fun(PLG_StallEventSt);
		fun(PLG_LatchHALFSW);
		fun(PLG_LatchNTLSW);
		fun(PLGCtrlCmd);
		fun(LearnMaxPositionReq);
		fun(PLGSetPositionReq);
		fun(PLG_OpeCmd);
		fun(PLG_BuzzerReq);
		fun(PLG_SecondPstReq);
		fun(PLG_SecondPstClearReq);
		fun(PLG_TargetPos);
		fun(PLG_UnlockCmd);
		fun(PLG_TemporaryInhibit);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(PLG_DoorSt);
		fun(PLG_LastMoveSt);
		fun(PLG_PawlSwSt);
		fun(PLG_HomePositionSwst);
		fun(PLG_SecondPstLearntSt);
		fun(PLG_ZeroLearntSt);
		fun(PLG_LatchFaultSt);
		fun(PLG_PresentPositionVD);
		fun(PLG_MaxPositionLearntSt);
		fun(PLG_PinchEventSt);
		fun(PLG_CurrentAntiPinchSt);
		fun(PLG_HallAntiPinchSt);
		fun(PLG_BuzzerWorkMode);
		fun(PLG_HallSensorASt);
		fun(PLG_HallSensorBSt);
		fun(PLG_SetPosition);
		fun(PLG_LatchSt);
		fun(PLG_LatchCinchedSw);
		fun(PLG_LatchReleasedSw);
		fun(PLG_LatchAjarSW);
		fun(PLG_TravelPst);
		fun(PLG_LatchMoveSt);
		fun(PLG_LatchHeatProtSt);
		fun(PLG_SpindleHeatProtSt);
		fun(PLG_BasicLatchFaultSt);
		fun(PLG_SpindleFaultSt);
		fun(PLG_LeftAPSSt);
		fun(PLG_RightAPSSt);
		fun(PLG_AbuseSt);
		fun(PLG_StallEventSt);
		fun(PLG_LatchHALFSW);
		fun(PLG_LatchNTLSW);
		fun(PLGCtrlCmd);
		fun(LearnMaxPositionReq);
		fun(PLGSetPositionReq);
		fun(PLG_OpeCmd);
		fun(PLG_BuzzerReq);
		fun(PLG_SecondPstReq);
		fun(PLG_SecondPstClearReq);
		fun(PLG_TargetPos);
		fun(PLG_UnlockCmd);
		fun(PLG_TemporaryInhibit);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (PLG_DoorSt);
		fun << (PLG_LastMoveSt);
		fun << (PLG_PawlSwSt);
		fun << (PLG_HomePositionSwst);
		fun << (PLG_SecondPstLearntSt);
		fun << (PLG_ZeroLearntSt);
		fun << (PLG_LatchFaultSt);
		fun << (PLG_PresentPositionVD);
		fun << (PLG_MaxPositionLearntSt);
		fun << (PLG_PinchEventSt);
		fun << (PLG_CurrentAntiPinchSt);
		fun << (PLG_HallAntiPinchSt);
		fun << (PLG_BuzzerWorkMode);
		fun << (PLG_HallSensorASt);
		fun << (PLG_HallSensorBSt);
		fun << (PLG_SetPosition);
		fun << (PLG_LatchSt);
		fun << (PLG_LatchCinchedSw);
		fun << (PLG_LatchReleasedSw);
		fun << (PLG_LatchAjarSW);
		fun << (PLG_TravelPst);
		fun << (PLG_LatchMoveSt);
		fun << (PLG_LatchHeatProtSt);
		fun << (PLG_SpindleHeatProtSt);
		fun << (PLG_BasicLatchFaultSt);
		fun << (PLG_SpindleFaultSt);
		fun << (PLG_LeftAPSSt);
		fun << (PLG_RightAPSSt);
		fun << (PLG_AbuseSt);
		fun << (PLG_StallEventSt);
		fun << (PLG_LatchHALFSW);
		fun << (PLG_LatchNTLSW);
		fun << (PLGCtrlCmd);
		fun << (LearnMaxPositionReq);
		fun << (PLGSetPositionReq);
		fun << (PLG_OpeCmd);
		fun << (PLG_BuzzerReq);
		fun << (PLG_SecondPstReq);
		fun << (PLG_SecondPstClearReq);
		fun << (PLG_TargetPos);
		fun << (PLG_UnlockCmd);
		fun << (PLG_TemporaryInhibit);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (PLG_DoorSt);
		fun >> (PLG_LastMoveSt);
		fun >> (PLG_PawlSwSt);
		fun >> (PLG_HomePositionSwst);
		fun >> (PLG_SecondPstLearntSt);
		fun >> (PLG_ZeroLearntSt);
		fun >> (PLG_LatchFaultSt);
		fun >> (PLG_PresentPositionVD);
		fun >> (PLG_MaxPositionLearntSt);
		fun >> (PLG_PinchEventSt);
		fun >> (PLG_CurrentAntiPinchSt);
		fun >> (PLG_HallAntiPinchSt);
		fun >> (PLG_BuzzerWorkMode);
		fun >> (PLG_HallSensorASt);
		fun >> (PLG_HallSensorBSt);
		fun >> (PLG_SetPosition);
		fun >> (PLG_LatchSt);
		fun >> (PLG_LatchCinchedSw);
		fun >> (PLG_LatchReleasedSw);
		fun >> (PLG_LatchAjarSW);
		fun >> (PLG_TravelPst);
		fun >> (PLG_LatchMoveSt);
		fun >> (PLG_LatchHeatProtSt);
		fun >> (PLG_SpindleHeatProtSt);
		fun >> (PLG_BasicLatchFaultSt);
		fun >> (PLG_SpindleFaultSt);
		fun >> (PLG_LeftAPSSt);
		fun >> (PLG_RightAPSSt);
		fun >> (PLG_AbuseSt);
		fun >> (PLG_StallEventSt);
		fun >> (PLG_LatchHALFSW);
		fun >> (PLG_LatchNTLSW);
		fun >> (PLGCtrlCmd);
		fun >> (LearnMaxPositionReq);
		fun >> (PLGSetPositionReq);
		fun >> (PLG_OpeCmd);
		fun >> (PLG_BuzzerReq);
		fun >> (PLG_SecondPstReq);
		fun >> (PLG_SecondPstClearReq);
		fun >> (PLG_TargetPos);
		fun >> (PLG_UnlockCmd);
		fun >> (PLG_TemporaryInhibit);
	}
};

#endif //____BDCPLG_H__
