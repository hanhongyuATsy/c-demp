#ifndef ____BDCSSW5_H__
#define ____BDCSSW5_H__


#include "cstdint"






struct BDCSSW5 {
public:
	std::uint8_t SSW_RLSeatAdjForbidSt;
	std::uint8_t SSW_RRSeatAdjForbidSt;
	std::uint8_t SSW_RLSeatBackrestCurrentPst;
	std::uint8_t SSW_RLSeatTiltCurrentPst;
	std::uint8_t SSW_RLSeatOttomanAngleCurrentPst;
	std::uint8_t SSW_RRSeatBackrestCurrentPst;
	std::uint8_t SSW_RRSeatTiltCurrentPst;
	std::uint8_t SSW_RRSeatOttomanAngleCurrentPst;
	std::uint8_t SSW_RLSeatSlideXOpeCmd;
	std::uint8_t SSW_RLSeatSlideYOpeCmd;
	std::uint8_t SSW_RLSeatHeightOpeCmd;
	std::uint8_t SSW_RLSeatBackrestOpeCmd;
	std::uint8_t SSW_RLSeatTiltOpeCmd;
	std::uint8_t SSW_RLSeatCushionOpeCmd;
	std::uint8_t SSW_RLSeatOttomanAngleOpeCmd;
	std::uint8_t SSW_RLSeatOttomanExtentOpeCmd;
	std::uint8_t SSW_RLSeatInclineOpeCmd;
	std::uint8_t SSW_RLSeatModeCmd;
	std::uint8_t SSW_RRSeatSlideXOpeCmd;
	std::uint8_t SSW_RRSeatSlideYOpeCmd;
	std::uint8_t SSW_RRSeatHeightOpeCmd;
	std::uint8_t SSW_RRSeatBackrestOpeCmd;
	std::uint8_t SSW_RRSeatTiltOpeCmd;
	std::uint8_t SSW_RRSeatCushionOpeCmd;
	std::uint8_t SSW_RRSeatOttomanAngleOpeCmd;
	std::uint8_t SSW_RRSeatOttomanExtentOpeCmd;
	std::uint8_t SSW_RRSeatInclineOpeCmd;
	std::uint8_t SSW_RRSeatModeCmd;
	std::uint8_t SSW_RLSeatBackrestTargetPos;
	std::uint8_t SSW_RLSeatTiltTargetPos;
	std::uint8_t SSW_RLSeatOttomanAngleTargetPos;
	std::uint8_t SSW_RRSeatBackrestTargetPos;
	std::uint8_t SSW_RRSeatTiltTargetPos;
	std::uint8_t SSW_RRSeatOttomanAngleTargetPos;
/*
	BDCSSW5() {}
	~BDCSSW5() {}
	BDCSSW5(const std::uint8_t _SSW_RLSeatAdjForbidSt,const std::uint8_t _SSW_RRSeatAdjForbidSt,const std::uint8_t _SSW_RLSeatBackrestCurrentPst,const std::uint8_t _SSW_RLSeatTiltCurrentPst,const std::uint8_t _SSW_RLSeatOttomanAngleCurrentPst,const std::uint8_t _SSW_RRSeatBackrestCurrentPst,const std::uint8_t _SSW_RRSeatTiltCurrentPst,const std::uint8_t _SSW_RRSeatOttomanAngleCurrentPst,const std::uint8_t _SSW_RLSeatSlideXOpeCmd,const std::uint8_t _SSW_RLSeatSlideYOpeCmd,const std::uint8_t _SSW_RLSeatHeightOpeCmd,const std::uint8_t _SSW_RLSeatBackrestOpeCmd,const std::uint8_t _SSW_RLSeatTiltOpeCmd,const std::uint8_t _SSW_RLSeatCushionOpeCmd,const std::uint8_t _SSW_RLSeatOttomanAngleOpeCmd,const std::uint8_t _SSW_RLSeatOttomanExtentOpeCmd,const std::uint8_t _SSW_RLSeatInclineOpeCmd,const std::uint8_t _SSW_RLSeatModeCmd,const std::uint8_t _SSW_RRSeatSlideXOpeCmd,const std::uint8_t _SSW_RRSeatSlideYOpeCmd,const std::uint8_t _SSW_RRSeatHeightOpeCmd,const std::uint8_t _SSW_RRSeatBackrestOpeCmd,const std::uint8_t _SSW_RRSeatTiltOpeCmd,const std::uint8_t _SSW_RRSeatCushionOpeCmd,const std::uint8_t _SSW_RRSeatOttomanAngleOpeCmd,const std::uint8_t _SSW_RRSeatOttomanExtentOpeCmd,const std::uint8_t _SSW_RRSeatInclineOpeCmd,const std::uint8_t _SSW_RRSeatModeCmd,const std::uint8_t _SSW_RLSeatBackrestTargetPos,const std::uint8_t _SSW_RLSeatTiltTargetPos,const std::uint8_t _SSW_RLSeatOttomanAngleTargetPos,const std::uint8_t _SSW_RRSeatBackrestTargetPos,const std::uint8_t _SSW_RRSeatTiltTargetPos,const std::uint8_t _SSW_RRSeatOttomanAngleTargetPos):SSW_RLSeatAdjForbidSt(_SSW_RLSeatAdjForbidSt),SSW_RRSeatAdjForbidSt(_SSW_RRSeatAdjForbidSt),SSW_RLSeatBackrestCurrentPst(_SSW_RLSeatBackrestCurrentPst),SSW_RLSeatTiltCurrentPst(_SSW_RLSeatTiltCurrentPst),SSW_RLSeatOttomanAngleCurrentPst(_SSW_RLSeatOttomanAngleCurrentPst),SSW_RRSeatBackrestCurrentPst(_SSW_RRSeatBackrestCurrentPst),SSW_RRSeatTiltCurrentPst(_SSW_RRSeatTiltCurrentPst),SSW_RRSeatOttomanAngleCurrentPst(_SSW_RRSeatOttomanAngleCurrentPst),SSW_RLSeatSlideXOpeCmd(_SSW_RLSeatSlideXOpeCmd),SSW_RLSeatSlideYOpeCmd(_SSW_RLSeatSlideYOpeCmd),SSW_RLSeatHeightOpeCmd(_SSW_RLSeatHeightOpeCmd),SSW_RLSeatBackrestOpeCmd(_SSW_RLSeatBackrestOpeCmd),SSW_RLSeatTiltOpeCmd(_SSW_RLSeatTiltOpeCmd),SSW_RLSeatCushionOpeCmd(_SSW_RLSeatCushionOpeCmd),SSW_RLSeatOttomanAngleOpeCmd(_SSW_RLSeatOttomanAngleOpeCmd),SSW_RLSeatOttomanExtentOpeCmd(_SSW_RLSeatOttomanExtentOpeCmd),SSW_RLSeatInclineOpeCmd(_SSW_RLSeatInclineOpeCmd),SSW_RLSeatModeCmd(_SSW_RLSeatModeCmd),SSW_RRSeatSlideXOpeCmd(_SSW_RRSeatSlideXOpeCmd),SSW_RRSeatSlideYOpeCmd(_SSW_RRSeatSlideYOpeCmd),SSW_RRSeatHeightOpeCmd(_SSW_RRSeatHeightOpeCmd),SSW_RRSeatBackrestOpeCmd(_SSW_RRSeatBackrestOpeCmd),SSW_RRSeatTiltOpeCmd(_SSW_RRSeatTiltOpeCmd),SSW_RRSeatCushionOpeCmd(_SSW_RRSeatCushionOpeCmd),SSW_RRSeatOttomanAngleOpeCmd(_SSW_RRSeatOttomanAngleOpeCmd),SSW_RRSeatOttomanExtentOpeCmd(_SSW_RRSeatOttomanExtentOpeCmd),SSW_RRSeatInclineOpeCmd(_SSW_RRSeatInclineOpeCmd),SSW_RRSeatModeCmd(_SSW_RRSeatModeCmd),SSW_RLSeatBackrestTargetPos(_SSW_RLSeatBackrestTargetPos),SSW_RLSeatTiltTargetPos(_SSW_RLSeatTiltTargetPos),SSW_RLSeatOttomanAngleTargetPos(_SSW_RLSeatOttomanAngleTargetPos),SSW_RRSeatBackrestTargetPos(_SSW_RRSeatBackrestTargetPos),SSW_RRSeatTiltTargetPos(_SSW_RRSeatTiltTargetPos),SSW_RRSeatOttomanAngleTargetPos(_SSW_RRSeatOttomanAngleTargetPos) {}
	BDCSSW5(const BDCSSW5 &_x){
		SSW_RLSeatAdjForbidSt = _x.SSW_RLSeatAdjForbidSt;
		SSW_RRSeatAdjForbidSt = _x.SSW_RRSeatAdjForbidSt;
		SSW_RLSeatBackrestCurrentPst = _x.SSW_RLSeatBackrestCurrentPst;
		SSW_RLSeatTiltCurrentPst = _x.SSW_RLSeatTiltCurrentPst;
		SSW_RLSeatOttomanAngleCurrentPst = _x.SSW_RLSeatOttomanAngleCurrentPst;
		SSW_RRSeatBackrestCurrentPst = _x.SSW_RRSeatBackrestCurrentPst;
		SSW_RRSeatTiltCurrentPst = _x.SSW_RRSeatTiltCurrentPst;
		SSW_RRSeatOttomanAngleCurrentPst = _x.SSW_RRSeatOttomanAngleCurrentPst;
		SSW_RLSeatSlideXOpeCmd = _x.SSW_RLSeatSlideXOpeCmd;
		SSW_RLSeatSlideYOpeCmd = _x.SSW_RLSeatSlideYOpeCmd;
		SSW_RLSeatHeightOpeCmd = _x.SSW_RLSeatHeightOpeCmd;
		SSW_RLSeatBackrestOpeCmd = _x.SSW_RLSeatBackrestOpeCmd;
		SSW_RLSeatTiltOpeCmd = _x.SSW_RLSeatTiltOpeCmd;
		SSW_RLSeatCushionOpeCmd = _x.SSW_RLSeatCushionOpeCmd;
		SSW_RLSeatOttomanAngleOpeCmd = _x.SSW_RLSeatOttomanAngleOpeCmd;
		SSW_RLSeatOttomanExtentOpeCmd = _x.SSW_RLSeatOttomanExtentOpeCmd;
		SSW_RLSeatInclineOpeCmd = _x.SSW_RLSeatInclineOpeCmd;
		SSW_RLSeatModeCmd = _x.SSW_RLSeatModeCmd;
		SSW_RRSeatSlideXOpeCmd = _x.SSW_RRSeatSlideXOpeCmd;
		SSW_RRSeatSlideYOpeCmd = _x.SSW_RRSeatSlideYOpeCmd;
		SSW_RRSeatHeightOpeCmd = _x.SSW_RRSeatHeightOpeCmd;
		SSW_RRSeatBackrestOpeCmd = _x.SSW_RRSeatBackrestOpeCmd;
		SSW_RRSeatTiltOpeCmd = _x.SSW_RRSeatTiltOpeCmd;
		SSW_RRSeatCushionOpeCmd = _x.SSW_RRSeatCushionOpeCmd;
		SSW_RRSeatOttomanAngleOpeCmd = _x.SSW_RRSeatOttomanAngleOpeCmd;
		SSW_RRSeatOttomanExtentOpeCmd = _x.SSW_RRSeatOttomanExtentOpeCmd;
		SSW_RRSeatInclineOpeCmd = _x.SSW_RRSeatInclineOpeCmd;
		SSW_RRSeatModeCmd = _x.SSW_RRSeatModeCmd;
		SSW_RLSeatBackrestTargetPos = _x.SSW_RLSeatBackrestTargetPos;
		SSW_RLSeatTiltTargetPos = _x.SSW_RLSeatTiltTargetPos;
		SSW_RLSeatOttomanAngleTargetPos = _x.SSW_RLSeatOttomanAngleTargetPos;
		SSW_RRSeatBackrestTargetPos = _x.SSW_RRSeatBackrestTargetPos;
		SSW_RRSeatTiltTargetPos = _x.SSW_RRSeatTiltTargetPos;
		SSW_RRSeatOttomanAngleTargetPos = _x.SSW_RRSeatOttomanAngleTargetPos;
	}
	BDCSSW5(BDCSSW5 &&_x){
		SSW_RLSeatAdjForbidSt = std::move(_x.SSW_RLSeatAdjForbidSt);
		SSW_RRSeatAdjForbidSt = std::move(_x.SSW_RRSeatAdjForbidSt);
		SSW_RLSeatBackrestCurrentPst = std::move(_x.SSW_RLSeatBackrestCurrentPst);
		SSW_RLSeatTiltCurrentPst = std::move(_x.SSW_RLSeatTiltCurrentPst);
		SSW_RLSeatOttomanAngleCurrentPst = std::move(_x.SSW_RLSeatOttomanAngleCurrentPst);
		SSW_RRSeatBackrestCurrentPst = std::move(_x.SSW_RRSeatBackrestCurrentPst);
		SSW_RRSeatTiltCurrentPst = std::move(_x.SSW_RRSeatTiltCurrentPst);
		SSW_RRSeatOttomanAngleCurrentPst = std::move(_x.SSW_RRSeatOttomanAngleCurrentPst);
		SSW_RLSeatSlideXOpeCmd = std::move(_x.SSW_RLSeatSlideXOpeCmd);
		SSW_RLSeatSlideYOpeCmd = std::move(_x.SSW_RLSeatSlideYOpeCmd);
		SSW_RLSeatHeightOpeCmd = std::move(_x.SSW_RLSeatHeightOpeCmd);
		SSW_RLSeatBackrestOpeCmd = std::move(_x.SSW_RLSeatBackrestOpeCmd);
		SSW_RLSeatTiltOpeCmd = std::move(_x.SSW_RLSeatTiltOpeCmd);
		SSW_RLSeatCushionOpeCmd = std::move(_x.SSW_RLSeatCushionOpeCmd);
		SSW_RLSeatOttomanAngleOpeCmd = std::move(_x.SSW_RLSeatOttomanAngleOpeCmd);
		SSW_RLSeatOttomanExtentOpeCmd = std::move(_x.SSW_RLSeatOttomanExtentOpeCmd);
		SSW_RLSeatInclineOpeCmd = std::move(_x.SSW_RLSeatInclineOpeCmd);
		SSW_RLSeatModeCmd = std::move(_x.SSW_RLSeatModeCmd);
		SSW_RRSeatSlideXOpeCmd = std::move(_x.SSW_RRSeatSlideXOpeCmd);
		SSW_RRSeatSlideYOpeCmd = std::move(_x.SSW_RRSeatSlideYOpeCmd);
		SSW_RRSeatHeightOpeCmd = std::move(_x.SSW_RRSeatHeightOpeCmd);
		SSW_RRSeatBackrestOpeCmd = std::move(_x.SSW_RRSeatBackrestOpeCmd);
		SSW_RRSeatTiltOpeCmd = std::move(_x.SSW_RRSeatTiltOpeCmd);
		SSW_RRSeatCushionOpeCmd = std::move(_x.SSW_RRSeatCushionOpeCmd);
		SSW_RRSeatOttomanAngleOpeCmd = std::move(_x.SSW_RRSeatOttomanAngleOpeCmd);
		SSW_RRSeatOttomanExtentOpeCmd = std::move(_x.SSW_RRSeatOttomanExtentOpeCmd);
		SSW_RRSeatInclineOpeCmd = std::move(_x.SSW_RRSeatInclineOpeCmd);
		SSW_RRSeatModeCmd = std::move(_x.SSW_RRSeatModeCmd);
		SSW_RLSeatBackrestTargetPos = std::move(_x.SSW_RLSeatBackrestTargetPos);
		SSW_RLSeatTiltTargetPos = std::move(_x.SSW_RLSeatTiltTargetPos);
		SSW_RLSeatOttomanAngleTargetPos = std::move(_x.SSW_RLSeatOttomanAngleTargetPos);
		SSW_RRSeatBackrestTargetPos = std::move(_x.SSW_RRSeatBackrestTargetPos);
		SSW_RRSeatTiltTargetPos = std::move(_x.SSW_RRSeatTiltTargetPos);
		SSW_RRSeatOttomanAngleTargetPos = std::move(_x.SSW_RRSeatOttomanAngleTargetPos);
	}
	BDCSSW5& operator=(const BDCSSW5 &_x){
		SSW_RLSeatAdjForbidSt = _x.SSW_RLSeatAdjForbidSt;
		SSW_RRSeatAdjForbidSt = _x.SSW_RRSeatAdjForbidSt;
		SSW_RLSeatBackrestCurrentPst = _x.SSW_RLSeatBackrestCurrentPst;
		SSW_RLSeatTiltCurrentPst = _x.SSW_RLSeatTiltCurrentPst;
		SSW_RLSeatOttomanAngleCurrentPst = _x.SSW_RLSeatOttomanAngleCurrentPst;
		SSW_RRSeatBackrestCurrentPst = _x.SSW_RRSeatBackrestCurrentPst;
		SSW_RRSeatTiltCurrentPst = _x.SSW_RRSeatTiltCurrentPst;
		SSW_RRSeatOttomanAngleCurrentPst = _x.SSW_RRSeatOttomanAngleCurrentPst;
		SSW_RLSeatSlideXOpeCmd = _x.SSW_RLSeatSlideXOpeCmd;
		SSW_RLSeatSlideYOpeCmd = _x.SSW_RLSeatSlideYOpeCmd;
		SSW_RLSeatHeightOpeCmd = _x.SSW_RLSeatHeightOpeCmd;
		SSW_RLSeatBackrestOpeCmd = _x.SSW_RLSeatBackrestOpeCmd;
		SSW_RLSeatTiltOpeCmd = _x.SSW_RLSeatTiltOpeCmd;
		SSW_RLSeatCushionOpeCmd = _x.SSW_RLSeatCushionOpeCmd;
		SSW_RLSeatOttomanAngleOpeCmd = _x.SSW_RLSeatOttomanAngleOpeCmd;
		SSW_RLSeatOttomanExtentOpeCmd = _x.SSW_RLSeatOttomanExtentOpeCmd;
		SSW_RLSeatInclineOpeCmd = _x.SSW_RLSeatInclineOpeCmd;
		SSW_RLSeatModeCmd = _x.SSW_RLSeatModeCmd;
		SSW_RRSeatSlideXOpeCmd = _x.SSW_RRSeatSlideXOpeCmd;
		SSW_RRSeatSlideYOpeCmd = _x.SSW_RRSeatSlideYOpeCmd;
		SSW_RRSeatHeightOpeCmd = _x.SSW_RRSeatHeightOpeCmd;
		SSW_RRSeatBackrestOpeCmd = _x.SSW_RRSeatBackrestOpeCmd;
		SSW_RRSeatTiltOpeCmd = _x.SSW_RRSeatTiltOpeCmd;
		SSW_RRSeatCushionOpeCmd = _x.SSW_RRSeatCushionOpeCmd;
		SSW_RRSeatOttomanAngleOpeCmd = _x.SSW_RRSeatOttomanAngleOpeCmd;
		SSW_RRSeatOttomanExtentOpeCmd = _x.SSW_RRSeatOttomanExtentOpeCmd;
		SSW_RRSeatInclineOpeCmd = _x.SSW_RRSeatInclineOpeCmd;
		SSW_RRSeatModeCmd = _x.SSW_RRSeatModeCmd;
		SSW_RLSeatBackrestTargetPos = _x.SSW_RLSeatBackrestTargetPos;
		SSW_RLSeatTiltTargetPos = _x.SSW_RLSeatTiltTargetPos;
		SSW_RLSeatOttomanAngleTargetPos = _x.SSW_RLSeatOttomanAngleTargetPos;
		SSW_RRSeatBackrestTargetPos = _x.SSW_RRSeatBackrestTargetPos;
		SSW_RRSeatTiltTargetPos = _x.SSW_RRSeatTiltTargetPos;
		SSW_RRSeatOttomanAngleTargetPos = _x.SSW_RRSeatOttomanAngleTargetPos;
		return *this;
	}
	BDCSSW5& operator=(BDCSSW5 &&_x){
		SSW_RLSeatAdjForbidSt = std::move(_x.SSW_RLSeatAdjForbidSt);
		SSW_RRSeatAdjForbidSt = std::move(_x.SSW_RRSeatAdjForbidSt);
		SSW_RLSeatBackrestCurrentPst = std::move(_x.SSW_RLSeatBackrestCurrentPst);
		SSW_RLSeatTiltCurrentPst = std::move(_x.SSW_RLSeatTiltCurrentPst);
		SSW_RLSeatOttomanAngleCurrentPst = std::move(_x.SSW_RLSeatOttomanAngleCurrentPst);
		SSW_RRSeatBackrestCurrentPst = std::move(_x.SSW_RRSeatBackrestCurrentPst);
		SSW_RRSeatTiltCurrentPst = std::move(_x.SSW_RRSeatTiltCurrentPst);
		SSW_RRSeatOttomanAngleCurrentPst = std::move(_x.SSW_RRSeatOttomanAngleCurrentPst);
		SSW_RLSeatSlideXOpeCmd = std::move(_x.SSW_RLSeatSlideXOpeCmd);
		SSW_RLSeatSlideYOpeCmd = std::move(_x.SSW_RLSeatSlideYOpeCmd);
		SSW_RLSeatHeightOpeCmd = std::move(_x.SSW_RLSeatHeightOpeCmd);
		SSW_RLSeatBackrestOpeCmd = std::move(_x.SSW_RLSeatBackrestOpeCmd);
		SSW_RLSeatTiltOpeCmd = std::move(_x.SSW_RLSeatTiltOpeCmd);
		SSW_RLSeatCushionOpeCmd = std::move(_x.SSW_RLSeatCushionOpeCmd);
		SSW_RLSeatOttomanAngleOpeCmd = std::move(_x.SSW_RLSeatOttomanAngleOpeCmd);
		SSW_RLSeatOttomanExtentOpeCmd = std::move(_x.SSW_RLSeatOttomanExtentOpeCmd);
		SSW_RLSeatInclineOpeCmd = std::move(_x.SSW_RLSeatInclineOpeCmd);
		SSW_RLSeatModeCmd = std::move(_x.SSW_RLSeatModeCmd);
		SSW_RRSeatSlideXOpeCmd = std::move(_x.SSW_RRSeatSlideXOpeCmd);
		SSW_RRSeatSlideYOpeCmd = std::move(_x.SSW_RRSeatSlideYOpeCmd);
		SSW_RRSeatHeightOpeCmd = std::move(_x.SSW_RRSeatHeightOpeCmd);
		SSW_RRSeatBackrestOpeCmd = std::move(_x.SSW_RRSeatBackrestOpeCmd);
		SSW_RRSeatTiltOpeCmd = std::move(_x.SSW_RRSeatTiltOpeCmd);
		SSW_RRSeatCushionOpeCmd = std::move(_x.SSW_RRSeatCushionOpeCmd);
		SSW_RRSeatOttomanAngleOpeCmd = std::move(_x.SSW_RRSeatOttomanAngleOpeCmd);
		SSW_RRSeatOttomanExtentOpeCmd = std::move(_x.SSW_RRSeatOttomanExtentOpeCmd);
		SSW_RRSeatInclineOpeCmd = std::move(_x.SSW_RRSeatInclineOpeCmd);
		SSW_RRSeatModeCmd = std::move(_x.SSW_RRSeatModeCmd);
		SSW_RLSeatBackrestTargetPos = std::move(_x.SSW_RLSeatBackrestTargetPos);
		SSW_RLSeatTiltTargetPos = std::move(_x.SSW_RLSeatTiltTargetPos);
		SSW_RLSeatOttomanAngleTargetPos = std::move(_x.SSW_RLSeatOttomanAngleTargetPos);
		SSW_RRSeatBackrestTargetPos = std::move(_x.SSW_RRSeatBackrestTargetPos);
		SSW_RRSeatTiltTargetPos = std::move(_x.SSW_RRSeatTiltTargetPos);
		SSW_RRSeatOttomanAngleTargetPos = std::move(_x.SSW_RRSeatOttomanAngleTargetPos);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(SSW_RLSeatAdjForbidSt);
		fun(SSW_RRSeatAdjForbidSt);
		fun(SSW_RLSeatBackrestCurrentPst);
		fun(SSW_RLSeatTiltCurrentPst);
		fun(SSW_RLSeatOttomanAngleCurrentPst);
		fun(SSW_RRSeatBackrestCurrentPst);
		fun(SSW_RRSeatTiltCurrentPst);
		fun(SSW_RRSeatOttomanAngleCurrentPst);
		fun(SSW_RLSeatSlideXOpeCmd);
		fun(SSW_RLSeatSlideYOpeCmd);
		fun(SSW_RLSeatHeightOpeCmd);
		fun(SSW_RLSeatBackrestOpeCmd);
		fun(SSW_RLSeatTiltOpeCmd);
		fun(SSW_RLSeatCushionOpeCmd);
		fun(SSW_RLSeatOttomanAngleOpeCmd);
		fun(SSW_RLSeatOttomanExtentOpeCmd);
		fun(SSW_RLSeatInclineOpeCmd);
		fun(SSW_RLSeatModeCmd);
		fun(SSW_RRSeatSlideXOpeCmd);
		fun(SSW_RRSeatSlideYOpeCmd);
		fun(SSW_RRSeatHeightOpeCmd);
		fun(SSW_RRSeatBackrestOpeCmd);
		fun(SSW_RRSeatTiltOpeCmd);
		fun(SSW_RRSeatCushionOpeCmd);
		fun(SSW_RRSeatOttomanAngleOpeCmd);
		fun(SSW_RRSeatOttomanExtentOpeCmd);
		fun(SSW_RRSeatInclineOpeCmd);
		fun(SSW_RRSeatModeCmd);
		fun(SSW_RLSeatBackrestTargetPos);
		fun(SSW_RLSeatTiltTargetPos);
		fun(SSW_RLSeatOttomanAngleTargetPos);
		fun(SSW_RRSeatBackrestTargetPos);
		fun(SSW_RRSeatTiltTargetPos);
		fun(SSW_RRSeatOttomanAngleTargetPos);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(SSW_RLSeatAdjForbidSt);
		fun(SSW_RRSeatAdjForbidSt);
		fun(SSW_RLSeatBackrestCurrentPst);
		fun(SSW_RLSeatTiltCurrentPst);
		fun(SSW_RLSeatOttomanAngleCurrentPst);
		fun(SSW_RRSeatBackrestCurrentPst);
		fun(SSW_RRSeatTiltCurrentPst);
		fun(SSW_RRSeatOttomanAngleCurrentPst);
		fun(SSW_RLSeatSlideXOpeCmd);
		fun(SSW_RLSeatSlideYOpeCmd);
		fun(SSW_RLSeatHeightOpeCmd);
		fun(SSW_RLSeatBackrestOpeCmd);
		fun(SSW_RLSeatTiltOpeCmd);
		fun(SSW_RLSeatCushionOpeCmd);
		fun(SSW_RLSeatOttomanAngleOpeCmd);
		fun(SSW_RLSeatOttomanExtentOpeCmd);
		fun(SSW_RLSeatInclineOpeCmd);
		fun(SSW_RLSeatModeCmd);
		fun(SSW_RRSeatSlideXOpeCmd);
		fun(SSW_RRSeatSlideYOpeCmd);
		fun(SSW_RRSeatHeightOpeCmd);
		fun(SSW_RRSeatBackrestOpeCmd);
		fun(SSW_RRSeatTiltOpeCmd);
		fun(SSW_RRSeatCushionOpeCmd);
		fun(SSW_RRSeatOttomanAngleOpeCmd);
		fun(SSW_RRSeatOttomanExtentOpeCmd);
		fun(SSW_RRSeatInclineOpeCmd);
		fun(SSW_RRSeatModeCmd);
		fun(SSW_RLSeatBackrestTargetPos);
		fun(SSW_RLSeatTiltTargetPos);
		fun(SSW_RLSeatOttomanAngleTargetPos);
		fun(SSW_RRSeatBackrestTargetPos);
		fun(SSW_RRSeatTiltTargetPos);
		fun(SSW_RRSeatOttomanAngleTargetPos);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (SSW_RLSeatAdjForbidSt);
		fun << (SSW_RRSeatAdjForbidSt);
		fun << (SSW_RLSeatBackrestCurrentPst);
		fun << (SSW_RLSeatTiltCurrentPst);
		fun << (SSW_RLSeatOttomanAngleCurrentPst);
		fun << (SSW_RRSeatBackrestCurrentPst);
		fun << (SSW_RRSeatTiltCurrentPst);
		fun << (SSW_RRSeatOttomanAngleCurrentPst);
		fun << (SSW_RLSeatSlideXOpeCmd);
		fun << (SSW_RLSeatSlideYOpeCmd);
		fun << (SSW_RLSeatHeightOpeCmd);
		fun << (SSW_RLSeatBackrestOpeCmd);
		fun << (SSW_RLSeatTiltOpeCmd);
		fun << (SSW_RLSeatCushionOpeCmd);
		fun << (SSW_RLSeatOttomanAngleOpeCmd);
		fun << (SSW_RLSeatOttomanExtentOpeCmd);
		fun << (SSW_RLSeatInclineOpeCmd);
		fun << (SSW_RLSeatModeCmd);
		fun << (SSW_RRSeatSlideXOpeCmd);
		fun << (SSW_RRSeatSlideYOpeCmd);
		fun << (SSW_RRSeatHeightOpeCmd);
		fun << (SSW_RRSeatBackrestOpeCmd);
		fun << (SSW_RRSeatTiltOpeCmd);
		fun << (SSW_RRSeatCushionOpeCmd);
		fun << (SSW_RRSeatOttomanAngleOpeCmd);
		fun << (SSW_RRSeatOttomanExtentOpeCmd);
		fun << (SSW_RRSeatInclineOpeCmd);
		fun << (SSW_RRSeatModeCmd);
		fun << (SSW_RLSeatBackrestTargetPos);
		fun << (SSW_RLSeatTiltTargetPos);
		fun << (SSW_RLSeatOttomanAngleTargetPos);
		fun << (SSW_RRSeatBackrestTargetPos);
		fun << (SSW_RRSeatTiltTargetPos);
		fun << (SSW_RRSeatOttomanAngleTargetPos);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (SSW_RLSeatAdjForbidSt);
		fun >> (SSW_RRSeatAdjForbidSt);
		fun >> (SSW_RLSeatBackrestCurrentPst);
		fun >> (SSW_RLSeatTiltCurrentPst);
		fun >> (SSW_RLSeatOttomanAngleCurrentPst);
		fun >> (SSW_RRSeatBackrestCurrentPst);
		fun >> (SSW_RRSeatTiltCurrentPst);
		fun >> (SSW_RRSeatOttomanAngleCurrentPst);
		fun >> (SSW_RLSeatSlideXOpeCmd);
		fun >> (SSW_RLSeatSlideYOpeCmd);
		fun >> (SSW_RLSeatHeightOpeCmd);
		fun >> (SSW_RLSeatBackrestOpeCmd);
		fun >> (SSW_RLSeatTiltOpeCmd);
		fun >> (SSW_RLSeatCushionOpeCmd);
		fun >> (SSW_RLSeatOttomanAngleOpeCmd);
		fun >> (SSW_RLSeatOttomanExtentOpeCmd);
		fun >> (SSW_RLSeatInclineOpeCmd);
		fun >> (SSW_RLSeatModeCmd);
		fun >> (SSW_RRSeatSlideXOpeCmd);
		fun >> (SSW_RRSeatSlideYOpeCmd);
		fun >> (SSW_RRSeatHeightOpeCmd);
		fun >> (SSW_RRSeatBackrestOpeCmd);
		fun >> (SSW_RRSeatTiltOpeCmd);
		fun >> (SSW_RRSeatCushionOpeCmd);
		fun >> (SSW_RRSeatOttomanAngleOpeCmd);
		fun >> (SSW_RRSeatOttomanExtentOpeCmd);
		fun >> (SSW_RRSeatInclineOpeCmd);
		fun >> (SSW_RRSeatModeCmd);
		fun >> (SSW_RLSeatBackrestTargetPos);
		fun >> (SSW_RLSeatTiltTargetPos);
		fun >> (SSW_RLSeatOttomanAngleTargetPos);
		fun >> (SSW_RRSeatBackrestTargetPos);
		fun >> (SSW_RRSeatTiltTargetPos);
		fun >> (SSW_RRSeatOttomanAngleTargetPos);
	}
};

#endif //____BDCSSW5_H__
