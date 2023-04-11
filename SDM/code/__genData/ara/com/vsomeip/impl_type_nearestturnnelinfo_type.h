#ifndef __ARA_COM_VSOMEIP__NEARESTTURNNELINFO_TYPE_H__
#define __ARA_COM_VSOMEIP__NEARESTTURNNELINFO_TYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct NearestTurnnelInfo_Type {
public:
	bool DEF_NrstTurnnelDisSt;
	std::uint16_t DEF_NrstTurnnelDis;
	std::uint16_t DEF_NrstTunnelLength;
/*
	NearestTurnnelInfo_Type() {}
	~NearestTurnnelInfo_Type() {}
	NearestTurnnelInfo_Type(const bool _DEF_NrstTurnnelDisSt,const std::uint16_t _DEF_NrstTurnnelDis,const std::uint16_t _DEF_NrstTunnelLength):DEF_NrstTurnnelDisSt(_DEF_NrstTurnnelDisSt),DEF_NrstTurnnelDis(_DEF_NrstTurnnelDis),DEF_NrstTunnelLength(_DEF_NrstTunnelLength) {}
	NearestTurnnelInfo_Type(const NearestTurnnelInfo_Type &_x){
		DEF_NrstTurnnelDisSt = _x.DEF_NrstTurnnelDisSt;
		DEF_NrstTurnnelDis = _x.DEF_NrstTurnnelDis;
		DEF_NrstTunnelLength = _x.DEF_NrstTunnelLength;
	}
	NearestTurnnelInfo_Type(NearestTurnnelInfo_Type &&_x){
		DEF_NrstTurnnelDisSt = std::move(_x.DEF_NrstTurnnelDisSt);
		DEF_NrstTurnnelDis = std::move(_x.DEF_NrstTurnnelDis);
		DEF_NrstTunnelLength = std::move(_x.DEF_NrstTunnelLength);
	}
	NearestTurnnelInfo_Type& operator=(const NearestTurnnelInfo_Type &_x){
		DEF_NrstTurnnelDisSt = _x.DEF_NrstTurnnelDisSt;
		DEF_NrstTurnnelDis = _x.DEF_NrstTurnnelDis;
		DEF_NrstTunnelLength = _x.DEF_NrstTunnelLength;
		return *this;
	}
	NearestTurnnelInfo_Type& operator=(NearestTurnnelInfo_Type &&_x){
		DEF_NrstTurnnelDisSt = std::move(_x.DEF_NrstTurnnelDisSt);
		DEF_NrstTurnnelDis = std::move(_x.DEF_NrstTurnnelDis);
		DEF_NrstTunnelLength = std::move(_x.DEF_NrstTunnelLength);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(DEF_NrstTurnnelDisSt);
		fun(DEF_NrstTurnnelDis);
		fun(DEF_NrstTunnelLength);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(DEF_NrstTurnnelDisSt);
		fun(DEF_NrstTurnnelDis);
		fun(DEF_NrstTunnelLength);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (DEF_NrstTurnnelDisSt);
		fun << (DEF_NrstTurnnelDis);
		fun << (DEF_NrstTunnelLength);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (DEF_NrstTurnnelDisSt);
		fun >> (DEF_NrstTurnnelDis);
		fun >> (DEF_NrstTunnelLength);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__NEARESTTURNNELINFO_TYPE_H__
