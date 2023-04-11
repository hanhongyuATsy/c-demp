#ifndef __ARA_COM_VSOMEIP__INT_GROUPID_H__
#define __ARA_COM_VSOMEIP__INT_GROUPID_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class Int_GroupID:std::uint8_t
{
	Media=0U,
	VR=1U,
	Phone=2U,
	Navi=3U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__INT_GROUPID_H__
