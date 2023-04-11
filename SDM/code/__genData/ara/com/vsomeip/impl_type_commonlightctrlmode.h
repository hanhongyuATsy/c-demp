#ifndef __ARA_COM_VSOMEIP__COMMONLIGHTCTRLMODE_H__
#define __ARA_COM_VSOMEIP__COMMONLIGHTCTRLMODE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class CommonLightCtrlMode:std::uint8_t
{
	OFF=0U,
	ON=1U,
	Notcare=255U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__COMMONLIGHTCTRLMODE_H__
