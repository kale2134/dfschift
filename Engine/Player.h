#pragma once
#include <iostream>
#include "Object.h"

class Player : public Object
{
public:
	Player();

	void onCreate();
	void onStep() override;

	void movePlayer();
};