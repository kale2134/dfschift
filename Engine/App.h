#pragma once
#include <SFML/Graphics.hpp>
#include "Input.h"
#include "Audio.h"
#include "Scene.h"
#include "Player.h"
#include "Render.h"

class App 
{
private:
	int mRunning;

	
public:
	//// Variables
	// Basic vars
	sf::RenderWindow mWindow;
	sf::VideoMode mVideoMode;
	std::string mWindowTitle;

	int windowWidth, windowHeight;

	sf::Event mEvent;
	// Pointers to other modules
	Input *mInput		=	new Input;
	Audio *mAudio		=	new Audio;
	Scene *mScene		=	new Scene;
	Render *mRender		=	new Render;
	//// Methods
	int Run();
	void GameLoop();
	void InitWindow();
	void InitSettingsConfig();
	bool isRunning();
	void RegisterApp();


	// test
	void EventManager();
};