#ifndef __ARA_UCM_FAMGR__FLASHINGADAPTERSTATUSTYPE_H__
#define __ARA_UCM_FAMGR__FLASHINGADAPTERSTATUSTYPE_H__


#include "cstdint"





namespace ara
{
namespace ucm
{
namespace famgr
{


enum class FlashingAdapterStatusType:std::uint8_t
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
}//famgr
#endif //__ARA_UCM_FAMGR__FLASHINGADAPTERSTATUSTYPE_H__
