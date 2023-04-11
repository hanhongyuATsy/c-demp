#ifndef __ARA_COM_VSOMEIP__DRVSTYLELISTMEMBER_TYPE_H__
#define __ARA_COM_VSOMEIP__DRVSTYLELISTMEMBER_TYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct DrvStyleListMember_Type {
public:
	std::uint8_t DrvStyleList;
	std::uint8_t DrvStyleEvalueList;
	std::uint16_t DrvStyleCrrctList;
/*
	DrvStyleListMember_Type() {}
	~DrvStyleListMember_Type() {}
	DrvStyleListMember_Type(const std::uint8_t _DrvStyleList,const std::uint8_t _DrvStyleEvalueList,const std::uint16_t _DrvStyleCrrctList):DrvStyleList(_DrvStyleList),DrvStyleEvalueList(_DrvStyleEvalueList),DrvStyleCrrctList(_DrvStyleCrrctList) {}
	DrvStyleListMember_Type(const DrvStyleListMember_Type &_x){
		DrvStyleList = _x.DrvStyleList;
		DrvStyleEvalueList = _x.DrvStyleEvalueList;
		DrvStyleCrrctList = _x.DrvStyleCrrctList;
	}
	DrvStyleListMember_Type(DrvStyleListMember_Type &&_x){
		DrvStyleList = std::move(_x.DrvStyleList);
		DrvStyleEvalueList = std::move(_x.DrvStyleEvalueList);
		DrvStyleCrrctList = std::move(_x.DrvStyleCrrctList);
	}
	DrvStyleListMember_Type& operator=(const DrvStyleListMember_Type &_x){
		DrvStyleList = _x.DrvStyleList;
		DrvStyleEvalueList = _x.DrvStyleEvalueList;
		DrvStyleCrrctList = _x.DrvStyleCrrctList;
		return *this;
	}
	DrvStyleListMember_Type& operator=(DrvStyleListMember_Type &&_x){
		DrvStyleList = std::move(_x.DrvStyleList);
		DrvStyleEvalueList = std::move(_x.DrvStyleEvalueList);
		DrvStyleCrrctList = std::move(_x.DrvStyleCrrctList);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(DrvStyleList);
		fun(DrvStyleEvalueList);
		fun(DrvStyleCrrctList);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(DrvStyleList);
		fun(DrvStyleEvalueList);
		fun(DrvStyleCrrctList);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (DrvStyleList);
		fun << (DrvStyleEvalueList);
		fun << (DrvStyleCrrctList);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (DrvStyleList);
		fun >> (DrvStyleEvalueList);
		fun >> (DrvStyleCrrctList);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__DRVSTYLELISTMEMBER_TYPE_H__
