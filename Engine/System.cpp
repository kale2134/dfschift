#include "System.h"
#include "Input.h"
#include "Audio.h"
#include "App.h"
// to do list:
// 1. dodaæ przekazywanie zmiennych przez rekurencjê w celu przyspieszenia dzia³ania
// 2. zrobiæ pewien konkretny typ wiadomoœci przekazywanych przez system zamiast integerów
// 3. porzuciæ ¿ycie rodzinne w celu ca³kowitego oddania siê projektowi

void System::RegisterApp(App *const _App)
{
	mApp = _App;
}

void System::PostMessage(int _msg)
{
	mApp->mInput->HandleMessage(_msg);
	mApp->mAudio->HandleMessage(_msg);
}

void System::HandleMessage(int _msg)
{
	switch (_msg)
	{
	case 0:
		break;
	case 1:
		break;
	}
	
}