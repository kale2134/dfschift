#include <iostream>
#include <SFML/Graphics.hpp>
#include "Input.h"
#include "Audio.h"

int main()
{
	sf::RenderWindow window(sf::VideoMode(800, 480), "DF App", sf::Style::Close);

	while (window.isOpen())
	{
		sf::Event event;
		while (window.pollEvent(event))
		{

			if (event.type == sf::Event::Closed)
				window.close();
		}
		
		Input *i = new Input;
		i->handleInput();
	}
}