#include "Audio.h"

void Audio::playSound(std::string x)
{
	log(x);
}

void Audio::handleMessage(int _msg)
{
	switch (_msg)
	{
	case 0: playSound(std::string("zero"));
		break;

	case 1: playSound(std::string("one"));
		break;
	}
}
