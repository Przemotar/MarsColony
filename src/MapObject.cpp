#include "MapObject.h"

MapObject::MapObject()
{
    //ctor
}

MapObject::~MapObject()
{
    //dtor
}

void MapObject::SetSprite(sf::Texture& newTexture)
{
    sprite.setTexture(newTexture);
}

sf::Sprite MapObject::GetSprite()
{
    return sprite;
}

void MapObject::DrawObject(sf::RenderWindow& windowToDraw)
{
    windowToDraw.draw(sprite);
}

void MapObject::SetObjectPosition(float x, float y)
{
    positionX = x;
    positionY = y;
    sprite.setPosition(x,y);
}
