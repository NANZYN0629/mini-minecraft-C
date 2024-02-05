#include "Zombie.h"


Zombie::Zombie(const std::string& name, float hp, float damage)
    : Creature(name, hp, damage) {}

void Zombie::OnAttack(float attackPoint) 
{
   GetDamage(attackPoint);
}

void Zombie::Attack(IOnAttack& other) 
{
    other.OnAttack(15);
    
}