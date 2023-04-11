#ifndef __ARA_COM_VSOMEIP__VWIPERPARKST_H__
#define __ARA_COM_VSOMEIP__VWIPERPARKST_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class vWiperParkSt:std::uint8_t
{
	Undefined=0U,
	In=1U,
	Out=2U,
	Invalid=3U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__VWIPERPARKST_H__
