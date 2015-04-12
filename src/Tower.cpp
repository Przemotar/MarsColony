#include "Tower.h"

Tower::Tower()
{
    //ctor
}

Tower::Tower(sf::Texture & texture, float posX, float posY)
{
    positionX = posX;
    positionY = posY;
    SetSprite(texture);
    sprite.setPosition(positionX, positionY);
    damage = 5;
    attackSpeed = 10;
}

Tower::~Tower()
{
    //dtor
}

int Tower::Activate()
{

    return 0;
}
