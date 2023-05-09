#pragma once
#include <iostream>

class GUI {
public:
	virtual void display() const = 0;
};

class Button : public GUI {
public:
	virtual void display() const = 0;
};

class Dialog : public GUI {
public:
	virtual void display() const = 0;
};

class DarkButton : public Button {
public:
	void display() const;
};

class LightButton : public Button {
public:
	void display() const;
};

class DarkDialog : public Button {
public:
	void display() const;
};

class LightDialog : public Button {
public:
	void display() const;
};
