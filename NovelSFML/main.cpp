#include <iostream>
#include "Mainmenu.h"
#include "Game.h"
#include <SFML/Graphics.hpp>
using namespace sf;

//int friends, study, procrastination = 0;

    int main()
    {
        sf::RenderWindow window(sf::VideoMode(1920, 1080), "TPU novella", Style::Fullscreen);
        menu(window);

        while (window.isOpen())
        {
            sf::Event event;
            while (window.pollEvent(event))
            {
                if (event.type == sf::Event::Closed || (event.type == sf::Event::KeyPressed && event.key.code == sf::Keyboard::Escape))
                    window.close();
            }
            window.clear(sf::Color::Black);
            window.display();
        }
        return 0;
    }
