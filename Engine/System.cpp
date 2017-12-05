#include "System.h"
#include "Input.h"
#include "Audio.h"
#include "App.h"
// to do list:
// 1. doda� przekazywanie zmiennych przez rekurencj� w celu przyspieszenia dzia�ania
// 2. zrobi� pewien konkretny typ wiadomo�ci przekazywanych przez system zamiast integer�w
// 3. porzuci� �ycie rodzinne w celu ca�kowitego oddania si� projektowi

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