#ifndef __ARA_COM_VSOMEIP__CRRNTDRVCYCLFTRSBASINFO_TYPE_H__
#define __ARA_COM_VSOMEIP__CRRNTDRVCYCLFTRSBASINFO_TYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct CrrntDrvCyclFtrsBasInfo_Type {
public:
	std::uint8_t CrrntAccntID;
	std::uint8_t CrrntRouteDirct;
	std::uint8_t CrrntRouteID;
	std::uint16_t CrrntRouteFrq;
/*
	CrrntDrvCyclFtrsBasInfo_Type() {}
	~CrrntDrvCyclFtrsBasInfo_Type() {}
	CrrntDrvCyclFtrsBasInfo_Type(const std::uint8_t _CrrntAccntID,const std::uint8_t _CrrntRouteDirct,const std::uint8_t _CrrntRouteID,const std::uint16_t _CrrntRouteFrq):CrrntAccntID(_CrrntAccntID),CrrntRouteDirct(_CrrntRouteDirct),CrrntRouteID(_CrrntRouteID),CrrntRouteFrq(_CrrntRouteFrq) {}
	CrrntDrvCyclFtrsBasInfo_Type(const CrrntDrvCyclFtrsBasInfo_Type &_x){
		CrrntAccntID = _x.CrrntAccntID;
		CrrntRouteDirct = _x.CrrntRouteDirct;
		CrrntRouteID = _x.CrrntRouteID;
		CrrntRouteFrq = _x.CrrntRouteFrq;
	}
	CrrntDrvCyclFtrsBasInfo_Type(CrrntDrvCyclFtrsBasInfo_Type &&_x){
		CrrntAccntID = std::move(_x.CrrntAccntID);
		CrrntRouteDirct = std::move(_x.CrrntRouteDirct);
		CrrntRouteID = std::move(_x.CrrntRouteID);
		CrrntRouteFrq = std::move(_x.CrrntRouteFrq);
	}
	CrrntDrvCyclFtrsBasInfo_Type& operator=(const CrrntDrvCyclFtrsBasInfo_Type &_x){
		CrrntAccntID = _x.CrrntAccntID;
		CrrntRouteDirct = _x.CrrntRouteDirct;
		CrrntRouteID = _x.CrrntRouteID;
		CrrntRouteFrq = _x.CrrntRouteFrq;
		return *this;
	}
	CrrntDrvCyclFtrsBasInfo_Type& operator=(CrrntDrvCyclFtrsBasInfo_Type &&_x){
		CrrntAccntID = std::move(_x.CrrntAccntID);
		CrrntRouteDirct = std::move(_x.CrrntRouteDirct);
		CrrntRouteID = std::move(_x.CrrntRouteID);
		CrrntRouteFrq = std::move(_x.CrrntRouteFrq);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(CrrntAccntID);
		fun(CrrntRouteDirct);
		fun(CrrntRouteID);
		fun(CrrntRouteFrq);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(CrrntAccntID);
		fun(CrrntRouteDirct);
		fun(CrrntRouteID);
		fun(CrrntRouteFrq);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (CrrntAccntID);
		fun << (CrrntRouteDirct);
		fun << (CrrntRouteID);
		fun << (CrrntRouteFrq);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (CrrntAccntID);
		fun >> (CrrntRouteDirct);
		fun >> (CrrntRouteID);
		fun >> (CrrntRouteFrq);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__CRRNTDRVCYCLFTRSBASINFO_TYPE_H__
