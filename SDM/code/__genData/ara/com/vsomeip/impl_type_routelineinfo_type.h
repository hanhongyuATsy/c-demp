#ifndef __ARA_COM_VSOMEIP__ROUTELINEINFO_TYPE_H__
#define __ARA_COM_VSOMEIP__ROUTELINEINFO_TYPE_H__


#include "ara/com/vsomeip/impl_type_def_linetypeinf_type.h"
#include "ara/com/vsomeip/impl_type_def_linetypedis_type.h"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct RouteLineInfo_Type {
public:
	bool DEF_LineTypeSt;
	ara::com::vsomeip::DEF_LineTypeInf_Type DEF_LineTypeInf;
	ara::com::vsomeip::DEF_LineTypeDis_Type DEF_LineTypeDis;
/*
	RouteLineInfo_Type() {}
	~RouteLineInfo_Type() {}
	RouteLineInfo_Type(const bool _DEF_LineTypeSt,const ara::com::vsomeip::DEF_LineTypeInf_Type _DEF_LineTypeInf,const ara::com::vsomeip::DEF_LineTypeDis_Type _DEF_LineTypeDis):DEF_LineTypeSt(_DEF_LineTypeSt),DEF_LineTypeInf(_DEF_LineTypeInf),DEF_LineTypeDis(_DEF_LineTypeDis) {}
	RouteLineInfo_Type(const RouteLineInfo_Type &_x){
		DEF_LineTypeSt = _x.DEF_LineTypeSt;
		DEF_LineTypeInf = _x.DEF_LineTypeInf;
		DEF_LineTypeDis = _x.DEF_LineTypeDis;
	}
	RouteLineInfo_Type(RouteLineInfo_Type &&_x){
		DEF_LineTypeSt = std::move(_x.DEF_LineTypeSt);
		DEF_LineTypeInf = std::move(_x.DEF_LineTypeInf);
		DEF_LineTypeDis = std::move(_x.DEF_LineTypeDis);
	}
	RouteLineInfo_Type& operator=(const RouteLineInfo_Type &_x){
		DEF_LineTypeSt = _x.DEF_LineTypeSt;
		DEF_LineTypeInf = _x.DEF_LineTypeInf;
		DEF_LineTypeDis = _x.DEF_LineTypeDis;
		return *this;
	}
	RouteLineInfo_Type& operator=(RouteLineInfo_Type &&_x){
		DEF_LineTypeSt = std::move(_x.DEF_LineTypeSt);
		DEF_LineTypeInf = std::move(_x.DEF_LineTypeInf);
		DEF_LineTypeDis = std::move(_x.DEF_LineTypeDis);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(DEF_LineTypeSt);
		fun(DEF_LineTypeInf);
		fun(DEF_LineTypeDis);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(DEF_LineTypeSt);
		fun(DEF_LineTypeInf);
		fun(DEF_LineTypeDis);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (DEF_LineTypeSt);
		fun << (DEF_LineTypeInf);
		fun << (DEF_LineTypeDis);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (DEF_LineTypeSt);
		fun >> (DEF_LineTypeInf);
		fun >> (DEF_LineTypeDis);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__ROUTELINEINFO_TYPE_H__
