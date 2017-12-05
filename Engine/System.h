#pragma once
#include <iostream>
#define log(x) std::cout << x << std::endl;

class App;

class System
{
public:
	App *mApp;
	void RegisterApp(App *const _anApp);
	void PostMessage(int _msg);
	virtual void HandleMessage(int _msg) = 0;
	
};