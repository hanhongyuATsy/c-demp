#ifndef __ARA_COM_PS_SETPARAMETER__INT_ADBSTATE_H__
#define __ARA_COM_PS_SETPARAMETER__INT_ADBSTATE_H__


#include "cstdint"





namespace ara
{
namespace com
{
namespace ps_setparameter
{


enum class Int_ADBState:std::uint8_t
{
	close=0U,
	open=1U
};

}//ara
}//com
}//ps_setparameter
#endif //__ARA_COM_PS_SETPARAMETER__INT_ADBSTATE_H__
