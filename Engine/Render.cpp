#include "Render.h"
#include <iostream>
#include "App.h"

void Render::Draw()
{
	mApp->mWindow.clear(sf::Color::Black);
	for (auto& obj : toDraw) {
		sf::Sprite mBuffer = obj->sprite;
		mApp->mWindow.draw(mBuffer);
	}
}

void Render::AddObject(Object *_object)
{
	RenderableObject* obj = dynamic_cast<RenderableObject*> (_object);
	if(obj == nullptr) {
		std::cerr << "Error: Tried to render unrenderable object." << std::endl;
		return;
	}
	
	toDraw.push_back(obj);
}

void Render::RemoveObject(Object *_object)
{
	//toDraw.erase(toDraw.begin(), toDraw.end(), obj, toDraw.end());
}

void Render::HandleMessage(int _msg)
{
}

