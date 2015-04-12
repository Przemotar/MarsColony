#include "EnemyManager.h"

#include <iostream>

EnemyManager::EnemyManager()
{
    spawnRate = 1.0f;
    Enemy1Texture.loadFromFile("MarsWarm.png");
}

EnemyManager::~EnemyManager()
{
    //dtor
}

void EnemyManager::Init()
{
    enemyPaths.push_back(20);
    enemyPaths.push_back(120);
    enemyPaths.push_back(220);
    enemyPaths.push_back(320);
    enemyPaths.push_back(420);
    enemyPaths.push_back(520);
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
