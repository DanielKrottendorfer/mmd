#pragma once
#include "SystemBase.h"
#include <stdio.h>

class SystemImplWindows {
public:
	size_t CheckUsers() {
		printf("[Daniel] hello Windows\n"); 
		return 0; 
	};
};

typedef SystemBase<SystemImplWindows> System;
