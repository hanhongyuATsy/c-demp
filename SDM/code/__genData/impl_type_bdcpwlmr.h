#ifndef ____BDCPWLMR_H__
#define ____BDCPWLMR_H__


#include "cstdint"






struct BDCPWLMR {
public:
	std::uint8_t MR_LeftMirrorOpeCmd;
	std::uint8_t MR_LeftMirrorFoldUnfoldCtlReq;
	std::uint8_t MR_MirrAntiGlarePowerOnReq;
	std::uint8_t MR_LeftMirrorXTargetPos;
	std::uint8_t MR_RightMirrorFoldUnfoldCtlReq;
	std::uint8_t MR_LeftMirrorYTargetPos;
	std::uint8_t MR_RightMirrorOpeCmd;
	std::uint8_t MR_RightMirrorXTargetPos;
	std::uint8_t MR_RightMirrorYTargetPos;
	std::uint8_t MR_MirrorAutoFoldFuncCfgSt;
	std::uint8_t MR_MirrorAngleDipFuncCfgSt;
	std::uint8_t MR_LeftMirrorXCurrentPst;
	std::uint8_t MR_LeftMirrorYCurrentPst;
	std::uint8_t MR_RightMirrorXCurrentPst;
	std::uint8_t MR_RightMirrorYCurrentPst;
	std::uint8_t MR_LeftMirrorFoldUnfoldSt;
	std::uint8_t MR_LeftMirrFoldOutputFltSt;
	std::uint8_t MR_LeftMirrAdjFltSt;
	std::uint8_t MR_LeftMirrPosFltSt;
	std::uint8_t MR_MirrAntiGlarePowerOnSt;
	std::uint8_t MR_LeftMirrorXCurrentPos;
	std::uint8_t MR_LeftMirrorCurrentOpeSt;
	std::uint8_t MR_LeftMirrorYCurrentPos;
	std::uint8_t MR_RightMirrorFoldUnfoldSt;
	std::uint8_t MR_RightMirrFoldOutputFltSt;
	std::uint8_t MR_RightMirrAdjFltSt;
	std::uint8_t MR_RightMirrPosFltSt;
	std::uint8_t MR_RightMirrorXCurrentPos;
	std::uint8_t MR_RightMirrorCurrentOpeSt;
	std::uint8_t MR_RightMirrorYCurrentPos;
	std::uint8_t ACU_LeftMirrorXPosCtlReq;
	std::uint8_t ACU_LeftMirrorYPosCtlReq;
	std::uint8_t ACU_RightMirrorXPosCtlReq;
	std::uint8_t ACU_RightMirrorYPosCtlReq;
	std::uint8_t ACU_FoldUnfoldCtlReq;
	std::uint8_t MR_ISRVMPowerSupReq;
	std::uint8_t ADC_HoldRearMirrorReq;
	std::uint8_t ADC_RearMirrorReq;
/*
	BDCPWLMR() {}
	~BDCPWLMR() {}
	BDCPWLMR(const std::uint8_t _MR_LeftMirrorOpeCmd,const std::uint8_t _MR_LeftMirrorFoldUnfoldCtlReq,const std::uint8_t _MR_MirrAntiGlarePowerOnReq,const std::uint8_t _MR_LeftMirrorXTargetPos,const std::uint8_t _MR_RightMirrorFoldUnfoldCtlReq,const std::uint8_t _MR_LeftMirrorYTargetPos,const std::uint8_t _MR_RightMirrorOpeCmd,const std::uint8_t _MR_RightMirrorXTargetPos,const std::uint8_t _MR_RightMirrorYTargetPos,const std::uint8_t _MR_MirrorAutoFoldFuncCfgSt,const std::uint8_t _MR_MirrorAngleDipFuncCfgSt,const std::uint8_t _MR_LeftMirrorXCurrentPst,const std::uint8_t _MR_LeftMirrorYCurrentPst,const std::uint8_t _MR_RightMirrorXCurrentPst,const std::uint8_t _MR_RightMirrorYCurrentPst,const std::uint8_t _MR_LeftMirrorFoldUnfoldSt,const std::uint8_t _MR_LeftMirrFoldOutputFltSt,const std::uint8_t _MR_LeftMirrAdjFltSt,const std::uint8_t _MR_LeftMirrPosFltSt,const std::uint8_t _MR_MirrAntiGlarePowerOnSt,const std::uint8_t _MR_LeftMirrorXCurrentPos,const std::uint8_t _MR_LeftMirrorCurrentOpeSt,const std::uint8_t _MR_LeftMirrorYCurrentPos,const std::uint8_t _MR_RightMirrorFoldUnfoldSt,const std::uint8_t _MR_RightMirrFoldOutputFltSt,const std::uint8_t _MR_RightMirrAdjFltSt,const std::uint8_t _MR_RightMirrPosFltSt,const std::uint8_t _MR_RightMirrorXCurrentPos,const std::uint8_t _MR_RightMirrorCurrentOpeSt,const std::uint8_t _MR_RightMirrorYCurrentPos,const std::uint8_t _ACU_LeftMirrorXPosCtlReq,const std::uint8_t _ACU_LeftMirrorYPosCtlReq,const std::uint8_t _ACU_RightMirrorXPosCtlReq,const std::uint8_t _ACU_RightMirrorYPosCtlReq,const std::uint8_t _ACU_FoldUnfoldCtlReq,const std::uint8_t _MR_ISRVMPowerSupReq,const std::uint8_t _ADC_HoldRearMirrorReq,const std::uint8_t _ADC_RearMirrorReq):MR_LeftMirrorOpeCmd(_MR_LeftMirrorOpeCmd),MR_LeftMirrorFoldUnfoldCtlReq(_MR_LeftMirrorFoldUnfoldCtlReq),MR_MirrAntiGlarePowerOnReq(_MR_MirrAntiGlarePowerOnReq),MR_LeftMirrorXTargetPos(_MR_LeftMirrorXTargetPos),MR_RightMirrorFoldUnfoldCtlReq(_MR_RightMirrorFoldUnfoldCtlReq),MR_LeftMirrorYTargetPos(_MR_LeftMirrorYTargetPos),MR_RightMirrorOpeCmd(_MR_RightMirrorOpeCmd),MR_RightMirrorXTargetPos(_MR_RightMirrorXTargetPos),MR_RightMirrorYTargetPos(_MR_RightMirrorYTargetPos),MR_MirrorAutoFoldFuncCfgSt(_MR_MirrorAutoFoldFuncCfgSt),MR_MirrorAngleDipFuncCfgSt(_MR_MirrorAngleDipFuncCfgSt),MR_LeftMirrorXCurrentPst(_MR_LeftMirrorXCurrentPst),MR_LeftMirrorYCurrentPst(_MR_LeftMirrorYCurrentPst),MR_RightMirrorXCurrentPst(_MR_RightMirrorXCurrentPst),MR_RightMirrorYCurrentPst(_MR_RightMirrorYCurrentPst),MR_LeftMirrorFoldUnfoldSt(_MR_LeftMirrorFoldUnfoldSt),MR_LeftMirrFoldOutputFltSt(_MR_LeftMirrFoldOutputFltSt),MR_LeftMirrAdjFltSt(_MR_LeftMirrAdjFltSt),MR_LeftMirrPosFltSt(_MR_LeftMirrPosFltSt),MR_MirrAntiGlarePowerOnSt(_MR_MirrAntiGlarePowerOnSt),MR_LeftMirrorXCurrentPos(_MR_LeftMirrorXCurrentPos),MR_LeftMirrorCurrentOpeSt(_MR_LeftMirrorCurrentOpeSt),MR_LeftMirrorYCurrentPos(_MR_LeftMirrorYCurrentPos),MR_RightMirrorFoldUnfoldSt(_MR_RightMirrorFoldUnfoldSt),MR_RightMirrFoldOutputFltSt(_MR_RightMirrFoldOutputFltSt),MR_RightMirrAdjFltSt(_MR_RightMirrAdjFltSt),MR_RightMirrPosFltSt(_MR_RightMirrPosFltSt),MR_RightMirrorXCurrentPos(_MR_RightMirrorXCurrentPos),MR_RightMirrorCurrentOpeSt(_MR_RightMirrorCurrentOpeSt),MR_RightMirrorYCurrentPos(_MR_RightMirrorYCurrentPos),ACU_LeftMirrorXPosCtlReq(_ACU_LeftMirrorXPosCtlReq),ACU_LeftMirrorYPosCtlReq(_ACU_LeftMirrorYPosCtlReq),ACU_RightMirrorXPosCtlReq(_ACU_RightMirrorXPosCtlReq),ACU_RightMirrorYPosCtlReq(_ACU_RightMirrorYPosCtlReq),ACU_FoldUnfoldCtlReq(_ACU_FoldUnfoldCtlReq),MR_ISRVMPowerSupReq(_MR_ISRVMPowerSupReq),ADC_HoldRearMirrorReq(_ADC_HoldRearMirrorReq),ADC_RearMirrorReq(_ADC_RearMirrorReq) {}
	BDCPWLMR(const BDCPWLMR &_x){
		MR_LeftMirrorOpeCmd = _x.MR_LeftMirrorOpeCmd;
		MR_LeftMirrorFoldUnfoldCtlReq = _x.MR_LeftMirrorFoldUnfoldCtlReq;
		MR_MirrAntiGlarePowerOnReq = _x.MR_MirrAntiGlarePowerOnReq;
		MR_LeftMirrorXTargetPos = _x.MR_LeftMirrorXTargetPos;
		MR_RightMirrorFoldUnfoldCtlReq = _x.MR_RightMirrorFoldUnfoldCtlReq;
		MR_LeftMirrorYTargetPos = _x.MR_LeftMirrorYTargetPos;
		MR_RightMirrorOpeCmd = _x.MR_RightMirrorOpeCmd;
		MR_RightMirrorXTargetPos = _x.MR_RightMirrorXTargetPos;
		MR_RightMirrorYTargetPos = _x.MR_RightMirrorYTargetPos;
		MR_MirrorAutoFoldFuncCfgSt = _x.MR_MirrorAutoFoldFuncCfgSt;
		MR_MirrorAngleDipFuncCfgSt = _x.MR_MirrorAngleDipFuncCfgSt;
		MR_LeftMirrorXCurrentPst = _x.MR_LeftMirrorXCurrentPst;
		MR_LeftMirrorYCurrentPst = _x.MR_LeftMirrorYCurrentPst;
		MR_RightMirrorXCurrentPst = _x.MR_RightMirrorXCurrentPst;
		MR_RightMirrorYCurrentPst = _x.MR_RightMirrorYCurrentPst;
		MR_LeftMirrorFoldUnfoldSt = _x.MR_LeftMirrorFoldUnfoldSt;
		MR_LeftMirrFoldOutputFltSt = _x.MR_LeftMirrFoldOutputFltSt;
		MR_LeftMirrAdjFltSt = _x.MR_LeftMirrAdjFltSt;
		MR_LeftMirrPosFltSt = _x.MR_LeftMirrPosFltSt;
		MR_MirrAntiGlarePowerOnSt = _x.MR_MirrAntiGlarePowerOnSt;
		MR_LeftMirrorXCurrentPos = _x.MR_LeftMirrorXCurrentPos;
		MR_LeftMirrorCurrentOpeSt = _x.MR_LeftMirrorCurrentOpeSt;
		MR_LeftMirrorYCurrentPos = _x.MR_LeftMirrorYCurrentPos;
		MR_RightMirrorFoldUnfoldSt = _x.MR_RightMirrorFoldUnfoldSt;
		MR_RightMirrFoldOutputFltSt = _x.MR_RightMirrFoldOutputFltSt;
		MR_RightMirrAdjFltSt = _x.MR_RightMirrAdjFltSt;
		MR_RightMirrPosFltSt = _x.MR_RightMirrPosFltSt;
		MR_RightMirrorXCurrentPos = _x.MR_RightMirrorXCurrentPos;
		MR_RightMirrorCurrentOpeSt = _x.MR_RightMirrorCurrentOpeSt;
		MR_RightMirrorYCurrentPos = _x.MR_RightMirrorYCurrentPos;
		ACU_LeftMirrorXPosCtlReq = _x.ACU_LeftMirrorXPosCtlReq;
		ACU_LeftMirrorYPosCtlReq = _x.ACU_LeftMirrorYPosCtlReq;
		ACU_RightMirrorXPosCtlReq = _x.ACU_RightMirrorXPosCtlReq;
		ACU_RightMirrorYPosCtlReq = _x.ACU_RightMirrorYPosCtlReq;
		ACU_FoldUnfoldCtlReq = _x.ACU_FoldUnfoldCtlReq;
		MR_ISRVMPowerSupReq = _x.MR_ISRVMPowerSupReq;
		ADC_HoldRearMirrorReq = _x.ADC_HoldRearMirrorReq;
		ADC_RearMirrorReq = _x.ADC_RearMirrorReq;
	}
	BDCPWLMR(BDCPWLMR &&_x){
		MR_LeftMirrorOpeCmd = std::move(_x.MR_LeftMirrorOpeCmd);
		MR_LeftMirrorFoldUnfoldCtlReq = std::move(_x.MR_LeftMirrorFoldUnfoldCtlReq);
		MR_MirrAntiGlarePowerOnReq = std::move(_x.MR_MirrAntiGlarePowerOnReq);
		MR_LeftMirrorXTargetPos = std::move(_x.MR_LeftMirrorXTargetPos);
		MR_RightMirrorFoldUnfoldCtlReq = std::move(_x.MR_RightMirrorFoldUnfoldCtlReq);
		MR_LeftMirrorYTargetPos = std::move(_x.MR_LeftMirrorYTargetPos);
		MR_RightMirrorOpeCmd = std::move(_x.MR_RightMirrorOpeCmd);
		MR_RightMirrorXTargetPos = std::move(_x.MR_RightMirrorXTargetPos);
		MR_RightMirrorYTargetPos = std::move(_x.MR_RightMirrorYTargetPos);
		MR_MirrorAutoFoldFuncCfgSt = std::move(_x.MR_MirrorAutoFoldFuncCfgSt);
		MR_MirrorAngleDipFuncCfgSt = std::move(_x.MR_MirrorAngleDipFuncCfgSt);
		MR_LeftMirrorXCurrentPst = std::move(_x.MR_LeftMirrorXCurrentPst);
		MR_LeftMirrorYCurrentPst = std::move(_x.MR_LeftMirrorYCurrentPst);
		MR_RightMirrorXCurrentPst = std::move(_x.MR_RightMirrorXCurrentPst);
		MR_RightMirrorYCurrentPst = std::move(_x.MR_RightMirrorYCurrentPst);
		MR_LeftMirrorFoldUnfoldSt = std::move(_x.MR_LeftMirrorFoldUnfoldSt);
		MR_LeftMirrFoldOutputFltSt = std::move(_x.MR_LeftMirrFoldOutputFltSt);
		MR_LeftMirrAdjFltSt = std::move(_x.MR_LeftMirrAdjFltSt);
		MR_LeftMirrPosFltSt = std::move(_x.MR_LeftMirrPosFltSt);
		MR_MirrAntiGlarePowerOnSt = std::move(_x.MR_MirrAntiGlarePowerOnSt);
		MR_LeftMirrorXCurrentPos = std::move(_x.MR_LeftMirrorXCurrentPos);
		MR_LeftMirrorCurrentOpeSt = std::move(_x.MR_LeftMirrorCurrentOpeSt);
		MR_LeftMirrorYCurrentPos = std::move(_x.MR_LeftMirrorYCurrentPos);
		MR_RightMirrorFoldUnfoldSt = std::move(_x.MR_RightMirrorFoldUnfoldSt);
		MR_RightMirrFoldOutputFltSt = std::move(_x.MR_RightMirrFoldOutputFltSt);
		MR_RightMirrAdjFltSt = std::move(_x.MR_RightMirrAdjFltSt);
		MR_RightMirrPosFltSt = std::move(_x.MR_RightMirrPosFltSt);
		MR_RightMirrorXCurrentPos = std::move(_x.MR_RightMirrorXCurrentPos);
		MR_RightMirrorCurrentOpeSt = std::move(_x.MR_RightMirrorCurrentOpeSt);
		MR_RightMirrorYCurrentPos = std::move(_x.MR_RightMirrorYCurrentPos);
		ACU_LeftMirrorXPosCtlReq = std::move(_x.ACU_LeftMirrorXPosCtlReq);
		ACU_LeftMirrorYPosCtlReq = std::move(_x.ACU_LeftMirrorYPosCtlReq);
		ACU_RightMirrorXPosCtlReq = std::move(_x.ACU_RightMirrorXPosCtlReq);
		ACU_RightMirrorYPosCtlReq = std::move(_x.ACU_RightMirrorYPosCtlReq);
		ACU_FoldUnfoldCtlReq = std::move(_x.ACU_FoldUnfoldCtlReq);
		MR_ISRVMPowerSupReq = std::move(_x.MR_ISRVMPowerSupReq);
		ADC_HoldRearMirrorReq = std::move(_x.ADC_HoldRearMirrorReq);
		ADC_RearMirrorReq = std::move(_x.ADC_RearMirrorReq);
	}
	BDCPWLMR& operator=(const BDCPWLMR &_x){
		MR_LeftMirrorOpeCmd = _x.MR_LeftMirrorOpeCmd;
		MR_LeftMirrorFoldUnfoldCtlReq = _x.MR_LeftMirrorFoldUnfoldCtlReq;
		MR_MirrAntiGlarePowerOnReq = _x.MR_MirrAntiGlarePowerOnReq;
		MR_LeftMirrorXTargetPos = _x.MR_LeftMirrorXTargetPos;
		MR_RightMirrorFoldUnfoldCtlReq = _x.MR_RightMirrorFoldUnfoldCtlReq;
		MR_LeftMirrorYTargetPos = _x.MR_LeftMirrorYTargetPos;
		MR_RightMirrorOpeCmd = _x.MR_RightMirrorOpeCmd;
		MR_RightMirrorXTargetPos = _x.MR_RightMirrorXTargetPos;
		MR_RightMirrorYTargetPos = _x.MR_RightMirrorYTargetPos;
		MR_MirrorAutoFoldFuncCfgSt = _x.MR_MirrorAutoFoldFuncCfgSt;
		MR_MirrorAngleDipFuncCfgSt = _x.MR_MirrorAngleDipFuncCfgSt;
		MR_LeftMirrorXCurrentPst = _x.MR_LeftMirrorXCurrentPst;
		MR_LeftMirrorYCurrentPst = _x.MR_LeftMirrorYCurrentPst;
		MR_RightMirrorXCurrentPst = _x.MR_RightMirrorXCurrentPst;
		MR_RightMirrorYCurrentPst = _x.MR_RightMirrorYCurrentPst;
		MR_LeftMirrorFoldUnfoldSt = _x.MR_LeftMirrorFoldUnfoldSt;
		MR_LeftMirrFoldOutputFltSt = _x.MR_LeftMirrFoldOutputFltSt;
		MR_LeftMirrAdjFltSt = _x.MR_LeftMirrAdjFltSt;
		MR_LeftMirrPosFltSt = _x.MR_LeftMirrPosFltSt;
		MR_MirrAntiGlarePowerOnSt = _x.MR_MirrAntiGlarePowerOnSt;
		MR_LeftMirrorXCurrentPos = _x.MR_LeftMirrorXCurrentPos;
		MR_LeftMirrorCurrentOpeSt = _x.MR_LeftMirrorCurrentOpeSt;
		MR_LeftMirrorYCurrentPos = _x.MR_LeftMirrorYCurrentPos;
		MR_RightMirrorFoldUnfoldSt = _x.MR_RightMirrorFoldUnfoldSt;
		MR_RightMirrFoldOutputFltSt = _x.MR_RightMirrFoldOutputFltSt;
		MR_RightMirrAdjFltSt = _x.MR_RightMirrAdjFltSt;
		MR_RightMirrPosFltSt = _x.MR_RightMirrPosFltSt;
		MR_RightMirrorXCurrentPos = _x.MR_RightMirrorXCurrentPos;
		MR_RightMirrorCurrentOpeSt = _x.MR_RightMirrorCurrentOpeSt;
		MR_RightMirrorYCurrentPos = _x.MR_RightMirrorYCurrentPos;
		ACU_LeftMirrorXPosCtlReq = _x.ACU_LeftMirrorXPosCtlReq;
		ACU_LeftMirrorYPosCtlReq = _x.ACU_LeftMirrorYPosCtlReq;
		ACU_RightMirrorXPosCtlReq = _x.ACU_RightMirrorXPosCtlReq;
		ACU_RightMirrorYPosCtlReq = _x.ACU_RightMirrorYPosCtlReq;
		ACU_FoldUnfoldCtlReq = _x.ACU_FoldUnfoldCtlReq;
		MR_ISRVMPowerSupReq = _x.MR_ISRVMPowerSupReq;
		ADC_HoldRearMirrorReq = _x.ADC_HoldRearMirrorReq;
		ADC_RearMirrorReq = _x.ADC_RearMirrorReq;
		return *this;
	}
	BDCPWLMR& operator=(BDCPWLMR &&_x){
		MR_LeftMirrorOpeCmd = std::move(_x.MR_LeftMirrorOpeCmd);
		MR_LeftMirrorFoldUnfoldCtlReq = std::move(_x.MR_LeftMirrorFoldUnfoldCtlReq);
		MR_MirrAntiGlarePowerOnReq = std::move(_x.MR_MirrAntiGlarePowerOnReq);
		MR_LeftMirrorXTargetPos = std::move(_x.MR_LeftMirrorXTargetPos);
		MR_RightMirrorFoldUnfoldCtlReq = std::move(_x.MR_RightMirrorFoldUnfoldCtlReq);
		MR_LeftMirrorYTargetPos = std::move(_x.MR_LeftMirrorYTargetPos);
		MR_RightMirrorOpeCmd = std::move(_x.MR_RightMirrorOpeCmd);
		MR_RightMirrorXTargetPos = std::move(_x.MR_RightMirrorXTargetPos);
		MR_RightMirrorYTargetPos = std::move(_x.MR_RightMirrorYTargetPos);
		MR_MirrorAutoFoldFuncCfgSt = std::move(_x.MR_MirrorAutoFoldFuncCfgSt);
		MR_MirrorAngleDipFuncCfgSt = std::move(_x.MR_MirrorAngleDipFuncCfgSt);
		MR_LeftMirrorXCurrentPst = std::move(_x.MR_LeftMirrorXCurrentPst);
		MR_LeftMirrorYCurrentPst = std::move(_x.MR_LeftMirrorYCurrentPst);
		MR_RightMirrorXCurrentPst = std::move(_x.MR_RightMirrorXCurrentPst);
		MR_RightMirrorYCurrentPst = std::move(_x.MR_RightMirrorYCurrentPst);
		MR_LeftMirrorFoldUnfoldSt = std::move(_x.MR_LeftMirrorFoldUnfoldSt);
		MR_LeftMirrFoldOutputFltSt = std::move(_x.MR_LeftMirrFoldOutputFltSt);
		MR_LeftMirrAdjFltSt = std::move(_x.MR_LeftMirrAdjFltSt);
		MR_LeftMirrPosFltSt = std::move(_x.MR_LeftMirrPosFltSt);
		MR_MirrAntiGlarePowerOnSt = std::move(_x.MR_MirrAntiGlarePowerOnSt);
		MR_LeftMirrorXCurrentPos = std::move(_x.MR_LeftMirrorXCurrentPos);
		MR_LeftMirrorCurrentOpeSt = std::move(_x.MR_LeftMirrorCurrentOpeSt);
		MR_LeftMirrorYCurrentPos = std::move(_x.MR_LeftMirrorYCurrentPos);
		MR_RightMirrorFoldUnfoldSt = std::move(_x.MR_RightMirrorFoldUnfoldSt);
		MR_RightMirrFoldOutputFltSt = std::move(_x.MR_RightMirrFoldOutputFltSt);
		MR_RightMirrAdjFltSt = std::move(_x.MR_RightMirrAdjFltSt);
		MR_RightMirrPosFltSt = std::move(_x.MR_RightMirrPosFltSt);
		MR_RightMirrorXCurrentPos = std::move(_x.MR_RightMirrorXCurrentPos);
		MR_RightMirrorCurrentOpeSt = std::move(_x.MR_RightMirrorCurrentOpeSt);
		MR_RightMirrorYCurrentPos = std::move(_x.MR_RightMirrorYCurrentPos);
		ACU_LeftMirrorXPosCtlReq = std::move(_x.ACU_LeftMirrorXPosCtlReq);
		ACU_LeftMirrorYPosCtlReq = std::move(_x.ACU_LeftMirrorYPosCtlReq);
		ACU_RightMirrorXPosCtlReq = std::move(_x.ACU_RightMirrorXPosCtlReq);
		ACU_RightMirrorYPosCtlReq = std::move(_x.ACU_RightMirrorYPosCtlReq);
		ACU_FoldUnfoldCtlReq = std::move(_x.ACU_FoldUnfoldCtlReq);
		MR_ISRVMPowerSupReq = std::move(_x.MR_ISRVMPowerSupReq);
		ADC_HoldRearMirrorReq = std::move(_x.ADC_HoldRearMirrorReq);
		ADC_RearMirrorReq = std::move(_x.ADC_RearMirrorReq);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(MR_LeftMirrorOpeCmd);
		fun(MR_LeftMirrorFoldUnfoldCtlReq);
		fun(MR_MirrAntiGlarePowerOnReq);
		fun(MR_LeftMirrorXTargetPos);
		fun(MR_RightMirrorFoldUnfoldCtlReq);
		fun(MR_LeftMirrorYTargetPos);
		fun(MR_RightMirrorOpeCmd);
		fun(MR_RightMirrorXTargetPos);
		fun(MR_RightMirrorYTargetPos);
		fun(MR_MirrorAutoFoldFuncCfgSt);
		fun(MR_MirrorAngleDipFuncCfgSt);
		fun(MR_LeftMirrorXCurrentPst);
		fun(MR_LeftMirrorYCurrentPst);
		fun(MR_RightMirrorXCurrentPst);
		fun(MR_RightMirrorYCurrentPst);
		fun(MR_LeftMirrorFoldUnfoldSt);
		fun(MR_LeftMirrFoldOutputFltSt);
		fun(MR_LeftMirrAdjFltSt);
		fun(MR_LeftMirrPosFltSt);
		fun(MR_MirrAntiGlarePowerOnSt);
		fun(MR_LeftMirrorXCurrentPos);
		fun(MR_LeftMirrorCurrentOpeSt);
		fun(MR_LeftMirrorYCurrentPos);
		fun(MR_RightMirrorFoldUnfoldSt);
		fun(MR_RightMirrFoldOutputFltSt);
		fun(MR_RightMirrAdjFltSt);
		fun(MR_RightMirrPosFltSt);
		fun(MR_RightMirrorXCurrentPos);
		fun(MR_RightMirrorCurrentOpeSt);
		fun(MR_RightMirrorYCurrentPos);
		fun(ACU_LeftMirrorXPosCtlReq);
		fun(ACU_LeftMirrorYPosCtlReq);
		fun(ACU_RightMirrorXPosCtlReq);
		fun(ACU_RightMirrorYPosCtlReq);
		fun(ACU_FoldUnfoldCtlReq);
		fun(MR_ISRVMPowerSupReq);
		fun(ADC_HoldRearMirrorReq);
		fun(ADC_RearMirrorReq);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(MR_LeftMirrorOpeCmd);
		fun(MR_LeftMirrorFoldUnfoldCtlReq);
		fun(MR_MirrAntiGlarePowerOnReq);
		fun(MR_LeftMirrorXTargetPos);
		fun(MR_RightMirrorFoldUnfoldCtlReq);
		fun(MR_LeftMirrorYTargetPos);
		fun(MR_RightMirrorOpeCmd);
		fun(MR_RightMirrorXTargetPos);
		fun(MR_RightMirrorYTargetPos);
		fun(MR_MirrorAutoFoldFuncCfgSt);
		fun(MR_MirrorAngleDipFuncCfgSt);
		fun(MR_LeftMirrorXCurrentPst);
		fun(MR_LeftMirrorYCurrentPst);
		fun(MR_RightMirrorXCurrentPst);
		fun(MR_RightMirrorYCurrentPst);
		fun(MR_LeftMirrorFoldUnfoldSt);
		fun(MR_LeftMirrFoldOutputFltSt);
		fun(MR_LeftMirrAdjFltSt);
		fun(MR_LeftMirrPosFltSt);
		fun(MR_MirrAntiGlarePowerOnSt);
		fun(MR_LeftMirrorXCurrentPos);
		fun(MR_LeftMirrorCurrentOpeSt);
		fun(MR_LeftMirrorYCurrentPos);
		fun(MR_RightMirrorFoldUnfoldSt);
		fun(MR_RightMirrFoldOutputFltSt);
		fun(MR_RightMirrAdjFltSt);
		fun(MR_RightMirrPosFltSt);
		fun(MR_RightMirrorXCurrentPos);
		fun(MR_RightMirrorCurrentOpeSt);
		fun(MR_RightMirrorYCurrentPos);
		fun(ACU_LeftMirrorXPosCtlReq);
		fun(ACU_LeftMirrorYPosCtlReq);
		fun(ACU_RightMirrorXPosCtlReq);
		fun(ACU_RightMirrorYPosCtlReq);
		fun(ACU_FoldUnfoldCtlReq);
		fun(MR_ISRVMPowerSupReq);
		fun(ADC_HoldRearMirrorReq);
		fun(ADC_RearMirrorReq);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (MR_LeftMirrorOpeCmd);
		fun << (MR_LeftMirrorFoldUnfoldCtlReq);
		fun << (MR_MirrAntiGlarePowerOnReq);
		fun << (MR_LeftMirrorXTargetPos);
		fun << (MR_RightMirrorFoldUnfoldCtlReq);
		fun << (MR_LeftMirrorYTargetPos);
		fun << (MR_RightMirrorOpeCmd);
		fun << (MR_RightMirrorXTargetPos);
		fun << (MR_RightMirrorYTargetPos);
		fun << (MR_MirrorAutoFoldFuncCfgSt);
		fun << (MR_MirrorAngleDipFuncCfgSt);
		fun << (MR_LeftMirrorXCurrentPst);
		fun << (MR_LeftMirrorYCurrentPst);
		fun << (MR_RightMirrorXCurrentPst);
		fun << (MR_RightMirrorYCurrentPst);
		fun << (MR_LeftMirrorFoldUnfoldSt);
		fun << (MR_LeftMirrFoldOutputFltSt);
		fun << (MR_LeftMirrAdjFltSt);
		fun << (MR_LeftMirrPosFltSt);
		fun << (MR_MirrAntiGlarePowerOnSt);
		fun << (MR_LeftMirrorXCurrentPos);
		fun << (MR_LeftMirrorCurrentOpeSt);
		fun << (MR_LeftMirrorYCurrentPos);
		fun << (MR_RightMirrorFoldUnfoldSt);
		fun << (MR_RightMirrFoldOutputFltSt);
		fun << (MR_RightMirrAdjFltSt);
		fun << (MR_RightMirrPosFltSt);
		fun << (MR_RightMirrorXCurrentPos);
		fun << (MR_RightMirrorCurrentOpeSt);
		fun << (MR_RightMirrorYCurrentPos);
		fun << (ACU_LeftMirrorXPosCtlReq);
		fun << (ACU_LeftMirrorYPosCtlReq);
		fun << (ACU_RightMirrorXPosCtlReq);
		fun << (ACU_RightMirrorYPosCtlReq);
		fun << (ACU_FoldUnfoldCtlReq);
		fun << (MR_ISRVMPowerSupReq);
		fun << (ADC_HoldRearMirrorReq);
		fun << (ADC_RearMirrorReq);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (MR_LeftMirrorOpeCmd);
		fun >> (MR_LeftMirrorFoldUnfoldCtlReq);
		fun >> (MR_MirrAntiGlarePowerOnReq);
		fun >> (MR_LeftMirrorXTargetPos);
		fun >> (MR_RightMirrorFoldUnfoldCtlReq);
		fun >> (MR_LeftMirrorYTargetPos);
		fun >> (MR_RightMirrorOpeCmd);
		fun >> (MR_RightMirrorXTargetPos);
		fun >> (MR_RightMirrorYTargetPos);
		fun >> (MR_MirrorAutoFoldFuncCfgSt);
		fun >> (MR_MirrorAngleDipFuncCfgSt);
		fun >> (MR_LeftMirrorXCurrentPst);
		fun >> (MR_LeftMirrorYCurrentPst);
		fun >> (MR_RightMirrorXCurrentPst);
		fun >> (MR_RightMirrorYCurrentPst);
		fun >> (MR_LeftMirrorFoldUnfoldSt);
		fun >> (MR_LeftMirrFoldOutputFltSt);
		fun >> (MR_LeftMirrAdjFltSt);
		fun >> (MR_LeftMirrPosFltSt);
		fun >> (MR_MirrAntiGlarePowerOnSt);
		fun >> (MR_LeftMirrorXCurrentPos);
		fun >> (MR_LeftMirrorCurrentOpeSt);
		fun >> (MR_LeftMirrorYCurrentPos);
		fun >> (MR_RightMirrorFoldUnfoldSt);
		fun >> (MR_RightMirrFoldOutputFltSt);
		fun >> (MR_RightMirrAdjFltSt);
		fun >> (MR_RightMirrPosFltSt);
		fun >> (MR_RightMirrorXCurrentPos);
		fun >> (MR_RightMirrorCurrentOpeSt);
		fun >> (MR_RightMirrorYCurrentPos);
		fun >> (ACU_LeftMirrorXPosCtlReq);
		fun >> (ACU_LeftMirrorYPosCtlReq);
		fun >> (ACU_RightMirrorXPosCtlReq);
		fun >> (ACU_RightMirrorYPosCtlReq);
		fun >> (ACU_FoldUnfoldCtlReq);
		fun >> (MR_ISRVMPowerSupReq);
		fun >> (ADC_HoldRearMirrorReq);
		fun >> (ADC_RearMirrorReq);
	}
};

#endif //____BDCPWLMR_H__
