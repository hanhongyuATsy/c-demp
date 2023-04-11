#ifndef __ARA_COM_VSOMEIP__VSYNCST_H__
#define __ARA_COM_VSOMEIP__VSYNCST_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class vSyncSt:std::uint8_t
{
	non_synchronize=0U,
	synchronize=1U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__VSYNCST_H__
