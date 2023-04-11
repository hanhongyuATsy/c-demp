#ifndef __ARA_COM_VSOMEIP__COMMONLIGHTFAULTST_H__
#define __ARA_COM_VSOMEIP__COMMONLIGHTFAULTST_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct CommonLightFaultSt {
public:
	std::uint8_t LeftLightFaultSt;
	std::uint8_t RightLightFaultSt;
/*
	CommonLightFaultSt() {}
	~CommonLightFaultSt() {}
	CommonLightFaultSt(const std::uint8_t _LeftLightFaultSt,const std::uint8_t _RightLightFaultSt):LeftLightFaultSt(_LeftLightFaultSt),RightLightFaultSt(_RightLightFaultSt) {}
	CommonLightFaultSt(const CommonLightFaultSt &_x){
		LeftLightFaultSt = _x.LeftLightFaultSt;
		RightLightFaultSt = _x.RightLightFaultSt;
	}
	CommonLightFaultSt(CommonLightFaultSt &&_x){
		LeftLightFaultSt = std::move(_x.LeftLightFaultSt);
		RightLightFaultSt = std::move(_x.RightLightFaultSt);
	}
	CommonLightFaultSt& operator=(const CommonLightFaultSt &_x){
		LeftLightFaultSt = _x.LeftLightFaultSt;
		RightLightFaultSt = _x.RightLightFaultSt;
		return *this;
	}
	CommonLightFaultSt& operator=(CommonLightFaultSt &&_x){
		LeftLightFaultSt = std::move(_x.LeftLightFaultSt);
		RightLightFaultSt = std::move(_x.RightLightFaultSt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(LeftLightFaultSt);
		fun(RightLightFaultSt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(LeftLightFaultSt);
		fun(RightLightFaultSt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (LeftLightFaultSt);
		fun << (RightLightFaultSt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (LeftLightFaultSt);
		fun >> (RightLightFaultSt);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__COMMONLIGHTFAULTST_H__
