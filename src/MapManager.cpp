#include "MapManager.h"

MapManager::MapManager()
{
    //ctor
}

MapManager::~MapManager()
{
    //dtor
}

void MapManager::Init()
{
    enemyMapTexture.loadFromFile("tile.png", sf::IntRect(0, 0, 100, 100));

    for (int i=0; i<18; i++)
    {
        sf::Sprite newSprite;
        newSprite.setTexture(enemyMapTexture);
        newSprite.setPosition(800 - ((i%3) * 100), ((i%6) * 100));
        enemyMapSprites.push_back(newSprite);
    }

}

void MapManager::DrawMap(sf::RenderWindow& window)
{
    for (int i=0; i<enemyMapSprites.size(); i++)
    {
        window.draw(enemyMapSprites[i]);
    }
}


