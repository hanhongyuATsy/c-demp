#ifndef __ARA_UCM_PKGMGR__PACKAGEMANAGERSTATUSTYPE_H__
#define __ARA_UCM_PKGMGR__PACKAGEMANAGERSTATUSTYPE_H__


#include "cstdint"





namespace ara
{
namespace ucm
{
namespace pkgmgr
{


enum class PackageManagerStatusType:std::uint8_t
{
	kIdle=0U,
	kReady=1U,
	kProcessing=2U,
	kActivating=3U,
	kActivated=4U,
	kRollingBack=5U,
	kRolledBack=6U,
	kCleaningUp=7U,
	kVerifying=8U
};

}//ara
}//ucm
}//pkgmgr
#endif //__ARA_UCM_PKGMGR__PACKAGEMANAGERSTATUSTYPE_H__
