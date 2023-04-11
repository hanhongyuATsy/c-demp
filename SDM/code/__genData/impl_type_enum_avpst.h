#ifndef ____ENUM_AVPST_H__
#define ____ENUM_AVPST_H__


#include "cstdint"







enum class Enum_AVPSt:std::uint8_t
{
	Off=0U,
	Standby=1U,
	checking=2U,
	HAVP_Active=3U,
	Completed=4U,
	Terminated=5U,
	Failure=6U
};

#endif //____ENUM_AVPST_H__
