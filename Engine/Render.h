#pragma once
#include <iostream>
#include <list>
#include <memory>
#include "Object.h"
#include "System.h"
#include <SFML/Graphics.hpp>

class Render : public System
{
private:
	//
	//static std::deque <Object> toDraw;
	//
	/// TEST
	std::list <RenderableObject*> toDraw;
	/// TEST
public:
	void Draw();

	void AddObject(Object *_object);

	void RemoveObject(Object *_object);

	void HandleMessage(int _msg);

	

};