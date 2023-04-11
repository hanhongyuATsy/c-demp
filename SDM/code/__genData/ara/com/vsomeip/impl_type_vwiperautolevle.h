#ifndef __ARA_COM_VSOMEIP__VWIPERAUTOLEVLE_H__
#define __ARA_COM_VSOMEIP__VWIPERAUTOLEVLE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class vWiperAutoLevle:std::uint8_t
{
	Invalid=0U,
	Level1=1U,
	Level2=2U,
	Level3=3U,
	Level4=4U,
	Level5=5U,
	Level6=6U,
	Level7=7U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__VWIPERAUTOLEVLE_H__
