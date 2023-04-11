#ifndef __ARA_COM_VSOMEIP__SECONDMIDSEATST_H__
#define __ARA_COM_VSOMEIP__SECONDMIDSEATST_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace vsomeip
{


enum class SecondMIDSeatSt:std::uint8_t
{
	Undefined=0U,
	Off=1U,
	On=2U,
	Failure=3U
};

}//ara
}//com
}//vsomeip
#endif //__ARA_COM_VSOMEIP__SECONDMIDSEATST_H__
