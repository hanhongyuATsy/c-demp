#ifndef __ARA_COM_VSOMEIP__RECMODETYPE_H__
#define __ARA_COM_VSOMEIP__RECMODETYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class RecModeType:std::uint8_t
{
	recirculation=1U,
	fresh=2U,
	AUTO=3U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__RECMODETYPE_H__
