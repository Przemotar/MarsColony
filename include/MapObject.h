#ifndef MAPOBJECT_H
#define MAPOBJECT_H
#include <SFML/Graphics.hpp>

class MapObject
{
    public:
        MapObject();
        virtual ~MapObject();
        sf::Sprite GetSprite();
    protected:
        int positionX;
        int positionY;
        sf::Sprite sprite;
        sf::Texture texture;
        void SetSprite(sf::Texture newTexture);
    private:
};

#endif // MAPOBJECT_H
