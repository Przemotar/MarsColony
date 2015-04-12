#include "Building.h"

Building::Building()
{
    //ctor
}

Building::~Building()
{
    //dtor
}

int Building::LevelUp()
{
    int money = 10;//getMoney();
    if (money >= nextLevelCost)
    {
        level++;
        //setMoney(money - nextLevelCost);
        UpdateLevelCost();
        return level;
    }
    else
    {
        return 0;
    }
}

int Building::UpdateLevelCost()
{
    nextLevelCost++;
}
