#include "Object.h"

void Object::Init()
{
	sprite.setTexture(texture);
	sprite.setPosition(sf::Vector2f(x, y));
}

void Object::onCreate()
{
}

void Object::onStep()
{
}

bool Object::isEqual(const Object &_object) const
{
	if (this->id == _object.id)
		return true;
	else
		return false;
}

void Object::operator==(const Object &_object) const
{
	this->isEqual(_object);
}
