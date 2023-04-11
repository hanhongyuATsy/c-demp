#ifndef __ARA_COM_VSOMEIP__VSOCLIMITED_H__
#define __ARA_COM_VSOMEIP__VSOCLIMITED_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class vSOCLimited:std::uint8_t
{
	percent50=1U,
	percent55=2U,
	percent60=3U,
	percent65=4U,
	percent70=5U,
	percent75=6U,
	percent80=7U,
	percent85=8U,
	percent90=9U,
	percent95=10U,
	percent100=11U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__VSOCLIMITED_H__
