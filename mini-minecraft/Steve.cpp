#include "Steve.h"

Steve::Steve(const std::string& name, float hp, float damage)
    : Creature(name, hp, damage) {}
 
void Steve::OnAttack(float attackPoint) 
{
    GetDamage(attackPoint);
}

void Steve::Attack(IOnAttack& other) 
{

    other.OnAttack(weapon->GetDamage());
}

void Steve::SetWeapon(Weapon* weapon)
{ 
    this->weapon = weapon; 
}

void Steve::ResetWeapon()
{
    this->weapon = nullptr; 
}

