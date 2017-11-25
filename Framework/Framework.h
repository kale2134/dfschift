#pragma once

#include "Window.h"

class Framework {
public:
    Window window;
    
    void playSound();
    void playMusic();

    void getInputs();
    //TODO(lubasowo0): zwrappowac wszystkie potrzebne funkcje SMFLa
};
