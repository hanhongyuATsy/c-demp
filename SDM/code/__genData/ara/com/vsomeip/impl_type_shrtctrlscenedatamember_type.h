#ifndef __ARA_COM_VSOMEIP__SHRTCTRLSCENEDATAMEMBER_TYPE_H__
#define __ARA_COM_VSOMEIP__SHRTCTRLSCENEDATAMEMBER_TYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct ShrtCtrlSceneDataMember_Type {
public:
	std::uint16_t SocTrgtFllwError;
	std::uint16_t EmgShrtTimeSegInfo;
	std::uint16_t ActSocInEmgShrtTime;
	std::uint16_t PrdcMdlInEmgShrtTime;
	std::uint16_t ActMdlInEmgShrtTime;
	std::uint16_t PrdcTrqDisInEmgShrtTimeDCU;
	std::uint16_t ActTrqDisInEmgShrtTimeDCU;
	std::uint16_t PrdcTrqDisInEmgShrtTimeGCU;
	std::uint16_t ActTrqDisInEmgShrtTimeGCU;
	std::uint16_t PrdcTrqDisInEmgShrtTimeEng;
	std::uint16_t ActTrqDisInEmgShrtTimeEng;
	std::uint16_t PrdcTrqDisInEmgShrtTimeP4;
	std::uint16_t ActTrqDisInEmgShrtTimeP4;
	std::uint16_t TrgtSocInEmgShrtTime;
	std::uint16_t ReqTorqInEmgShrtTime;
