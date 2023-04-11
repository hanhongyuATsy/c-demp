#ifndef __ARA_UCM_CSM__CSMINSTALLSTATEDATATYPE_H__
#define __ARA_UCM_CSM__CSMINSTALLSTATEDATATYPE_H__


#include "ara/ucm/csm/impl_type_installstatedatatype.h"
#include "ara/ucm/csm/impl_type_installerrorcodedatatype.h"
#include "impl_type_string.h"





namespace ara
{
namespace ucm
{
namespace csm
{

struct CSMInstallStateDataType {
public:
	ara::ucm::csm::InstallStateDataType installState;
	ara::ucm::csm::InstallErrorCodeDataType errCode;
	String errDesc;
/*
	CSMInstallStateDataType() {}
	~CSMInstallStateDataType() {}
	CSMInstallStateDataType(const ara::ucm::csm::InstallStateDataType _installState,const ara::ucm::csm::InstallErrorCodeDataType _errCode,const String _errDesc):installState(_installState),errCode(_errCode),errDesc(_errDesc) {}
	CSMInstallStateDataType(const CSMInstallStateDataType &_x){
		installState = _x.installState;
		errCode = _x.errCode;
		errDesc = _x.errDesc;
	}
	CSMInstallStateDataType(CSMInstallStateDataType &&_x){
		installState = std::move(_x.installState);
		errCode = std::move(_x.errCode);
		errDesc = std::move(_x.errDesc);
	}
	CSMInstallStateDataType& operator=(const CSMInstallStateDataType &_x){
		installState = _x.installState;
		errCode = _x.errCode;
		errDesc = _x.errDesc;
		return *this;
	}
	CSMInstallStateDataType& operator=(CSMInstallStateDataType &&_x){
		installState = std::move(_x.installState);
		errCode = std::move(_x.errCode);
		errDesc = std::move(_x.errDesc);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(installState);
		fun(errCode);
		fun(errDesc);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(installState);
		fun(errCode);
		fun(errDesc);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (installState);
		fun << (errCode);
		fun << (errDesc);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (installState);
		fun >> (errCode);
		fun >> (errDesc);
	}
};

}//ara
}//ucm
}//csm
#endif //__ARA_UCM_CSM__CSMINSTALLSTATEDATATYPE_H__
