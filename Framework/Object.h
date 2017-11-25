#pragma once

#include <SFML/Graphics.hpp>
#include "Texture.h"

class Object : public sf::Sprite {
    Texture* texture;
public:
    void currentTexture(Texture* t) {
        texture = t;
        setTexture(*texture);

        sf::Vector2u framesize = t->getFrameSize();

        if(framesize.x != 0 && framesize.y != 0)
            setTextureRect(sf::IntRect(0,0,framesize.x,framesize.y)); 
    }

    void changeFrame(unsigned int n) {
        sf::Vector2u framesize = texture->getFrameSize();
        sf::Vector2u coords = texture->frameCoords(n);

        setTextureRect(sf::IntRect(coords.x, coords.y, framesize.x, framesize.y));
    }

    Object(Texture* t) : sf::Sprite(), texture(t) {
        currentTexture(t);
    }
};
