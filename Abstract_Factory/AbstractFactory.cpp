#include "AbstractFactory.h"

GUI* DarkThemeFactory::createButton() const {
    return new (std::nothrow) DarkButton;
}

GUI* DarkThemeFactory::createDialog() const {
    return new (std::nothrow) DarkDialog;
}

GUI* LightThemeFactory::createButton() const {
    return new (std::nothrow) LightButton;
}

GUI* LightThemeFactory::createDialog() const {
    return new (std::nothrow) LightDialog;
}

GUI* PinkThemeFactory::createButton() const {
    return new (std::nothrow) PinkButton;
}

GUI* PinkThemeFactory::createDialog() const {
    return new (std::nothrow) PinkDialog;
}
