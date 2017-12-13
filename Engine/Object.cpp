#include "Object.h"

/*void Object::Init()
{
	sprite.setTexture(texture);
	sprite.setPosition(sf::Vector2f(x, y));
}*/

void Object::onCreate()
{
}

void Object::onStep()
{
}

void Object::FixedUpdate()
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

///

void RenderableObject::SetTexture(sf::Texture t) {
	texture = t;
	sprite.setOrigin(texture.getSize().x/2.0, texture.getSize().y/2.0);
}

RenderableObject::RenderableObject(sf::Texture t) {
	SetTexture(t);
	sprite.setTexture(texture);
}

///

sf::Vector2u AnimatedObject::frameCoords(unsigned int n) {
	if(n>=frames) return sf::Vector2u(0,0);
	
	unsigned int nfx = texture.getSize().x / frame_x;
	
	unsigned int x = (n%nfx) * frame_x;
	unsigned int y = (n/nfx) * frame_y;
	
	return sf::Vector2u(x,y);
}

void AnimatedObject::changeFrame(unsigned int n) {
	sf::Vector2u coords = frameCoords(n);

	sprite.setTextureRect(sf::IntRect(coords.x, coords.y, frame_x, frame_y));
}

void AnimatedObject::setAnimationProperties(int x,int y,int n) {
	animationRunning = false;
	
	frame_x = x;
	frame_y = y;
	frames = n;
	
	sprite.setOrigin(frame_x/2.0, frame_y/2.0);
	
	frame = 0;
	changeFrame(frame);
}

void AnimatedObject::animationStart(double s) {
	lastUpdate = std::chrono::steady_clock::now();
	
	time = 0;
	speed = s;
	animationRunning = true;
}

void AnimatedObject::animationUpdate() {
	if(!animationRunning) return;
	
	auto now = std::chrono::steady_clock::now();
	
	time += std::chrono::duration_cast< std::chrono::duration<double> > (now - lastUpdate).count();
	while(time >= speed) {
		time -= speed;
		frame++;
		if(frame >= frames) frame = 0;
	}
	
	changeFrame(frame);
	lastUpdate = now;
}

void AnimatedObject::animationStop() {
	animationRunning = false;
}

AnimatedObject::AnimatedObject(sf::Texture t) : RenderableObject(t) {
	animationRunning = false;
	
	setAnimationProperties(texture.getSize().x, texture.getSize().y, 1);

	frame = 0;
}