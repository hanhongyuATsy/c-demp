#ifndef __ARA_COM_VSOMEIP__COMMONLIGHTST_H__
#define __ARA_COM_VSOMEIP__COMMONLIGHTST_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct CommonLightSt {
public:
	std::uint8_t LeftLightSt;
	std::uint8_t RightLightSt;
/*
	CommonLightSt() {}
	~CommonLightSt() {}
	CommonLightSt(const std::uint8_t _LeftLightSt,const std::uint8_t _RightLightSt):LeftLightSt(_LeftLightSt),RightLightSt(_RightLightSt) {}
	CommonLightSt(const CommonLightSt &_x){
		LeftLightSt = _x.LeftLightSt;
		RightLightSt = _x.RightLightSt;
	}
	CommonLightSt(CommonLightSt &&_x){
		LeftLightSt = std::move(_x.LeftLightSt);
		RightLightSt = std::move(_x.RightLightSt);
	}
	CommonLightSt& operator=(const CommonLightSt &_x){
		LeftLightSt = _x.LeftLightSt;
		RightLightSt = _x.RightLightSt;
		return *this;
	}
	CommonLightSt& operator=(CommonLightSt &&_x){
		LeftLightSt = std::move(_x.LeftLightSt);
		RightLightSt = std::move(_x.RightLightSt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(LeftLightSt);
		fun(RightLightSt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(LeftLightSt);
		fun(RightLightSt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (LeftLightSt);
		fun << (RightLightSt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (LeftLightSt);
		fun >> (RightLightSt);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__COMMONLIGHTST_H__
