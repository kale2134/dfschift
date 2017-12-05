#pragma once
#include <iostream>
#include <vector>
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
	std::vector <std::unique_ptr<Object>> toDraw;
	/// TEST
public:
	void Draw();

	void CreateObject(Object *_object);

	void RemoveObject(Object *_object);

	void HandleMessage(int _msg);

	

};