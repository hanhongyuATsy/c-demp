#ifndef __ARA_COM_VSOMEIP__ENUMUSAGEMODESTATUSSERVICE_H__
#define __ARA_COM_VSOMEIP__ENUMUSAGEMODESTATUSSERVICE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class EnumUsagemodeStatusService:std::uint8_t
{
	Standby=0U,
	Comfort=1U,
	DRV=3U,
	Invalid=4U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__ENUMUSAGEMODESTATUSSERVICE_H__
