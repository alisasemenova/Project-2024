#include <SFML/Graphics.hpp>
#include "Mainmenu.h"
#include "Game.h"
using namespace sf;
int friends, study, procrastination = 0;

void endofthegame(RenderWindow& window)
{
    Texture gameBack6, gameBack7, gameBack8, gameBack9, gameBack10;
    gameBack6.loadFromFile("images/friendsend.jpg");
    gameBack7.loadFromFile("images/studyend.jpg");
    gameBack8.loadFromFile("images/procend.jpg");
    gameBack9.loadFromFile("images/5choose.jpg");
    gameBack10.loadFromFile("images/Happyend.jpg");
    Sprite end4(gameBack6), end5(gameBack7), end6(gameBack8), background2(gameBack9), phrase2(gameBack10);
    bool isGame = 1;
    int gameNum = 0;
    bool flag = true;
    end4.setPosition(0, 0);
    end5.setPosition(0, 0);
    end6.setPosition(0, 0);
    background2.setPosition(0, 0);
    phrase2.setPosition(0, 0);
    while (isGame)
    {
        end4.setColor(Color::White);
        end5.setColor(Color::White);
        end6.setColor(Color::White);

        if (friends > study and friends > procrastination) { window.draw(end4); window.display(); }
        else if (study > friends and study > procrastination) { window.draw(end5); window.display(); }
        else if (procrastination > study and procrastination > friends) { window.draw(end6); window.display(); }
        else if (friends == procrastination and procrastination == study) { window.draw(phrase2); window.display(); }

        window.clear(Color(255, 255, 255));
    }
}

void Game6(RenderWindow& window)
{
    Texture gameBack6, gameBack7, gameBack8, gameBack9, gameBack10;
    gameBack6.loadFromFile("images/heart.png");
    gameBack7.loadFromFile("images/heart.png");
    gameBack8.loadFromFile("images/heart.png");
    gameBack9.loadFromFile("images/6choose.jpg");
    Sprite vibor1(gameBack6), vibor2(gameBack7), vibor3(gameBack8), background2(gameBack9);
    bool isGame = 1;
    int gameNum = 0;
    bool flag = true;
    vibor1.setPosition(303, 497);
    vibor2.setPosition(303, 674);
    vibor3.setPosition(303, 887);
    background2.setPosition(0, 0);
    while (isGame)
    {
        vibor1.setColor(Color::White);
        vibor2.setColor(Color::White);
        vibor3.setColor(Color::White);
        window.clear(Color(255, 255, 255));
        gameNum = 0;
        if (IntRect(303, 474, 713, 70).contains(Mouse::getPosition(window)) and flag) { vibor1.setColor(Color::Red); gameNum = 1; }
        if (IntRect(303, 674, 619, 70).contains(Mouse::getPosition(window)) and flag) { vibor2.setColor(Color::Red); gameNum = 2; }
        if (IntRect(303, 887, 619, 70).contains(Mouse::getPosition(window)) and flag) { vibor3.setColor(Color::Red); gameNum = 3; }

        if (Mouse::isButtonPressed(Mouse::Left))
        {
            if (gameNum == 1) { flag = false; procrastination += 1; }
            if (gameNum == 2) { flag = false; friends += +1; }
            if (gameNum == 3) { flag = false; study += +1; }

        }

        if (Keyboard::isKeyPressed(Keyboard::Enter) and !flag)
        {
            window.clear(sf::Color::White); window.display(); endofthegame(window); isGame = false;

        }

        window.draw(background2);
        window.draw(vibor1);
        window.draw(vibor2);
        window.draw(vibor3);
        window.display();
    }
}

