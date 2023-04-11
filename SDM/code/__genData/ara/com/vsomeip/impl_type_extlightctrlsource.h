#ifndef __ARA_COM_VSOMEIP__EXTLIGHTCTRLSOURCE_H__
#define __ARA_COM_VSOMEIP__EXTLIGHTCTRLSOURCE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class ExtLightCtrlSource:std::uint8_t
{
	Notactive=0U,
	Group1=1U,
	Group2=2U,
	Group3=3U,
	Reserved1=4U,
	Reserved2=5U,
	Reserved3=6U,
	Reserved4=7U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__EXTLIGHTCTRLSOURCE_H__
