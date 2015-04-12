#ifndef MAPOBJECT_H
#define MAPOBJECT_H
#include <SFML/Graphics.hpp>

class MapObject
{
    public:
        MapObject();
        virtual ~MapObject();
        sf::Sprite GetSprite();
        void DrawObject(sf::RenderWindow& windowToDraw);
        void SetObjectPosition(float x, float y);
        float positionX;
        float positionY;
    protected:
        sf::Sprite sprite;
        sf::Texture texture;
        void SetSprite(sf::Texture& newTexture);
    private:
};

#endif // MAPOBJECT_H
