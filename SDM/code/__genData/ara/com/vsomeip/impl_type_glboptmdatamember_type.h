#ifndef __ARA_COM_VSOMEIP__GLBOPTMDATAMEMBER_TYPE_H__
#define __ARA_COM_VSOMEIP__GLBOPTMDATAMEMBER_TYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct GlbOptmDataMember_Type {
public:
	std::uint16_t GlobalSegInfo;
	std::uint16_t GlobalOptmzRslt;
	std::uint16_t GlobalReqPwr;
	std::uint16_t ActRsltInGlobalSeg;
/*
	GlbOptmDataMember_Type() {}
	~GlbOptmDataMember_Type() {}
	GlbOptmDataMember_Type(const std::uint16_t _GlobalSegInfo,const std::uint16_t _GlobalOptmzRslt,const std::uint16_t _GlobalReqPwr,const std::uint16_t _ActRsltInGlobalSeg):GlobalSegInfo(_GlobalSegInfo),GlobalOptmzRslt(_GlobalOptmzRslt),GlobalReqPwr(_GlobalReqPwr),ActRsltInGlobalSeg(_ActRsltInGlobalSeg) {}
	GlbOptmDataMember_Type(const GlbOptmDataMember_Type &_x){
		GlobalSegInfo = _x.GlobalSegInfo;
		GlobalOptmzRslt = _x.GlobalOptmzRslt;
		GlobalReqPwr = _x.GlobalReqPwr;
		ActRsltInGlobalSeg = _x.ActRsltInGlobalSeg;
	}
	GlbOptmDataMember_Type(GlbOptmDataMember_Type &&_x){
		GlobalSegInfo = std::move(_x.GlobalSegInfo);
		GlobalOptmzRslt = std::move(_x.GlobalOptmzRslt);
		GlobalReqPwr = std::move(_x.GlobalReqPwr);
		ActRsltInGlobalSeg = std::move(_x.ActRsltInGlobalSeg);
	}
	GlbOptmDataMember_Type& operator=(const GlbOptmDataMember_Type &_x){
		GlobalSegInfo = _x.GlobalSegInfo;
		GlobalOptmzRslt = _x.GlobalOptmzRslt;
		GlobalReqPwr = _x.GlobalReqPwr;
		ActRsltInGlobalSeg = _x.ActRsltInGlobalSeg;
		return *this;
	}
	GlbOptmDataMember_Type& operator=(GlbOptmDataMember_Type &&_x){
		GlobalSegInfo = std::move(_x.GlobalSegInfo);
		GlobalOptmzRslt = std::move(_x.GlobalOptmzRslt);
		GlobalReqPwr = std::move(_x.GlobalReqPwr);
		ActRsltInGlobalSeg = std::move(_x.ActRsltInGlobalSeg);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(GlobalSegInfo);
		fun(GlobalOptmzRslt);
		fun(GlobalReqPwr);
		fun(ActRsltInGlobalSeg);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(GlobalSegInfo);
		fun(GlobalOptmzRslt);
		fun(GlobalReqPwr);
		fun(ActRsltInGlobalSeg);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (GlobalSegInfo);
		fun << (GlobalOptmzRslt);
		fun << (GlobalReqPwr);
		fun << (ActRsltInGlobalSeg);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (GlobalSegInfo);
		fun >> (GlobalOptmzRslt);
		fun >> (GlobalReqPwr);
		fun >> (ActRsltInGlobalSeg);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__GLBOPTMDATAMEMBER_TYPE_H__
