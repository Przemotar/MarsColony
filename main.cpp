#include <iostream>
#include <SFML/Graphics.hpp>
#include "Enemy.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML works!");
    sf::CircleShape shape(100.f);
    shape.setFillColor(sf::Color::Green);
    sf::Texture texture;
    texture.loadFromFile("MarsWarm.jpg");
    sf::Sprite spriteTest;
    spriteTest.setTexture(texture);
    Enemy enemy(texture);
    bool moveRight;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Left))
        {
            shape.setFillColor(sf::Color::Red);
        }
        if (sf::Keyboard::isKeyPressed(sf::Keyboard::Right))
        {
            shape.setFillColor(sf::Color::Blue);
        }

        if (spriteTest.getPosition().x < 400 && !moveRight)
            moveRight = true;
        if (spriteTest.getPosition().x > 800 && moveRight)
            moveRight = false;


        if (moveRight)
            spriteTest.setPosition(spriteTest.getPosition().x+0.1f, spriteTest.getPosition().y);
        else
            spriteTest.setPosition(spriteTest.getPosition().x-0.1f, spriteTest.getPosition().y);

        window.clear();
        window.draw(enemy.GetSprite());
        window.draw(spriteTest);
        window.display();
    }

    return 0;
}
