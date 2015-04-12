#ifndef ENEMY_H
#define ENEMY_H
#include "MapObject.h"


class Enemy : public MapObject
{
    public:
        Enemy();
        Enemy(sf::Texture texture);
        virtual ~Enemy();
        int DealDamageAmount();
        void TakeDamage(int amount);
    protected:
    private:
        int damage;
        float movementSpeed;
        int health;
        int level;
        void Move();
        void Die();

};

#endif // ENEMY_H
