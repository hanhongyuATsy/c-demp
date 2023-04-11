#ifndef __ARA_COM_VSOMEIP__ROADCLASSINFO_TYPE_H__
#define __ARA_COM_VSOMEIP__ROADCLASSINFO_TYPE_H__


#include "ara/com/vsomeip/impl_type_def_roadclass_type.h"
#include "ara/com/vsomeip/impl_type_def_roadclassdis_type.h"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct RoadClassInfo_Type {
public:
	ara::com::vsomeip::DEF_RoadClass_Type DEF_RoadClass;
	ara::com::vsomeip::DEF_RoadClassDis_Type DEF_RoadClassDis;
/*
	RoadClassInfo_Type() {}
	~RoadClassInfo_Type() {}
	RoadClassInfo_Type(const ara::com::vsomeip::DEF_RoadClass_Type _DEF_RoadClass,const ara::com::vsomeip::DEF_RoadClassDis_Type _DEF_RoadClassDis):DEF_RoadClass(_DEF_RoadClass),DEF_RoadClassDis(_DEF_RoadClassDis) {}
	RoadClassInfo_Type(const RoadClassInfo_Type &_x){
		DEF_RoadClass = _x.DEF_RoadClass;
		DEF_RoadClassDis = _x.DEF_RoadClassDis;
	}
	RoadClassInfo_Type(RoadClassInfo_Type &&_x){
		DEF_RoadClass = std::move(_x.DEF_RoadClass);
		DEF_RoadClassDis = std::move(_x.DEF_RoadClassDis);
	}
	RoadClassInfo_Type& operator=(const RoadClassInfo_Type &_x){
		DEF_RoadClass = _x.DEF_RoadClass;
		DEF_RoadClassDis = _x.DEF_RoadClassDis;
		return *this;
	}
	RoadClassInfo_Type& operator=(RoadClassInfo_Type &&_x){
		DEF_RoadClass = std::move(_x.DEF_RoadClass);
		DEF_RoadClassDis = std::move(_x.DEF_RoadClassDis);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(DEF_RoadClass);
		fun(DEF_RoadClassDis);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(DEF_RoadClass);
		fun(DEF_RoadClassDis);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (DEF_RoadClass);
		fun << (DEF_RoadClassDis);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (DEF_RoadClass);
		fun >> (DEF_RoadClassDis);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__ROADCLASSINFO_TYPE_H__
