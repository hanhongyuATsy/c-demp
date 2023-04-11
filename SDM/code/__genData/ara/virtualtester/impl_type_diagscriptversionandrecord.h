#ifndef __ARA_VIRTUALTESTER__DIAGSCRIPTVERSIONANDRECORD_H__
#define __ARA_VIRTUALTESTER__DIAGSCRIPTVERSIONANDRECORD_H__


#include "impl_type_string.h"





namespace ara
{
namespace virtualtester
{

struct DiagScriptVersionAndRecord {
public:
	String version;
	String record;
/*
	DiagScriptVersionAndRecord() {}
	~DiagScriptVersionAndRecord() {}
	DiagScriptVersionAndRecord(const String _version,const String _record):version(_version),record(_record) {}
	DiagScriptVersionAndRecord(const DiagScriptVersionAndRecord &_x){
		version = _x.version;
		record = _x.record;
	}
	DiagScriptVersionAndRecord(DiagScriptVersionAndRecord &&_x){
		version = std::move(_x.version);
		record = std::move(_x.record);
	}
	DiagScriptVersionAndRecord& operator=(const DiagScriptVersionAndRecord &_x){
		version = _x.version;
		record = _x.record;
		return *this;
	}
	DiagScriptVersionAndRecord& operator=(DiagScriptVersionAndRecord &&_x){
		version = std::move(_x.version);
		record = std::move(_x.record);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(version);
		fun(record);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(version);
		fun(record);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (version);
		fun << (record);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (version);
		fun >> (record);
	}
};

}//ara
}//virtualtester
#endif //__ARA_VIRTUALTESTER__DIAGSCRIPTVERSIONANDRECORD_H__