/*
	ShrtCtrlSceneDataMember_Type() {}
	~ShrtCtrlSceneDataMember_Type() {}
	ShrtCtrlSceneDataMember_Type(const std::uint16_t _SocTrgtFllwError,const std::uint16_t _EmgShrtTimeSegInfo,const std::uint16_t _ActSocInEmgShrtTime,const std::uint16_t _PrdcMdlInEmgShrtTime,const std::uint16_t _ActMdlInEmgShrtTime,const std::uint16_t _PrdcTrqDisInEmgShrtTimeDCU,const std::uint16_t _ActTrqDisInEmgShrtTimeDCU,const std::uint16_t _PrdcTrqDisInEmgShrtTimeGCU,const std::uint16_t _ActTrqDisInEmgShrtTimeGCU,const std::uint16_t _PrdcTrqDisInEmgShrtTimeEng,const std::uint16_t _ActTrqDisInEmgShrtTimeEng,const std::uint16_t _PrdcTrqDisInEmgShrtTimeP4,const std::uint16_t _ActTrqDisInEmgShrtTimeP4,const std::uint16_t _TrgtSocInEmgShrtTime,const std::uint16_t _ReqTorqInEmgShrtTime):SocTrgtFllwError(_SocTrgtFllwError),EmgShrtTimeSegInfo(_EmgShrtTimeSegInfo),ActSocInEmgShrtTime(_ActSocInEmgShrtTime),PrdcMdlInEmgShrtTime(_PrdcMdlInEmgShrtTime),ActMdlInEmgShrtTime(_ActMdlInEmgShrtTime),PrdcTrqDisInEmgShrtTimeDCU(_PrdcTrqDisInEmgShrtTimeDCU),ActTrqDisInEmgShrtTimeDCU(_ActTrqDisInEmgShrtTimeDCU),PrdcTrqDisInEmgShrtTimeGCU(_PrdcTrqDisInEmgShrtTimeGCU),ActTrqDisInEmgShrtTimeGCU(_ActTrqDisInEmgShrtTimeGCU),PrdcTrqDisInEmgShrtTimeEng(_PrdcTrqDisInEmgShrtTimeEng),ActTrqDisInEmgShrtTimeEng(_ActTrqDisInEmgShrtTimeEng),PrdcTrqDisInEmgShrtTimeP4(_PrdcTrqDisInEmgShrtTimeP4),ActTrqDisInEmgShrtTimeP4(_ActTrqDisInEmgShrtTimeP4),TrgtSocInEmgShrtTime(_TrgtSocInEmgShrtTime),ReqTorqInEmgShrtTime(_ReqTorqInEmgShrtTime) {}
	ShrtCtrlSceneDataMember_Type(const ShrtCtrlSceneDataMember_Type &_x){
		SocTrgtFllwError = _x.SocTrgtFllwError;
		EmgShrtTimeSegInfo = _x.EmgShrtTimeSegInfo;
		ActSocInEmgShrtTime = _x.ActSocInEmgShrtTime;
		PrdcMdlInEmgShrtTime = _x.PrdcMdlInEmgShrtTime;
		ActMdlInEmgShrtTime = _x.ActMdlInEmgShrtTime;
		PrdcTrqDisInEmgShrtTimeDCU = _x.PrdcTrqDisInEmgShrtTimeDCU;
		ActTrqDisInEmgShrtTimeDCU = _x.ActTrqDisInEmgShrtTimeDCU;
		PrdcTrqDisInEmgShrtTimeGCU = _x.PrdcTrqDisInEmgShrtTimeGCU;
		ActTrqDisInEmgShrtTimeGCU = _x.ActTrqDisInEmgShrtTimeGCU;
		PrdcTrqDisInEmgShrtTimeEng = _x.PrdcTrqDisInEmgShrtTimeEng;
		ActTrqDisInEmgShrtTimeEng = _x.ActTrqDisInEmgShrtTimeEng;
		PrdcTrqDisInEmgShrtTimeP4 = _x.PrdcTrqDisInEmgShrtTimeP4;
		ActTrqDisInEmgShrtTimeP4 = _x.ActTrqDisInEmgShrtTimeP4;
		TrgtSocInEmgShrtTime = _x.TrgtSocInEmgShrtTime;
		ReqTorqInEmgShrtTime = _x.ReqTorqInEmgShrtTime;
	}
	ShrtCtrlSceneDataMember_Type(ShrtCtrlSceneDataMember_Type &&_x){
		SocTrgtFllwError = std::move(_x.SocTrgtFllwError);
		EmgShrtTimeSegInfo = std::move(_x.EmgShrtTimeSegInfo);
		ActSocInEmgShrtTime = std::move(_x.ActSocInEmgShrtTime);
		PrdcMdlInEmgShrtTime = std::move(_x.PrdcMdlInEmgShrtTime);
		ActMdlInEmgShrtTime = std::move(_x.ActMdlInEmgShrtTime);
		PrdcTrqDisInEmgShrtTimeDCU = std::move(_x.PrdcTrqDisInEmgShrtTimeDCU);
		ActTrqDisInEmgShrtTimeDCU = std::move(_x.ActTrqDisInEmgShrtTimeDCU);
		PrdcTrqDisInEmgShrtTimeGCU = std::move(_x.PrdcTrqDisInEmgShrtTimeGCU);
		ActTrqDisInEmgShrtTimeGCU = std::move(_x.ActTrqDisInEmgShrtTimeGCU);
		PrdcTrqDisInEmgShrtTimeEng = std::move(_x.PrdcTrqDisInEmgShrtTimeEng);
		ActTrqDisInEmgShrtTimeEng = std::move(_x.ActTrqDisInEmgShrtTimeEng);
		PrdcTrqDisInEmgShrtTimeP4 = std::move(_x.PrdcTrqDisInEmgShrtTimeP4);
		ActTrqDisInEmgShrtTimeP4 = std::move(_x.ActTrqDisInEmgShrtTimeP4);
		TrgtSocInEmgShrtTime = std::move(_x.TrgtSocInEmgShrtTime);
		ReqTorqInEmgShrtTime = std::move(_x.ReqTorqInEmgShrtTime);
	}
	ShrtCtrlSceneDataMember_Type& operator=(const ShrtCtrlSceneDataMember_Type &_x){
		SocTrgtFllwError = _x.SocTrgtFllwError;
		EmgShrtTimeSegInfo = _x.EmgShrtTimeSegInfo;
		ActSocInEmgShrtTime = _x.ActSocInEmgShrtTime;
		PrdcMdlInEmgShrtTime = _x.PrdcMdlInEmgShrtTime;
		ActMdlInEmgShrtTime = _x.ActMdlInEmgShrtTime;
		PrdcTrqDisInEmgShrtTimeDCU = _x.PrdcTrqDisInEmgShrtTimeDCU;
		ActTrqDisInEmgShrtTimeDCU = _x.ActTrqDisInEmgShrtTimeDCU;
		PrdcTrqDisInEmgShrtTimeGCU = _x.PrdcTrqDisInEmgShrtTimeGCU;
		ActTrqDisInEmgShrtTimeGCU = _x.ActTrqDisInEmgShrtTimeGCU;
		PrdcTrqDisInEmgShrtTimeEng = _x.PrdcTrqDisInEmgShrtTimeEng;
		ActTrqDisInEmgShrtTimeEng = _x.ActTrqDisInEmgShrtTimeEng;
		PrdcTrqDisInEmgShrtTimeP4 = _x.PrdcTrqDisInEmgShrtTimeP4;
		ActTrqDisInEmgShrtTimeP4 = _x.ActTrqDisInEmgShrtTimeP4;
		TrgtSocInEmgShrtTime = _x.TrgtSocInEmgShrtTime;
		ReqTorqInEmgShrtTime = _x.ReqTorqInEmgShrtTime;
		return *this;
	}
	ShrtCtrlSceneDataMember_Type& operator=(ShrtCtrlSceneDataMember_Type &&_x){
		SocTrgtFllwError = std::move(_x.SocTrgtFllwError);
		EmgShrtTimeSegInfo = std::move(_x.EmgShrtTimeSegInfo);
		ActSocInEmgShrtTime = std::move(_x.ActSocInEmgShrtTime);
		PrdcMdlInEmgShrtTime = std::move(_x.PrdcMdlInEmgShrtTime);
		ActMdlInEmgShrtTime = std::move(_x.ActMdlInEmgShrtTime);
		PrdcTrqDisInEmgShrtTimeDCU = std::move(_x.PrdcTrqDisInEmgShrtTimeDCU);
		ActTrqDisInEmgShrtTimeDCU = std::move(_x.ActTrqDisInEmgShrtTimeDCU);
		PrdcTrqDisInEmgShrtTimeGCU = std::move(_x.PrdcTrqDisInEmgShrtTimeGCU);
		ActTrqDisInEmgShrtTimeGCU = std::move(_x.ActTrqDisInEmgShrtTimeGCU);
		PrdcTrqDisInEmgShrtTimeEng = std::move(_x.PrdcTrqDisInEmgShrtTimeEng);
		ActTrqDisInEmgShrtTimeEng = std::move(_x.ActTrqDisInEmgShrtTimeEng);
		PrdcTrqDisInEmgShrtTimeP4 = std::move(_x.PrdcTrqDisInEmgShrtTimeP4);
		ActTrqDisInEmgShrtTimeP4 = std::move(_x.ActTrqDisInEmgShrtTimeP4);
		TrgtSocInEmgShrtTime = std::move(_x.TrgtSocInEmgShrtTime);
		ReqTorqInEmgShrtTime = std::move(_x.ReqTorqInEmgShrtTime);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(SocTrgtFllwError);
		fun(EmgShrtTimeSegInfo);
		fun(ActSocInEmgShrtTime);
		fun(PrdcMdlInEmgShrtTime);
		fun(ActMdlInEmgShrtTime);
		fun(PrdcTrqDisInEmgShrtTimeDCU);
		fun(ActTrqDisInEmgShrtTimeDCU);
		fun(PrdcTrqDisInEmgShrtTimeGCU);
		fun(ActTrqDisInEmgShrtTimeGCU);
		fun(PrdcTrqDisInEmgShrtTimeEng);
		fun(ActTrqDisInEmgShrtTimeEng);
		fun(PrdcTrqDisInEmgShrtTimeP4);
		fun(ActTrqDisInEmgShrtTimeP4);
		fun(TrgtSocInEmgShrtTime);
		fun(ReqTorqInEmgShrtTime);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(SocTrgtFllwError);
		fun(EmgShrtTimeSegInfo);
		fun(ActSocInEmgShrtTime);
		fun(PrdcMdlInEmgShrtTime);
		fun(ActMdlInEmgShrtTime);
		fun(PrdcTrqDisInEmgShrtTimeDCU);
		fun(ActTrqDisInEmgShrtTimeDCU);
		fun(PrdcTrqDisInEmgShrtTimeGCU);
		fun(ActTrqDisInEmgShrtTimeGCU);
		fun(PrdcTrqDisInEmgShrtTimeEng);
		fun(ActTrqDisInEmgShrtTimeEng);
		fun(PrdcTrqDisInEmgShrtTimeP4);
		fun(ActTrqDisInEmgShrtTimeP4);
		fun(TrgtSocInEmgShrtTime);
		fun(ReqTorqInEmgShrtTime);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (SocTrgtFllwError);
		fun << (EmgShrtTimeSegInfo);
		fun << (ActSocInEmgShrtTime);
		fun << (PrdcMdlInEmgShrtTime);
		fun << (ActMdlInEmgShrtTime);
		fun << (PrdcTrqDisInEmgShrtTimeDCU);
		fun << (ActTrqDisInEmgShrtTimeDCU);
		fun << (PrdcTrqDisInEmgShrtTimeGCU);
		fun << (ActTrqDisInEmgShrtTimeGCU);
		fun << (PrdcTrqDisInEmgShrtTimeEng);
		fun << (ActTrqDisInEmgShrtTimeEng);
		fun << (PrdcTrqDisInEmgShrtTimeP4);
		fun << (ActTrqDisInEmgShrtTimeP4);
		fun << (TrgtSocInEmgShrtTime);
		fun << (ReqTorqInEmgShrtTime);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (SocTrgtFllwError);
		fun >> (EmgShrtTimeSegInfo);
		fun >> (ActSocInEmgShrtTime);
		fun >> (PrdcMdlInEmgShrtTime);
		fun >> (ActMdlInEmgShrtTime);
		fun >> (PrdcTrqDisInEmgShrtTimeDCU);
		fun >> (ActTrqDisInEmgShrtTimeDCU);
		fun >> (PrdcTrqDisInEmgShrtTimeGCU);
		fun >> (ActTrqDisInEmgShrtTimeGCU);
		fun >> (PrdcTrqDisInEmgShrtTimeEng);
		fun >> (ActTrqDisInEmgShrtTimeEng);
		fun >> (PrdcTrqDisInEmgShrtTimeP4);
		fun >> (ActTrqDisInEmgShrtTimeP4);
		fun >> (TrgtSocInEmgShrtTime);
		fun >> (ReqTorqInEmgShrtTime);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__SHRTCTRLSCENEDATAMEMBER_TYPE_H__
