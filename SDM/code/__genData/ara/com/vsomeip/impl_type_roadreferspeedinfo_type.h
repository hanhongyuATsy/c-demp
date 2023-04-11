#ifndef __ARA_COM_VSOMEIP__ROADREFERSPEEDINFO_TYPE_H__
#define __ARA_COM_VSOMEIP__ROADREFERSPEEDINFO_TYPE_H__


#include "ara/com/vsomeip/impl_type_def_vehspdrefer_type.h"
#include "ara/com/vsomeip/impl_type_def_vehspdreferdis_type.h"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct RoadReferSpeedInfo_Type {
public:
	ara::com::vsomeip::DEF_VehSpdRefer_Type DEF_VehSpdRefer;
	bool DEF_VehSpdReferST;
	ara::com::vsomeip::DEF_VehSpdReferDis_Type DEF_VehSpdReferDis;
/*
	RoadReferSpeedInfo_Type() {}
	~RoadReferSpeedInfo_Type() {}
	RoadReferSpeedInfo_Type(const ara::com::vsomeip::DEF_VehSpdRefer_Type _DEF_VehSpdRefer,const bool _DEF_VehSpdReferST,const ara::com::vsomeip::DEF_VehSpdReferDis_Type _DEF_VehSpdReferDis):DEF_VehSpdRefer(_DEF_VehSpdRefer),DEF_VehSpdReferST(_DEF_VehSpdReferST),DEF_VehSpdReferDis(_DEF_VehSpdReferDis) {}
	RoadReferSpeedInfo_Type(const RoadReferSpeedInfo_Type &_x){
		DEF_VehSpdRefer = _x.DEF_VehSpdRefer;
		DEF_VehSpdReferST = _x.DEF_VehSpdReferST;
		DEF_VehSpdReferDis = _x.DEF_VehSpdReferDis;
	}
	RoadReferSpeedInfo_Type(RoadReferSpeedInfo_Type &&_x){
		DEF_VehSpdRefer = std::move(_x.DEF_VehSpdRefer);
		DEF_VehSpdReferST = std::move(_x.DEF_VehSpdReferST);
		DEF_VehSpdReferDis = std::move(_x.DEF_VehSpdReferDis);
	}
	RoadReferSpeedInfo_Type& operator=(const RoadReferSpeedInfo_Type &_x){
		DEF_VehSpdRefer = _x.DEF_VehSpdRefer;
		DEF_VehSpdReferST = _x.DEF_VehSpdReferST;
		DEF_VehSpdReferDis = _x.DEF_VehSpdReferDis;
		return *this;
	}
	RoadReferSpeedInfo_Type& operator=(RoadReferSpeedInfo_Type &&_x){
		DEF_VehSpdRefer = std::move(_x.DEF_VehSpdRefer);
		DEF_VehSpdReferST = std::move(_x.DEF_VehSpdReferST);
		DEF_VehSpdReferDis = std::move(_x.DEF_VehSpdReferDis);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(DEF_VehSpdRefer);
		fun(DEF_VehSpdReferST);
		fun(DEF_VehSpdReferDis);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(DEF_VehSpdRefer);
		fun(DEF_VehSpdReferST);
		fun(DEF_VehSpdReferDis);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (DEF_VehSpdRefer);
		fun << (DEF_VehSpdReferST);
		fun << (DEF_VehSpdReferDis);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (DEF_VehSpdRefer);
		fun >> (DEF_VehSpdReferST);
		fun >> (DEF_VehSpdReferDis);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__ROADREFERSPEEDINFO_TYPE_H__
