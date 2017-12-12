#include "Player.h"
#include "App.h"

Player::Player(sf::Texture t) : AnimatedObject(t) {
	//texture.loadFromFile("o.png");
	id = 0;
	//x = 20;
	//y = 20;
	sprite.setPosition(20,20);
	
	onCreate();
}

void Player::onCreate()
{
	setAnimationProperties(240,314,22);
	animationStart(0.02);
}

void Player::onStep()
{
	//Init();
	movePlayer();
	animationUpdate();
}

void Player::movePlayer()
{
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Up))
	{
		sprite.move(0,-1);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Down))
	{
		sprite.move(0,1);
	}
}
