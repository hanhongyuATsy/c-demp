#ifndef __ARA_UCM_PKGMGR__SOFTWAREPACKAGESTEPTYPE_H__
#define __ARA_UCM_PKGMGR__SOFTWAREPACKAGESTEPTYPE_H__


#include "cstdint"





namespace ara
{
namespace ucm
{
namespace pkgmgr
{


enum class SoftwarePackageStepType:std::uint8_t
{
	kTransfer=0U,
	kProcess=1U,
	kPreActivate=2U,
	kVerify=3U
};

}//ara
}//ucm
}//pkgmgr
#endif //__ARA_UCM_PKGMGR__SOFTWAREPACKAGESTEPTYPE_H__
