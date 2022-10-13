#include "SystemBase.h"

#if defined(PLATFORM_WINDOWS)
#include "SystemWindows.h"
#elif defined(PLATFORM_ORBIS)
#include "SystemPS4.h"
#else
// warn at compile time
#endif