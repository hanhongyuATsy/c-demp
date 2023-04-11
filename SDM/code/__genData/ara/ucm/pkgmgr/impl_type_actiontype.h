#ifndef __ARA_UCM_PKGMGR__ACTIONTYPE_H__
#define __ARA_UCM_PKGMGR__ACTIONTYPE_H__


#include "cstdint"





namespace ara
{
namespace ucm
{
namespace pkgmgr
{


enum class ActionType:std::uint8_t
{
	kUpdate=0U,
	kInstall=1U,
	kRemove=2U
};

}//ara
}//ucm
}//pkgmgr
#endif //__ARA_UCM_PKGMGR__ACTIONTYPE_H__
