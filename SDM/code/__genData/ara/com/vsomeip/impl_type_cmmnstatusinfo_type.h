#ifndef __ARA_COM_VSOMEIP__CMMNSTATUSINFO_TYPE_H__
#define __ARA_COM_VSOMEIP__CMMNSTATUSINFO_TYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct CmmnStatusInfo_Type {
public:
	std::uint8_t CmmnAccntID;
	std::uint8_t CmmnStatusDirct;
	std::uint8_t CmmnStatusRouteID;
/*
	CmmnStatusInfo_Type() {}
	~CmmnStatusInfo_Type() {}
	CmmnStatusInfo_Type(const std::uint8_t _CmmnAccntID,const std::uint8_t _CmmnStatusDirct,const std::uint8_t _CmmnStatusRouteID):CmmnAccntID(_CmmnAccntID),CmmnStatusDirct(_CmmnStatusDirct),CmmnStatusRouteID(_CmmnStatusRouteID) {}
	CmmnStatusInfo_Type(const CmmnStatusInfo_Type &_x){
		CmmnAccntID = _x.CmmnAccntID;
		CmmnStatusDirct = _x.CmmnStatusDirct;
		CmmnStatusRouteID = _x.CmmnStatusRouteID;
	}
	CmmnStatusInfo_Type(CmmnStatusInfo_Type &&_x){
		CmmnAccntID = std::move(_x.CmmnAccntID);
		CmmnStatusDirct = std::move(_x.CmmnStatusDirct);
		CmmnStatusRouteID = std::move(_x.CmmnStatusRouteID);
	}
	CmmnStatusInfo_Type& operator=(const CmmnStatusInfo_Type &_x){
		CmmnAccntID = _x.CmmnAccntID;
		CmmnStatusDirct = _x.CmmnStatusDirct;
		CmmnStatusRouteID = _x.CmmnStatusRouteID;
		return *this;
	}
	CmmnStatusInfo_Type& operator=(CmmnStatusInfo_Type &&_x){
		CmmnAccntID = std::move(_x.CmmnAccntID);
		CmmnStatusDirct = std::move(_x.CmmnStatusDirct);
		CmmnStatusRouteID = std::move(_x.CmmnStatusRouteID);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(CmmnAccntID);
		fun(CmmnStatusDirct);
		fun(CmmnStatusRouteID);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(CmmnAccntID);
		fun(CmmnStatusDirct);
		fun(CmmnStatusRouteID);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (CmmnAccntID);
		fun << (CmmnStatusDirct);
		fun << (CmmnStatusRouteID);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (CmmnAccntID);
		fun >> (CmmnStatusDirct);
		fun >> (CmmnStatusRouteID);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__CMMNSTATUSINFO_TYPE_H__
