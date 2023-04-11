#ifndef __ARA_COM_VSOMEIP__FLASHERCTRLSOURCE_H__
#define __ARA_COM_VSOMEIP__FLASHERCTRLSOURCE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class FlasherCtrlSource:std::uint8_t
{
	Notactive=0U,
	Group1_TurnLight=1U,
	Group1_HazardLight=2U,
	Group1_ReminderLight=3U,
	Group2_HazardLight=4U,
	Group2_ReminderLight=5U,
	Group3=6U,
	Reserved1=7U,
	Reserved2=8U,
	Reserved3=9U,
	Reserved4=10U,
	Reserved5=11U,
	Reserved6=12U,
	Reserved7=13U,
	Reserved8=14U,
	Reserved9=15U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__FLASHERCTRLSOURCE_H__
