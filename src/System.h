#include "SystemBase.h"

#if defined(PLATFORM_WINDOWS)
#include "SystemWindows.h"
#elif defined(PLATFORM_PS4)
#include "SystemPS4.h"
#include "ControllerPS4.hpp"
#else
// warn at compile time
#endif