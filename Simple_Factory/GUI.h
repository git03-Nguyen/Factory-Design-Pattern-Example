#pragma once
#include <iostream>

class GUI {
public:
	virtual void display() const = 0;
};

class Button : public GUI {
public:
	void display() const;
};

class Dialog : public GUI {
public:
	void display() const;
};
