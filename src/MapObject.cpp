#include "MapObject.h"

MapObject::MapObject()
{
    //ctor
}

MapObject::~MapObject()
{
    //dtor
}

void MapObject::SetSprite(sf::Texture newTexture)
{
    //texture = newTexture;
    texture.loadFromFile("MarsWarm.jpg");
    sprite.setTexture(texture);
}

sf::Sprite MapObject::GetSprite()
{
    return sprite;
}
