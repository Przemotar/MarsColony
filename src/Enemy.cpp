#include "Enemy.h"
#include <iostream>

Enemy::Enemy()
{
    //ctor
}

Enemy::Enemy(sf::Texture texture)
{
    positionX = 200;//sf::Window::getSize().x / 2;
    positionY = 200;//sf::Window::getSize().x / 2;
    //SetSprite(texture);
    sprite.setTexture(texture);
    health = 100;
    movementSpeed = 1.0f;
    damage = 10;
    level = 1;
    sprite.setPosition(positionX, positionY);
    std::cout<<"Enemy created!"<<std::endl;
}

Enemy::~Enemy()
{
    //dtor
}

int Enemy::DealDamageAmount()
{
    return damage;
}

void Enemy::TakeDamage(int amount)
{
    health -= amount;
    if (health <= 0)
    {
        Die();
    }
}

void Enemy::Die()
{
    //TODO
}

void Enemy::Move()
{
    //TODO
}
