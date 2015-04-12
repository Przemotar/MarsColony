#include "BuildingManager.h"
#include <iostream>

BuildingManager::BuildingManager(){}

BuildingManager::BuildingManager(sf::RenderWindow& window)
{
    Building1Texture.loadFromFile("Mine.jpg");
    Mine Mine1(Building1Texture, 100, 25);
    mines.push_back(Mine1);
    Mine Mine2(Building1Texture, 100, 125);
    mines.push_back(Mine2);
    Mine Mine3(Building1Texture, 100, 225);
    mines.push_back(Mine3);
    Mine Mine4(Building1Texture, 100, 325);
    mines.push_back(Mine4);
    Mine Mine5(Building1Texture, 100, 425);
    mines.push_back(Mine5);
    Mine Mine6(Building1Texture, 100, 525);
    mines.push_back(Mine6);

    Building2Texture.loadFromFile("Tower.jpg");
    Tower Tower1(Building2Texture, 400, 25);
    towers.push_back(Tower1);
    Tower Tower2(Building2Texture, 400, 125);
    towers.push_back(Tower2);
    Tower Tower3(Building2Texture, 400, 225);
    towers.push_back(Tower3);
    Tower Tower4(Building2Texture, 400, 325);
    towers.push_back(Tower4);
    Tower Tower5(Building2Texture, 400, 425);
    towers.push_back(Tower5);
    Tower Tower6(Building2Texture, 400, 525);
    towers.push_back(Tower6);
}

BuildingManager::~BuildingManager()
{
    //dtor
}

void BuildingManager::Init()
{

}

void BuildingManager::Update()
{
    timer = clock.getElapsedTime();
    for (int i=0; i<mines.size(); i++)
    {
        if (timer.asSeconds() - mines[i].getActivationTime().asSeconds() >= mines[i].getCooldown() && mines[i].isActivated())           //if mine is active for more than cooldown && is active
            mines[i].Deactivate();
    }
}

void BuildingManager::DrawBuildings(sf::RenderWindow& window)
{
    for (int i=0; i<mines.size(); i++)
    {
        mines[i].DrawObject(window);
    }

    for (int i=0; i<towers.size(); i++)
    {
        towers[i].DrawObject(window);
    }
}

int BuildingManager::getIncome()
{
    int income = 0;
    for (int i=0; i<mines.size(); i++)
    {
       income += mines[i].getGold();
    }

    std::cout << "You earned " << income << " gold!\n";

    return income;
}
