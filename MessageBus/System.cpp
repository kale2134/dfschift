#include "System.h"
#include "Input.h"
#include "Audio.h"

// to do list:
// 1. dodaæ przekazywanie zmiennych przez rekurencjê w celu przyspieszenia dzia³ania
// 2. zrobiæ pewien konkretny typ wiadomoœci przekazywanych przez system zamiast integerów
// 3. porzuciæ ¿ycie rodzinne w celu ca³kowitego oddania siê projektowi

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
