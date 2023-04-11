#ifndef __ARA_COM_VSOMEIP__NEARESTTOLLGATE_TYPE_H__
#define __ARA_COM_VSOMEIP__NEARESTTOLLGATE_TYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct NearestTollGate_Type {
public:
	std::uint16_t DEF_TollGateDis;
/*
	NearestTollGate_Type() {}
	~NearestTollGate_Type() {}
	NearestTollGate_Type(const std::uint16_t _DEF_TollGateDis):DEF_TollGateDis(_DEF_TollGateDis) {}
	NearestTollGate_Type(const NearestTollGate_Type &_x){
		DEF_TollGateDis = _x.DEF_TollGateDis;
	}
	NearestTollGate_Type(NearestTollGate_Type &&_x){
		DEF_TollGateDis = std::move(_x.DEF_TollGateDis);
	}
	NearestTollGate_Type& operator=(const NearestTollGate_Type &_x){
		DEF_TollGateDis = _x.DEF_TollGateDis;
		return *this;
	}
	NearestTollGate_Type& operator=(NearestTollGate_Type &&_x){
		DEF_TollGateDis = std::move(_x.DEF_TollGateDis);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(DEF_TollGateDis);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(DEF_TollGateDis);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (DEF_TollGateDis);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (DEF_TollGateDis);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__NEARESTTOLLGATE_TYPE_H__
