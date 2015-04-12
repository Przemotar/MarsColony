#include "EnemyManager.h"

#include <iostream>

EnemyManager::EnemyManager()
{
    spawnRate = 0.5f;
    Enemy1Texture.loadFromFile("MarsWarm.jpg");
}

EnemyManager::~EnemyManager()
{
    //dtor
}

void EnemyManager::Init()
{

}

void EnemyManager::Update()
{
    timer = clock.getElapsedTime();
    if (timer.asSeconds() >= spawnRate)
    {
        clock.restart();
        Spawn();
    }
    for (int i=0; i<enemies.size(); i++)
    {
        enemies[i].Move();
    }
}

void EnemyManager::Spawn()
{
    Enemy newEnemy(Enemy1Texture);
    enemies.push_back(newEnemy);
}

void EnemyManager::DrawEnemies(sf::RenderWindow& window)
{
    for (int i=0; i<enemies.size(); i++)
    {
        enemies[i].DrawObject(window);
    }
}
