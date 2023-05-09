#pragma once
#include "GUI.h"
#include <cstring>
#include <cstdlib>
#include <ctime>

class Factory {
public:
	static GUI* create(const char* type);
};

