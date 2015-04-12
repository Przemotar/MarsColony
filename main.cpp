#include <iostream>
#include <SFML/Graphics.hpp>
#include "Enemy.h"
#include "EnemyManager.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML works!");
    EnemyManager enemyManager;
    enemyManager.Init();

    int playerHp = 100;

    sf::Texture texture;
    texture.loadFromFile("MarsWarm.jpg");

    bool moveRight;

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        enemyManager.Update();

        if (enemyManager.isEnemyAtBase())
        {
            playerHp -= enemyManager.GetEnemyAtBase().DealDamageAmount();
            std::cout<<"Player HP is: "<<playerHp<<std::endl;
            enemyManager.ClearEnemiesAtBase();
        }

        window.clear();

        enemyManager.DrawEnemies(window);

        window.display();
    }

    return 0;
}
