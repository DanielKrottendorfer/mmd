#pragma once
#include "SystemBase.h"
#include <stdio.h>

class SystemImplPS4 {
public:
	size_t CheckUsers() { 
		printf("[Daniel] hello PS5\n");
		return 0; 
	};
};

typedef SystemBase<SystemImplPS4> System;
