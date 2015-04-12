#include "BuildingManager.h"

BuildingManager::BuildingManager(){}

BuildingManager::BuildingManager(sf::RenderWindow& window)
{
    Building1Texture.loadFromFile("Mine.jpg");
    Mine Mine1(Building1Texture, 100, 10);
    mines.push_back(Mine1);
    Mine Mine2(Building1Texture, 100, 1*window.getSize().y/6.f);
    mines.push_back(Mine2);
    Mine Mine3(Building1Texture, 100, 2*window.getSize().y/6.2f);
    mines.push_back(Mine3);
    Mine Mine4(Building1Texture, 100, 3*window.getSize().y/6.f);
    mines.push_back(Mine4);
    Mine Mine5(Building1Texture, 100, 4*window.getSize().y/6.f);
    mines.push_back(Mine5);
    Mine Mine6(Building1Texture, 100, 5*window.getSize().y/6.2f);
    mines.push_back(Mine6);

    Building2Texture.loadFromFile("Tower.jpg");
    Tower Tower1(Building2Texture, 400, 10);
    towers.push_back(Tower1);
    Tower Tower2(Building2Texture, 400, 1*window.getSize().y/6.f);
    towers.push_back(Tower2);
    Tower Tower3(Building2Texture, 400, 2*window.getSize().y/6.2f);
    towers.push_back(Tower3);
    Tower Tower4(Building2Texture, 400, 3*window.getSize().y/6.f);
    towers.push_back(Tower4);
    Tower Tower5(Building2Texture, 400, 4*window.getSize().y/6.f);
    towers.push_back(Tower5);
    Tower Tower6(Building2Texture, 400, 5*window.getSize().y/6.2f);
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
