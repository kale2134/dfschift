#pragma once
#include "System.h"

class Input : public System
{
private:
	std::string x;

public:
	void handleMessage(int _msg);

	void handleInput();
	void checkInput(std::string _x);
};