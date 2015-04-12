#ifndef BUILDING_H
#define BUILDING_H
#include "MapObject.h"

class Building : public MapObject
{
    public:
        Building();
        Building(sf::Texture& texture);
        virtual ~Building();
        int LevelUp();
        virtual int Activate() = 0;
        int UpdateLevelCost();

    protected:
    private:
        int level;
        int nextLevelCost;
};

#endif // BUILDING_H
