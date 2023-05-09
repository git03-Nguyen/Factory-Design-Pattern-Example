#include "GUI.h"
#include "SimpleFactory.h"
#include <string>

int main() {

	std::string typeInput[] = { "Button", "Dialog", "ScrollBar" }; // ScrollBar hasn't been implemented

	// Simple Factory - create instances from user input:
	std::cout << "This is a simple factory - get instances by an parameter at runtime:" << std::endl;
	for (int i = 0; i < 3; i++) {
		GUI* gui = Factory::create(typeInput[i].c_str());
		if (gui) gui->display();
		else std::cout << typeInput[i] + " not implemented!" << std::endl;
		delete gui;
	}

	// With Simple Factory, we cannot easily add/remove sub-class products.
	// For example, if we want to add ScrollBar inheritting GUI, we have to adjust the old codes -> inflexible

	system("PAUSE");
	return 0;
}