void Game5(RenderWindow& window)
{
    Texture gameBack6, gameBack7, gameBack8, gameBack9, gameBack10;
    gameBack6.loadFromFile("images/heart.png");
    gameBack7.loadFromFile("images/heart.png");
    gameBack8.loadFromFile("images/heart.png");
    gameBack9.loadFromFile("images/5choose.jpg");
    Sprite vibor1(gameBack6), vibor2(gameBack7), vibor3(gameBack8), background2(gameBack9);
    bool isGame = 1;
    int gameNum = 0;
    bool flag = true;
    vibor1.setPosition(303, 474);
    vibor2.setPosition(303, 674);
    vibor3.setPosition(303, 887);
    background2.setPosition(0, 0);
    while (isGame)
    {
        vibor1.setColor(Color::White);
        vibor2.setColor(Color::White);
        vibor3.setColor(Color::White);
        window.clear(Color(255, 255, 255));
        gameNum = 0;
        if (IntRect(303, 474, 713, 120).contains(Mouse::getPosition(window)) and flag) { vibor1.setColor(Color::Red); gameNum = 1; }
        if (IntRect(303, 674, 619, 120).contains(Mouse::getPosition(window)) and flag) { vibor2.setColor(Color::Red); gameNum = 2; }
        if (IntRect(303, 887, 619, 70).contains(Mouse::getPosition(window)) and flag) { vibor3.setColor(Color::Red); gameNum = 3; }

        if (Mouse::isButtonPressed(Mouse::Left))
        {
            if (gameNum == 1) { flag = false; study += 1; }
            if (gameNum == 2) { flag = false; friends += 1; }
            if (gameNum == 3) { flag = false; procrastination += 1; }

        }

        if (Keyboard::isKeyPressed(Keyboard::Enter) and !flag)
        {
            window.clear(sf::Color::White); window.display(); Game6(window); isGame = false;

        }
        window.draw(background2);
        window.draw(vibor1);
        window.draw(vibor2);
        window.draw(vibor3);
        window.display();
    }
}

void Game4(RenderWindow& window)
{
    Texture gameBack6, gameBack7, gameBack8, gameBack9, gameBack10;
    gameBack6.loadFromFile("images/heart.png");
    gameBack7.loadFromFile("images/heart.png");
    gameBack8.loadFromFile("images/heart.png");
    gameBack9.loadFromFile("images/4choose.jpg");
    Sprite vibor1(gameBack6), vibor2(gameBack7), vibor3(gameBack8), background4(gameBack9);
    bool isGame = 1;
    int gameNum = 0;
    bool flag = true;
    vibor1.setPosition(203, 458);
    vibor2.setPosition(203, 626);
    vibor3.setPosition(203, 803);
    background4.setPosition(-100, 0);

    while (isGame)
    {
        vibor1.setColor(Color::White);
        vibor2.setColor(Color::White);
        vibor3.setColor(Color::White);
        window.clear(Color(255, 255, 255));
        gameNum = 0;
        if (IntRect(203, 458, 713, 120).contains(Mouse::getPosition(window)) and flag) { vibor1.setColor(Color::Red); gameNum = 1; }
        if (IntRect(203, 626, 619, 120).contains(Mouse::getPosition(window)) and flag) { vibor2.setColor(Color::Red); gameNum = 2; }
        if (IntRect(203, 803, 619, 120).contains(Mouse::getPosition(window)) and flag) { vibor3.setColor(Color::Red); gameNum = 3; }

        if (Mouse::isButtonPressed(Mouse::Left))
        {
            if (gameNum == 1) { flag = false; procrastination += 1; }
            if (gameNum == 2) { flag = false; friends += 1; }
            if (gameNum == 3) { flag = false; study += 1; }

        }

        if (Keyboard::isKeyPressed(Keyboard::Enter) and !flag)
        {
            window.clear(sf::Color::White); window.display(); Game5(window); isGame = false;

        }
        window.draw(background4);
        window.draw(vibor1);
        window.draw(vibor2);
        window.draw(vibor3);

        window.display();
    }
}

void Game3(RenderWindow& window)
{
    Texture gameBack1, gameBack2, gameBack3, gameBack4, gameBack5;
    gameBack1.loadFromFile("images/heart.png");
    gameBack2.loadFromFile("images/heart.png");
    gameBack3.loadFromFile("images/heart.png");
    gameBack4.loadFromFile("images/3choose.jpg");

    Sprite vibor1(gameBack1), vibor2(gameBack2), vibor3(gameBack3), background(gameBack4);
    bool isGame = 1;
    int gameNum = 0;
    bool flag = true;
    vibor1.setPosition(270, 465);
    vibor2.setPosition(270, 646);
    vibor3.setPosition(270, 815);
    background.setPosition(0, 0);

    while (isGame)
    {
        vibor1.setColor(Color::White);
        vibor2.setColor(Color::White);
        vibor3.setColor(Color::White);
        window.clear(Color(255, 255, 255));
        gameNum = 0;
        if (IntRect(270, 465, 713, 140).contains(Mouse::getPosition(window)) and flag) { vibor1.setColor(Color::Red); gameNum = 1; }
        if (IntRect(270, 646, 619, 140).contains(Mouse::getPosition(window)) and flag) { vibor2.setColor(Color::Red); gameNum = 2; }
        if (IntRect(270, 815, 619, 200).contains(Mouse::getPosition(window)) and flag) { vibor3.setColor(Color::Red); gameNum = 3; }


        if (Mouse::isButtonPressed(Mouse::Left))
        {
            if (gameNum == 1) { flag = false; procrastination += 1; }
            if (gameNum == 2) { flag = false; study += 1; }
            if (gameNum == 3) { flag = false; friends += 1; }

        }

        if (Keyboard::isKeyPressed(Keyboard::Enter) and !flag)
        {
            window.clear(sf::Color::White); window.display(); Game4(window); isGame = false;

        }
        window.draw(background);
        window.draw(vibor1);
        window.draw(vibor2);
        window.draw(vibor3);
        window.display();
    }
}


