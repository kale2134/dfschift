#pragma once
#include <iostream>
#include <chrono>
#include <string>
#include <SFML/Graphics.hpp>

class Object
{
public:
	int id;
	int x, y;
	
	//void Init();
	virtual void onCreate();
	virtual void onStep();

	bool isEqual(const Object &_object) const;
	void operator==(const Object &_object) const;
};

class RenderableObject : virtual public Object {
protected:
	sf::Texture texture;
public:
	sf::Sprite sprite;

	void SetTexture(sf::Texture);
	
	RenderableObject(sf::Texture);
};

class AnimatedObject : public RenderableObject {
	bool animationRunning;
	std::chrono::steady_clock::time_point lastUpdate;
	double time;
	double speed;
	
	unsigned int frame_x, frame_y;
	unsigned int frames;
	
	unsigned int frame;
	
	sf::Vector2u frameCoords(unsigned int n);
	void changeFrame(unsigned int n);
	
public:
	
	void setAnimationProperties(int x,int y,int n);
	
	void animationStart(double);
	void animationUpdate();
	void animationStop();
	
	AnimatedObject(sf::Texture);
};