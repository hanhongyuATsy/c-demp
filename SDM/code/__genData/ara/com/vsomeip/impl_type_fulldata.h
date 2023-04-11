#ifndef __ARA_COM_VSOMEIP__FULLDATA_H__
#define __ARA_COM_VSOMEIP__FULLDATA_H__


#include "cstdint"
#include "impl_type_string.h"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct FullData {
public:
	std::uint8_t Enable;
	String DataInfo;
/*
	FullData() {}
	~FullData() {}
	FullData(const std::uint8_t _Enable,const String _DataInfo):Enable(_Enable),DataInfo(_DataInfo) {}
	FullData(const FullData &_x){
		Enable = _x.Enable;
		DataInfo = _x.DataInfo;
	}
	FullData(FullData &&_x){
		Enable = std::move(_x.Enable);
		DataInfo = std::move(_x.DataInfo);
	}
	FullData& operator=(const FullData &_x){
		Enable = _x.Enable;
		DataInfo = _x.DataInfo;
		return *this;
	}
	FullData& operator=(FullData &&_x){
		Enable = std::move(_x.Enable);
		DataInfo = std::move(_x.DataInfo);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(Enable);
		fun(DataInfo);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(Enable);
		fun(DataInfo);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (Enable);
		fun << (DataInfo);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (Enable);
		fun >> (DataInfo);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__FULLDATA_H__
