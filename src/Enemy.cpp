#include "Enemy.h"
#include <iostream>

Enemy::Enemy()
{
    //ctor
}

Enemy::Enemy(sf::Texture& texture)
{

    positionX = 800;//sf::Window::getSize().x / 2;
    positionY = rand()%400 + 100;//sf::Window::getSize().x / 2;
    SetSprite(texture);
    health = 100;
    movementSpeed = 0.05f;
    damage = 10;
    level = 1;
    sprite.setPosition(positionX, positionY);
    reachedBase = false;
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

}

void Enemy::Move()
{
    SetObjectPosition(positionX-movementSpeed, positionY);
    if (positionX <= 300)
    {
        reachedBase = true;
    }
}
