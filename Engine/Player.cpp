#include "Player.h"
#include "App.h"

Player::Player(sf::Texture t) : AnimatedObject(t) {
	//texture.loadFromFile("o.png");
	id = 0;
	//x = 20;
	//y = 20;
	sprite.setPosition(400,240);
	
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
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
	{
		sprite.setScale(1.0f,1.0f);
		sprite.move(-1,0);
	}
	if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
	{
		sprite.setScale(-1.0f,1.0f);
		sprite.move(1,0);
	}
}
