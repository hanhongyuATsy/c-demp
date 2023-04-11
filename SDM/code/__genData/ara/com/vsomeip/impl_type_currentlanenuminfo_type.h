#ifndef __ARA_COM_VSOMEIP__CURRENTLANENUMINFO_TYPE_H__
#define __ARA_COM_VSOMEIP__CURRENTLANENUMINFO_TYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct CurrentLaneNuminfo_Type {
public:
	std::uint8_t EHR_CurrLaneNum;
/*
	CurrentLaneNuminfo_Type() {}
	~CurrentLaneNuminfo_Type() {}
	CurrentLaneNuminfo_Type(const std::uint8_t _EHR_CurrLaneNum):EHR_CurrLaneNum(_EHR_CurrLaneNum) {}
	CurrentLaneNuminfo_Type(const CurrentLaneNuminfo_Type &_x){
		EHR_CurrLaneNum = _x.EHR_CurrLaneNum;
	}
	CurrentLaneNuminfo_Type(CurrentLaneNuminfo_Type &&_x){
		EHR_CurrLaneNum = std::move(_x.EHR_CurrLaneNum);
	}
	CurrentLaneNuminfo_Type& operator=(const CurrentLaneNuminfo_Type &_x){
		EHR_CurrLaneNum = _x.EHR_CurrLaneNum;
		return *this;
	}
	CurrentLaneNuminfo_Type& operator=(CurrentLaneNuminfo_Type &&_x){
		EHR_CurrLaneNum = std::move(_x.EHR_CurrLaneNum);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(EHR_CurrLaneNum);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(EHR_CurrLaneNum);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (EHR_CurrLaneNum);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (EHR_CurrLaneNum);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__CURRENTLANENUMINFO_TYPE_H__
