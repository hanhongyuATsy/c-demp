#ifndef __ARA_UCM_CSM__INSTALLSTATEDATATYPE_H__
#define __ARA_UCM_CSM__INSTALLSTATEDATATYPE_H__


#include "cstdint"





namespace ara
{
namespace ucm
{
namespace csm
{


enum class InstallStateDataType:std::uint8_t
{
	kIdle=0U,
	kInstallTrigger=1U,
	kInstallRecharging=2U,
	kInstallAbnormalEnvir=3U,
	kInstalling=4U
};

}//ara
}//ucm
}//csm
#endif //__ARA_UCM_CSM__INSTALLSTATEDATATYPE_H__
