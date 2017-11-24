#pragma once
#include "System.h"
#include <string>

class Audio : public System
{
public:
	void playSound(std::string x);

	virtual void handleMessage(int _msg) override;
};