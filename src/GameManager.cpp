#include "GameManager.h"
#include <iostream>

GameManager::GameManager()
{
    //ctor
}

GameManager::~GameManager()
{
    //dtor
}

void GameManager::DealDamage(int amount)
{
    HealthPoints -= amount;
    std::cout<<"Player took "<<amount<<" damage! Current hp is: "<<HealthPoints<<std::endl;
    if (HealthPoints <= 0)
    {
        GameOver();
    }
}

void GameManager::Init()
{
    HealthPoints = 100;
    Score = 0;
    Gold = 0;
    regenerateTime = 2.0f;
    regenerateAmount = 1;
}

void GameManager::Update()
{
    timer = clock.getElapsedTime();
    if (timer.asSeconds() >= regenerateTime)
    {
        HealthPoints += regenerateAmount;
        if (HealthPoints > 100)
            HealthPoints = 100;
        clock.restart();
        std::cout<<"Health Regenerated by: "<<regenerateAmount<<" point. Current hp is: "<<HealthPoints<<std::endl;
    }
}

void GameManager::GameOver()
{
    //TODO
}
