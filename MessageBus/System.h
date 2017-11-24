#pragma once
#include <iostream>

#define log(x) std::cout << x << std::endl;

class System
{
public:
	virtual void handleMessage(int _msg) = 0;
	void postMessage(int _msg);

};