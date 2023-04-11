#ifndef __ARA_COM_VSOMEIP__FOBCURRENTPOSITION_H__
#define __ARA_COM_VSOMEIP__FOBCURRENTPOSITION_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class FOBCurrentPosition:std::uint8_t
{
	Undifiend=0U,
	Insidevehicle=1U,
	Outsidevehicle=2U,
	Notused=3U,
	Insidetrunk=4U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__FOBCURRENTPOSITION_H__
