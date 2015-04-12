#include "Mine.h"

Mine::Mine()
{
    //ctor
}

Mine::Mine(sf::Texture& texture, float posX, float posY)
{
    positionX = posX;
    positionY = posY;
    SetSprite(texture);
    sprite.setPosition(positionX, positionY);
    cooldown = 5;
    goldPerSecond = 10;
}

Mine::~Mine()
{
    //dtor
}

int Mine::Activate()
{
    return 0;
}
