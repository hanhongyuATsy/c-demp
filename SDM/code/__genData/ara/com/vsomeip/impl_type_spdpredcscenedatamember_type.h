#ifndef __ARA_COM_VSOMEIP__SPDPREDCSCENEDATAMEMBER_TYPE_H__
#define __ARA_COM_VSOMEIP__SPDPREDCSCENEDATAMEMBER_TYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct SpdPredcSceneDataMember_Type {
public:
	std::uint16_t SpdPredctDomnSegInfo;
	std::uint16_t SpdPredctRslt;
	std::uint16_t SpdPredctInput;
	std::uint16_t ActlSpdInPredctDomn;
/*
	SpdPredcSceneDataMember_Type() {}
	~SpdPredcSceneDataMember_Type() {}
	SpdPredcSceneDataMember_Type(const std::uint16_t _SpdPredctDomnSegInfo,const std::uint16_t _SpdPredctRslt,const std::uint16_t _SpdPredctInput,const std::uint16_t _ActlSpdInPredctDomn):SpdPredctDomnSegInfo(_SpdPredctDomnSegInfo),SpdPredctRslt(_SpdPredctRslt),SpdPredctInput(_SpdPredctInput),ActlSpdInPredctDomn(_ActlSpdInPredctDomn) {}
	SpdPredcSceneDataMember_Type(const SpdPredcSceneDataMember_Type &_x){
		SpdPredctDomnSegInfo = _x.SpdPredctDomnSegInfo;
		SpdPredctRslt = _x.SpdPredctRslt;
		SpdPredctInput = _x.SpdPredctInput;
		ActlSpdInPredctDomn = _x.ActlSpdInPredctDomn;
	}
	SpdPredcSceneDataMember_Type(SpdPredcSceneDataMember_Type &&_x){
		SpdPredctDomnSegInfo = std::move(_x.SpdPredctDomnSegInfo);
		SpdPredctRslt = std::move(_x.SpdPredctRslt);
		SpdPredctInput = std::move(_x.SpdPredctInput);
		ActlSpdInPredctDomn = std::move(_x.ActlSpdInPredctDomn);
	}
	SpdPredcSceneDataMember_Type& operator=(const SpdPredcSceneDataMember_Type &_x){
		SpdPredctDomnSegInfo = _x.SpdPredctDomnSegInfo;
		SpdPredctRslt = _x.SpdPredctRslt;
		SpdPredctInput = _x.SpdPredctInput;
		ActlSpdInPredctDomn = _x.ActlSpdInPredctDomn;
		return *this;
	}
	SpdPredcSceneDataMember_Type& operator=(SpdPredcSceneDataMember_Type &&_x){
		SpdPredctDomnSegInfo = std::move(_x.SpdPredctDomnSegInfo);
		SpdPredctRslt = std::move(_x.SpdPredctRslt);
		SpdPredctInput = std::move(_x.SpdPredctInput);
		ActlSpdInPredctDomn = std::move(_x.ActlSpdInPredctDomn);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(SpdPredctDomnSegInfo);
		fun(SpdPredctRslt);
		fun(SpdPredctInput);
		fun(ActlSpdInPredctDomn);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(SpdPredctDomnSegInfo);
		fun(SpdPredctRslt);
		fun(SpdPredctInput);
		fun(ActlSpdInPredctDomn);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (SpdPredctDomnSegInfo);
		fun << (SpdPredctRslt);
		fun << (SpdPredctInput);
		fun << (ActlSpdInPredctDomn);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (SpdPredctDomnSegInfo);
		fun >> (SpdPredctRslt);
		fun >> (SpdPredctInput);
		fun >> (ActlSpdInPredctDomn);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__SPDPREDCSCENEDATAMEMBER_TYPE_H__
