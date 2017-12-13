#pragma once
#include <iostream>
#include "Object.h"

class Player : public AnimatedObject
{
public:
	bool up,down,left,right;

	Player(sf::Texture);

	void onCreate();
	void onStep() override;
	void FixedUpdate() override;

	void movePlayer();
};