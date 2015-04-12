#ifndef BUILDING_H
#define BUILDING_H
#include "MapObject.h"

class Building : public MapObject
{
    public:
        Building();
        Building(sf::Texture& texture);
        virtual ~Building();
        virtual int LevelUp(int money);
        virtual int Activate() = 0;
        int UpdateLevelCost();

    protected:
        int level;
        int nextLevelCost;
};

#endif // BUILDING_H
