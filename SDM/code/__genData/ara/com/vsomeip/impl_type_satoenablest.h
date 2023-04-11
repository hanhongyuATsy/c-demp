#ifndef __ARA_COM_VSOMEIP__SATOENABLEST_H__
#define __ARA_COM_VSOMEIP__SATOENABLEST_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class SATOEnableSt:std::uint8_t
{
	Notactive=0U,
	SATOfunctionActive=1U,
	SATOfunctionandsoundreminderactive=2U,
	Notused=3U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__SATOENABLEST_H__
