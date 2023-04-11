#ifndef __ARA_COM_VSOMEIP__IONPOPUPREQTYPE_H__
#define __ARA_COM_VSOMEIP__IONPOPUPREQTYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class IonPopupReqType:std::uint8_t
{
	nopopup=0U,
	Popup=1U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__IONPOPUPREQTYPE_H__
