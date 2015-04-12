#include "Building.h"

Building::Building()
{
    level = 1;
    nextLevelCost = 10;
}

Building::~Building()
{
    //dtor
}

int Building::LevelUp(int money)
{
    if (money >= nextLevelCost)
    {
        int newMoney = money - nextLevelCost;
        level++;
        UpdateLevelCost();
        return level;
    }

    return 0;
}

int Building::UpdateLevelCost()
{
    nextLevelCost++;
}
