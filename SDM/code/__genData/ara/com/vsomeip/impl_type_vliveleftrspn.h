#ifndef __ARA_COM_VSOMEIP__VLIVELEFTRSPN_H__
#define __ARA_COM_VSOMEIP__VLIVELEFTRSPN_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class vLiveLeftRspn:std::uint8_t
{
	Nocommand=0U,
	comebackontime=1U,
	nolife=2U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__VLIVELEFTRSPN_H__
