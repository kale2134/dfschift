#include <iostream>
#include <thread>
#include <chrono>
using namespace std::chrono_literals;

#include "Framework/Window.h"
#include "Framework/Object.h"

int main() {
    Texture t;
    t.loadFromFile("j.png");
    t.setFrameSize(240,314);
    Object o(&t);

    Window window(800,600);
    std::thread th(&Window::loop, &window, &o);
    
    while(window.isOpen()) {
        for(int i = 0; i<22 && window.isOpen(); i++) {
            o.changeFrame(i);
            std::this_thread::sleep_for(20ms);
        }
    }

    th.join();
}
