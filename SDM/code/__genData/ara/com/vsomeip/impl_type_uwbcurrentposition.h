#ifndef __ARA_COM_VSOMEIP__UWBCURRENTPOSITION_H__
#define __ARA_COM_VSOMEIP__UWBCURRENTPOSITION_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class UWBCurrentPosition:std::uint8_t
{
	Undefined=0U,
	Passivestartzone=1U,
	Insidetrunkzone=2U,
	Inpassiveaccessleftzone=3U,
	Inpaasiveaccessrightzone=4U,
	Intrunkpassiveaccesszone=5U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__UWBCURRENTPOSITION_H__
