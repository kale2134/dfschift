#pragma once
#include "System.h"
#include <SFML/Window.hpp>
class Input : public System
{
private:
	std::string x;

public:
	void HandleMessage(int _msg);

	void HandleInput();
	void CheckInput(std::string _x);
};