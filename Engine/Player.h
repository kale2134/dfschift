#pragma once
#include <iostream>
#include "Object.h"

class Player : public AnimatedObject
{
public:
	Player(sf::Texture);

	void onCreate();
	void onStep() override;

	void movePlayer();
};