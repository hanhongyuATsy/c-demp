#ifndef __ARA_COM_VSOMEIP__NEARESTEXENINFO_TYPE_H__
#define __ARA_COM_VSOMEIP__NEARESTEXENINFO_TYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct NearestEXENInfo_Type {
public:
	bool DEF_ExNearstDisSt;
	std::uint16_t DEF_ExitNearstDis;
	std::uint16_t DEF_EntrcNearstDis;
/*
	NearestEXENInfo_Type() {}
	~NearestEXENInfo_Type() {}
	NearestEXENInfo_Type(const bool _DEF_ExNearstDisSt,const std::uint16_t _DEF_ExitNearstDis,const std::uint16_t _DEF_EntrcNearstDis):DEF_ExNearstDisSt(_DEF_ExNearstDisSt),DEF_ExitNearstDis(_DEF_ExitNearstDis),DEF_EntrcNearstDis(_DEF_EntrcNearstDis) {}
	NearestEXENInfo_Type(const NearestEXENInfo_Type &_x){
		DEF_ExNearstDisSt = _x.DEF_ExNearstDisSt;
		DEF_ExitNearstDis = _x.DEF_ExitNearstDis;
		DEF_EntrcNearstDis = _x.DEF_EntrcNearstDis;
	}
	NearestEXENInfo_Type(NearestEXENInfo_Type &&_x){
		DEF_ExNearstDisSt = std::move(_x.DEF_ExNearstDisSt);
		DEF_ExitNearstDis = std::move(_x.DEF_ExitNearstDis);
		DEF_EntrcNearstDis = std::move(_x.DEF_EntrcNearstDis);
	}
	NearestEXENInfo_Type& operator=(const NearestEXENInfo_Type &_x){
		DEF_ExNearstDisSt = _x.DEF_ExNearstDisSt;
		DEF_ExitNearstDis = _x.DEF_ExitNearstDis;
		DEF_EntrcNearstDis = _x.DEF_EntrcNearstDis;
		return *this;
	}
	NearestEXENInfo_Type& operator=(NearestEXENInfo_Type &&_x){
		DEF_ExNearstDisSt = std::move(_x.DEF_ExNearstDisSt);
		DEF_ExitNearstDis = std::move(_x.DEF_ExitNearstDis);
		DEF_EntrcNearstDis = std::move(_x.DEF_EntrcNearstDis);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(DEF_ExNearstDisSt);
		fun(DEF_ExitNearstDis);
		fun(DEF_EntrcNearstDis);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(DEF_ExNearstDisSt);
		fun(DEF_ExitNearstDis);
		fun(DEF_EntrcNearstDis);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (DEF_ExNearstDisSt);
		fun << (DEF_ExitNearstDis);
		fun << (DEF_EntrcNearstDis);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (DEF_ExNearstDisSt);
		fun >> (DEF_ExitNearstDis);
		fun >> (DEF_EntrcNearstDis);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__NEARESTEXENINFO_TYPE_H__
