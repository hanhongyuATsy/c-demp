#ifndef __ARA_UCM_CSM__CSMSAFETYCONDITIONSCHECKRESULTDATATYPE_H__
#define __ARA_UCM_CSM__CSMSAFETYCONDITIONSCHECKRESULTDATATYPE_H__


#include "cstdint"
#include "ara/ucm/csm/impl_type_csmsafetystatevectordatatype.h"





namespace ara
{
namespace ucm
{
namespace csm
{

struct CSMSafetyConditionsCheckResultDataType {
public:
	std::uint8_t judgeState;
	ara::ucm::csm::CSMSafetyStateVectorDataType conditions;
/*
	CSMSafetyConditionsCheckResultDataType() {}
	~CSMSafetyConditionsCheckResultDataType() {}
	CSMSafetyConditionsCheckResultDataType(const std::uint8_t _judgeState,const ara::ucm::csm::CSMSafetyStateVectorDataType _conditions):judgeState(_judgeState),conditions(_conditions) {}
	CSMSafetyConditionsCheckResultDataType(const CSMSafetyConditionsCheckResultDataType &_x){
		judgeState = _x.judgeState;
		conditions = _x.conditions;
	}
	CSMSafetyConditionsCheckResultDataType(CSMSafetyConditionsCheckResultDataType &&_x){
		judgeState = std::move(_x.judgeState);
		conditions = std::move(_x.conditions);
	}
	CSMSafetyConditionsCheckResultDataType& operator=(const CSMSafetyConditionsCheckResultDataType &_x){
		judgeState = _x.judgeState;
		conditions = _x.conditions;
		return *this;
	}
	CSMSafetyConditionsCheckResultDataType& operator=(CSMSafetyConditionsCheckResultDataType &&_x){
		judgeState = std::move(_x.judgeState);
		conditions = std::move(_x.conditions);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(judgeState);
		fun(conditions);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(judgeState);
		fun(conditions);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (judgeState);
		fun << (conditions);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (judgeState);
		fun >> (conditions);
	}
};

}//ara
}//ucm
}//csm
#endif //__ARA_UCM_CSM__CSMSAFETYCONDITIONSCHECKRESULTDATATYPE_H__
