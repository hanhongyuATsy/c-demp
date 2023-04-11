#ifndef __ARA_COM_VSOMEIP__DOWNLOADFILEINFOTPYE_H__
#define __ARA_COM_VSOMEIP__DOWNLOADFILEINFOTPYE_H__


#include "impl_type_string.h"





namespace ara
{
namespace com
{
namespace vsomeip
{

struct DownLoadFileInfoTpye {
public:
	String DownloadPathName;
	String DownloadFileName;
/*
	DownLoadFileInfoTpye() {}
	~DownLoadFileInfoTpye() {}
	DownLoadFileInfoTpye(const String _DownloadPathName,const String _DownloadFileName):DownloadPathName(_DownloadPathName),DownloadFileName(_DownloadFileName) {}
	DownLoadFileInfoTpye(const DownLoadFileInfoTpye &_x){
		DownloadPathName = _x.DownloadPathName;
		DownloadFileName = _x.DownloadFileName;
	}
	DownLoadFileInfoTpye(DownLoadFileInfoTpye &&_x){
		DownloadPathName = std::move(_x.DownloadPathName);
		DownloadFileName = std::move(_x.DownloadFileName);
	}
	DownLoadFileInfoTpye& operator=(const DownLoadFileInfoTpye &_x){
		DownloadPathName = _x.DownloadPathName;
		DownloadFileName = _x.DownloadFileName;
		return *this;
	}
	DownLoadFileInfoTpye& operator=(DownLoadFileInfoTpye &&_x){
		DownloadPathName = std::move(_x.DownloadPathName);
		DownloadFileName = std::move(_x.DownloadFileName);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(DownloadPathName);
		fun(DownloadFileName);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(DownloadPathName);
		fun(DownloadFileName);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (DownloadPathName);
		fun << (DownloadFileName);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (DownloadPathName);
		fun >> (DownloadFileName);
	}
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__DOWNLOADFILEINFOTPYE_H__
