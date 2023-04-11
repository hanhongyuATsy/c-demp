#ifndef ____ENUM_RAST_H__
#define ____ENUM_RAST_H__


#include "cstdint"







enum class Enum_RASt:std::uint8_t
{
	Off=0U,
	Standby=1U,
	Confirm=2U,
	Active=3U,
	Completed=4U,
	Failure=5U,
	Terminated=6U,
	Reserved=7U
};

#endif //____ENUM_RAST_H__
