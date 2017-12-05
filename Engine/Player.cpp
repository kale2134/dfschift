#include "Player.h"
#include "App.h"

Player::Player()
{
	texture.loadFromFile("o.png");
	id = 0;
	x = 20;
	y = 20;
	onCreate();
}

void Player::onCreate()
{
}

void Player::onStep()
{
	Init();
	movePlayer();
}

void Player::movePlayer()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
	{
		y--;
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
	{
		y++;
	}
}
