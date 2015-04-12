#ifndef MAPMANAGER_H
#define MAPMANAGER_H
#include <vector>
#include <SFML/Graphics.hpp>

class MapManager
{
    public:
        MapManager();
        virtual ~MapManager();
        void Init();
        void DrawMap(sf::RenderWindow& window);
    protected:
    private:
        sf::Texture enemyMapTexture;
        std::vector <sf::Sprite> enemyMapSprites;
};

#endif // MAPMANAGER_H
