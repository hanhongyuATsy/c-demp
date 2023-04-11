#ifndef __ARA_UCM_PKGMGR__SAFETYSTATESTYPE_H__
#define __ARA_UCM_PKGMGR__SAFETYSTATESTYPE_H__


#include "cstdint"





namespace ara
{
namespace ucm
{
namespace pkgmgr
{


enum class SafetyStatesType:std::uint8_t
{
	kSafe=0U,
	kNotSafe=1U,
	kNotSupported=2U
};

}//ara
}//ucm
}//pkgmgr
#endif //__ARA_UCM_PKGMGR__SAFETYSTATESTYPE_H__
