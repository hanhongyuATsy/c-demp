#ifndef __ARA_COM_VSOMEIP__PIDCCPFRMEVALUERSLTMEMBER_TYPE_H__
#define __ARA_COM_VSOMEIP__PIDCCPFRMEVALUERSLTMEMBER_TYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct PidccPfrmEvalueRsltMember_Type {
public:
	std::uint16_t CrrntCyclEnrgConsmpEvalue;
	std::uint16_t CrrntCyclEngOprtPntEvalue;
/*
	PidccPfrmEvalueRsltMember_Type() {}
	~PidccPfrmEvalueRsltMember_Type() {}
	PidccPfrmEvalueRsltMember_Type(const std::uint16_t _CrrntCyclEnrgConsmpEvalue,const std::uint16_t _CrrntCyclEngOprtPntEvalue):CrrntCyclEnrgConsmpEvalue(_CrrntCyclEnrgConsmpEvalue),CrrntCyclEngOprtPntEvalue(_CrrntCyclEngOprtPntEvalue) {}
	PidccPfrmEvalueRsltMember_Type(const PidccPfrmEvalueRsltMember_Type &_x){
		CrrntCyclEnrgConsmpEvalue = _x.CrrntCyclEnrgConsmpEvalue;
		CrrntCyclEngOprtPntEvalue = _x.CrrntCyclEngOprtPntEvalue;
	}
	PidccPfrmEvalueRsltMember_Type(PidccPfrmEvalueRsltMember_Type &&_x){
		CrrntCyclEnrgConsmpEvalue = std::move(_x.CrrntCyclEnrgConsmpEvalue);
		CrrntCyclEngOprtPntEvalue = std::move(_x.CrrntCyclEngOprtPntEvalue);
	}
	PidccPfrmEvalueRsltMember_Type& operator=(const PidccPfrmEvalueRsltMember_Type &_x){
		CrrntCyclEnrgConsmpEvalue = _x.CrrntCyclEnrgConsmpEvalue;
		CrrntCyclEngOprtPntEvalue = _x.CrrntCyclEngOprtPntEvalue;
		return *this;
	}
	PidccPfrmEvalueRsltMember_Type& operator=(PidccPfrmEvalueRsltMember_Type &&_x){
		CrrntCyclEnrgConsmpEvalue = std::move(_x.CrrntCyclEnrgConsmpEvalue);
		CrrntCyclEngOprtPntEvalue = std::move(_x.CrrntCyclEngOprtPntEvalue);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(CrrntCyclEnrgConsmpEvalue);
		fun(CrrntCyclEngOprtPntEvalue);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(CrrntCyclEnrgConsmpEvalue);
		fun(CrrntCyclEngOprtPntEvalue);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (CrrntCyclEnrgConsmpEvalue);
		fun << (CrrntCyclEngOprtPntEvalue);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (CrrntCyclEnrgConsmpEvalue);
		fun >> (CrrntCyclEngOprtPntEvalue);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__PIDCCPFRMEVALUERSLTMEMBER_TYPE_H__
