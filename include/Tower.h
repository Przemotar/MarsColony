#ifndef TOWER_H
#define TOWER_H
#include "Building.h"

class Tower : public Building
{
    public:
        Tower();
        Tower(sf::Texture & texture, float posX, float posY);
        virtual ~Tower();
        virtual int Activate();
    protected:
    private:
        int damage;
        int attackSpeed;
};

#endif // TOWER_H
