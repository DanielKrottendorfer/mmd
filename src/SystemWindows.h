#pragma once
#include "SystemBase.h"

class SystemImplWindows {
public:
	size_t CheckUsers() { return 0; };
};

typedef SystemBase<SystemImplWindows> System;
