#include "FactoryMethod.h"
#include "GUI.h"

int main() {

	Factory* factory = nullptr;

	// Factory Method - each concrete product has a concrete factory => easily to add/remove sub-class

	for (int choice = 0; choice < 2; choice++) {
		if (choice == 0) {
			factory = new ButtonFactory;
		}
		else if (choice == 1) {
			factory = new DialogFactory;
		}

		GUI* gui = factory->create();
		if (gui) gui->display();
		delete gui, factory;
	}

	// With Factory Method, we can easily add/remove sub-class for products.
	// For example, we can add ScrollBar just by write ScrollBar -> GUI and ScrollBarFactory -> Factory, 
		// we don't need to adjust the old codes.

	factory = new ScrollBarFactory;
	GUI* gui = factory->create();
	if (gui) gui->display();

	// Clear resources
	delete gui, factory;

	system("PAUSE");
	return 0;
}