#ifndef __ARA_UCM_CSM__CSMSAFETYSTATEDATATYPE_H__
#define __ARA_UCM_CSM__CSMSAFETYSTATEDATATYPE_H__


#include "impl_type_string.h"
#include "cstdint"





namespace ara
{
namespace ucm
{
namespace csm
{

struct CSMSafetyStateDataType {
public:
	String messageId;
	std::uint8_t safetyState;
/*
	CSMSafetyStateDataType() {}
	~CSMSafetyStateDataType() {}
	CSMSafetyStateDataType(const String _messageId,const std::uint8_t _safetyState):messageId(_messageId),safetyState(_safetyState) {}
	CSMSafetyStateDataType(const CSMSafetyStateDataType &_x){
		messageId = _x.messageId;
		safetyState = _x.safetyState;
	}
	CSMSafetyStateDataType(CSMSafetyStateDataType &&_x){
		messageId = std::move(_x.messageId);
		safetyState = std::move(_x.safetyState);
	}
	CSMSafetyStateDataType& operator=(const CSMSafetyStateDataType &_x){
		messageId = _x.messageId;
		safetyState = _x.safetyState;
		return *this;
	}
	CSMSafetyStateDataType& operator=(CSMSafetyStateDataType &&_x){
		messageId = std::move(_x.messageId);
		safetyState = std::move(_x.safetyState);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(messageId);
		fun(safetyState);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(messageId);
		fun(safetyState);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (messageId);
		fun << (safetyState);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (messageId);
		fun >> (safetyState);
	}
};

}//ara
}//ucm
}//csm
#endif //__ARA_UCM_CSM__CSMSAFETYSTATEDATATYPE_H__
