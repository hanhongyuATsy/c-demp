#ifndef __ARA_COM_VSOMEIP__FRANGANCETASTEIDCHANGEINFOTYPE_H__
#define __ARA_COM_VSOMEIP__FRANGANCETASTEIDCHANGEINFOTYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class FranganceTasteIdChangeInfoType:std::uint8_t
{
	none=0U,
	TasteIDChanged=1U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__FRANGANCETASTEIDCHANGEINFOTYPE_H__
