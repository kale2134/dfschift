#pragma once
#include <SFML/Graphics.hpp>
#include "Input.h"
#include "Audio.h"
#include "Scene.h"
#include "Player.h"
#include "Render.h"

#include <chrono>
#include <vector>
#include <thread>

#include <iostream>

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
	
	void fixed(std::vector<std::unique_ptr<Object>>* v) {
		using namespace std::chrono;
		while(isRunning()) {
			auto t1 = steady_clock::now();
			
			for(auto& obj : *v) {
				obj->FixedUpdate();
			}
			
			auto t2 = steady_clock::now();
			
			//std::cout << std::chrono::duration_cast< std::chrono::duration<double> > (t2-t1).count() << std::endl;
			
			std::this_thread::sleep_for(std::chrono::milliseconds(5)-(t2-t1));
		}
	}
};