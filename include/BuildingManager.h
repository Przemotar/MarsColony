#ifndef BUILDINGMANAGER_H
#define BUILDINGMANAGER_H
#include "Building.h"
#include "Mine.h"
#include "Tower.h"
#include <vector>

class BuildingManager
{
    public:
        BuildingManager();
        BuildingManager(sf::RenderWindow& window);
        virtual ~BuildingManager();
        void Update();
        void Init();
        sf::Texture Building1Texture;
        sf::Texture Building2Texture;
        void DrawBuildings(sf::RenderWindow& window);

        int getIncome();
    protected:
    private:
        void Spawn();
        sf::Time timer;
        sf::Clock clock;
        std::vector <Mine> mines;
        std::vector <Tower> towers;
};

#endif // BUILDINGMANAGER_H
