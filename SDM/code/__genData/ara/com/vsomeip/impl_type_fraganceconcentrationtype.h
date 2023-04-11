#ifndef __ARA_COM_VSOMEIP__FRAGANCECONCENTRATIONTYPE_H__
#define __ARA_COM_VSOMEIP__FRAGANCECONCENTRATIONTYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class FraganceConcentrationType:std::uint8_t
{
	Nocommand=0U,
	OFF=1U,
	Low=2U,
	Mid=3U,
	High=4U,
	On=5U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__FRAGANCECONCENTRATIONTYPE_H__
