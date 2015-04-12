#include <iostream>
#include <SFML/Graphics.hpp>
#include "Enemy.h"
#include "EnemyManager.h"
#include "GameManager.h"
#include "MapManager.h"
#include "BuildingManager.h"

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 600), "SFML works!");
    EnemyManager enemyManager;
    GameManager gameManager;
    MapManager mapManager;

    enemyManager.Init();
    gameManager.Init();
    mapManager.Init();


    BuildingManager buildingManager(window);
    buildingManager.Init();

    int playerHp = 100;

    sf::Texture texture;

    texture.loadFromFile("MarsWarm.png");

    sf::Clock clock;
    sf::Time timer;

    bool moveRight;

    while (window.isOpen())
    {
        timer = clock.getElapsedTime();
        if (timer.asSeconds() >= 1)
        {
            clock.restart();
            gameManager.Gold += buildingManager.getIncome();
        }

        sf::Event event;
        while (window.pollEvent(event))
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        enemyManager.Update();
        gameManager.Update();
        buildingManager.Update();

        if (enemyManager.isEnemyAtBase())
        {
            gameManager.DealDamage(enemyManager.GetEnemyAtBase().DealDamageAmount());
            enemyManager.ClearEnemiesAtBase();
        }

        window.clear();

        mapManager.DrawMap(window);
        enemyManager.DrawEnemies(window);
        buildingManager.DrawBuildings(window);

        window.display();
    }

    return 0;
}
