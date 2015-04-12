#include "Mine.h"
#include <iostream>

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
    activated = false;
    activationTimer = clock.getElapsedTime();                   //at the begginning players wont be able to activate towers; to be fixed
}

Mine::~Mine()
{
    //dtor
}

int Mine::Activate()
{
    goldPerSecond *= 2;
    activationTimer = clock.getElapsedTime();
    activated = true;
    std::cout << "Mine activated!\n";
}

void Mine::Deactivate()
{
    goldPerSecond /= 2;
    activated = false;
    std::cout << "Mine deactivated!\n";
}

int Mine::LevelUp(int money)
{
    goldPerSecond += 20;
    return level;
}
