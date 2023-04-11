#ifndef __ARA_COM_VSOMEIP__BRAKELIGHTST_H__
#define __ARA_COM_VSOMEIP__BRAKELIGHTST_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct BrakeLightSt {
public:
	std::uint8_t LeftSideBrkLightSt;
	std::uint8_t RightSideBrkLightSt;
	std::uint8_t CHMSLSt;
/*
	BrakeLightSt() {}
	~BrakeLightSt() {}
	BrakeLightSt(const std::uint8_t _LeftSideBrkLightSt,const std::uint8_t _RightSideBrkLightSt,const std::uint8_t _CHMSLSt):LeftSideBrkLightSt(_LeftSideBrkLightSt),RightSideBrkLightSt(_RightSideBrkLightSt),CHMSLSt(_CHMSLSt) {}
	BrakeLightSt(const BrakeLightSt &_x){
		LeftSideBrkLightSt = _x.LeftSideBrkLightSt;
		RightSideBrkLightSt = _x.RightSideBrkLightSt;
		CHMSLSt = _x.CHMSLSt;
	}
	BrakeLightSt(BrakeLightSt &&_x){
		LeftSideBrkLightSt = std::move(_x.LeftSideBrkLightSt);
		RightSideBrkLightSt = std::move(_x.RightSideBrkLightSt);
		CHMSLSt = std::move(_x.CHMSLSt);
	}
	BrakeLightSt& operator=(const BrakeLightSt &_x){
		LeftSideBrkLightSt = _x.LeftSideBrkLightSt;
		RightSideBrkLightSt = _x.RightSideBrkLightSt;
		CHMSLSt = _x.CHMSLSt;
		return *this;
	}
	BrakeLightSt& operator=(BrakeLightSt &&_x){
		LeftSideBrkLightSt = std::move(_x.LeftSideBrkLightSt);
		RightSideBrkLightSt = std::move(_x.RightSideBrkLightSt);
		CHMSLSt = std::move(_x.CHMSLSt);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(LeftSideBrkLightSt);
		fun(RightSideBrkLightSt);
		fun(CHMSLSt);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(LeftSideBrkLightSt);
		fun(RightSideBrkLightSt);
		fun(CHMSLSt);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (LeftSideBrkLightSt);
		fun << (RightSideBrkLightSt);
		fun << (CHMSLSt);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (LeftSideBrkLightSt);
		fun >> (RightSideBrkLightSt);
		fun >> (CHMSLSt);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__BRAKELIGHTST_H__
