#ifndef __ARA_COM_VSOMEIP__APUWALENABLEST_H__
#define __ARA_COM_VSOMEIP__APUWALENABLEST_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class APUWALEnableSt:std::uint8_t
{
	Notactive=0U,
	Active=1U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__APUWALENABLEST_H__
