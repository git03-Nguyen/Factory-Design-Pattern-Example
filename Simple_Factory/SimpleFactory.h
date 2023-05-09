#pragma once
#include "GUI.h"
#include <cstring>

class Factory {
public:
	static GUI* create(const char* type);
};

