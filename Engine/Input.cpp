#include "Input.h"
#include <string>

void Input::HandleMessage(int _msg)
{
}


void Input::HandleInput()
{
	//std::cin >> x;
	//CheckInput(x);

	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		CheckInput("left_key");
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
		CheckInput("right_key");
	}
}

void Input::CheckInput(std::string _x)
{
	if (_x == "left_key")
		PostMessage(0);
	else if (_x == "right_key")
		PostMessage(1);
}
