#include "Creature.h"

Creature::Creature(const std::string& name, float hp, float damage) 
{
    this->name = name;
    this->hp = hp;
    this->damage = damage;
}

std::string Creature::GetName() 
{
    return name;
}

float Creature::GetHp() 
{
    return hp;
}

void Creature::GetDamage(float num)
{
    hp -= num;
}