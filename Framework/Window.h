#pragma once

#include <SFML/Graphics.hpp>
#include <queue>
#include <list>

#include "Input.h"
#include "Object.h"

class Window : public sf::RenderWindow {
    //sf::RenderWindow window;
    std::queue<Input> inputs;

    //std::list<Object>* objects;
public:
    void loop(Object* o);

    Window(int w, int h);
};
