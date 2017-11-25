#include "Window.h"

#include "Object.h"

#include <iostream>

Window::Window(int w, int h)
: sf::RenderWindow(sf::VideoMode(w,h), "test xd") {}

void Window::loop(Object* o) {
    while(isOpen()) {
        sf::Event event;
        while(pollEvent(event)) {
            if(event.type == sf::Event::Closed)
                close();
        }
        clear(sf::Color::Blue);
        draw(*o);
        display();
    }
}

