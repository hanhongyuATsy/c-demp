#ifndef __ARA_COM_VSOMEIP__VRECYCLEMODE_H__
#define __ARA_COM_VSOMEIP__VRECYCLEMODE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class vRecycleMode:std::uint8_t
{
	Nocommand=0U,
	recirculation=1U,
	fresh=2U,
	AUTO=3U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__VRECYCLEMODE_H__
