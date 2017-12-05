#pragma once
#include "System.h"
#include <string>
#include <queue>

class Audio : public System
{
private:
	static std::queue <std::string> sound;

public:
	void play();

	void playSound(std::string x);

	virtual void HandleMessage(int _msg) override;
};