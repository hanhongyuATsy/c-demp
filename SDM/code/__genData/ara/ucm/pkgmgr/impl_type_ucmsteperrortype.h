#ifndef __ARA_UCM_PKGMGR__UCMSTEPERRORTYPE_H__
#define __ARA_UCM_PKGMGR__UCMSTEPERRORTYPE_H__


#include "ara/ucm/pkgmgr/impl_type_ucmidentifiertype.h"
#include "ara/ucm/pkgmgr/impl_type_softwarepackagesteptype.h"
#include "cstdint"





namespace ara
{
namespace ucm
{
namespace pkgmgr
{

struct UCMStepErrorType {
public:
	ara::ucm::pkgmgr::UCMIdentifierType id;
	ara::ucm::pkgmgr::SoftwarePackageStepType SoftwarePackageStep;
	std::uint8_t ReturnedError;
/*
	UCMStepErrorType() {}
	~UCMStepErrorType() {}
	UCMStepErrorType(const ara::ucm::pkgmgr::UCMIdentifierType _id,const ara::ucm::pkgmgr::SoftwarePackageStepType _SoftwarePackageStep,const std::uint8_t _ReturnedError):id(_id),SoftwarePackageStep(_SoftwarePackageStep),ReturnedError(_ReturnedError) {}
	UCMStepErrorType(const UCMStepErrorType &_x){
		id = _x.id;
		SoftwarePackageStep = _x.SoftwarePackageStep;
		ReturnedError = _x.ReturnedError;
	}
	UCMStepErrorType(UCMStepErrorType &&_x){
		id = std::move(_x.id);
		SoftwarePackageStep = std::move(_x.SoftwarePackageStep);
		ReturnedError = std::move(_x.ReturnedError);
	}
	UCMStepErrorType& operator=(const UCMStepErrorType &_x){
		id = _x.id;
		SoftwarePackageStep = _x.SoftwarePackageStep;
		ReturnedError = _x.ReturnedError;
		return *this;
	}
	UCMStepErrorType& operator=(UCMStepErrorType &&_x){
		id = std::move(_x.id);
		SoftwarePackageStep = std::move(_x.SoftwarePackageStep);
		ReturnedError = std::move(_x.ReturnedError);
		return *this;
	}
*/

	using IsEnumerableTag = void;
	template<typename F>
	void enumerate(F& fun) {
		fun(id);
		fun(SoftwarePackageStep);
		fun(ReturnedError);
	}

	template<typename F>
	void GetSize(F& fun) const{
		fun(id);
		fun(SoftwarePackageStep);
		fun(ReturnedError);
	}
	template<typename F>
	void serialize(F& fun) const{
		fun << (id);
		fun << (SoftwarePackageStep);
		fun << (ReturnedError);
	}
	template<typename F>
	void deserialize(F& fun){
		fun >> (id);
		fun >> (SoftwarePackageStep);
		fun >> (ReturnedError);
	}
};

}//ara
}//ucm
}//pkgmgr
#endif //__ARA_UCM_PKGMGR__UCMSTEPERRORTYPE_H__
