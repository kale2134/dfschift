#pragma once

#include <SFML/Graphics.hpp>

class Texture : public sf::Texture {
    unsigned int frame_x, frame_y;
    unsigned int frames_ignored;
public:
    void setFrameSize(int x, int y) {
        frame_x = x; frame_y = y;
    }
    sf::Vector2u getFrameSize() {
        return sf::Vector2u(frame_x, frame_y);
    }
    unsigned int numberOfFrames() {
        sf::Vector2u size = getSize();
        return (size.x/frame_x)*(size.y/frame_y) - frames_ignored;
    }
    sf::Vector2u frameCoords(unsigned int n) {
        if(n>=numberOfFrames()) return sf::Vector2u(0,0);
        
        unsigned int nfx = getSize().x/frame_x;
        
        unsigned int x = (n%nfx) * frame_x;
        unsigned int y = (n/nfx) * frame_y;
        return sf::Vector2u(x,y);
    }

    Texture() : sf::Texture(), frame_x(0), frame_y(0), frames_ignored(0) {}
};
