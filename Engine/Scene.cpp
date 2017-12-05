#include "Scene.h"

void Scene::AddElement(Object *_object)
{
	SceneElements.push_back(std::unique_ptr<Object>(_object));
}

void Scene::DeleteElement(Object *_object)
{
	SceneElements.begin();
	SceneElements.end();
	for (int i = 0; i < SceneElements.size(); ++i)
	{
		//if (SceneElements.at(i).isEqual(_object))
			SceneElements.erase(SceneElements.begin()+i);
			// to do: check if erase work
	}
}

void Scene::LoadElements()
{
	for (int i = 0; i < SceneElements.size(); ++i)
	{
		SceneElements.at(i)->onStep();
	}
}

void Scene::HandleMessage(int _msg)
{
}
