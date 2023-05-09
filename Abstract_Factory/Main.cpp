#include "GUI.h"
#include "AbstractFactory.h"

int main() {

	AbstractFactory* factory = nullptr;
	// If user uses dark theme => ONLY dark family: DarkButton, DarkDialog are created at the same time, at runtime
	// If user uses light theme => ONLY light family: LightButton, LightDialog are created at the same time, at runtime

	for (int choice = 0; choice < 2; choice++) {
		if (choice == 0) {
			std::cout << "User choose dark theme: " << std::endl;
			factory = new DarkThemeFactory;
		}
		else if (choice == 1) {
			std::cout << "User choose light theme: " << std::endl;
			factory = new LightThemeFactory;
		}
		GUI* gui1 = factory->createButton();
		if (gui1) gui1->display();

		GUI* gui2 = factory->createDialog();
		if (gui2) gui2->display();

		std::cout << "---" << std::endl;
		delete gui1, gui2, factory;
	}

	system("PAUSE");
	return 0;
}