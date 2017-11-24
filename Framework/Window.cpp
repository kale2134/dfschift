#include "Window.h"
#include <SFML/Window.hpp>

Window::Window(int w, int h)
: window(sf::VideoMode(w,h), "test xd") {}

void Window::loop() {
    while(window.isOpen()) {
        sf::Event event;
        while(window.pollEvent(event)) {
            if(event.type == sf::Event::Closed)
                window.close();
        }
    }
}
