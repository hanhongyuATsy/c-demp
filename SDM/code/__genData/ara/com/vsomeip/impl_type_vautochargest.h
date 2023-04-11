#ifndef __ARA_COM_VSOMEIP__VAUTOCHARGEST_H__
#define __ARA_COM_VSOMEIP__VAUTOCHARGEST_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class vAutoChargeSt:std::uint8_t
{
	Noschedule=0U,
	ChargeAwait=1U,
	StartCharge=2U,
	StopCharge=3U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__VAUTOCHARGEST_H__
