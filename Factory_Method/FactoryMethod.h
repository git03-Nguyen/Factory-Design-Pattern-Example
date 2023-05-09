#pragma once
#include "GUI.h"

class Factory {
public:
	virtual GUI* create() const = 0;
};

class ButtonFactory : public Factory {
public:
	GUI* create() const;
};

class DialogFactory : public Factory {
public:
	GUI* create() const;
};

class ScrollBarFactory : public Factory {
public:
	GUI* create() const;
};
