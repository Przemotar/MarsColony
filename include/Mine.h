#ifndef MINE_H
#define MINE_H
#include "Building.h"

class Mine : public Building
{
    public:
        Mine();
        virtual ~Mine();
        virtual int Activate();
    protected:
    private:
        int cooldown;
        int goldPerSecond;
};

#endif // MINE_H
