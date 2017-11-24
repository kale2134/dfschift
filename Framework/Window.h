#pragma once

#include <SFML/Window.hpp>
#include <queue>

#include "Input.h"

class Window {
    sf::Window window;
    std::queue<Input> inputs;
public:
    void loop();

    Window(int w, int h);
};
