#ifndef MINE_H
#define MINE_H
#include "Building.h"

class Mine : public Building
{
    public:
        Mine();
        Mine(sf::Texture & texture, float posX, float posY);
        virtual ~Mine();
        virtual int Activate();
        void Deactivate();
        virtual int LevelUp(int money);

        const int getCooldown() const {return cooldown;};
        const sf::Time getActivationTime() const {return activationTimer;};
        const bool isActivated() const {return activated;};
        int getGold() {return goldPerSecond;};

    protected:
    private:
        int cooldown;
        int goldPerSecond;
        sf::Time activationTimer;
        sf::Clock clock;
        bool activated;
};

#endif // MINE_H
