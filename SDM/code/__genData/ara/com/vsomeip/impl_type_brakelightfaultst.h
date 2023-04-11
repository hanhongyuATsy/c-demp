#ifndef __ARA_COM_VSOMEIP__BRAKELIGHTFAULTST_H__
#define __ARA_COM_VSOMEIP__BRAKELIGHTFAULTST_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct BrakeLightFaultSt {
public:
	std::uint8_t LeftSideBrkLightFaultSt;
	std::uint8_t RightSideBrkLightFaultSt;
	std::uint8_t CHMSLFaultSt;
/*
	BrakeLightFaultSt() {}
	~BrakeLightFaultSt() {}
	BrakeLightFaultSt(const std::uint8_t _LeftSideBrkLightFaultSt,const std::uint8_t _RightSideBrkLightFaultSt,const std::uint8_t _CHMSLFaultSt):LeftSideBrkLightFaultSt(_LeftSideBrkLightFaultSt),RightSideBrkLightFaultSt(_RightSideBrkLightFaultSt),CHMSLFaultSt(_CHMSLFaultSt) {}
	BrakeLightFaultSt(const BrakeLightFaultSt &_x){
		LeftSideBrkLightFaultSt = _x.LeftSideBrkLightFaultSt;
		RightSideBrkLightFaultSt = _x.RightSideBrkLightFaultSt;
		CHMSLFaultSt = _x.CHMSLFaultSt;
	}
	BrakeLightFaultSt(BrakeLightFaultSt &&_x){
		LeftSideBrkLightFaultSt = std::move(_x.LeftSideBrkLightFaultSt);
		RightSideBrkLightFaultSt = std::move(_x.RightSideBrkLightFaultSt);
		CHMSLFaultSt = std::move(_x.CHMSLFaultSt);
	}
	BrakeLightFaultSt& operator=(const BrakeLightFaultSt &_x){
		LeftSideBrkLightFaultSt = _x.LeftSideBrkLightFaultSt;
		RightSideBrkLightFaultSt = _x.RightSideBrkLightFaultSt;
		CHMSLFaultSt = _x.CHMSLFaultSt;
		return *this;
	}
	BrakeLightFaultSt& operator=(BrakeLightFaultSt &&_x){
		LeftSideBrkLightFaultSt = std::move(_x.LeftSideBrkLightFaultSt);
		RightSideBrkLightFaultSt = std::move(_x.RightSideBrkLightFaultSt);
		CHMSLFaultSt = std::move(_x.CHMSLFaultSt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(LeftSideBrkLightFaultSt);
		fun(RightSideBrkLightFaultSt);
		fun(CHMSLFaultSt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(LeftSideBrkLightFaultSt);
		fun(RightSideBrkLightFaultSt);
		fun(CHMSLFaultSt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (LeftSideBrkLightFaultSt);
		fun << (RightSideBrkLightFaultSt);
		fun << (CHMSLFaultSt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (LeftSideBrkLightFaultSt);
		fun >> (RightSideBrkLightFaultSt);
		fun >> (CHMSLFaultSt);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__BRAKELIGHTFAULTST_H__
