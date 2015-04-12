#ifndef GAMEMANAGER_H
#define GAMEMANAGER_H
#include <SFML/Graphics.hpp>

class GameManager
{
    public:
        int HealthPoints;
        int Score;
        int Gold;
        GameManager();
        virtual ~GameManager();
        void DealDamage(int amount);
        void Init();
        void Update();
    protected:
    private:
        void GameOver();
        float regenerateTime;
        int regenerateAmount;
        sf::Clock clock;
        sf::Time timer;
};

#endif // GAMEMANAGER_H
