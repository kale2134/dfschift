#include "App.h"

int App::Run()
{
	// Set Running flag to true
	mRunning = true;

	// Load settings from config file
	InitSettingsConfig();

	// Create a window
	InitWindow();

	//to do: pass (this) to state manager

	// Register application to other modules
	RegisterApp();
	// Run the GameLoop
	GameLoop();
	
	// Before exit set the Running flag to false
	mRunning = false;

	// Clean up the mess


	return mRunning;
}

void App::GameLoop()
{
	// Load a sprite to display
	sf::Texture temp;
	temp.loadFromFile("j.png");
	
	Player *p = new Player(temp);
	//p->setAnimationProperties(240,314,22);

	mScene->AddElement(p);
	mRender->AddObject(p);
	
	std::thread t(&App::fixed,this,&(mScene->SceneElements));
	
	while (isRunning()) // to do: need to add more conditions (ex. stateManager.isRun etc...)
	{
		// to do: need to create class - event manager
		EventManager();
		mScene->LoadElements();
		mRender->Draw();
		
		//mAudio->play();
		mWindow.display();
		
		if(!mWindow.isOpen()) mRunning = false;
	}
	
	t.join();
}

void App::InitWindow()
{
	// Set the resolution
	mVideoMode.height = windowHeight;
	mVideoMode.width = windowWidth;

	// Recreate window
	mWindow.create(mVideoMode, mWindowTitle, sf::Style::Close);
	mWindow.clear(sf::Color::Black);
}

void App::InitSettingsConfig()
{
	windowWidth = 800;
	windowHeight = 480;
}

bool App::isRunning()
{
	return mRunning;
}

void App::RegisterApp()
{
	mInput->RegisterApp(this);
	mAudio->RegisterApp(this);
	mScene->RegisterApp(this);
	mRender->RegisterApp(this);
}

void App::EventManager()
{
	while (mWindow.pollEvent(mEvent))
	{
		if (mEvent.type == sf::Event::Closed)
			mWindow.close();

		mInput->HandleInput();
	}
}