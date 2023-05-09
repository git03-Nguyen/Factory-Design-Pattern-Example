#include "SimpleFactory.h"

GUI* Factory::create(const char* type) {
	if (!strcmp(type, "Button")) return new (std::nothrow) Button;
	if (!strcmp(type, "Dialog")) return new (std::nothrow) Dialog;
	return nullptr;
}
