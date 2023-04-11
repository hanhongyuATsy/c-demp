#ifndef __ARA_COM_VSOMEIP__SPDPREDCTEVALUELISTMEMBER_TYPE_H__
#define __ARA_COM_VSOMEIP__SPDPREDCTEVALUELISTMEMBER_TYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct SpdPredctEvalueListMember_Type {
public:
	std::uint8_t ShrtSpdPredctEvalueListTable;
	std::uint8_t ShrtSpdPredctEvalueListValue;
	std::uint8_t LngSpdPredctEvalueListTable;
	std::uint8_t LngSpdPredctEvalueListValue;
/*
	SpdPredctEvalueListMember_Type() {}
	~SpdPredctEvalueListMember_Type() {}
	SpdPredctEvalueListMember_Type(const std::uint8_t _ShrtSpdPredctEvalueListTable,const std::uint8_t _ShrtSpdPredctEvalueListValue,const std::uint8_t _LngSpdPredctEvalueListTable,const std::uint8_t _LngSpdPredctEvalueListValue):ShrtSpdPredctEvalueListTable(_ShrtSpdPredctEvalueListTable),ShrtSpdPredctEvalueListValue(_ShrtSpdPredctEvalueListValue),LngSpdPredctEvalueListTable(_LngSpdPredctEvalueListTable),LngSpdPredctEvalueListValue(_LngSpdPredctEvalueListValue) {}
	SpdPredctEvalueListMember_Type(const SpdPredctEvalueListMember_Type &_x){
		ShrtSpdPredctEvalueListTable = _x.ShrtSpdPredctEvalueListTable;
		ShrtSpdPredctEvalueListValue = _x.ShrtSpdPredctEvalueListValue;
		LngSpdPredctEvalueListTable = _x.LngSpdPredctEvalueListTable;
		LngSpdPredctEvalueListValue = _x.LngSpdPredctEvalueListValue;
	}
	SpdPredctEvalueListMember_Type(SpdPredctEvalueListMember_Type &&_x){
		ShrtSpdPredctEvalueListTable = std::move(_x.ShrtSpdPredctEvalueListTable);
		ShrtSpdPredctEvalueListValue = std::move(_x.ShrtSpdPredctEvalueListValue);
		LngSpdPredctEvalueListTable = std::move(_x.LngSpdPredctEvalueListTable);
		LngSpdPredctEvalueListValue = std::move(_x.LngSpdPredctEvalueListValue);
	}
	SpdPredctEvalueListMember_Type& operator=(const SpdPredctEvalueListMember_Type &_x){
		ShrtSpdPredctEvalueListTable = _x.ShrtSpdPredctEvalueListTable;
		ShrtSpdPredctEvalueListValue = _x.ShrtSpdPredctEvalueListValue;
		LngSpdPredctEvalueListTable = _x.LngSpdPredctEvalueListTable;
		LngSpdPredctEvalueListValue = _x.LngSpdPredctEvalueListValue;
		return *this;
	}
	SpdPredctEvalueListMember_Type& operator=(SpdPredctEvalueListMember_Type &&_x){
		ShrtSpdPredctEvalueListTable = std::move(_x.ShrtSpdPredctEvalueListTable);
		ShrtSpdPredctEvalueListValue = std::move(_x.ShrtSpdPredctEvalueListValue);
		LngSpdPredctEvalueListTable = std::move(_x.LngSpdPredctEvalueListTable);
		LngSpdPredctEvalueListValue = std::move(_x.LngSpdPredctEvalueListValue);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(ShrtSpdPredctEvalueListTable);
		fun(ShrtSpdPredctEvalueListValue);
		fun(LngSpdPredctEvalueListTable);
		fun(LngSpdPredctEvalueListValue);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(ShrtSpdPredctEvalueListTable);
		fun(ShrtSpdPredctEvalueListValue);
		fun(LngSpdPredctEvalueListTable);
		fun(LngSpdPredctEvalueListValue);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (ShrtSpdPredctEvalueListTable);
		fun << (ShrtSpdPredctEvalueListValue);
		fun << (LngSpdPredctEvalueListTable);
		fun << (LngSpdPredctEvalueListValue);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (ShrtSpdPredctEvalueListTable);
		fun >> (ShrtSpdPredctEvalueListValue);
		fun >> (LngSpdPredctEvalueListTable);
		fun >> (LngSpdPredctEvalueListValue);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__SPDPREDCTEVALUELISTMEMBER_TYPE_H__
