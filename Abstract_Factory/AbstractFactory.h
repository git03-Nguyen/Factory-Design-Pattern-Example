#pragma once
#include "GUI.h"

class AbstractFactory {
public:
	virtual GUI* createButton() const = 0;
	virtual GUI* createDialog() const = 0;
};

class DarkThemeFactory : public AbstractFactory {
public:
	GUI* createButton() const;
	GUI* createDialog() const;
};

class LightThemeFactory : public AbstractFactory {
public: 
	GUI* createButton() const;
	GUI* createDialog() const;
};

