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

void Player::FixedUpdate()
{
	//std::cout << "<" << sprite.getPosition().x << ", " << sprite.getPosition().y << ">" << std::endl;
	
	if (up)
	{
		sprite.move(0,-2);
	} 
	if (down)
	{
		sprite.move(0,2);
	}
	if (left)
	{
		sprite.setScale(1.0f,1.0f);
		sprite.move(-2,0);
	}
	if (right)
	{
		sprite.setScale(-1.0f,1.0f);
		sprite.move(2,0);
	}
}

void Player::movePlayer()
{
	up = sf::Keyboard::isKeyPressed(sf::Keyboard::Up);
	down = sf::Keyboard::isKeyPressed(sf::Keyboard::Down);
	left = sf::Keyboard::isKeyPressed(sf::Keyboard::Left);
	right = sf::Keyboard::isKeyPressed(sf::Keyboard::Right);
}
