#ifndef TOWER_H
#define TOWER_H
#include "Building.h"

class Tower : public Building
{
    public:
        Tower();
        virtual ~Tower();
        virtual int Activate();
    protected:
    private:
        int damage;
        int attackSpeed;
};

#endif // TOWER_H
