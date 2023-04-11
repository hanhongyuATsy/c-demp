#ifndef __ARA_COM_VSOMEIP__CMMNPATHDATAMEMBER_TYPE_H__
#define __ARA_COM_VSOMEIP__CMMNPATHDATAMEMBER_TYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct CmmnPathDataMember_Type {
public:
	std::uint16_t CmmnRouteSegInfo;
	std::uint8_t CmmnRoutePassSpd;
	std::uint8_t CmmnRouteBassSpd;
	std::uint16_t CmmnRouteReqPwr;
	std::uint8_t CmmnRouteStpPntInfo;
/*
	CmmnPathDataMember_Type() {}
	~CmmnPathDataMember_Type() {}
	CmmnPathDataMember_Type(const std::uint16_t _CmmnRouteSegInfo,const std::uint8_t _CmmnRoutePassSpd,const std::uint8_t _CmmnRouteBassSpd,const std::uint16_t _CmmnRouteReqPwr,const std::uint8_t _CmmnRouteStpPntInfo):CmmnRouteSegInfo(_CmmnRouteSegInfo),CmmnRoutePassSpd(_CmmnRoutePassSpd),CmmnRouteBassSpd(_CmmnRouteBassSpd),CmmnRouteReqPwr(_CmmnRouteReqPwr),CmmnRouteStpPntInfo(_CmmnRouteStpPntInfo) {}
	CmmnPathDataMember_Type(const CmmnPathDataMember_Type &_x){
		CmmnRouteSegInfo = _x.CmmnRouteSegInfo;
		CmmnRoutePassSpd = _x.CmmnRoutePassSpd;
		CmmnRouteBassSpd = _x.CmmnRouteBassSpd;
		CmmnRouteReqPwr = _x.CmmnRouteReqPwr;
		CmmnRouteStpPntInfo = _x.CmmnRouteStpPntInfo;
	}
	CmmnPathDataMember_Type(CmmnPathDataMember_Type &&_x){
		CmmnRouteSegInfo = std::move(_x.CmmnRouteSegInfo);
		CmmnRoutePassSpd = std::move(_x.CmmnRoutePassSpd);
		CmmnRouteBassSpd = std::move(_x.CmmnRouteBassSpd);
		CmmnRouteReqPwr = std::move(_x.CmmnRouteReqPwr);
		CmmnRouteStpPntInfo = std::move(_x.CmmnRouteStpPntInfo);
	}
	CmmnPathDataMember_Type& operator=(const CmmnPathDataMember_Type &_x){
		CmmnRouteSegInfo = _x.CmmnRouteSegInfo;
		CmmnRoutePassSpd = _x.CmmnRoutePassSpd;
		CmmnRouteBassSpd = _x.CmmnRouteBassSpd;
		CmmnRouteReqPwr = _x.CmmnRouteReqPwr;
		CmmnRouteStpPntInfo = _x.CmmnRouteStpPntInfo;
		return *this;
	}
	CmmnPathDataMember_Type& operator=(CmmnPathDataMember_Type &&_x){
		CmmnRouteSegInfo = std::move(_x.CmmnRouteSegInfo);
		CmmnRoutePassSpd = std::move(_x.CmmnRoutePassSpd);
		CmmnRouteBassSpd = std::move(_x.CmmnRouteBassSpd);
		CmmnRouteReqPwr = std::move(_x.CmmnRouteReqPwr);
		CmmnRouteStpPntInfo = std::move(_x.CmmnRouteStpPntInfo);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(CmmnRouteSegInfo);
		fun(CmmnRoutePassSpd);
		fun(CmmnRouteBassSpd);
		fun(CmmnRouteReqPwr);
		fun(CmmnRouteStpPntInfo);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(CmmnRouteSegInfo);
		fun(CmmnRoutePassSpd);
		fun(CmmnRouteBassSpd);
		fun(CmmnRouteReqPwr);
		fun(CmmnRouteStpPntInfo);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (CmmnRouteSegInfo);
		fun << (CmmnRoutePassSpd);
		fun << (CmmnRouteBassSpd);
		fun << (CmmnRouteReqPwr);
		fun << (CmmnRouteStpPntInfo);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (CmmnRouteSegInfo);
		fun >> (CmmnRoutePassSpd);
		fun >> (CmmnRouteBassSpd);
		fun >> (CmmnRouteReqPwr);
		fun >> (CmmnRouteStpPntInfo);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__CMMNPATHDATAMEMBER_TYPE_H__
