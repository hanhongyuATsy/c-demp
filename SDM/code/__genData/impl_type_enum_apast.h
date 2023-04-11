#ifndef ____ENUM_APAST_H__
#define ____ENUM_APAST_H__


#include "cstdint"







enum class Enum_APASt:std::uint8_t
{
	Off=0U,
	Standby=1U,
	Searching=2U,
	Guidance_active=3U,
	Completed=4U,
	Failure=5U,
	Terminated=6U,
	Invalid=7U
};

#endif //____ENUM_APAST_H__
