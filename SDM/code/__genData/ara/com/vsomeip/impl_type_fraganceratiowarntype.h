#ifndef __ARA_COM_VSOMEIP__FRAGANCERATIOWARNTYPE_H__
#define __ARA_COM_VSOMEIP__FRAGANCERATIOWARNTYPE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class FraganceRatioWarnType:std::uint8_t
{
	almostempty=1U,
	alreadyempty=2U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__FRAGANCERATIOWARNTYPE_H__
