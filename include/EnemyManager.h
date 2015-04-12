#ifndef ENEMYMANAGER_H
#define ENEMYMANAGER_H
#include <vector>
#include "Enemy.h"


class EnemyManager
{
    public:
        std::vector <int> enemyPaths;
        EnemyManager();
        virtual ~EnemyManager();
        void Update();
        void Init();
        float spawnRate;
        sf::Texture Enemy1Texture;
        void DrawEnemies(sf::RenderWindow& window);
        Enemy& GetEnemyAtBase();
        bool isEnemyAtBase();
        void ClearEnemiesAtBase();
    protected:
    private:
        void Spawn();
        sf::Time timer;
        sf::Clock clock;
        std::vector < Enemy > enemies;
};

#endif // ENEMYMANAGER_H
