#include "Audio.h"

std::queue <std::string> Audio::sound;

void Audio::play()
{
	while (!sound.empty())
	{
		std::cout << sound.front() << std::endl;
		sound.pop();
	}
}

void Audio::playSound(std::string x)
{
	sound.push(x);
}

void Audio::HandleMessage(int _msg)
{
	switch (_msg)
	{
	case 0: log("left");//playSound(std::string("zero"));
		break;

	case 1: log("right");//playSound(std::string("one"));
		break;
	}
}
