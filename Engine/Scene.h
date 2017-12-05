#pragma once
#include <vector>
#include <memory>
#include "System.h"
#include "Object.h"

class Scene : public System
{
public:
	//
	//std::vector <Object> SceneElements;
	//
	/// TEST - using unique_pointers
	std::vector <std::unique_ptr<Object>> SceneElements;
	/// TEST
	void AddElement(Object *_object);
	void DeleteElement(Object *_object);

	void LoadElements();
	
	void HandleMessage(int _msg);
};