#include "Input.h"
#include <string>

void Input::handleMessage(int _msg)
{
}


void Input::handleInput()
{
	std::cin >> x;
	checkInput(x);
}

void Input::checkInput(std::string _x)
{
	if (_x == "zero")
		postMessage(0);
	else if (_x == "one")
		postMessage(1);
}