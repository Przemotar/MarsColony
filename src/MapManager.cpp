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
    enemyMapTexture.loadFromFile("EnemyTile.png");
    defenseMapTexture.loadFromFile("DefenseTile.png");
    economyMapTexture.loadFromFile("EconomyTile.png");

    for (int i=0; i<4; i++)
    {
        for (int j=0; j<6; j++)
        {
            sf::Sprite newSprite;
            newSprite.setTexture(enemyMapTexture);
            newSprite.setPosition(700 - (i * 100), (j * 100));
            enemyMapSprites.push_back(newSprite);
        }
    }

    for (int i=4; i<6; i++)
    {
        for (int j=0; j<6; j++)
        {
            sf::Sprite newSprite;
            newSprite.setTexture(defenseMapTexture);
            newSprite.setPosition(700 - (i * 100), (j * 100));
            enemyMapSprites.push_back(newSprite);
        }
    }

    for (int i=6; i<8; i++)
    {
        for (int j=0; j<6; j++)
        {
            sf::Sprite newSprite;
            newSprite.setTexture(economyMapTexture);
            newSprite.setPosition(700 - (i * 100), (j * 100));
            enemyMapSprites.push_back(newSprite);
        }
    }

}

void MapManager::DrawMap(sf::RenderWindow& window)
{
    for (int i=0; i<enemyMapSprites.size(); i++)
    {
        window.draw(enemyMapSprites[i]);
    }
}


