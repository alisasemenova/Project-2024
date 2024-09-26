#include <SFML/Graphics.hpp>
#include "Mainmenu.h"
#include "Game.h"
using namespace sf;
void menu(RenderWindow& window)
{
    Texture menuTexture1, menuTexture2, menuTexture3, aboutTexture, menuBackground;
    menuTexture1.loadFromFile("images/newtry.png");
    menuTexture2.loadFromFile("images/aboutgame.png");
    menuTexture3.loadFromFile("images/exit.png");
    aboutTexture.loadFromFile("images/about1.jpg");
    menuBackground.loadFromFile("images/mainmenu1.jpg");
    Sprite menu1(menuTexture1), menu2(menuTexture2), menu3(menuTexture3), about(aboutTexture), menuBg(menuBackground);
    bool isMenu = 1;
    int menuNum = 0;
    menu1.setPosition(500, 300);
    menu2.setPosition(700, 550);
    menu3.setPosition(700, 800);
    menuBg.setPosition(300, 20);
    about.setPosition(-10, -150);
    while (isMenu)
    {
        menu1.setColor(Color::White);
        menu2.setColor(Color::White);
        menu3.setColor(Color::White);
        menuNum = 0;
        window.clear(Color(255, 255, 255));

        if (IntRect(500, 310, 800, 150).contains(Mouse::getPosition(window))) { menu1.setColor(Color::Red); menuNum = 1; }
        if (IntRect(700, 560, 300, 150).contains(Mouse::getPosition(window))) { menu2.setColor(Color::Red); menuNum = 2; }
        if (IntRect(700, 860, 300, 150).contains(Mouse::getPosition(window))) { menu3.setColor(Color::Red); menuNum = 3; }

        if (Mouse::isButtonPressed(Mouse::Left))
        {
            if (menuNum == 1) { window.clear(sf::Color::White); window.display(); Game(window); isMenu = false; }//если нажали первую кнопку, то выходим из меню 
            if (menuNum == 2) { window.draw(about); window.display(); while (!Keyboard::isKeyPressed(Keyboard::Escape)); }
            if (menuNum == 3) { window.close(); isMenu = false; }

        }

        window.draw(menuBg);
        window.draw(menu1);
        window.draw(menu2);
        window.draw(menu3);

        window.display();
    }
}
