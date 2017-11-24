#pragma once

#include "Window.h"

class Framework {
    Window window;
public:
    void draw();
    void clearWindow();
    void display();
    
    void playSound();
    void playMusic();

    void getInputs();
    //TODO(lubasowo0): zwrappowac wszystkie potrzebne funkcje SMFLa
};
