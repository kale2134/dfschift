#include "System.h"
#include "Input.h"
#include "Audio.h"

// to do list:
// 1. doda� przekazywanie zmiennych przez rekurencj� w celu przyspieszenia dzia�ania
// 2. zrobi� pewien konkretny typ wiadomo�ci przekazywanych przez system zamiast integer�w
// 3. porzuci� �ycie rodzinne w celu ca�kowitego oddania si� projektowi

void System::handleMessage(int _msg)
{
	switch (_msg)
	{
	case 0:
		break;
	case 1:
		break;
	}
	
}

void System::postMessage(int _msg)
{
	Input *i = new Input;
	i->handleMessage(_msg);

	Audio *a = new Audio;
	a->handleMessage(_msg);
}
