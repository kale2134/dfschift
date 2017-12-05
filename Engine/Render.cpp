#include "Render.h"
#include <windows.h>
#include "App.h"

void Render::Draw()
{
	mApp->mWindow.clear(sf::Color::Black);
	for (int i = 0; i < toDraw.size(); ++i)
	{
		sf::Sprite mBuffer= toDraw.at(i)->sprite;
		mApp->mWindow.draw(mBuffer);
	}
}

void Render::CreateObject(Object *_object)
{
	toDraw.push_back(std::unique_ptr<Object>(_object));
}

void Render::RemoveObject(Object *_object)
{
	//toDraw.erase(toDraw.begin(), toDraw.end(), obj, toDraw.end());
}

void Render::HandleMessage(int _msg)
{
}

