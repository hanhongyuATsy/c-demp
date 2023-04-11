#ifndef __ARA_UCM_PKGMGR__RESULTTYPE_H__
#define __ARA_UCM_PKGMGR__RESULTTYPE_H__


#include "cstdint"





namespace ara
{
namespace ucm
{
namespace pkgmgr
{


enum class ResultType:std::uint8_t
{
	kSuccessfull=0U,
	kFailed=1U
};

}//ara
}//ucm
}//pkgmgr
#endif //__ARA_UCM_PKGMGR__RESULTTYPE_H__
