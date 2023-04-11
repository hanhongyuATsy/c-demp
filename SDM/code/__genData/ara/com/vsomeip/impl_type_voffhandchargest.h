#ifndef __ARA_COM_VSOMEIP__VOFFHANDCHARGEST_H__
#define __ARA_COM_VSOMEIP__VOFFHANDCHARGEST_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class vOffHandChargeSt:std::uint8_t
{
	undefined=0U,
	Started=1U,
	Stoped=2U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__VOFFHANDCHARGEST_H__
