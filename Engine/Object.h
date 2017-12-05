#pragma once
#include <iostream>
#include <string>
#include <SFML/Graphics.hpp>

class Object
{
public:
	int id;
	int x, y;
	sf::Texture texture;
	sf::Sprite sprite;

	void Init();
	virtual void onCreate();
	virtual void onStep();

	bool isEqual(const Object &_object) const;
	void operator==(const Object &_object) const;
};