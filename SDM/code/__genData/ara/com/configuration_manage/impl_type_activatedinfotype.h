#ifndef __ARA_COM_CONFIGURATION_MANAGE__ACTIVATEDINFOTYPE_H__
#define __ARA_COM_CONFIGURATION_MANAGE__ACTIVATEDINFOTYPE_H__


#include "ara/core/string.h"
#include "cstdint"





namespace ara
{
namespace com
{
namespace configuration_manage
{

struct ActivatedInfoType {
public:
	::ara::core::String request;
	::ara::core::String result;
	std::uint64_t timestamp;
/*
	ActivatedInfoType() {}
	~ActivatedInfoType() {}
	ActivatedInfoType(const ::ara::core::String _request,const ::ara::core::String _result,const std::uint64_t _timestamp):request(_request),result(_result),timestamp(_timestamp) {}
	ActivatedInfoType(const ActivatedInfoType &_x){
		request = _x.request;
		result = _x.result;
		timestamp = _x.timestamp;
	}
	ActivatedInfoType(ActivatedInfoType &&_x){
		request = std::move(_x.request);
		result = std::move(_x.result);
		timestamp = std::move(_x.timestamp);
	}
	ActivatedInfoType& operator=(const ActivatedInfoType &_x){
		request = _x.request;
		result = _x.result;
		timestamp = _x.timestamp;
		return *this;
	}
	ActivatedInfoType& operator=(ActivatedInfoType &&_x){
		request = std::move(_x.request);
		result = std::move(_x.result);
		timestamp = std::move(_x.timestamp);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(request);
		fun(result);
		fun(timestamp);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(request);
		fun(result);
		fun(timestamp);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (request);
		fun << (result);
		fun << (timestamp);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (request);
		fun >> (result);
		fun >> (timestamp);
	}
};

}//ara
}//com
}//configuration_manage
#endif //__ARA_COM_CONFIGURATION_MANAGE__ACTIVATEDINFOTYPE_H__
