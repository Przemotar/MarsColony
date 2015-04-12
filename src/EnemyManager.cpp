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
    enemyPaths.push_back(50);
    enemyPaths.push_back(100);
    enemyPaths.push_back(150);
    enemyPaths.push_back(200);
    enemyPaths.push_back(250);
    enemyPaths.push_back(300);
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
    int targetLocation = rand()%6;
    Enemy newEnemy(Enemy1Texture);
    newEnemy.SetObjectPosition(newEnemy.positionX, enemyPaths[targetLocation]);
    enemies.push_back(newEnemy);
}

void EnemyManager::DrawEnemies(sf::RenderWindow& window)
{
    for (int i=0; i<enemies.size(); i++)
    {
        enemies[i].DrawObject(window);
    }
}

bool EnemyManager::isEnemyAtBase()
{
    for (int i=0; i<enemies.size(); i++)
    {
        if (enemies[i].reachedBase)
        {
            return true;
        }
    }
    return false;
}

void EnemyManager::ClearEnemiesAtBase()
{
    int elementToDelete;
    for (int i=0; i<enemies.size(); i++)
    {
        if (enemies[i].reachedBase)
        {
            elementToDelete = i;
        }
    }
    enemies.erase(enemies.begin()+elementToDelete);
}

Enemy& EnemyManager::GetEnemyAtBase()
{
    for (int i=0; i<enemies.size(); i++)
    {
        if (enemies[i].reachedBase)
        {
            return enemies[i];
        }
    }
}
