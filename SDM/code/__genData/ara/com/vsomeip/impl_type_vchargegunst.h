#ifndef __ARA_COM_VSOMEIP__VCHARGEGUNST_H__
#define __ARA_COM_VSOMEIP__VCHARGEGUNST_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class vChargeGunSt:std::uint8_t
{
	DisConnected=0U,
	Connected=1U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__VCHARGEGUNST_H__