void Game2(RenderWindow& window)
{
    Texture gameBack1, gameBack2, gameBack3, gameBack4, gameBack5;
    gameBack1.loadFromFile("images/heart.png");
    gameBack2.loadFromFile("images/heart.png");
    gameBack3.loadFromFile("images/heart.png");
    gameBack4.loadFromFile("images/2choose.jpg");
    Sprite vibor1(gameBack1), vibor2(gameBack2), vibor3(gameBack3), background2(gameBack4);
    bool isGame = 1;
    int gameNum = 0;
    bool flag = true;
    vibor1.setPosition(302, 475);
    vibor2.setPosition(302, 676);
    vibor3.setPosition(302, 900);
    background2.setPosition(0, 0);

    while (isGame)
    {
        vibor1.setColor(Color::White);
        vibor2.setColor(Color::White);
        vibor3.setColor(Color::White);
        window.clear(Color(255, 255, 255));
        gameNum = 0;
        if (IntRect(302, 475, 613, 60).contains(Mouse::getPosition(window)) and flag) { vibor1.setColor(Color::Red); gameNum = 1; }
        if (IntRect(302, 676, 519, 140).contains(Mouse::getPosition(window)) and flag) { vibor2.setColor(Color::Red); gameNum = 2; }
        if (IntRect(302, 900, 519, 140).contains(Mouse::getPosition(window)) and flag) { vibor3.setColor(Color::Red); gameNum = 3; }

        if (Mouse::isButtonPressed(Mouse::Left))
        {
            if (gameNum == 1) { flag = false; study += 1; }
            if (gameNum == 2) { flag = false; procrastination += 1; }
            if (gameNum == 3) { flag = false; friends += 1; }

        }

        if (Keyboard::isKeyPressed(Keyboard::Enter) and !flag)
        {
            window.clear(sf::Color::White); window.display(); Game3(window); isGame = false;

        }

        window.draw(background2);
        window.draw(vibor1);
        window.draw(vibor2);
        window.draw(vibor3);
        window.display();
    }
}
void Game(RenderWindow& window)
{
    window.clear(sf::Color::Black);
    Texture gameBack1, gameBack2, gameBack3, gameBack4, gameBack5;
    gameBack1.loadFromFile("images/heart.png");
    gameBack2.loadFromFile("images/heart.png");
    gameBack3.loadFromFile("images/heart.png");
    gameBack4.loadFromFile("images/1choose.jpg");

    Sprite vibor1(gameBack1), vibor2(gameBack1), vibor3(gameBack1), background(gameBack4);
    bool isGame = 1;
    bool flag = true;
    int gameNum = 0;

    vibor1.setPosition(285, 490);
    vibor2.setPosition(285, 614);
    vibor3.setPosition(285, 827);
    background.setPosition(0, 0);

    while (isGame)
    {
        vibor1.setColor(Color::White);
        vibor2.setColor(Color::White);
        vibor3.setColor(Color::White);
        window.clear(Color(255, 255, 255));
        gameNum = 0;
        if (IntRect(285, 490, 613, 60).contains(Mouse::getPosition(window)) and flag) { vibor1.setColor(Color::Red); gameNum = 1; }
        if (IntRect(285, 614, 519, 140).contains(Mouse::getPosition(window)) and flag) { vibor2.setColor(Color::Red); gameNum = 2; }
        if (IntRect(285, 827, 519, 140).contains(Mouse::getPosition(window)) and flag) { vibor3.setColor(Color::Red); gameNum = 3; }

        if (Mouse::isButtonPressed(Mouse::Left))
        {
            if (gameNum == 1) { flag = false; procrastination += 1; }
            if (gameNum == 2) { flag = false; friends += 1; }
            if (gameNum == 3) { flag = false; study += 1; }

        }

        if (Keyboard::isKeyPressed(Keyboard::Enter) and !flag)
        {
            window.clear(sf::Color::White); window.display(); Game2(window); isGame = false;

        }
        window.draw(background);
        window.draw(vibor1);
        window.draw(vibor2);
        window.draw(vibor3);
        window.display();
    }
}


